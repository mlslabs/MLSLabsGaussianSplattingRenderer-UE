// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GaussianSplattingActor.generated.h"

class UGaussianSplattingComponent;

UCLASS(BlueprintType, Blueprintable)
class MLSLABSRENDERER_API AGaussianSplattingActor : public AActor
{
    GENERATED_BODY()

public:
    AGaussianSplattingActor();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MLSLabsRenderer")
    TObjectPtr<UGaussianSplattingComponent> SplattingComponent;
};