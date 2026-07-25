// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "NoPhysicsPrimitiveComponent.generated.h"

/** Primitive component base that never creates physics state (render-only use cases). */
UCLASS(ClassGroup = (Custom), Abstract, meta = (BlueprintSpawnableComponent))
class MLSLABSRENDERER_API UNoPhysicsPrimitiveComponent : public UPrimitiveComponent
{
    GENERATED_BODY()

public:
    UNoPhysicsPrimitiveComponent();

    virtual bool ShouldCreatePhysicsState() const override { return false; }
    virtual void OnCreatePhysicsState() override {}
    virtual void OnDestroyPhysicsState() override {}
    virtual bool ShouldRecreatePhysicsState() const { return false; }
    virtual bool ShouldRecreateProxyOnUpdateTransform() const override { return false; }
    virtual bool CanEditSimulatePhysics() override { return false; }
        
    virtual void OnRegister() override;
    virtual void UninitializeComponent() override;
    virtual void BeginDestroy() override;
    
    std::atomic<bool> bIsComponentValid{true};

protected:
    virtual void SetupNoPhysics();
};
