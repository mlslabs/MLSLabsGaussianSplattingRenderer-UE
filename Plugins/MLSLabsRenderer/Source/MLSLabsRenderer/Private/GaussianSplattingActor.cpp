// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "GaussianSplattingActor.h"
#include "GaussianSplattingComponent.h"

AGaussianSplattingActor::AGaussianSplattingActor()
{
    PrimaryActorTick.bCanEverTick = false;

    SplattingComponent = CreateDefaultSubobject<UGaussianSplattingComponent>(TEXT("SplattingComponent"));
    RootComponent = SplattingComponent;
}