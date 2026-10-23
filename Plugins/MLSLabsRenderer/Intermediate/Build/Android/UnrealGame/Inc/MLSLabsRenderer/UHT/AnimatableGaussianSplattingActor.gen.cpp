// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/AnimatableGaussianSplattingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatableGaussianSplattingActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor_NoRegister();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent_NoRegister();
MLSLABSRENDERER_API UFunction* Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class AAnimatableGaussianSplattingActor Function CanPlay
struct Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics
{
	struct AnimatableGaussianSplattingActor_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimatableGaussianSplattingActor_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingActor_eventCanPlay_Parms), &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "CanPlay", nullptr, nullptr, Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::AnimatableGaussianSplattingActor_eventCanPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::AnimatableGaussianSplattingActor_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// End Class AAnimatableGaussianSplattingActor Function CanPlay

// Begin Class AAnimatableGaussianSplattingActor Function Pause
struct Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class AAnimatableGaussianSplattingActor Function Pause

// Begin Class AAnimatableGaussianSplattingActor Function Play
struct Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class AAnimatableGaussianSplattingActor Function Play

// Begin Class AAnimatableGaussianSplattingActor Function SeekToFrame
struct Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics
{
	struct AnimatableGaussianSplattingActor_eventSeekToFrame_Parms
	{
		int32 FrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingActor_eventSeekToFrame_Parms, FrameIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimatableGaussianSplattingActor_eventSeekToFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingActor_eventSeekToFrame_Parms), &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "SeekToFrame", nullptr, nullptr, Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::AnimatableGaussianSplattingActor_eventSeekToFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::AnimatableGaussianSplattingActor_eventSeekToFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execSeekToFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SeekToFrame(Z_Param_FrameIndex);
	P_NATIVE_END;
}
// End Class AAnimatableGaussianSplattingActor Function SeekToFrame

// Begin Class AAnimatableGaussianSplattingActor Function Stop
struct Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class AAnimatableGaussianSplattingActor Function Stop

// Begin Class AAnimatableGaussianSplattingActor
void AAnimatableGaussianSplattingActor::StaticRegisterNativesAAnimatableGaussianSplattingActor()
{
	UClass* Class = AAnimatableGaussianSplattingActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPlay", &AAnimatableGaussianSplattingActor::execCanPlay },
		{ "Pause", &AAnimatableGaussianSplattingActor::execPause },
		{ "Play", &AAnimatableGaussianSplattingActor::execPlay },
		{ "SeekToFrame", &AAnimatableGaussianSplattingActor::execSeekToFrame },
		{ "Stop", &AAnimatableGaussianSplattingActor::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnimatableGaussianSplattingActor);
UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor_NoRegister()
{
	return AAnimatableGaussianSplattingActor::StaticClass();
}
struct Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimatableGaussianSplattingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplattingComponent_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackStateChanged_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplattingComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay, "CanPlay" }, // 2819437010
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause, "Pause" }, // 1103033182
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play, "Play" }, // 1153912234
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame, "SeekToFrame" }, // 2505513671
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop, "Stop" }, // 2809734044
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimatableGaussianSplattingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::NewProp_SplattingComponent = { "SplattingComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnimatableGaussianSplattingActor, SplattingComponent), Z_Construct_UClass_UAnimatableGaussianSplattingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplattingComponent_MetaData), NewProp_SplattingComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::NewProp_OnPlaybackStateChanged = { "OnPlaybackStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnimatableGaussianSplattingActor, OnPlaybackStateChanged), Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackStateChanged_MetaData), NewProp_OnPlaybackStateChanged_MetaData) }; // 1910389631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::NewProp_SplattingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::NewProp_OnPlaybackStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::ClassParams = {
	&AAnimatableGaussianSplattingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor()
{
	if (!Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton, Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<AAnimatableGaussianSplattingActor>()
{
	return AAnimatableGaussianSplattingActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimatableGaussianSplattingActor);
AAnimatableGaussianSplattingActor::~AAnimatableGaussianSplattingActor() {}
// End Class AAnimatableGaussianSplattingActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnimatableGaussianSplattingActor, AAnimatableGaussianSplattingActor::StaticClass, TEXT("AAnimatableGaussianSplattingActor"), &Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimatableGaussianSplattingActor), 1277979257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h_2141440246(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
