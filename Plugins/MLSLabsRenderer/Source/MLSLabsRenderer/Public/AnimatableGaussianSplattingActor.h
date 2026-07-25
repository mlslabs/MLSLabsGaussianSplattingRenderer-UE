// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AnimatableGaussianSplattingActor.generated.h"

class UAnimatableGaussianSplattingComponent;

UCLASS(BlueprintType, Blueprintable)
class MLSLABSRENDERER_API AAnimatableGaussianSplattingActor : public AActor
{
    GENERATED_BODY()

public:
    AAnimatableGaussianSplattingActor();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MLSLabsRenderer")
    TObjectPtr<UAnimatableGaussianSplattingComponent> SplattingComponent;
};