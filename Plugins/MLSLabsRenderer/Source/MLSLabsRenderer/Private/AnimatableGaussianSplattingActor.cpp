// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "AnimatableGaussianSplattingActor.h"
#include "AnimatableGaussianSplattingComponent.h"

AAnimatableGaussianSplattingActor::AAnimatableGaussianSplattingActor()
{
    SplattingComponent = CreateDefaultSubobject<UAnimatableGaussianSplattingComponent>(TEXT("AnimSplattingComponent"));
    RootComponent = SplattingComponent;
}