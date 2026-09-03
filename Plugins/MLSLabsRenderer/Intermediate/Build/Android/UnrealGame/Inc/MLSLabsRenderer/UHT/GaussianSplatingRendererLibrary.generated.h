// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GaussianSplatingRendererLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLSLABSRENDERER_GaussianSplatingRendererLibrary_generated_h
#error "GaussianSplatingRendererLibrary.generated.h already included, missing '#pragma once' in GaussianSplatingRendererLibrary.h"
#endif
#define MLSLABSRENDERER_GaussianSplatingRendererLibrary_generated_h

#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSplatNodeBoundingBox); \
	DECLARE_FUNCTION(execSetFrameIndexOfAnimatableSplatNode); \
	DECLARE_FUNCTION(execSetSplatNodeTransform); \
	DECLARE_FUNCTION(execSetSplatNodeVisible); \
	DECLARE_FUNCTION(execSetLogLevel); \
	DECLARE_FUNCTION(execGetMlslabsSplatCurrentTime); \
	DECLARE_FUNCTION(execGetMlslabsSplatDuration); \
	DECLARE_FUNCTION(execIsMlslabsSplatPlaying); \
	DECLARE_FUNCTION(execSetMlslabsSplatTime); \
	DECLARE_FUNCTION(execPauseMlslabsSplat); \
	DECLARE_FUNCTION(execStopMlslabsSplat); \
	DECLARE_FUNCTION(execInitWithCudaDevice);


#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGaussianSplatingRendererLibrary(); \
	friend struct Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics; \
public: \
	DECLARE_CLASS(UGaussianSplatingRendererLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLSLabsRenderer"), NO_API) \
	DECLARE_SERIALIZER(UGaussianSplatingRendererLibrary)


#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGaussianSplatingRendererLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGaussianSplatingRendererLibrary(UGaussianSplatingRendererLibrary&&); \
	UGaussianSplatingRendererLibrary(const UGaussianSplatingRendererLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGaussianSplatingRendererLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGaussianSplatingRendererLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGaussianSplatingRendererLibrary) \
	NO_API virtual ~UGaussianSplatingRendererLibrary();


#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_12_PROLOG
#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLSLABSRENDERER_API UClass* StaticClass<class UGaussianSplatingRendererLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
