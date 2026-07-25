// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "GaussianSplattingSceneProxy.h"
#include "Engine/Engine.h"
#include "Engine/EngineTypes.h"
#include "GaussianSplattingComponent.h"
#include "RHI.h" 
#include "RHICommandList.h"
#include "SceneManagement.h" 
#include "GaussianSplatingRendererCExport.h"

FGaussianSplattingSceneProxy::FGaussianSplattingSceneProxy(const UPrimitiveComponent* Component)
    : FPrimitiveSceneProxy(Component)
{
    SplatComp = Cast<UGaussianSplattingComponent>(Component);
    if (SplatComp)
    {
        SplatNodeHashCode = SplatComp->SplatNodeHashCode;
    }
}

FGaussianSplattingSceneProxy::~FGaussianSplattingSceneProxy()
{
    if (!SplatNodeHashCode)
        return;
    UGaussianSplatingRendererLibrary::SetSplatNodeVisible(SplatNodeHashCode, false);
}

SIZE_T FGaussianSplattingSceneProxy::GetTypeHash() const
{
    static SIZE_T UniquePointer;
    return reinterpret_cast<SIZE_T>(&UniquePointer);
}

FPrimitiveViewRelevance FGaussianSplattingSceneProxy::GetViewRelevance(const FSceneView* View) const
{
    FPrimitiveViewRelevance Relevance;
    Relevance.bDrawRelevance = IsShown(View);
    Relevance.bDynamicRelevance = true;
    Relevance.bRenderInMainPass = true;
    Relevance.bRenderCustomDepth = false;
    return Relevance;
}

UWorld* GetCurrentWorld()
{
    if (GEngine)
    {
        for (const FWorldContext& Context : GEngine->GetWorldContexts())
        {
            if (Context.WorldType == EWorldType::Game || Context.WorldType == EWorldType::PIE)
            {
                UWorld* RunningWorld = Context.World();
                if (RunningWorld)
                {
                    return RunningWorld;
                }
            }
        }
    }
    return NULL;
}

void FGaussianSplattingSceneProxy::GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, class FMeshElementCollector& Collector) const
{
    if (VisibilityMap != 0)
    {
        if (!SplatNodeHashCode)
            return;
        
        if (bPIE)
        {
                UGaussianSplatingRendererLibrary::SetSplatNodeVisible(SplatNodeHashCode, false);
        }
        else
        {
            UGaussianSplatingRendererLibrary::SetSplatNodeVisible(SplatNodeHashCode, true);
            UpdateSplatTransform();
        }
    }
}

uint32 FGaussianSplattingSceneProxy::GetMemoryFootprint() const
{
    return sizeof(*this) + FPrimitiveSceneProxy::GetAllocatedSize();
}

void FGaussianSplattingSceneProxy::SetSplatNodeHashCode(uint64 InSplatNodeHashCode)
{
    SplatNodeHashCode = InSplatNodeHashCode;
}

void FGaussianSplattingSceneProxy::UpdateSplatTransform() const
{
    if (!SplatNodeHashCode)
        return;

    FVector Location = SplatComp->GetComponentLocation();
    FRotator Rotation = SplatComp->GetComponentRotation();
    FVector Scale = SplatComp->GetComponentScale();

    UGaussianSplatingRendererLibrary::SetSplatNodeTransform(SplatNodeHashCode, Location, Rotation, Scale);
}

void FGaussianSplattingSceneProxy::SetPIERunningMode(bool bInIsPIE)
{
    bPIE = bInIsPIE;
}
