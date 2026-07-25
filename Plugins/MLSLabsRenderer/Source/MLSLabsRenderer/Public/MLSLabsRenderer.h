// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RenderGraph.h"
#include "RenderGraphDefinitions.h"
#include "GlobalShader.h"
#include "ShaderParameterStruct.h"
#include "RendererInterface.h"
#include "SceneRendering.h"
#include "ScreenRendering.h"
#include "CommonRenderResources.h"
#include "RenderGraphUtils.h"
#include "RenderTargetPool.h"
#include "SceneViewExtension.h"
#include "RenderGraphResources.h"
#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include <d3d12.h>
#include "Windows/HideWindowsPlatformTypes.h"
#endif

DECLARE_LOG_CATEGORY_EXTERN(MLSLabsRenderer, Log, All);

class FViewInfo;

/** Integrates native Gaussian splatting output into the scene via D3D12–CUDA sync and a copy pass. */
class FMLSLabsRenderer
{
public:
    FMLSLabsRenderer();
    virtual ~FMLSLabsRenderer();

    void Initialize();
    void Release();

    bool IsInitialized() const { return bInitialized; }

    void Render(FRDGBuilder& GraphBuilder, const FViewInfo& View, FRDGTextureRef* SceneColor, FRDGTextureRef* SceneDepth, bool bIsPreviewView = false);
    bool RendGaussians(int32 ViewWidth, int32 ViewHeight, float CameraFovX, float CameraFovY, float NearPlane, const FRotator& CameraRotation,
        const FVector& CameraTranslation, uint64 WaitValueForCuda, uint64 SignalValueFromCuda, TRefCountPtr<FRHITexture> TextureRGBA,
        TRefCountPtr<FRHITexture> TextureDepth, TRefCountPtr<ID3D12Fence> Fence);
    void SetEnable(bool bInEnable);
    bool IsEnable();
private:
    void RegisterTextures(TRefCountPtr<FRHITexture> TextureRGBA, TRefCountPtr<FRHITexture> TextureDepth, int32 Width, int32 Height);
    void UnRegisterTextures(TRefCountPtr<FRHITexture> TextureRGBA, TRefCountPtr<FRHITexture> TextureDepth);
    void InitializeGSRTextures(int32 Width, int32 Height);
    void InitializeGSRTexturesForView(bool bIsPreviewView, int32 Width, int32 Height);
    void ResizeGSRTextures(int32 NewWidth, int32 NewHeight);
    void ResizeGSRTexturesForView(bool bIsPreviewView, int32 NewWidth, int32 NewHeight);
    bool CreateSharedSyncResources();
    void OnRendererReadyForInit();
private:
    std::atomic<bool> bInitialized = false;
    std::atomic<bool> bEnable = true;
    FDelegateHandle RendererInitHandle;
    TRefCountPtr<ID3D12Fence> SharedFence;

    uint64 CurrentFenceValue = 0;

    TRefCountPtr<FRHITexture> GSRTextureRGBA;
    TRefCountPtr<FRHITexture> GSRTextureDepth;
    TRefCountPtr<FRHIShaderResourceView> GSRSRV_RGBA;
    TRefCountPtr<FRHIShaderResourceView> GSRSRV_Depth;
    TRefCountPtr<FRHITexture> GSRTextureRGBA_Preview;
    TRefCountPtr<FRHITexture> GSRTextureDepth_Preview;
    TRefCountPtr<FRHIShaderResourceView> GSRSRV_RGBA_Preview;
    TRefCountPtr<FRHIShaderResourceView> GSRSRV_Depth_Preview;
    /** After all splats are removed, composite one extra frame to clear residual image. */
    bool bNeedDelayOneFrame = false;
};

/** Parameters for the fullscreen copy/composite pixel shader. */
BEGIN_SHADER_PARAMETER_STRUCT(FMLSLabsCopyPassParameters, )
    SHADER_PARAMETER_STRUCT_REF(FViewUniformShaderParameters, View)

    SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, img_rgba)
    SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, img_depth)

    SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, SceneColorTexture)
    SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, SceneDepthTexture)

    SHADER_PARAMETER(FVector2f, ViewSize)
    /** Origin of UnconstrainedViewRect in scene RT; used with ViewSize to map SV position to GSR UV. */
    SHADER_PARAMETER(FVector2f, ViewRectMin)
    SHADER_PARAMETER(FVector2f, SceneDepthBufferSize)
    /** Sub-rect of scene depth for the current view (depth buffer may be smaller than scene color). */
    SHADER_PARAMETER(FVector2f, SceneDepthViewRectMin)
    SHADER_PARAMETER(FVector2f, SceneDepthViewRectSize)
    SHADER_PARAMETER(float, DepthCompareBias)

    RENDER_TARGET_BINDING_SLOTS()
END_SHADER_PARAMETER_STRUCT()

class FMLSLabsCopyPS : public FGlobalShader
{
public:
    DECLARE_GLOBAL_SHADER(FMLSLabsCopyPS);
    SHADER_USE_PARAMETER_STRUCT(FMLSLabsCopyPS, FGlobalShader);

    using FParameters = FMLSLabsCopyPassParameters;

    static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
    {
        return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
    }

    static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
    {
        FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);
        OutEnvironment.SetDefine(TEXT("MAINPS"), 1);
        OutEnvironment.CompilerFlags.Add(CFLAG_StandardOptimization);
    }
};

extern FMLSLabsRenderer GMLSLabsRenderer;
