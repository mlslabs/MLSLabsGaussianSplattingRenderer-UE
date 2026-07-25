// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "GaussianSplattingComponent.h"
#include "GaussianSplattingSceneProxy.h" 
#include "GaussianSplatingRendererLibrary.h"
#include "Async/Async.h"
#include "Engine/World.h"
#include "RenderingThread.h"
#include "TimerManager.h"

#if WITH_EDITOR
#include "Editor.h"
#endif

extern FOnRendererInitialized OnRendererInitializedDelegate;

UGaussianSplattingComponent::UGaussianSplattingComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetMobility(EComponentMobility::Movable);
}

void UGaussianSplattingComponent::OnRegister()
{
    if (!bIsComponentValid)
    {
        Super::OnRegister();
        return;
    }

    if (HasAnyFlags(RF_BeginDestroyed))
    {
        Super::OnRegister();
        return;
    }

    Super::OnRegister();

    if (HasAnyFlags(RF_ClassDefaultObject))
        return;

    if (bIsSplatDataRequested)
        return;

#if WITH_EDITOR
    if (GIsEditor && GetWorld() && GetWorld()->WorldType == EWorldType::Editor)
    {
        if (!PIEStartHandle.IsValid())
        {
            PIEStartHandle = FEditorDelegates::PreBeginPIE.AddUObject(this, &UGaussianSplattingComponent::OnPIEStarted);
            PIEEndHandle = FEditorDelegates::EndPIE.AddUObject(this, &UGaussianSplattingComponent::OnPIEStopped);
        }
    }
#endif

    if (UGaussianSplatingRendererLibrary::IsInitialized())
    {
        bIsSplatDataRequested = true;
        QueueLoadSplatData();
    }
    else if (!RendererInitHandle.IsValid())
    {
        RendererInitHandle = OnRendererInitializedDelegate.AddUObject(this, &UGaussianSplattingComponent::OnRendererReadyForLoad);
    }
}

void UGaussianSplattingComponent::QueueLoadSplatData()
{
    if (!bIsComponentValid || SplatDataPath.IsEmpty() || !GetOwner())
        return;

    if (HasAnyFlags(RF_BeginDestroyed))
        return;

    FString PathCopy = SplatDataPath;
    FString NameCopy = FString::Printf(TEXT("%s_0x%p"), *GetOwner()->GetName(), this);
    FVector Loc = GetComponentLocation();
    FRotator Rot = GetComponentRotation();
    FVector Scale = GetComponentScale();
    bool bInitialVisible = true;

    if (UWorld* World = GetWorld())
    {
        bInitialVisible = (World->WorldType == EWorldType::PIE) ||
            (World->WorldType == EWorldType::Editor && !GetOwner()->IsHidden());
    }

    uint64 OldCode = SplatNodeHashCode;
    TWeakObjectPtr<UGaussianSplattingComponent> WeakThis(this);

    if (!bIsComponentValid)
        return;

    ENQUEUE_RENDER_COMMAND(LoadGaussianSplatFileCommand)(
        [WeakThis, NameCopy, PathCopy, Loc, Rot, Scale, bInitialVisible, OldCode](FRHICommandListImmediate& RHICmdList)
        {
            UGaussianSplattingComponent* StrongThis = WeakThis.Get();
            if (!StrongThis || !StrongThis->bIsComponentValid)
                return;

            if (OldCode != 0)
            {
                UGaussianSplatingRendererLibrary::RemoveSplatNode(OldCode);
            }

            uint64 NewHashCode = UGaussianSplatingRendererLibrary::LoadSplatFile(NameCopy, PathCopy);
            if (NewHashCode != 0)
            {
                UGaussianSplatingRendererLibrary::SetSplatNodeTransform(NewHashCode, Loc, Rot, Scale);
                UGaussianSplatingRendererLibrary::SetSplatNodeVisible(NewHashCode, bInitialVisible);

                AsyncTask(ENamedThreads::GameThread, [WeakThis, NewHashCode]()
                    {
                        UGaussianSplattingComponent* FinalThis = WeakThis.Get();
                        if (!FinalThis || !FinalThis->bIsComponentValid || !FinalThis->GetWorld())
                        {
                            UGaussianSplatingRendererLibrary::RemoveSplatNode(NewHashCode);
                            return;
                        }

                        FinalThis->ApplyLoadedSplatNode_GameThread(NewHashCode);
                    });
            }
        });
}

void UGaussianSplattingComponent::UpdateSplatTransform()
{
    if (!bIsComponentValid || SplatNodeHashCode == 0 || !IsRegistered())
        return;

    UGaussianSplatingRendererLibrary::SetSplatNodeTransform(
        SplatNodeHashCode, GetComponentLocation(), GetComponentRotation(), GetComponentScale());
}

void UGaussianSplattingComponent::BeginDestroy()
{
    bIsComponentValid = false;

    if (RendererInitHandle.IsValid())
    {
        OnRendererInitializedDelegate.Remove(RendererInitHandle);
        RendererInitHandle.Reset();
    }

#if WITH_EDITOR
    if (PIEStartHandle.IsValid())
        FEditorDelegates::PreBeginPIE.Remove(PIEStartHandle);
    if (PIEEndHandle.IsValid())
        FEditorDelegates::EndPIE.Remove(PIEEndHandle);
#endif

    if (SplatNodeHashCode != 0)
    {
        uint64 TempCode = SplatNodeHashCode;
        SplatNodeHashCode = 0;

        ENQUEUE_RENDER_COMMAND(RemoveGaussianSplatCommand)(
            [TempCode](FRHICommandListImmediate& RHICmdList)
            {
                UGaussianSplatingRendererLibrary::RemoveSplatNode(TempCode);
            });
    }

    Super::BeginDestroy();
}

void UGaussianSplattingComponent::RefreshBoundsFromLoadedSplat()
{
    if (!bIsComponentValid)
        return;

    UpdateBounds();
    MarkRenderStateDirty();
}

void UGaussianSplattingComponent::ApplyLoadedSplatNode_GameThread(uint64 NewHashCode)
{
    if (!bIsComponentValid)
        return;

    SplatNodeHashCode = NewHashCode;
    RefreshBoundsFromLoadedSplat();
}

FPrimitiveSceneProxy* UGaussianSplattingComponent::CreateSceneProxy()
{
    if (!bIsComponentValid)
        return nullptr;

    return new FGaussianSplattingSceneProxy(this);
}

FBoxSphereBounds UGaussianSplattingComponent::CalcBounds(const FTransform& LocalToWorld) const
{
    if (!bIsComponentValid)
        return FBoxSphereBounds(FVector::ZeroVector, FVector(100.f), 100.f).TransformBy(LocalToWorld);

    FVector Min, Max;
    if (UGaussianSplatingRendererLibrary::GetSplatNodeBoundingBox(SplatNodeHashCode, Min, Max))
    {
        FBox Box(Min, Max);
        return FBoxSphereBounds(Box).TransformBy(LocalToWorld);
    }
    return FBoxSphereBounds(FVector::ZeroVector, FVector(100.f), 100.f).TransformBy(LocalToWorld);
}

void UGaussianSplattingComponent::SendRenderTransform_Concurrent()
{
    if (!bIsComponentValid)
        return;

    Super::SendRenderTransform_Concurrent();

    TWeakObjectPtr<UGaussianSplattingComponent> WeakThis(this);
    AsyncTask(ENamedThreads::GameThread, [WeakThis]()
        {
            UGaussianSplattingComponent* StrongThis = WeakThis.Get();
            if (StrongThis && StrongThis->bIsComponentValid)
            {
                StrongThis->UpdateSplatTransform();
            }
        });
}

void UGaussianSplattingComponent::OnRendererReadyForLoad()
{
    if (!bIsComponentValid)
        return;

    bIsSplatDataRequested = true;

    if (RendererInitHandle.IsValid())
    {
        OnRendererInitializedDelegate.Remove(RendererInitHandle);
        RendererInitHandle.Reset();
    }

    QueueLoadSplatData();
}

#if WITH_EDITOR
void UGaussianSplattingComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    if (!bIsComponentValid)
    {
        Super::PostEditChangeProperty(PropertyChangedEvent);
        return;
    }

    FName PropertyName = PropertyChangedEvent.GetPropertyName();
    if (PropertyName == GET_MEMBER_NAME_CHECKED(UGaussianSplattingComponent, SplatDataPath))
    {
        bIsSplatDataRequested = true;
        QueueLoadSplatData();
    }

    Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UGaussianSplattingComponent::OnPIEStarted(bool bIsSimulating)
{
    if (!bIsComponentValid || SplatNodeHashCode == 0 || !GetWorld() || GetWorld()->WorldType != EWorldType::Editor)
        return;

    UGaussianSplatingRendererLibrary::SetSplatNodeVisible(SplatNodeHashCode, false);
    SetPIERunningMode(true);
}

void UGaussianSplattingComponent::OnPIEStopped(bool bIsSimulating)
{
    if (!bIsComponentValid || SplatNodeHashCode == 0 || !GetWorld() || GetWorld()->WorldType != EWorldType::Editor)
        return;

    UGaussianSplatingRendererLibrary::SetSplatNodeVisible(SplatNodeHashCode, true);
    SetPIERunningMode(false);
}
#endif

void UGaussianSplattingComponent::SetPIERunningMode(bool bInIsPIE)
{
    if (!bIsComponentValid)
        return;

    if (FGaussianSplattingSceneProxy* Proxy = static_cast<FGaussianSplattingSceneProxy*>(SceneProxy))
    {
        Proxy->SetPIERunningMode(bInIsPIE);
    }
}
