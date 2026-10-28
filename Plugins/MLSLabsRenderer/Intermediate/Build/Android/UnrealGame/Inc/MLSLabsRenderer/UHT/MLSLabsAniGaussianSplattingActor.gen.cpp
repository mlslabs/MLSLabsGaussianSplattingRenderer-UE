// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsAniGaussianSplattingActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMLSLabsAniGaussianSplattingActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase);
MLSLABSRENDERER_API UEnum* Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor(ETypeConstructPhase);
MLSLABSRENDERER_API UFunction* Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EMlslabsPlaybackState *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState_Statics
template<> MLSLABSRENDERER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMlslabsPlaybackState>()
{
	return Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Ended.DisplayName", "Ended" },
		{ "Ended.Name", "EMlslabsPlaybackState::Ended" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
		{ "Playing.DisplayName", "Playing" },
		{ "Playing.Name", "EMlslabsPlaybackState::Playing" },
		{ "Started.DisplayName", "Started" },
		{ "Started.Name", "EMlslabsPlaybackState::Started" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMlslabsPlaybackState::Started", (int64)EMlslabsPlaybackState::Started },
		{ "EMlslabsPlaybackState::Playing", (int64)EMlslabsPlaybackState::Playing },
		{ "EMlslabsPlaybackState::Ended", (int64)EMlslabsPlaybackState::Ended },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
	nullptr,
	"EMlslabsPlaybackState",
	"EMlslabsPlaybackState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMlslabsPlaybackState;
UEnum* Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMlslabsPlaybackState.OuterSingleton)
		{
			ZRIE_EMlslabsPlaybackState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState, (UObject*)Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase::Outer), TEXT("EMlslabsPlaybackState"));
		}
		return ZRIE_EMlslabsPlaybackState.OuterSingleton;
	}
	if (!ZRIE_EMlslabsPlaybackState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMlslabsPlaybackState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMlslabsPlaybackState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMlslabsPlaybackState *******************************************************

// ********** Begin Delegate FOnMlslabsPlaybackStateChanged ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms
	{
		EMlslabsPlaybackState PlaybackState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMlslabsPlaybackStateChanged constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMlslabsPlaybackStateChanged constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMlslabsPlaybackStateChanged Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PlaybackState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PlaybackState = { "PlaybackState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms, PlaybackState), Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState, METADATA_PARAMS(0, nullptr) }; // c932901e6f1fd975e9d58b01dfb2e2e4d2037bbc
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaybackState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaybackState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnMlslabsPlaybackStateChanged Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer, nullptr, "OnMlslabsPlaybackStateChanged__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnMlslabsPlaybackStateChanged ******************************************

// ********** Begin Class AMLSLabsAniGaussianSplattingActor Function CanPlay ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics
struct UHT_STATICS
{
	struct MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanPlay constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanPlay constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanPlay Property Definitions ******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanPlay Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "CanPlay", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// ********** End Class AMLSLabsAniGaussianSplattingActor Function CanPlay *************************

// ********** Begin Class AMLSLabsAniGaussianSplattingActor Function Pause *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class AMLSLabsAniGaussianSplattingActor Function Pause ***************************

// ********** Begin Class AMLSLabsAniGaussianSplattingActor Function Play **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class AMLSLabsAniGaussianSplattingActor Function Play ****************************

// ********** Begin Class AMLSLabsAniGaussianSplattingActor Function SeekToFrame *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_SeekToFrame_Statics
struct UHT_STATICS
{
	struct MLSLabsAniGaussianSplattingActor_eventSeekToFrame_Parms
	{
		int32 FrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SeekToFrame constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MLSLabsAniGaussianSplattingActor_eventSeekToFrame_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SeekToFrame constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SeekToFrame Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MLSLabsAniGaussianSplattingActor_eventSeekToFrame_Parms, FrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsAniGaussianSplattingActor_eventSeekToFrame_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SeekToFrame Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "SeekToFrame", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MLSLabsAniGaussianSplattingActor_eventSeekToFrame_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MLSLabsAniGaussianSplattingActor_eventSeekToFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_SeekToFrame(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execSeekToFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SeekToFrame(Z_Param_FrameIndex);
	P_NATIVE_END;
}
// ********** End Class AMLSLabsAniGaussianSplattingActor Function SeekToFrame *********************

// ********** Begin Class AMLSLabsAniGaussianSplattingActor Function Stop **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class AMLSLabsAniGaussianSplattingActor Function Stop ****************************

// ********** Begin Class AMLSLabsAniGaussianSplattingActor ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MLSLabsAniGaussianSplattingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplattingComponent_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackStateChanged_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMLSLabsAniGaussianSplattingActor constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplattingComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMLSLabsAniGaussianSplattingActor constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanPlay"), .Pointer = &AMLSLabsAniGaussianSplattingActor::execCanPlay },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &AMLSLabsAniGaussianSplattingActor::execPause },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &AMLSLabsAniGaussianSplattingActor::execPlay },
		{ .NameUTF8 = UTF8TEXT("SeekToFrame"), .Pointer = &AMLSLabsAniGaussianSplattingActor::execSeekToFrame },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &AMLSLabsAniGaussianSplattingActor::execStop },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay, "CanPlay" }, // cb413b6b2c5f096a3a735d1ef88d50fc917f6b03
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause, "Pause" }, // 0c6bcefc11dfcc0e66b826160b4edeb9f0697159
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play, "Play" }, // 9703218cf95049f3acc5de6d7dabd488639ee48a
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_SeekToFrame, "SeekToFrame" }, // b41285ac873f4529ed4b03a933cb3014b70227c0
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop, "Stop" }, // 9767b890f725d440b92789649e39b7ae995d2429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMLSLabsAniGaussianSplattingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AMLSLabsAniGaussianSplattingActor Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SplattingComponent = { "SplattingComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AMLSLabsAniGaussianSplattingActor, SplattingComponent), Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplattingComponent_MetaData), NewProp_SplattingComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPlaybackStateChanged = { "OnPlaybackStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(AMLSLabsAniGaussianSplattingActor, OnPlaybackStateChanged), Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackStateChanged_MetaData), NewProp_OnPlaybackStateChanged_MetaData) }; // 56b4425e539ac7de9217addc767ebd2b67b47d19
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplattingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPlaybackStateChanged,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AMLSLabsAniGaussianSplattingActor Property Definitions *********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor,
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
static void AMLSLabsAniGaussianSplattingActor_StaticRegisterNativesAMLSLabsAniGaussianSplattingActor()
{
	UClass* Class = AMLSLabsAniGaussianSplattingActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor;
UClass* Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AMLSLabsAniGaussianSplattingActor;
		if (!Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MLSLabsAniGaussianSplattingActor"),
				Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.InnerSingleton,
				AMLSLabsAniGaussianSplattingActor_StaticRegisterNativesAMLSLabsAniGaussianSplattingActor,
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
		return Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMLSLabsAniGaussianSplattingActor);
AMLSLabsAniGaussianSplattingActor::~AMLSLabsAniGaussianSplattingActor() {}
// ********** End Class AMLSLabsAniGaussianSplattingActor ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h__Script_MLSLabsRenderer_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState, TEXT("EMlslabsPlaybackState"), &ZRIE_EMlslabsPlaybackState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3375534110U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, TEXT("AMLSLabsAniGaussianSplattingActor"), &Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMLSLabsAniGaussianSplattingActor), 3193712938U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h__Script_MLSLabsRenderer_cfb349dc908b7f23b703e8bf8e014090045de24a{
	TEXT("/Script/MLSLabsRenderer"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
