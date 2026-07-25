// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "NoPhysicsPrimitiveComponent.h"
#include "Engine/CollisionProfile.h"

UNoPhysicsPrimitiveComponent::UNoPhysicsPrimitiveComponent()
{
    SetupNoPhysics();
}

void UNoPhysicsPrimitiveComponent::SetupNoPhysics()
{
    bAlwaysCreatePhysicsState = false;
    PrimaryComponentTick.bCanEverTick = false;
    SetMobility(EComponentMobility::Movable);
    
    SetCollisionEnabled(ECollisionEnabled::NoCollision);
    SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
    
    BodyInstance.bSimulatePhysics = false;
    BodyInstance.SetCollisionEnabled(ECollisionEnabled::NoCollision);
    BodyInstance.SetResponseToAllChannels(ECR_Ignore);
    BodyInstance.SetObjectType(ECC_WorldStatic);
    
    bCanEverAffectNavigation = false;
    CanCharacterStepUpOn = ECB_No;
    bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::No;
    SetCanEverAffectNavigation(false);
    
    PrimaryComponentTick.SetTickFunctionEnable(false);
}

void UNoPhysicsPrimitiveComponent::OnRegister()
{
    if (!bIsComponentValid)
    {
        Super::OnRegister();
        return;
    }
    
    SetupNoPhysics();
    
    Super::OnRegister();
}

void UNoPhysicsPrimitiveComponent::UninitializeComponent()
{
    bIsComponentValid = false;
    Super::UninitializeComponent();
}

void UNoPhysicsPrimitiveComponent::BeginDestroy()
{
    bIsComponentValid = false;
    Super::BeginDestroy();
}
