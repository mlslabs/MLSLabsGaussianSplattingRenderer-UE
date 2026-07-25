// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "RendererInterface.h"

/** MLSLabsRenderer runtime module: loads native DLL, maps shaders, defers renderer init. */
class FMLSLabsRendererModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    virtual bool SupportsDynamicReloading() override { return true; }

    static FMLSLabsRendererModule& Get();
    static bool IsAvailable();
    void* GetLibraryHandle();
private:
    void DeferredInitRenderer();
private:
    void* LibraryHandle;
    FDelegateHandle PostInitHandle;
};
