// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatableGaussianSplattingActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAnimatableGaussianSplattingActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor(ETypeConstructPhase);
MLSLABSRENDERER_API UFunction* Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AAnimatableGaussianSplattingActor Function CanPlay ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay_Statics
struct UHT_STATICS
{
	struct AnimatableGaussianSplattingActor_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanPlay constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimatableGaussianSplattingActor_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanPlay constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanPlay Property Definitions ******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingActor_eventCanPlay_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanPlay Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "CanPlay", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimatableGaussianSplattingActor_eventCanPlay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimatableGaussianSplattingActor_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// ********** End Class AAnimatableGaussianSplattingActor Function CanPlay *************************

// ********** Begin Class AAnimatableGaussianSplattingActor Function Pause *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class AAnimatableGaussianSplattingActor Function Pause ***************************

// ********** Begin Class AAnimatableGaussianSplattingActor Function Play **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class AAnimatableGaussianSplattingActor Function Play ****************************

// ********** Begin Class AAnimatableGaussianSplattingActor Function SeekToFrame *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame_Statics
struct UHT_STATICS
{
	struct AnimatableGaussianSplattingActor_eventSeekToFrame_Parms
	{
		int32 FrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SeekToFrame constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimatableGaussianSplattingActor_eventSeekToFrame_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SeekToFrame constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SeekToFrame Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingActor_eventSeekToFrame_Parms, FrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingActor_eventSeekToFrame_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SeekToFrame Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "SeekToFrame", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimatableGaussianSplattingActor_eventSeekToFrame_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimatableGaussianSplattingActor_eventSeekToFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execSeekToFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SeekToFrame(Z_Param_FrameIndex);
	P_NATIVE_END;
}
// ********** End Class AAnimatableGaussianSplattingActor Function SeekToFrame *********************

// ********** Begin Class AAnimatableGaussianSplattingActor Function Stop **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAnimatableGaussianSplattingActor, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAnimatableGaussianSplattingActor::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class AAnimatableGaussianSplattingActor Function Stop ****************************

// ********** Begin Class AAnimatableGaussianSplattingActor ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Class AAnimatableGaussianSplattingActor constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplattingComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAnimatableGaussianSplattingActor constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanPlay"), .Pointer = &AAnimatableGaussianSplattingActor::execCanPlay },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &AAnimatableGaussianSplattingActor::execPause },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &AAnimatableGaussianSplattingActor::execPlay },
		{ .NameUTF8 = UTF8TEXT("SeekToFrame"), .Pointer = &AAnimatableGaussianSplattingActor::execSeekToFrame },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &AAnimatableGaussianSplattingActor::execStop },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_CanPlay, "CanPlay" }, // 8d53f16e63a881322b5fe9b444c67fc8ca9a9f4f
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Pause, "Pause" }, // d4a7ecffd0ce25276a8b25961c73497db795a07a
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Play, "Play" }, // 8b257fd138805a01f3ad4c91e79e56a153f755b0
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_SeekToFrame, "SeekToFrame" }, // 0f6af7669d87f04b6e23d2c3de0b389ee54eeefc
		{ &Z_Construct_UFunction_AAnimatableGaussianSplattingActor_Stop, "Stop" }, // 54b4cde02051aab73de2a1f97d72c0798509cb8f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimatableGaussianSplattingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAnimatableGaussianSplattingActor Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SplattingComponent = { "SplattingComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAnimatableGaussianSplattingActor, SplattingComponent), Z_Construct_UClass_UAnimatableGaussianSplattingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplattingComponent_MetaData), NewProp_SplattingComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPlaybackStateChanged = { "OnPlaybackStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(AAnimatableGaussianSplattingActor, OnPlaybackStateChanged), Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackStateChanged_MetaData), NewProp_OnPlaybackStateChanged_MetaData) }; // 56b4425e539ac7de9217addc767ebd2b67b47d19
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplattingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPlaybackStateChanged,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AAnimatableGaussianSplattingActor Property Definitions *********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAnimatableGaussianSplattingActor,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AAnimatableGaussianSplattingActor_StaticRegisterNativesAAnimatableGaussianSplattingActor()
{
	UClass* Class = AAnimatableGaussianSplattingActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor;
UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAnimatableGaussianSplattingActor;
		if (!Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AnimatableGaussianSplattingActor"),
				Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.InnerSingleton,
				AAnimatableGaussianSplattingActor_StaticRegisterNativesAAnimatableGaussianSplattingActor,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAnimatableGaussianSplattingActor);
AAnimatableGaussianSplattingActor::~AAnimatableGaussianSplattingActor() {}
// ********** End Class AAnimatableGaussianSplattingActor ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h__Script_MLSLabsRenderer_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnimatableGaussianSplattingActor, TEXT("AAnimatableGaussianSplattingActor"), &Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimatableGaussianSplattingActor), 1398394410U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h__Script_MLSLabsRenderer_fc61645b39803b2315c1934b8e2cdb6aceedcabe{
	TEXT("/Script/MLSLabsRenderer"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
