// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "MLSLabsRendererModule.h"
#include "Interfaces/IPluginManager.h"
#include "MLSLabsRenderer.h"
#include "GaussianSplatingRendererLibrary.h"
#include "HAL/PlatformProcess.h"
#include "Misc/Paths.h"

#if PLATFORM_WINDOWS
// Do not include ID3D12DynamicRHI.h here: it pulls WindowsD3D12ThirdParty.h -> d3dx12.h (not on plugin include path).
#include "DynamicRHI.h"
#endif

extern FOnRendererInitialized OnRendererInitializedDelegate;

IMPLEMENT_MODULE(FMLSLabsRendererModule, MLSLabsRenderer)

FMLSLabsRendererModule& FMLSLabsRendererModule::Get()
{
    return FModuleManager::LoadModuleChecked<FMLSLabsRendererModule>("MLSLabsRenderer");
}

bool FMLSLabsRendererModule::IsAvailable()
{
    return FModuleManager::Get().IsModuleLoaded("MLSLabsRenderer");
}

void FMLSLabsRendererModule::StartupModule()
{
	UE_LOG(LogTemp, Log, TEXT("MLSLabsRenderer module starting up"));
    AddShaderSourceDirectoryMapping(TEXT("/Plugin/MLSLabsRenderer"), FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("MLSLabsRenderer"))->GetBaseDir(), TEXT("Shaders")));

    PostInitHandle = FCoreDelegates::OnPostEngineInit.AddRaw(this, &FMLSLabsRendererModule::DeferredInitRenderer);
    TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("MLSLabsRenderer"));
    if (!Plugin.IsValid()) return;

    FString BaseDir = Plugin->GetBaseDir();

    FString LibTorchBinDir = FPaths::Combine(*BaseDir, TEXT("Source"), TEXT("ThirdParty"), TEXT("libTorch"), TEXT("lib"));

    if (FPaths::DirectoryExists(LibTorchBinDir))
    {
        FPlatformProcess::AddDllDirectory(*LibTorchBinDir);

        TArray<FString> Dlls = { "asmjit.dll", "c10.dll", "c10_cuda.dll", "cublas64_12.dll", "cublasLt64_12.dll", "cudart64_12.dll", "cudnn64_9.dll", "cufft64_11.dll", "cupti64_2025.1.0.dll", "cusolver64_11.dll", "cusparse64_12.dll", "fbgemm.dll", "libiomp5md.dll", "nvJitLink_120_0.dll", "torch_cpu.dll", "torch_cuda.dll" , "uv.dll" };
        for (const FString& Dll : Dlls)
        {
            FPlatformProcess::GetDllHandle(*FPaths::Combine(LibTorchBinDir, Dll));
        }
    }

    FString LibTbb12Path = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/GaussianSplatingRenderer/Bin/Win64/tbb12.dll"));
    FPlatformProcess::GetDllHandle(*LibTbb12Path);

    FString LibraryPath;
#if PLATFORM_WINDOWS
    LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/Win64/GaussianSplatingRenderer.dll"));

    if (!FPaths::FileExists(LibraryPath))
    {
        LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/GaussianSplatingRenderer/Bin/Win64/GaussianSplatingRenderer.dll"));
    }
#endif

    if (!LibraryPath.IsEmpty())
    {
        LibraryHandle = FPlatformProcess::GetDllHandle(*LibraryPath);
    }

    if (!LibraryHandle)
    {
        UE_LOG(LogTemp, Error, TEXT("FATAL: Failed to load GaussianSplatingRenderer.dll at %s"), *LibraryPath);
    }
}

void FMLSLabsRendererModule::ShutdownModule()
{
    FCoreDelegates::OnPostEngineInit.Remove(PostInitHandle);
    UGaussianSplatingRendererLibrary::ShutDown();

    if (LibraryHandle)
    {
        FPlatformProcess::FreeDllHandle(LibraryHandle);
        LibraryHandle = nullptr;
    }
}

void GSRLog(int level, const char* message)
{
    UE_LOG(MLSLabsRenderer, Log, TEXT("level=%d, message=%s"), level, UGaussianSplatingRendererLibrary::GBKToUnicode(message).c_str());
}

void FMLSLabsRendererModule::DeferredInitRenderer()
{
    if (!LibraryHandle)
    {
        return;
    }

    int Result = -1;

#if PLATFORM_WINDOWS
    if (GDynamicRHI && GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::D3D12)
    {
        void* const NativeDevice = GDynamicRHI->RHIGetNativeDevice();
        if (NativeDevice)
        {
            Result = UGaussianSplatingRendererLibrary::InitFromD3D12Device(NativeDevice);
        }
    }
#endif

    if (Result != 0)
    {
        Result = UGaussianSplatingRendererLibrary::InitWithCudaDevice(0);
    }

    if (Result == 0)
    {
        UGaussianSplatingRendererLibrary::RegisterLogCallback(GSRLog);
        UGaussianSplatingRendererLibrary::SetLogLevel(3);
        OnRendererInitializedDelegate.Broadcast();
    }
}

void* FMLSLabsRendererModule::GetLibraryHandle()
{
    return LibraryHandle;
}