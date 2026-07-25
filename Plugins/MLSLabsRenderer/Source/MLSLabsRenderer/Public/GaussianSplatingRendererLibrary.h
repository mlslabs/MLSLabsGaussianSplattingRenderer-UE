// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once
#include "GaussianSplatingRendererCExport.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <string>
#include "GaussianSplatingRendererLibrary.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnRendererInitialized);

/** Blueprint function library wrapping the native Gaussian splatting renderer DLL. */
UCLASS(Blueprintable)
class MLSLABSRENDERER_API UGaussianSplatingRendererLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static void RegisterLogCallback(GSRLogCallback Callback);

	static int Init();

	/** Initialize with explicit CUDA device index; must match the D3D device GPU when using D3D12 interop. */
	static int InitWithCudaDevice(int InCudaDeviceIndex);

#if PLATFORM_WINDOWS
	/** Resolve CUDA ordinal from a D3D12 device and initialize (recommended on Windows). InD3D12Device is ID3D12Device*. */
	static int InitFromD3D12Device(void* InD3D12Device);
#endif

	static bool ShutDown();

	static bool IsInitialized();

	static bool RegisterTextures(void* ColorTexture, void* DepthTexture, int32 Width, int32 Height);

	static bool UnRegisterTextures(void* ColorTexture, void* DepthTexture);

	static bool RegisterSyncResource(void* SyncResource);

	static bool UnRegisterSyncResource(void* SyncResource);

	static bool BegineRender();

	static bool IsNeedRender();

	static bool Render(GSRRenderSetting* RenderSetting, uint64 WaitValueForCuda, uint64 SignalValueFromCuda, void* ColorTexture, void* DepthTexture, void* SyncResource);

	static bool ForceSignal(unsigned long long SignalValueFromCuda, void* SyncResource);

	static unsigned long long LoadSplatFile(const FString& InName, const FString& InSplatFilePath, GSProgressCallback OnProgress = nullptr,
		void* UserContext = nullptr);

	static void RemoveSplatNode(int64 InNodeHashCode);

	static unsigned long long LoadAnimatableSplatFiles(const FString& InName, const FString& InSplatFilesDirPath, int* OutLoadedFrameCount, GSProgressCallback OnProgress = nullptr,
		void* UserContext = nullptr);

	/** Log verbosity: 0=Trace, 1=Debug, 2=Info, 3=Warn, 4=Error, 5=Critical, 6=Off */
	UFUNCTION(BlueprintCallable, Category = "MLSLabsRenderer")
	static bool SetLogLevel(int32 InLevel);

	UFUNCTION(BlueprintCallable, Category = "MLSLabsRenderer")
	static bool SetSplatNodeVisible(int64 InNodeHashCode, bool bInVisible);

	UFUNCTION(BlueprintCallable, Category = "MLSLabsRenderer")
	static bool SetSplatNodeTransform(int64 InNodeHashCode, const FVector& InTranslation, const FRotator& InRotation, const FVector& InScale);

	UFUNCTION(BlueprintCallable, Category = "MLSLabsRenderer")
	static bool SetFrameIndexOfAnimatableSplatNode(int64 InNodeHashCode, int32 InFrameIndex);

	UFUNCTION(BlueprintCallable, Category = "MLSLabsRenderer")
	static bool GetSplatNodeBoundingBox(int64 InNodeHashCode, FVector& OutMin, FVector& OutMax);

	static std::string UnicodeToUTF8(const wchar_t* Str);

	static std::string UnicodeToGBK(const wchar_t* Str);

	static std::wstring UTF8ToUnicode(const char* Str);

	static std::wstring GBKToUnicode(const char* Str);
private:
	static void* GetGaussianSplatingRendererLibraryHandle();

};
