// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "MaterialShared.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/SoftObjectPtr.h"
#include "SceneViewExtension.h"
#include "MLSLabsRenderer.h"
#include "MLSLabsRendererSubsystem.generated.h"

class SNotificationItem;
class URendererSettings;

/** Scene view extension that runs MLSLabs Gaussian composite after the view family renders. */
class FMLSLabsViewExtension : public FSceneViewExtensionBase
{
public:
    FMLSLabsViewExtension(const FAutoRegister& AutoRegister);
    virtual ~FMLSLabsViewExtension() = default;

    virtual bool IsActiveThisFrame_Internal(const FSceneViewExtensionContext& Context) const override;
    virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override {}
    virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override {}
    virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override {}
    virtual void SubscribeToPostProcessingPass(EPostProcessingPass PassId, const FSceneView& InView, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled);

    virtual void PreRenderViewFamily_RenderThread(FRDGBuilder& GraphBuilder, FSceneViewFamily& InViewFamily) override {}
    virtual void PostRenderViewFamily_RenderThread(FRDGBuilder& GraphBuilder, FSceneViewFamily& InViewFamily) override;

    void SetMLSLabsRenderer(FMLSLabsRenderer* InRenderer);
private:
    void ExecuteGaussianSplatting_RenderThread(FRDGBuilder& GraphBuilder, FSceneView& InView, FRDGTextureRef* SceneColorRHI, FRDGTextureRef* SceneDepthRHI, bool bIsPreviewView);
    void GetSceneTexturesForView(FRDGBuilder& GraphBuilder, const FViewInfo& ViewInfo, FRDGTextureRef*& SceneColorRHI, FRDGTextureRef*& SceneDepthRHI);

private:
    class FMLSLabsRenderer* GMLSLabsRenderer = NULL;
};

/** Delegates for optional hooks around Gaussian splatting. */
class FMLSLabsRenderDelegates
{
public:
    DECLARE_MULTICAST_DELEGATE_OneParam(FOnPreGaussianSplatting, FRHICommandListImmediate&);
    static FOnPreGaussianSplatting OnPreGaussianSplatting;

    DECLARE_MULTICAST_DELEGATE_TwoParams(FOnPostGaussianSplatting, FRHICommandListImmediate&, const FViewInfo&);
    static FOnPostGaussianSplatting OnPostGaussianSplatting;

    DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnCUDABuffersUpdated, FRHIShaderResourceView*, FRHIShaderResourceView*, const FIntVector&);
    static FOnCUDABuffersUpdated OnCUDABuffersUpdated;
};

/** World subsystem owning the view extension and renderer instance. */
UCLASS(BlueprintType, Transient)
class UMLSLabsRendererSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UMLSLabsRendererSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

    FMLSLabsRenderer* GetRenderer();

    /** Optional override for free-camera detection; if unset, engine heuristics apply. */
    UFUNCTION(BlueprintCallable, Category = "MLSLabs Renderer")
    void SetForceFreeCameraMode(bool bFreeCamera);

    bool GetForceFreeCameraMode() const { return bForceFreeCameraMode; }

private:
    void InitializeRenderer();
    void CleanupRenderer();

    void OnPIEStarted(bool bIsSimulating);

    void OnPIEStopped(bool bIsSimulating);

    void OnBeginFrameForPIE();

private:
	TSharedPtr<FMLSLabsViewExtension, ESPMode::ThreadSafe> MLSLabsRendererViewExtension;

    TUniquePtr<class FMLSLabsRenderer> GMLSLabsRenderer;

    FDelegateHandle PIEStartHandle;
    FDelegateHandle PIEEndHandle;
    FDelegateHandle PIEBeginFrameHandle;

    bool bForceFreeCameraMode = false;
};
