// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "GaussianSplattingComponent.h"
#include "AnimatableGaussianSplattingComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MLSLABSRENDERER_API UAnimatableGaussianSplattingComponent : public UGaussianSplattingComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(Interp, BlueprintSetter = SetFrameIndex, EditAnywhere, BlueprintReadWrite, Category = "MLSLabsRenderer")
    float FrameIndex = 0;

    UFUNCTION(BlueprintSetter)
    void SetFrameIndex(const float NewFrameIndex);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MLSLabsRenderer")
    int FrameCount = 1;

    UFUNCTION(BlueprintCallable, Category = "MLSLabsRenderer")
    void UpdateFrameIndex(int32 InIndex);

    virtual void QueueLoadSplatData() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};