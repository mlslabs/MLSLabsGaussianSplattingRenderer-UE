// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "AnimatableGaussianSplattingComponent.h"
#include "GaussianSplatingRendererLibrary.h"
#include "Async/Async.h"
#include "Engine/World.h"
#include "RenderingThread.h"
#include "TimerManager.h"

void UAnimatableGaussianSplattingComponent::QueueLoadSplatData()
{
    if (!bIsComponentValid || SplatDataPath.IsEmpty() || !GetOwner())
        return;

    FString NameCopy = FString::Printf(TEXT("%s_0x%p"), *GetOwner()->GetName(), this);
    FString PathCopy = SplatDataPath;
    TWeakObjectPtr<UAnimatableGaussianSplattingComponent> WeakThis(this);

    uint64 OldCode = SplatNodeHashCode;

    if (!bIsComponentValid)
        return;

    ENQUEUE_RENDER_COMMAND(LoadAnimatableSplatCommand)(
        [WeakThis, NameCopy, PathCopy, OldCode](FRHICommandListImmediate& RHICmdList)
        {
            UAnimatableGaussianSplattingComponent* StrongThis = WeakThis.Get();
            if (!StrongThis || !StrongThis->bIsComponentValid)
                return;

            if (OldCode != 0)
            {
                UGaussianSplatingRendererLibrary::RemoveSplatNode(OldCode);
            }

            int32 LocalFrameCount = 0;
            uint64 NewHashCode = UGaussianSplatingRendererLibrary::LoadAnimatableSplatFiles(
                NameCopy, PathCopy, &LocalFrameCount);

            if (NewHashCode != 0)
            {
                UGaussianSplatingRendererLibrary::SetSplatNodeVisible(NewHashCode, true);

                AsyncTask(ENamedThreads::GameThread, [WeakThis, NewHashCode, LocalFrameCount]()
                    {
                        UAnimatableGaussianSplattingComponent* StrongThis = WeakThis.Get();
                        if (!StrongThis || !StrongThis->bIsComponentValid || !StrongThis->GetWorld())
                        {
                            UGaussianSplatingRendererLibrary::RemoveSplatNode(NewHashCode);
                            return;
                        }
                            

                        StrongThis->ApplyLoadedSplatNode_GameThread(NewHashCode);
                        StrongThis->FrameCount = LocalFrameCount;

                        if (StrongThis->bIsComponentValid)
                        {
                            StrongThis->UpdateSplatTransform();
                            StrongThis->UpdateFrameIndex(static_cast<int32>(StrongThis->FrameIndex));
                        }
                    });
            }
        });
}

void UAnimatableGaussianSplattingComponent::UpdateFrameIndex(int32 InIndex)
{
    if (!bIsComponentValid || SplatNodeHashCode == 0 || !IsRegistered())
        return;

    if (InIndex >= 0 && InIndex < FrameCount)
    {
        FrameIndex = static_cast<float>(InIndex);
        UGaussianSplatingRendererLibrary::SetFrameIndexOfAnimatableSplatNode(SplatNodeHashCode, InIndex);
    }
}

#if WITH_EDITOR
void UAnimatableGaussianSplattingComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    if (!bIsComponentValid)
    {
        Super::PostEditChangeProperty(PropertyChangedEvent);
        return;
    }

    FName PropertyName = PropertyChangedEvent.GetPropertyName();
    if (PropertyName == GET_MEMBER_NAME_CHECKED(UAnimatableGaussianSplattingComponent, FrameIndex))
    {
        UpdateFrameIndex(static_cast<int32>(FrameIndex));
    }
    Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void UAnimatableGaussianSplattingComponent::SetFrameIndex(const float NewFrameIndex)
{
    if (!bIsComponentValid)
        return;

    if (FrameIndex != NewFrameIndex)
        UpdateFrameIndex(static_cast<int32>(NewFrameIndex));
}
