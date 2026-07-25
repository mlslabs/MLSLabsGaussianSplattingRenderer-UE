// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "MLSLabsRenderer.h"
#include "RenderGraphUtils.h"
#include "PipelineStateCache.h"
#include "ShaderParameterUtils.h"
#include "Engine/TextureRenderTarget2D.h"
#include "SceneView.h"
#include "SceneManagement.h"
#include "ClearQuad.h"
#include "ScreenRendering.h"
#include "RHICommandList.h"
#include "RHIResources.h"
#include "RHIDefinitions.h"
#include "PixelShaderUtils.h"
#include "PostProcess/PostProcessMaterialInputs.h"
#include "SceneTextures.h"

#include "SystemTextures.h"
#include "GaussianSplatingRendererLibrary.h"
#include "CoreMinimal.h"

extern FOnRendererInitialized OnRendererInitializedDelegate;

DEFINE_LOG_CATEGORY(MLSLabsRenderer);

IMPLEMENT_GLOBAL_SHADER(FMLSLabsCopyPS, "/Plugin/MLSLabsRenderer/Private/MLSLabs.usf", "MainPS", SF_Pixel);

FMLSLabsRenderer::FMLSLabsRenderer()
{
    SharedFence = nullptr;
}

FMLSLabsRenderer::~FMLSLabsRenderer()
{
    UE_LOG(MLSLabsRenderer, Log, TEXT("~FMLSLabsRenderer begin."));
    bInitialized.store(false);

    if (OnRendererInitializedDelegate.IsBound() && RendererInitHandle.IsValid())
    {
        OnRendererInitializedDelegate.Remove(RendererInitHandle);
    }

    FlushRenderingCommands();

    // Unregister native textures on render thread before releasing RHI.
    if (bInitialized || SharedFence.IsValid())
    {
        auto LocalFence = SharedFence;
        auto LocalTexRGBA = GSRTextureRGBA;
        auto LocalTexDepth = GSRTextureDepth;
        auto LocalTexRGBA_Preview = GSRTextureRGBA_Preview;
        auto LocalTexDepth_Preview = GSRTextureDepth_Preview;

        ENQUEUE_RENDER_COMMAND(MLSLabsRendererCleanup)(
            [LocalFence, LocalTexRGBA, LocalTexDepth, LocalTexRGBA_Preview, LocalTexDepth_Preview](FRHICommandListImmediate& RHICmdList)
            {
                RHICmdList.SubmitCommandsAndFlushGPU();

                auto UnReg = [](TRefCountPtr<FRHITexture> TexRGBA, TRefCountPtr<FRHITexture> TexDepth) {
                    if (TexRGBA.IsValid() && TexDepth.IsValid())
                    {
                        ID3D12Resource* d3d12RGBA = (ID3D12Resource*)TexRGBA->GetNativeResource();
                        ID3D12Resource* d3d12Depth = (ID3D12Resource*)TexDepth->GetNativeResource();
                        if (d3d12RGBA && d3d12Depth)
                            UGaussianSplatingRendererLibrary::UnRegisterTextures(d3d12RGBA, d3d12Depth);
                    }
                    };
                UnReg(LocalTexRGBA, LocalTexDepth);
                UnReg(LocalTexRGBA_Preview, LocalTexDepth_Preview);

                if (LocalFence.IsValid())
                    UGaussianSplatingRendererLibrary::UnRegisterSyncResource(LocalFence.GetReference());

                RHICmdList.SubmitCommandsAndFlushGPU();
            });

        FlushRenderingCommands();
    }

    SharedFence = nullptr;
    GSRSRV_RGBA.SafeRelease();
    GSRSRV_Depth.SafeRelease();
    GSRTextureRGBA.SafeRelease();
    GSRTextureDepth.SafeRelease();
    GSRSRV_RGBA_Preview.SafeRelease();
    GSRSRV_Depth_Preview.SafeRelease();
    GSRTextureRGBA_Preview.SafeRelease();
    GSRTextureDepth_Preview.SafeRelease();

    UE_LOG(MLSLabsRenderer, Log, TEXT("FMLSLabsRenderer safely destructed."));
}

void FMLSLabsRenderer::Initialize()
{
    check(IsInRenderingThread());

    if (UGaussianSplatingRendererLibrary::IsInitialized())
    {
        if (CreateSharedSyncResources())
        {
            UE_LOG(MLSLabsRenderer, Log, TEXT("MLSLabsRenderer initialized with Shared Fence."));
        }
    }
    else
    {
        RendererInitHandle = OnRendererInitializedDelegate.AddRaw(this, &FMLSLabsRenderer::OnRendererReadyForInit);
    }

    bInitialized.store(true);
    UE_LOG(MLSLabsRenderer, Log, TEXT("MLSLabsRenderer initialized."));
}

void FMLSLabsRenderer::Release()
{
    if (!bInitialized.load())
        return;

    bInitialized.store(false);

    if (OnRendererInitializedDelegate.IsBound() && RendererInitHandle.IsValid())
    {
        OnRendererInitializedDelegate.Remove(RendererInitHandle);
    }

    if (GSRTextureRGBA.IsValid() && GSRTextureDepth.IsValid())
    {
        ID3D12Resource* d3d12RGBA = (ID3D12Resource*)GSRTextureRGBA->GetNativeResource();
        ID3D12Resource* d3d12Depth = (ID3D12Resource*)GSRTextureDepth->GetNativeResource();
        if (d3d12RGBA && d3d12Depth)
        {
            UGaussianSplatingRendererLibrary::UnRegisterTextures(d3d12RGBA, d3d12Depth);
        }
    }

    if (SharedFence.IsValid())
    {
        UGaussianSplatingRendererLibrary::UnRegisterSyncResource(SharedFence.GetReference());
    }

    SharedFence = nullptr;
    GSRSRV_RGBA.SafeRelease();
    GSRSRV_Depth.SafeRelease();
    GSRTextureRGBA.SafeRelease();
    GSRTextureDepth.SafeRelease();
    UE_LOG(MLSLabsRenderer, Log, TEXT("FMLSLabsRenderer safely Release."));
}

void FMLSLabsRenderer::OnRendererReadyForInit()
{
    OnRendererInitializedDelegate.Remove(RendererInitHandle);
    RendererInitHandle.Reset();

    ENQUEUE_RENDER_COMMAND(MLSLabsRendererCleanup)(
        [this](FRHICommandListImmediate& RHICmdList)
        {
            if (CreateSharedSyncResources())
            {
                UE_LOG(MLSLabsRenderer, Log, TEXT("MLSLabsRenderer initialized with Shared Fence."));
            }
        });
}

float ComputeFov(float projMatElement)
{
    float fov_rad = FMath::Atan(1 / projMatElement) * 2.0f;
    return fov_rad;
}

void FMLSLabsRenderer::Render(FRDGBuilder& GraphBuilder, const FViewInfo& View, FRDGTextureRef* SceneColor, FRDGTextureRef* SceneDepth, bool bIsPreviewView)
{
    check(IsInRenderingThread());
    if (!bInitialized.load() || !SharedFence.IsValid() || !SceneColor || !*SceneColor || !SceneDepth || !*SceneDepth) return;

    ResizeGSRTexturesForView(bIsPreviewView, View.UnconstrainedViewRect.Width(), View.UnconstrainedViewRect.Height());

    TRefCountPtr<FRHITexture> UseTexRGBA = bIsPreviewView ? GSRTextureRGBA_Preview : GSRTextureRGBA;
    TRefCountPtr<FRHITexture> UseTexDepth = bIsPreviewView ? GSRTextureDepth_Preview : GSRTextureDepth;
    if (!UseTexRGBA.IsValid() || !UseTexDepth.IsValid()) return;

    if (!UGaussianSplatingRendererLibrary::IsNeedRender())
    {
        if (bNeedDelayOneFrame)
            bNeedDelayOneFrame = false;
        else
            return;
    }
    else
    {
        if (!bNeedDelayOneFrame)
            bNeedDelayOneFrame = true;
    }

    FRHICommandListImmediate& RHICmdList = GraphBuilder.RHICmdList;
    ID3D12CommandQueue* D3D12Queue = static_cast<ID3D12CommandQueue*>(RHICmdList.GetNativeGraphicsQueue());
    ID3D12Fence* D3DFence = SharedFence.GetReference();
    if (!D3DFence)
        return;

    uint64 WaitValueForCuda = ++CurrentFenceValue;
    D3D12Queue->Signal(D3DFence, WaitValueForCuda);


    uint64 SignalValueFromCuda = ++CurrentFenceValue;

    float fovx = ComputeFov(View.ProjectionMatrixUnadjustedForRHI.M[0][0]);
    float fovy = ComputeFov(View.ProjectionMatrixUnadjustedForRHI.M[1][1]);
    if (!bInitialized.load()) {
        D3D12Queue->Signal(D3DFence, SignalValueFromCuda);
        return;
    }
    bool bCudaSuccess = RendGaussians(View.UnconstrainedViewRect.Width(), View.UnconstrainedViewRect.Height(), fovx, fovy, View.NearClippingDistance,
        View.ViewRotation, View.ViewLocation, WaitValueForCuda, SignalValueFromCuda, UseTexRGBA, UseTexDepth, SharedFence);
    if (!bCudaSuccess || !bInitialized.load())
    {
        D3D12Queue->Signal(D3DFence, SignalValueFromCuda);
    }

    if (bInitialized.load())
    {
        D3D12Queue->Wait(D3DFence, SignalValueFromCuda);
    }
    else
    {
        return;
    }

    FRDGTextureRef SceneColorOutput = *SceneColor;
    FRDGTextureRef SceneDepthTexture = *SceneDepth;

    // Prefer resolved depth (forward/MSAA) to match engine scene texture usage.
    {
        const FSceneTextures& SceneTextures = View.GetSceneTextures();
        if (SceneTextures.Depth.Resolve)
        {
            SceneDepthTexture = SceneTextures.Depth.Resolve;
        }
    }

    SCOPED_DRAW_EVENT(GraphBuilder.RHICmdList, MLSLabsRender);

    FRDGTextureDesc CopyDesc = SceneColorOutput->Desc;
    EnumRemoveFlags(CopyDesc.Flags, ETextureCreateFlags::Presentable | ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ResolveTargetable);
    EnumAddFlags(CopyDesc.Flags, ETextureCreateFlags::ShaderResource);
    FRDGTextureRef SceneColorInputCopy = GraphBuilder.CreateTexture(CopyDesc, TEXT("MLSLabsSceneColorInputCopy"));

    AddCopyTexturePass(GraphBuilder, SceneColorOutput, SceneColorInputCopy);

    FMLSLabsCopyPS::FParameters* PassParameters = GraphBuilder.AllocParameters<FMLSLabsCopyPS::FParameters>();

    FRDGTextureRef RDGGSRTexture_RGBA = GraphBuilder.RegisterExternalTexture(
        CreateRenderTarget(UseTexRGBA.GetReference(), TEXT("GSR_RGBA_Internal"))
    );
    FRDGTextureRef RDGGSRTexture_Depth = GraphBuilder.RegisterExternalTexture(
        CreateRenderTarget(UseTexDepth.GetReference(), TEXT("GSR_Depth_Internal"))
    );

    PassParameters->img_rgba = GraphBuilder.CreateSRV(FRDGTextureSRVDesc(RDGGSRTexture_RGBA));
    PassParameters->img_depth = GraphBuilder.CreateSRV(FRDGTextureSRVDesc(RDGGSRTexture_Depth));

    PassParameters->SceneColorTexture = GraphBuilder.CreateSRV(SceneColorInputCopy);

    // Depth as 2D array: sample the slice for the current stereo view when applicable.
    FRDGTextureSRVDesc SceneDepthSRVDesc = FRDGTextureSRVDesc::Create(SceneDepthTexture);
    if (SceneDepthTexture->Desc.Dimension == ETextureDimension::Texture2DArray)
    {
        const int32 MaxSlice = FMath::Max(SceneDepthTexture->Desc.ArraySize - 1, 0);
        const int32 SliceIndex = (View.StereoViewIndex != INDEX_NONE) ? FMath::Clamp(View.StereoViewIndex, 0, MaxSlice) : 0;
        SceneDepthSRVDesc = FRDGTextureSRVDesc::CreateForSlice(SceneDepthTexture, SliceIndex);
    }
    PassParameters->SceneDepthTexture = GraphBuilder.CreateSRV(SceneDepthSRVDesc);

    PassParameters->RenderTargets[0] = FRenderTargetBinding(SceneColorOutput, ERenderTargetLoadAction::ELoad);

    PassParameters->View = View.ViewUniformBuffer;
    PassParameters->ViewSize = FVector2f(View.UnconstrainedViewRect.Width(), View.UnconstrainedViewRect.Height());
    PassParameters->ViewRectMin = FVector2f(static_cast<float>(View.UnconstrainedViewRect.Min.X), static_cast<float>(View.UnconstrainedViewRect.Min.Y));
    const FIntPoint SceneDepthExtent(SceneDepthTexture->Desc.Extent.X, SceneDepthTexture->Desc.Extent.Y);
    PassParameters->SceneDepthBufferSize = FVector2f(SceneDepthExtent.X, SceneDepthExtent.Y);
    PassParameters->SceneDepthViewRectMin = FVector2f(static_cast<float>(View.ViewRect.Min.X), static_cast<float>(View.ViewRect.Min.Y));
    PassParameters->SceneDepthViewRectSize = FVector2f(static_cast<float>(View.ViewRect.Width()), static_cast<float>(View.ViewRect.Height()));
    PassParameters->DepthCompareBias = 1e-4f;

    TShaderMapRef<FMLSLabsCopyPS> PixelShader(View.ShaderMap);

    FPixelShaderUtils::AddFullscreenPass(
        GraphBuilder,
        View.ShaderMap,
        RDG_EVENT_NAME("MLSLabsCopyPass"),
        PixelShader,
        PassParameters,
        View.UnconstrainedViewRect
    );

}

void FMLSLabsRenderer::InitializeGSRTextures(int32 Width, int32 Height)
{
    check(IsInRenderingThread());

    FRHICommandListImmediate& RHICmdList = GetImmediateCommandList_ForRenderCommand();

    FRHITextureCreateDesc TextureDescRGBA = FRHITextureCreateDesc::Create2D(TEXT("MLSLabsTestRGBA"))
        .SetExtent(Width, Height)
        .SetFormat(PF_R8G8B8A8)
        .SetFlags(ETextureCreateFlags::ShaderResource | ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::Shared)
        .SetInitialState(ERHIAccess::SRVMask)
        .SetClearValue(FClearValueBinding::Black);

    EnumRemoveFlags(TextureDescRGBA.Flags, ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ResolveTargetable);

    GSRTextureRGBA = RHICreateTexture(TextureDescRGBA);

    FRHITextureCreateDesc TextureDescDepth = FRHITextureCreateDesc::Create2D(TEXT("MLSLabsTestDepth"))
        .SetExtent(Width, Height)
        .SetFormat(PF_R32_FLOAT)
        .SetFlags(ETextureCreateFlags::ShaderResource | ETextureCreateFlags::Shared)
        .SetInitialState(ERHIAccess::SRVMask)
        .SetClearValue(FClearValueBinding::None);

    EnumRemoveFlags(TextureDescRGBA.Flags, ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ResolveTargetable);
    GSRTextureDepth = RHICreateTexture(TextureDescDepth);

    if (!GSRTextureRGBA.IsValid() || !GSRTextureDepth.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("MLSLabs: Failed to create Shared Textures! GPU may be out of memory or driver incompatible."));
        return;
    }

    GSRSRV_RGBA = RHICmdList.CreateShaderResourceView(
        GSRTextureRGBA,
        FRHIViewDesc::CreateTextureSRV()
        .SetDimensionFromTexture(GSRTextureRGBA)
        .SetFormat(PF_R8G8B8A8)
        .SetMipRange(0, 1)
    );

    GSRSRV_Depth = RHICmdList.CreateShaderResourceView(
        GSRTextureDepth,
        FRHIViewDesc::CreateTextureSRV()
        .SetDimensionFromTexture(GSRTextureDepth)
        .SetFormat(GSRTextureDepth->GetFormat())
        .SetMipRange(0, 1)
    );

    if (!GSRSRV_RGBA.IsValid() || !GSRSRV_Depth.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("MLSLabs: SRV creation failed. This often triggers DXGI_ERROR_DEVICE_HUNG."));
    }

    UE_LOG(LogTemp, Log, TEXT("FMLSLabsRenderer: Textures Reinitialized (%dx%d)"), Width, Height);
}

void FMLSLabsRenderer::ResizeGSRTextures(int32 NewWidth, int32 NewHeight)
{
    ResizeGSRTexturesForView(false, NewWidth, NewHeight);
}

void FMLSLabsRenderer::ResizeGSRTexturesForView(bool bIsPreviewView, int32 NewWidth, int32 NewHeight)
{
    TRefCountPtr<FRHITexture>* pRGBA = bIsPreviewView ? &GSRTextureRGBA_Preview : &GSRTextureRGBA;
    TRefCountPtr<FRHITexture>* pDepth = bIsPreviewView ? &GSRTextureDepth_Preview : &GSRTextureDepth;
    TRefCountPtr<FRHIShaderResourceView>* pSRV_RGBA = bIsPreviewView ? &GSRSRV_RGBA_Preview : &GSRSRV_RGBA;
    TRefCountPtr<FRHIShaderResourceView>* pSRV_Depth = bIsPreviewView ? &GSRSRV_Depth_Preview : &GSRSRV_Depth;

    const bool bNeedAlloc = !pRGBA->IsValid() || !pDepth->IsValid();
    const int32 CurrentW = pRGBA->IsValid() ? (int32)(*pRGBA)->GetDesc().Extent.X : 0;
    const int32 CurrentH = pRGBA->IsValid() ? (int32)(*pRGBA)->GetDesc().Extent.Y : 0;
    const bool bNeedGrow = (NewWidth > CurrentW || NewHeight > CurrentH);

    if (!bNeedAlloc && !bNeedGrow)
        return;

    if (pRGBA->IsValid() && pDepth->IsValid())
    {
        FRHICommandListImmediate& RHICmdList = GetImmediateCommandList_ForRenderCommand();
        RHICmdList.SubmitCommandsAndFlushGPU();
        UnRegisterTextures(*pRGBA, *pDepth);
        pSRV_RGBA->SafeRelease();
        pSRV_Depth->SafeRelease();
        pRGBA->SafeRelease();
        pDepth->SafeRelease();
    }

    const int32 AllocW = bNeedAlloc ? NewWidth : FMath::Max(CurrentW, NewWidth);
    const int32 AllocH = bNeedAlloc ? NewHeight : FMath::Max(CurrentH, NewHeight);
    InitializeGSRTexturesForView(bIsPreviewView, AllocW, AllocH);
    RegisterTextures(*pRGBA, *pDepth, AllocW, AllocH);
}

void FMLSLabsRenderer::InitializeGSRTexturesForView(bool bIsPreviewView, int32 Width, int32 Height)
{
    check(IsInRenderingThread());
    FRHICommandListImmediate& RHICmdList = GetImmediateCommandList_ForRenderCommand();

    FRHITextureCreateDesc TextureDescRGBA = FRHITextureCreateDesc::Create2D(TEXT("MLSLabsGSR_RGBA"))
        .SetExtent(Width, Height)
        .SetFormat(PF_R8G8B8A8)
        .SetFlags(ETextureCreateFlags::ShaderResource | ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::Shared)
        .SetInitialState(ERHIAccess::SRVMask)
        .SetClearValue(FClearValueBinding::Black);
    EnumRemoveFlags(TextureDescRGBA.Flags, ETextureCreateFlags::DepthStencilTargetable | ETextureCreateFlags::ResolveTargetable);

    FRHITextureCreateDesc TextureDescDepth = FRHITextureCreateDesc::Create2D(TEXT("MLSLabsGSR_Depth"))
        .SetExtent(Width, Height)
        .SetFormat(PF_R32_FLOAT)
        .SetFlags(ETextureCreateFlags::ShaderResource | ETextureCreateFlags::Shared)
        .SetInitialState(ERHIAccess::SRVMask)
        .SetClearValue(FClearValueBinding::None);

    TRefCountPtr<FRHITexture> TexRGBA = RHICreateTexture(TextureDescRGBA);
    TRefCountPtr<FRHITexture> TexDepth = RHICreateTexture(TextureDescDepth);

    if (!TexRGBA.IsValid() || !TexDepth.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("MLSLabs: Failed to create Shared Textures for %s!"), bIsPreviewView ? TEXT("Preview") : TEXT("Main"));
        return;
    }

    TRefCountPtr<FRHIShaderResourceView> SRV_RGBA = RHICmdList.CreateShaderResourceView(TexRGBA, FRHIViewDesc::CreateTextureSRV().SetDimensionFromTexture(TexRGBA).SetFormat(PF_R8G8B8A8).SetMipRange(0, 1));
    TRefCountPtr<FRHIShaderResourceView> SRV_Depth = RHICmdList.CreateShaderResourceView(TexDepth, FRHIViewDesc::CreateTextureSRV().SetDimensionFromTexture(TexDepth).SetFormat(TexDepth->GetFormat()).SetMipRange(0, 1));

    if (bIsPreviewView)
    {
        GSRTextureRGBA_Preview = TexRGBA;
        GSRTextureDepth_Preview = TexDepth;
        GSRSRV_RGBA_Preview = SRV_RGBA;
        GSRSRV_Depth_Preview = SRV_Depth;
    }
    else
    {
        GSRTextureRGBA = TexRGBA;
        GSRTextureDepth = TexDepth;
        GSRSRV_RGBA = SRV_RGBA;
        GSRSRV_Depth = SRV_Depth;
    }
}

void FMLSLabsRenderer::SetEnable(bool bInEnable)
{
    bEnable.store(bInEnable);
}
bool FMLSLabsRenderer::IsEnable()
{
    return bEnable.load();
}

bool FMLSLabsRenderer::CreateSharedSyncResources()
{
    ID3D12Device* D3D12Device = static_cast<ID3D12Device*>(GDynamicRHI->RHIGetNativeDevice());
    if (!D3D12Device) return false;

    HRESULT hr = D3D12Device->CreateFence(
        CurrentFenceValue,
        D3D12_FENCE_FLAG_SHARED,
        IID_PPV_ARGS(SharedFence.GetInitReference())
    );

    if (FAILED(hr))
    {
        UE_LOG(MLSLabsRenderer, Error, TEXT("Failed to create Shared D3D12 Fence."));
        return false;
    }

    return UGaussianSplatingRendererLibrary::RegisterSyncResource(SharedFence.GetReference());
}

void FMLSLabsRenderer::RegisterTextures(TRefCountPtr<FRHITexture> TextureRGBA, TRefCountPtr<FRHITexture> TextureDepth, int32 Width, int32 Height)
{
    ID3D12Resource* d3d12GSRTextureRGBA = (ID3D12Resource*)TextureRGBA->GetNativeResource();
    ID3D12Resource* d3d12GSRTextureDepth = (ID3D12Resource*)TextureDepth->GetNativeResource();
    if (d3d12GSRTextureRGBA && d3d12GSRTextureDepth)
        UGaussianSplatingRendererLibrary::RegisterTextures(d3d12GSRTextureRGBA, d3d12GSRTextureDepth, Width, Height);
}

void FMLSLabsRenderer::UnRegisterTextures(TRefCountPtr<FRHITexture> TextureRGBA, TRefCountPtr<FRHITexture> TextureDepth)
{
    ID3D12Resource* d3d12GSRTextureRGBA = (ID3D12Resource*)TextureRGBA->GetNativeResource();
    ID3D12Resource* d3d12GSRTextureDepth = (ID3D12Resource*)TextureDepth->GetNativeResource();
    if (d3d12GSRTextureRGBA && d3d12GSRTextureDepth)
        UGaussianSplatingRendererLibrary::UnRegisterTextures(d3d12GSRTextureRGBA, d3d12GSRTextureDepth);
}

void InitGSRRenderSetting(GSRRenderSetting& OutRenderSetting, int32 ViewWidth, int32 ViewHeight, float CameraFovX, float CameraFovY, float NearPlane, const FRotator& CameraRotation, const FVector& CameraTranslation)
{
    OutRenderSetting.CameraFovX = CameraFovX;
    OutRenderSetting.CameraFovY = CameraFovY;
    OutRenderSetting.NearPlane = NearPlane / 100.0;
    OutRenderSetting.ViewPortHeight = ViewHeight;
    OutRenderSetting.ViewPortWidth = ViewWidth;
    OutRenderSetting.CameraRotation.x = FMath::DegreesToRadians(CameraRotation.Pitch);
    OutRenderSetting.CameraRotation.y = FMath::DegreesToRadians(CameraRotation.Yaw);
    OutRenderSetting.CameraRotation.z = FMath::DegreesToRadians(CameraRotation.Roll);
    OutRenderSetting.CameraTranslation.x = CameraTranslation.Y / 100.0;
    OutRenderSetting.CameraTranslation.y = -CameraTranslation.Z / 100.0;
    OutRenderSetting.CameraTranslation.z = CameraTranslation.X / 100.0;
}

bool FMLSLabsRenderer::RendGaussians(int32 ViewWidth, int32 ViewHeight, float CameraFovX, float CameraFovY, float NearPlane, const FRotator& CameraRotation,
    const FVector& CameraTranslation, uint64 WaitValueForCuda, uint64 SignalValueFromCuda, TRefCountPtr<FRHITexture> TextureRGBA,
    TRefCountPtr<FRHITexture> TextureDepth, TRefCountPtr<ID3D12Fence> Fence)
{
    GSRRenderSetting RenderSetting;
    InitGSRRenderSetting(RenderSetting, ViewWidth, ViewHeight, CameraFovX, CameraFovY, NearPlane, CameraRotation, CameraTranslation);
    ID3D12Resource* d3d12GSRTextureRGBA = (ID3D12Resource*)TextureRGBA->GetNativeResource();
    ID3D12Resource* d3d12GSRTextureDepth = (ID3D12Resource*)TextureDepth->GetNativeResource();
    return UGaussianSplatingRendererLibrary::Render(&RenderSetting, WaitValueForCuda, SignalValueFromCuda, d3d12GSRTextureRGBA, d3d12GSRTextureDepth, Fence.GetReference());
}