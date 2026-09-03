// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLSLabsAniGaussianSplattingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMlslabsPlaybackState : uint8;
#ifdef MLSLABSRENDERER_MLSLabsAniGaussianSplattingActor_generated_h
#error "MLSLabsAniGaussianSplattingActor.generated.h already included, missing '#pragma once' in MLSLabsAniGaussianSplattingActor.h"
#endif
#define MLSLABSRENDERER_MLSLabsAniGaussianSplattingActor_generated_h

#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_19_DELEGATE \
MLSLABSRENDERER_API void FOnMlslabsPlaybackStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMlslabsPlaybackStateChanged, EMlslabsPlaybackState PlaybackState);


#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMLSLabsAniGaussianSplattingActor(); \
	friend struct Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics; \
public: \
	DECLARE_CLASS(AMLSLabsAniGaussianSplattingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MLSLabsRenderer"), NO_API) \
	DECLARE_SERIALIZER(AMLSLabsAniGaussianSplattingActor)


#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMLSLabsAniGaussianSplattingActor(AMLSLabsAniGaussianSplattingActor&&); \
	AMLSLabsAniGaussianSplattingActor(const AMLSLabsAniGaussianSplattingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMLSLabsAniGaussianSplattingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMLSLabsAniGaussianSplattingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMLSLabsAniGaussianSplattingActor) \
	NO_API virtual ~AMLSLabsAniGaussianSplattingActor();


#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_21_PROLOG
#define FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_24_INCLASS_NO_PURE_DECLS \
	FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLSLABSRENDERER_API UClass* StaticClass<class AMLSLabsAniGaussianSplattingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h


#define FOREACH_ENUM_EMLSLABSPLAYBACKSTATE(op) \
	op(EMlslabsPlaybackState::Started) \
	op(EMlslabsPlaybackState::Playing) \
	op(EMlslabsPlaybackState::Ended) 

enum class EMlslabsPlaybackState : uint8;
template<> struct TIsUEnumClass<EMlslabsPlaybackState> { enum { Value = true }; };
template<> MLSLABSRENDERER_API UEnum* StaticEnum<EMlslabsPlaybackState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
