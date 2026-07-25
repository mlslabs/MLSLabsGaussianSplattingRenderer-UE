// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#define EXPORT_FUNCTION_REGISTER_LOG_CALL_BACK (TEXT("RegisterLogCallback"))
#define EXPORT_FUNCTION_SET_LOG_LEVEL (TEXT("SetLogLevel"))
#define EXPORT_FUNCTION_INIT (TEXT("Init"))
#define EXPORT_FUNCTION_INIT_WITH_CUDA_DEVICE (TEXT("InitWithCudaDevice"))
#define EXPORT_FUNCTION_INIT_FROM_D3D12_DEVICE (TEXT("InitFromD3D12Device"))
#define EXPORT_FUNCTION_SHUTDOWN (TEXT("ShutDown"))
#define EXPORT_FUNCTION_REGISTER_TEXTURES (TEXT("RegisterTextures"))
#define EXPORT_FUNCTION_UNREGISTER_TEXTURES (TEXT("UnRegisterTextures"))
#define EXPORT_FUNCTION_REGISTER_SYNC_RESOURCE (TEXT("RegisterSyncResource"))
#define EXPORT_FUNCTION_UNREGISTER_SYNC_RESOURCE (TEXT("UnRegisterSyncResource"))
#define EXPORT_FUNCTION_BEGIN_RENDER (TEXT("BegineRender"))
#define EXPORT_FUNCTION_IS_NEED_RENDER (TEXT("IsNeedRender"))
#define EXPORT_FUNCTION_RENDER (TEXT("Render"))
#define EXPORT_FUNCTION_FORCE_SIGNAL (TEXT("ForceSignal"))
#define EXPORT_FUNCTION_LOAD_SPLAT_FILE (TEXT("LoadSplatFile"))
#define EXPORT_FUNCTION_REMOVE_SPLAT_NODE (TEXT("RemoveSplatNode"))
#define EXPORT_FUNCTION_LOAD_ANIMATABLE_SPLAT_FILES (TEXT("LoadAnimatableSplatFiles"))
#define EXPORT_FUNCTION_SET_SPLAT_NODE_VISIBLE (TEXT("SetSplatNodeVisible"))
#define EXPORT_FUNCTION_SET_SPLAT_NODE_TRANSFORM (TEXT("SetSplatNodeTransform"))
#define EXPORT_FUNCTION_SET_FRAME_INDEX_OF_ANIMATABLE_SPLAT_NODE (TEXT("SetFrameIndexOfAnimatableSplatNode"))
#define EXPORT_FUNCTION_GET_SPLAT_NODE_BOUNDING_BOX (TEXT("GetSplatNodeBoundingBox"))

typedef struct _GSRVector3
{
    float x;
    float y;
    float z;
} GSRVector3;

typedef struct _GSRRenderSetting
{
    GSRVector3	CameraRotation; //euler angle in rad
    GSRVector3	CameraTranslation;
    float CameraFovX;
    float CameraFovY;
    float NearPlane;
    int ViewPortWidth;
    int ViewPortHeight;
} GSRRenderSetting;

typedef void(*GSRLogCallback)(int level, const char* message);
typedef void (*GSProgressCallback)(float, void*);

typedef void(*RegisterLogCallback_t)(GSRLogCallback callback);
typedef void(*SetLogLevel_t)(int level);
typedef int(*Init_t)();
typedef int(*InitWithCudaDevice_t)(int cudaDeviceOrdinal);
typedef int(*InitFromD3D12Device_t)(void* d3d12Device);
typedef bool(*ShutDown_t)();
typedef bool (*RegisterTextures_t)(void* colorTexture, void* depthTexure, int width, int height);
typedef bool (*UnRegisterTextures_t)(void* colorTexture, void* depthTexure);
typedef bool (*RegisterSyncResource_t)(void* syncResource);
typedef bool (*UnRegisterSyncResource_t)(void* syncResource);
typedef bool(*BegineRender_t)();
typedef bool(*IsNeedRender_t)();
typedef bool(*Render_t)(GSRRenderSetting* pRenderSetting, unsigned long long waitValueForCuda, unsigned long long signalValueFromCuda, void* colorTexture, void* depthTexure, void* syncResource);
typedef bool(*ForceSignal_t)(unsigned long long signalValueFromCuda, void* syncResource);
typedef unsigned long long (*LoadSplatFile_t)(const char* name, const char* splatFilePath, GSProgressCallback onProgress, void* userContext);
typedef void (*RemoveSplatNode_t)(unsigned long long nodeHashCode);
typedef unsigned long long (*LoadAnimatableSplatFiles_t)(const char* name, const char* splatFilesDirPath, int* loadedFrameCount, GSProgressCallback onProgress, void* userContext);
typedef bool(*SetSplatNodeVisible_t)(unsigned long long nodeHashCode, bool isVisible);
typedef bool(*SetSplatNodeTransform_t)(unsigned long long nodeHashCode, GSRVector3 translation, GSRVector3 rotation, GSRVector3 scale);
typedef bool(*SetFrameIndexOfAnimatableSplatNode_t)(unsigned long long nodeHashCode, int frameIndex);
typedef bool(*GetSplatNodeBoundingBox_t)(unsigned long long nodeHashCode, GSRVector3* min, GSRVector3* max);