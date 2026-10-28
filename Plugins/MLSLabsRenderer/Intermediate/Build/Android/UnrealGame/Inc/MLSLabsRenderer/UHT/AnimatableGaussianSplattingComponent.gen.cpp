// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatableGaussianSplattingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAnimatableGaussianSplattingComponent() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAnimatableGaussianSplattingComponent Function CanPlay *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics
struct UHT_STATICS
{
	struct AnimatableGaussianSplattingComponent_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanPlay constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimatableGaussianSplattingComponent_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanPlay constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanPlay Property Definitions ******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingComponent_eventCanPlay_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanPlay Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "CanPlay", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimatableGaussianSplattingComponent_eventCanPlay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimatableGaussianSplattingComponent_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function CanPlay *********************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function IsPlaying *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics
struct UHT_STATICS
{
	struct AnimatableGaussianSplattingComponent_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlaying constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimatableGaussianSplattingComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlaying constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlaying Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingComponent_eventIsPlaying_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPlaying Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "IsPlaying", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimatableGaussianSplattingComponent_eventIsPlaying_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimatableGaussianSplattingComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function IsPlaying *******************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function Pause *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function Pause ***********************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function Play **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function Play ************************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function SeekToFrame ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics
struct UHT_STATICS
{
	struct AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms
	{
		int32 InFrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SeekToFrame constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SeekToFrame constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SeekToFrame Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InFrameIndex = { "InFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms, InFrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SeekToFrame Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "SeekToFrame", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execSeekToFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InFrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SeekToFrame(Z_Param_InFrameIndex);
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function SeekToFrame *****************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function SetFrameIndex *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics
struct UHT_STATICS
{
	struct AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms
	{
		float NewFrameIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFrameIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFrameIndex constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFrameIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFrameIndex constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFrameIndex Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewFrameIndex = { "NewFrameIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms, NewFrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFrameIndex_MetaData), NewProp_NewFrameIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewFrameIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetFrameIndex Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "SetFrameIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execSetFrameIndex)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameIndex(Z_Param_NewFrameIndex);
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function SetFrameIndex ***************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function SetPlaybackFps ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics
struct UHT_STATICS
{
	struct AnimatableGaussianSplattingComponent_eventSetPlaybackFps_Parms
	{
		float NewFps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlaybackFps constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPlaybackFps constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPlaybackFps Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewFps = { "NewFps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventSetPlaybackFps_Parms, NewFps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewFps,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPlaybackFps Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "SetPlaybackFps", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimatableGaussianSplattingComponent_eventSetPlaybackFps_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimatableGaussianSplattingComponent_eventSetPlaybackFps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execSetPlaybackFps)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackFps(Z_Param_NewFps);
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function SetPlaybackFps **************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function Stop **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function Stop ************************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function UpdateFrameIndex **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics
struct UHT_STATICS
{
	struct AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms
	{
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateFrameIndex constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateFrameIndex constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateFrameIndex Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateFrameIndex Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "UpdateFrameIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execUpdateFrameIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFrameIndex(Z_Param_InIndex);
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function UpdateFrameIndex ************

// ********** Begin Class UAnimatableGaussianSplattingComponent ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "AnimatableGaussianSplattingComponent.h" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameIndex_MetaData[] = {
		{ "BlueprintSetter", "SetFrameIndex" },
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackFps_MetaData[] = {
		{ "BlueprintSetter", "SetPlaybackFps" },
		{ "Category", "MLSLabsRenderer" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Play() rate in frames per second; rounded to an integer like the .mlslabs header fps. */" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
		{ "ToolTip", "Play() rate in frames per second; rounded to an integer like the .mlslabs header fps." },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAnimatableGaussianSplattingComponent constinit property declarations ****
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackFps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAnimatableGaussianSplattingComponent constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanPlay"), .Pointer = &UAnimatableGaussianSplattingComponent::execCanPlay },
		{ .NameUTF8 = UTF8TEXT("IsPlaying"), .Pointer = &UAnimatableGaussianSplattingComponent::execIsPlaying },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &UAnimatableGaussianSplattingComponent::execPause },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &UAnimatableGaussianSplattingComponent::execPlay },
		{ .NameUTF8 = UTF8TEXT("SeekToFrame"), .Pointer = &UAnimatableGaussianSplattingComponent::execSeekToFrame },
		{ .NameUTF8 = UTF8TEXT("SetFrameIndex"), .Pointer = &UAnimatableGaussianSplattingComponent::execSetFrameIndex },
		{ .NameUTF8 = UTF8TEXT("SetPlaybackFps"), .Pointer = &UAnimatableGaussianSplattingComponent::execSetPlaybackFps },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UAnimatableGaussianSplattingComponent::execStop },
		{ .NameUTF8 = UTF8TEXT("UpdateFrameIndex"), .Pointer = &UAnimatableGaussianSplattingComponent::execUpdateFrameIndex },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay, "CanPlay" }, // 10295a95d9060f02157965cfea60a70235278cad
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying, "IsPlaying" }, // eac35d33429d47375a23bcba9251774fb8bcbfd3
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause, "Pause" }, // dd2c5bfce66073b403aa62e808c6b3ce59e97950
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play, "Play" }, // 2e3aab8e5427421dc386d2409b48a7d23fb2c8da
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame, "SeekToFrame" }, // 7b44015ae38776ded97220943b29b9ecdc6576c0
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex, "SetFrameIndex" }, // 4ba4a543ee4a27c3c5727e72547dfcea5c875551
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps, "SetPlaybackFps" }, // 69a44bb7506a4a48d3cf960299242aaf93f9821d
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop, "Stop" }, // 5e5991a43ce5340cb24d5dbd4aa5afacb93eae6f
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex, "UpdateFrameIndex" }, // 36cf3cf75370040de259c4deeaf477a5e11424db
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatableGaussianSplattingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAnimatableGaussianSplattingComponent Property Definitions ***************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatableGaussianSplattingComponent, FrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameIndex_MetaData), NewProp_FrameIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatableGaussianSplattingComponent, FrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameCount_MetaData), NewProp_FrameCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PlaybackFps = { "PlaybackFps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatableGaussianSplattingComponent, PlaybackFps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackFps_MetaData), NewProp_PlaybackFps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaybackFps,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAnimatableGaussianSplattingComponent Property Definitions *****************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplattingComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAnimatableGaussianSplattingComponent,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAnimatableGaussianSplattingComponent_StaticRegisterNativesUAnimatableGaussianSplattingComponent()
{
	UClass* Class = UAnimatableGaussianSplattingComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent;
UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAnimatableGaussianSplattingComponent;
		if (!Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AnimatableGaussianSplattingComponent"),
				Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.InnerSingleton,
				UAnimatableGaussianSplattingComponent_StaticRegisterNativesUAnimatableGaussianSplattingComponent,
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
		return Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAnimatableGaussianSplattingComponent);
UAnimatableGaussianSplattingComponent::~UAnimatableGaussianSplattingComponent() {}
// ********** End Class UAnimatableGaussianSplattingComponent **************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatableGaussianSplattingComponent, TEXT("UAnimatableGaussianSplattingComponent"), &Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatableGaussianSplattingComponent), 1848278386U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h__Script_MLSLabsRenderer_bf8fc12bc7c726796e5a6c14ecf29fef6d8cab38{
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
