// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "GaussianSplatingRendererLibrary.h"
#include "MLSLabsRendererModule.h"
#include "Misc/Paths.h"
#include <string>
#define LOCTEXT_NAMESPACE "Library"

namespace MLSLabsSplatPathInternal
{
	static FString ResolveSplatPathForDiskIO(const FString& SplatPath)
	{
		if (SplatPath.IsEmpty())
		{
			return SplatPath;
		}
		FString Normalized = SplatPath;
		FPaths::NormalizeFilename(Normalized);
		if (FPaths::IsRelative(Normalized))
		{
			return FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectContentDir(), Normalized));
		}
		return FPaths::ConvertRelativePathToFull(Normalized);
	}
}

FOnRendererInitialized OnRendererInitializedDelegate;
bool g_IsInitialized = false;

void UGaussianSplatingRendererLibrary::RegisterLogCallback(GSRLogCallback Callback)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return ;
	}

	RegisterLogCallback_t pRegisterLogCallback = NULL;
	pRegisterLogCallback = (RegisterLogCallback_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_REGISTER_LOG_CALL_BACK);

	if (pRegisterLogCallback != NULL)
	{
		pRegisterLogCallback(Callback);
	}
}

int UGaussianSplatingRendererLibrary::Init()
{
	return InitWithCudaDevice(0);
}

int UGaussianSplatingRendererLibrary::InitWithCudaDevice(int InCudaDeviceIndex)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return -1;
	}

	InitWithCudaDevice_t pInitDevice = (InitWithCudaDevice_t)FPlatformProcess::GetDllExport(
		LibraryHandle, EXPORT_FUNCTION_INIT_WITH_CUDA_DEVICE);
	if (pInitDevice != NULL)
	{
		int status = pInitDevice(InCudaDeviceIndex);
		if (status == 0)
		{
			g_IsInitialized = true;
		}
		return status;
	}

	Init_t pInit = (Init_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_INIT);
	if (pInit != NULL)
	{
		int status = pInit();
		if (status == 0)
		{
			g_IsInitialized = true;
		}
		return status;
	}

	return -1;
}

#if PLATFORM_WINDOWS
int UGaussianSplatingRendererLibrary::InitFromD3D12Device(void* InD3D12Device)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return -1;
	}

	InitFromD3D12Device_t pInitFromD3D = (InitFromD3D12Device_t)FPlatformProcess::GetDllExport(
		LibraryHandle, EXPORT_FUNCTION_INIT_FROM_D3D12_DEVICE);
	if (pInitFromD3D != NULL)
	{
		int status = pInitFromD3D(InD3D12Device);
		if (status == 0)
		{
			g_IsInitialized = true;
		}
		return status;
	}

	return InitWithCudaDevice(0);
}
#endif


bool UGaussianSplatingRendererLibrary::ShutDown()
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	ShutDown_t pShutDown = NULL;
	pShutDown = (ShutDown_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_SHUTDOWN);

	if (pShutDown != NULL)
	{
		g_IsInitialized = false;
		return pShutDown();
	}
	return false;
}

bool UGaussianSplatingRendererLibrary::IsInitialized()
{
	return g_IsInitialized;
}

bool UGaussianSplatingRendererLibrary::RegisterTextures(void* ColorTexture, void* DepthTexture, int32 Width, int32 Height)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	RegisterTextures_t pRegisterTextures = NULL;
	pRegisterTextures = (RegisterTextures_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_REGISTER_TEXTURES);

	if (pRegisterTextures != NULL)
	{
		return pRegisterTextures(ColorTexture, DepthTexture, Width, Height);
	}

	return false;
}

bool UGaussianSplatingRendererLibrary::UnRegisterTextures(void* ColorTexture, void* DepthTexture)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	UnRegisterTextures_t pUnRegisterTextures = NULL;
	pUnRegisterTextures = (UnRegisterTextures_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_UNREGISTER_TEXTURES);

	if (pUnRegisterTextures != NULL)
	{
		return pUnRegisterTextures(ColorTexture, DepthTexture);
	}

	return false;
}

bool UGaussianSplatingRendererLibrary::RegisterSyncResource(void* SyncResource)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	RegisterSyncResource_t pRegisterSyncResource = NULL;
	pRegisterSyncResource = (RegisterSyncResource_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_REGISTER_SYNC_RESOURCE);

	if (pRegisterSyncResource != NULL)
	{
		return pRegisterSyncResource(SyncResource);
	}

	return false;
}

bool UGaussianSplatingRendererLibrary::UnRegisterSyncResource(void* SyncResource)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	UnRegisterSyncResource_t pUnRegisterSyncResource = NULL;
	pUnRegisterSyncResource = (UnRegisterSyncResource_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_UNREGISTER_SYNC_RESOURCE);

	if (pUnRegisterSyncResource != NULL)
	{
		return pUnRegisterSyncResource(SyncResource);
	}

	return false;
}

bool UGaussianSplatingRendererLibrary::BegineRender()
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	BegineRender_t pBegineRender = NULL;
	pBegineRender = (BegineRender_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_BEGIN_RENDER);

	if (pBegineRender != NULL)
	{
		return pBegineRender();
	}
	return false;
}

bool UGaussianSplatingRendererLibrary::IsNeedRender()
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	IsNeedRender_t pIsNeedRender = NULL;
	pIsNeedRender = (IsNeedRender_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_IS_NEED_RENDER);

	if (pIsNeedRender != NULL)
	{
		return pIsNeedRender();
	}
	return false;
}

bool UGaussianSplatingRendererLibrary::Render(GSRRenderSetting* RenderSetting, uint64 WaitValueForCuda, uint64 SignalValueFromCuda, void* ColorTexture, void* DepthTexture, void* SyncResource)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	Render_t pRender = NULL;
	pRender = (Render_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_RENDER);

	if (pRender != NULL)
	{
		return pRender(RenderSetting, WaitValueForCuda, SignalValueFromCuda, ColorTexture, DepthTexture, SyncResource);
	}

	return false;
}

bool UGaussianSplatingRendererLibrary::ForceSignal(unsigned long long SignalValueFromCuda, void* SyncResource) {
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	ForceSignal_t pForceSignal = NULL;
	pForceSignal = (ForceSignal_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_FORCE_SIGNAL);

	if (pForceSignal != NULL)
	{
		return pForceSignal(SignalValueFromCuda, SyncResource);
	}

	return false;
}

#include "Windows/AllowWindowsPlatformTypes.h"
#include <Windows.h>
#include "Windows/HideWindowsPlatformTypes.h"
#define VGS_CP_ACP                    0           // default to ANSI code page
#define VGS_CP_UTF8                   1       // UTF-8 translation
#define VGS_CP_UTF16                  2       // UTF-16 translation
#define VGS_CP_GBK					  3       // gbk translation
int VGS_WideCharToMultiByte(int CodePage, const wchar_t* lpWideCharStr, int cchWideChar, char* lpMultiByteStr, int cchMultiByte)
{
	if (cchWideChar < 0)cchWideChar = wcslen(lpWideCharStr);
	cchWideChar += 1;

	switch (CodePage)
	{
	case VGS_CP_ACP:
		return WideCharToMultiByte(CP_ACP, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cchMultiByte, 0, 0);
		break;
	case VGS_CP_UTF8:
		return WideCharToMultiByte(CP_UTF8, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cchMultiByte, 0, 0);
		break;
	case VGS_CP_UTF16:
	{
		if (NULL == lpMultiByteStr || cchMultiByte <= 0)
		{
			return cchWideChar * sizeof(wchar_t) + 1;
		}
		else
		{
			memcpy(lpMultiByteStr, lpWideCharStr, cchMultiByte * sizeof(wchar_t) + 1);
			return cchMultiByte * sizeof(wchar_t) + 1;
		}
	}
	break;
	case VGS_CP_GBK:
		return WideCharToMultiByte(CP_ACP, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cchMultiByte, 0, 0);
	default: {
		return WideCharToMultiByte(CodePage, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cchMultiByte, 0, 0);
	}
	}
}


int VGS_MultiByteToWideChar(int CodePage, const char* lpMultiByteStr, int cchMultiByte, wchar_t* lpWideCharStr, int cchWideChar)
{
	if (cchMultiByte < 0)cchMultiByte = strlen(lpMultiByteStr);
	cchMultiByte += 1;
	switch (CodePage)
	{
	case VGS_CP_ACP:
		return MultiByteToWideChar(CP_ACP, 0, lpMultiByteStr, cchMultiByte, lpWideCharStr, cchWideChar); break;
	case VGS_CP_UTF8:return MultiByteToWideChar(CP_UTF8, 0, lpMultiByteStr, cchMultiByte, lpWideCharStr, cchWideChar); break;
	case VGS_CP_UTF16:
	{
		if (NULL == lpWideCharStr || cchWideChar <= 0)
		{
			return cchMultiByte / 2 + 1;
		}
		else
		{
			memcpy(lpWideCharStr, lpMultiByteStr, cchMultiByte);
			return cchMultiByte / 2 + 1;
		}

	}
	break;
	case VGS_CP_GBK:return MultiByteToWideChar(CP_ACP, 0, lpMultiByteStr, cchMultiByte, lpWideCharStr, cchWideChar); break;
	default: {
		return MultiByteToWideChar(CodePage, 0, lpMultiByteStr, cchMultiByte, lpWideCharStr, cchWideChar);
	}
	}
}

std::string UGaussianSplatingRendererLibrary::UnicodeToGBK(const wchar_t* str)
{
	int size = (int)wcslen(str);
	const char* ptr = (const char*)str;
	char* ptr_dest = new char[size * 4 + 1];
	char* dest = ptr_dest;

	VGS_WideCharToMultiByte(VGS_CP_GBK, str, size, ptr_dest, size * 4 + 1);

	std::string ret(dest);
	delete[] dest;
	return ret;
}

std::string UGaussianSplatingRendererLibrary::UnicodeToUTF8(const wchar_t* str)
{
	int size = (int)wcslen(str);
	const char* ptr = (const char*)str;
	char* ptr_dest = new char[size * 4 + 1];
	char* dest = ptr_dest;

	VGS_WideCharToMultiByte(VGS_CP_UTF8, str, size, ptr_dest, size * 4 + 1);

	std::string ret(dest);
	delete[] dest;
	return ret;
}

std::wstring UGaussianSplatingRendererLibrary::UTF8ToUnicode(const char* str)
{
	const char* ptr_src = str;
	int len = (strlen(ptr_src) + 1);
	wchar_t* dest = new wchar_t[len];
	char* ptr_dest = (char*)dest;
	int size = len * sizeof(wchar_t);
	VGS_MultiByteToWideChar(VGS_CP_UTF8, str, strlen(str), dest, size);

	std::wstring ret(dest);
	delete[] dest;
	return ret;
}

std::wstring UGaussianSplatingRendererLibrary::GBKToUnicode(const char* str)
{
	const char* ptr_src = str;
	int len = (strlen(ptr_src) + 1);
	wchar_t* dest = new wchar_t[len];
	char* ptr_dest = (char*)dest;
	int size = len * sizeof(wchar_t);
	VGS_MultiByteToWideChar(VGS_CP_GBK, str, strlen(str), dest, size);
	std::wstring ret(dest);
	delete[] dest;
	return ret;
}

unsigned long long UGaussianSplatingRendererLibrary::LoadSplatFile(const FString& InName, const FString& InSplatFilePath,
	GSProgressCallback OnProgress,
	void* UserContext)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return -1;
	}

	LoadSplatFile_t pLoadSplatFile = NULL;
	pLoadSplatFile = (LoadSplatFile_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_LOAD_SPLAT_FILE);

	if (pLoadSplatFile != NULL)
	{
		const FString ResolvedPath = MLSLabsSplatPathInternal::ResolveSplatPathForDiskIO(InSplatFilePath);
		auto NameGBK = UnicodeToGBK(*InName);
		auto SplatFilePathGBK = UnicodeToGBK(*ResolvedPath);
		return pLoadSplatFile(NameGBK.c_str(), SplatFilePathGBK.c_str(), OnProgress, UserContext);
	}
	return -1;
}

void UGaussianSplatingRendererLibrary::RemoveSplatNode(int64 InNodeHashCode)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return ;
	}

	RemoveSplatNode_t pRemoveSplatNode = NULL;
	pRemoveSplatNode = (RemoveSplatNode_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_REMOVE_SPLAT_NODE);

	if (pRemoveSplatNode != NULL)
	{
		return pRemoveSplatNode(InNodeHashCode);
	}
	return ;
}

unsigned long long UGaussianSplatingRendererLibrary::LoadAnimatableSplatFiles(const FString& InName, const FString& InSplatFilesDirPath, int* OutLoadedFrameCount, 
	GSProgressCallback OnProgress,
	void* UserContext)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return -1;
	}

	LoadAnimatableSplatFiles_t pLoadAnimatableSplatFiles = NULL;
	pLoadAnimatableSplatFiles = (LoadAnimatableSplatFiles_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_LOAD_ANIMATABLE_SPLAT_FILES);

	if (pLoadAnimatableSplatFiles != NULL)
	{
		const FString ResolvedPath = MLSLabsSplatPathInternal::ResolveSplatPathForDiskIO(InSplatFilesDirPath);
		auto NameGBK = UnicodeToGBK(*InName);
		auto SplatDirPathGBK = UnicodeToGBK(*ResolvedPath);
		return pLoadAnimatableSplatFiles(NameGBK.c_str(), SplatDirPathGBK.c_str(), OutLoadedFrameCount, OnProgress, UserContext);
	}
	return -1;
}

bool UGaussianSplatingRendererLibrary::SetLogLevel(int32 InLevel)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	SetLogLevel_t pSetLogLevel = NULL;
	pSetLogLevel = (SetLogLevel_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_SET_LOG_LEVEL);

	if (pSetLogLevel != NULL)
	{
		pSetLogLevel(InLevel);
	}
	return true;
}

bool UGaussianSplatingRendererLibrary::SetSplatNodeVisible(int64 InNodeHashCode, bool bInVisible)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	SetSplatNodeVisible_t pSetSplatNodeVisible = NULL;
	pSetSplatNodeVisible = (SetSplatNodeVisible_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_SET_SPLAT_NODE_VISIBLE);

	if (pSetSplatNodeVisible != NULL)
	{
		return pSetSplatNodeVisible(InNodeHashCode, bInVisible);
	}
	return false;
}

bool UGaussianSplatingRendererLibrary::SetSplatNodeTransform(int64 InNodeHashCode, const FVector& InTranslation, const FRotator& InRotation, const FVector& InScale)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	SetSplatNodeTransform_t pSetSplatNodeTransform = NULL;
	pSetSplatNodeTransform = (SetSplatNodeTransform_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_SET_SPLAT_NODE_TRANSFORM);

	if (pSetSplatNodeTransform != NULL)
	{
		GSRVector3 Rotation;
		Rotation.x = FMath::DegreesToRadians(InRotation.Pitch);
		Rotation.y = FMath::DegreesToRadians(InRotation.Yaw);
		Rotation.z = FMath::DegreesToRadians(InRotation.Roll);
		GSRVector3 Translation;
		Translation.x = InTranslation.Y / 100.0;
		Translation.y = -InTranslation.Z / 100.0;
		Translation.z = InTranslation.X / 100.0;
		GSRVector3 Scale;
		Scale.x = InScale.Y;
		Scale.y = InScale.Z;
		Scale.z = InScale.X;
		return pSetSplatNodeTransform(InNodeHashCode, Translation, Rotation, Scale);
	}
	return false;
}

bool UGaussianSplatingRendererLibrary::SetFrameIndexOfAnimatableSplatNode(int64 InNodeHashCode, int32 InFrameIndex)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	SetFrameIndexOfAnimatableSplatNode_t pSetFrameIndexOfAnimatableSplatNode = NULL;
	pSetFrameIndexOfAnimatableSplatNode = (SetFrameIndexOfAnimatableSplatNode_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_SET_FRAME_INDEX_OF_ANIMATABLE_SPLAT_NODE);

	if (pSetFrameIndexOfAnimatableSplatNode != NULL)
	{
		return pSetFrameIndexOfAnimatableSplatNode(InNodeHashCode, InFrameIndex);
	}
	return false;
}

void* UGaussianSplatingRendererLibrary::GetGaussianSplatingRendererLibraryHandle()
{
	FMLSLabsRendererModule* pModule =
		(FMLSLabsRendererModule*)FModuleManager::Get().GetModule(FName("MLSLabsRenderer"));
	if (!pModule)
	{
		return NULL;
	}
	void* LibraryHandle = pModule->GetLibraryHandle();

	if (!LibraryHandle)
	{
		return NULL;
	}
	return LibraryHandle;
}

bool UGaussianSplatingRendererLibrary::GetSplatNodeBoundingBox(int64 InNodeHashCode, FVector& OutMin, FVector& OutMax)
{
	void* LibraryHandle = GetGaussianSplatingRendererLibraryHandle();
	if (NULL == LibraryHandle)
	{
		return false;
	}

	GetSplatNodeBoundingBox_t pGetSplatNodeBoundingBox = NULL;
	pGetSplatNodeBoundingBox = (GetSplatNodeBoundingBox_t)FPlatformProcess::GetDllExport(LibraryHandle, EXPORT_FUNCTION_GET_SPLAT_NODE_BOUNDING_BOX);

	if (pGetSplatNodeBoundingBox != NULL)
	{
		GSRVector3 TmpMin, TmpMax;
		bool bOk = pGetSplatNodeBoundingBox(InNodeHashCode, &TmpMin, &TmpMax);
		OutMin.Y = TmpMin.x * 100.0f;
		OutMin.Z = -TmpMin.y * 100.0f;
		OutMin.X = TmpMin.z * 100.0f;
		OutMax.Y = TmpMax.x * 100.0f;
		OutMax.Z = -TmpMax.y * 100.0f;
		OutMax.X = TmpMax.z * 100.0f;
		return bOk;
	}
	return false;
}

#undef LOCTEXT_NAMESPACE
