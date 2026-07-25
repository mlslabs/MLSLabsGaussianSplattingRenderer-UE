// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NoPhysicsPrimitiveComponent.h"
#include "GaussianSplattingComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MLSLABSRENDERER_API UGaussianSplattingComponent : public UNoPhysicsPrimitiveComponent
{
    GENERATED_BODY()

public:
    UGaussianSplattingComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MLSLabsRenderer")
    FString SplatDataPath = TEXT("");

    virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
    virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
    virtual void SendRenderTransform_Concurrent() override;

    virtual void OnRegister() override;
    virtual void BeginDestroy() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    void OnPIEStarted(bool bIsSimulating);
    void OnPIEStopped(bool bIsSimulating);
#endif

    void UpdateSplatTransform();
    virtual void QueueLoadSplatData();
    void SetPIERunningMode(bool bInIsPIE);

    /** Recompute bounds from native splat AABB after SplatNodeHashCode is set. */
    void RefreshBoundsFromLoadedSplat();

    uint64 SplatNodeHashCode = 0;

protected:
    void OnRendererReadyForLoad();
    void ApplyLoadedSplatNode_GameThread(uint64 NewHashCode);

    FDelegateHandle RendererInitHandle;
    FDelegateHandle PIEStartHandle;
    FDelegateHandle PIEEndHandle;

    bool bIsSplatDataRequested = false;
};
