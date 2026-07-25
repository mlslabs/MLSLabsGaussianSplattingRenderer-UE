// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "PrimitiveSceneProxy.h"
#include "GaussianSplatingRendererLibrary.h"


class UGaussianSplattingComponent;

class FGaussianSplattingSceneProxy : public FPrimitiveSceneProxy
{
public:
    FGaussianSplattingSceneProxy(const UPrimitiveComponent* Component);
    virtual ~FGaussianSplattingSceneProxy() override;

    virtual SIZE_T GetTypeHash() const override;

    virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override;

    virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, class FMeshElementCollector& Collector) const override;

    virtual uint32 GetMemoryFootprint() const override;

    void SetSplatNodeHashCode(uint64 InSplatNodeHashCode);

    void SetPIERunningMode(bool bInIsPIE);

private:
    void UpdateSplatTransform() const;
private:
    uint64 SplatNodeHashCode = 0;
    const UGaussianSplattingComponent* SplatComp = NULL;
    bool bPIE = false;
};
