// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatableGaussianSplattingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimatableGaussianSplattingComponent() {}

// ********** Begin Cross Module References ********************************************************
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent_NoRegister();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function CanPlay *******************
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics
{
	struct AnimatableGaussianSplattingComponent_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimatableGaussianSplattingComponent_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingComponent_eventCanPlay_Parms), &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "CanPlay", Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::AnimatableGaussianSplattingComponent_eventCanPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::AnimatableGaussianSplattingComponent_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function CanPlay *********************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function IsPlaying *****************
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics
{
	struct AnimatableGaussianSplattingComponent_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimatableGaussianSplattingComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "IsPlaying", Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::AnimatableGaussianSplattingComponent_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::AnimatableGaussianSplattingComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function IsPlaying *******************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function Pause *********************
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function Pause ***********************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function Play **********************
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function Play ************************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function SeekToFrame ***************
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics
{
	struct AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms
	{
		int32 InFrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::NewProp_InFrameIndex = { "InFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms, InFrameIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms), &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::NewProp_InFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "SeekToFrame", Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::AnimatableGaussianSplattingComponent_eventSeekToFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics
{
	struct AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms
	{
		float NewFrameIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFrameIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFrameIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::NewProp_NewFrameIndex = { "NewFrameIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms, NewFrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFrameIndex_MetaData), NewProp_NewFrameIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::NewProp_NewFrameIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "SetFrameIndex", Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics
{
	struct AnimatableGaussianSplattingComponent_eventSetPlaybackFps_Parms
	{
		float NewFps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::NewProp_NewFps = { "NewFps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventSetPlaybackFps_Parms, NewFps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::NewProp_NewFps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "SetPlaybackFps", Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::AnimatableGaussianSplattingComponent_eventSetPlaybackFps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::AnimatableGaussianSplattingComponent_eventSetPlaybackFps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UAnimatableGaussianSplattingComponent Function Stop ************************

// ********** Begin Class UAnimatableGaussianSplattingComponent Function UpdateFrameIndex **********
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics
{
	struct AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms
	{
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "UpdateFrameIndex", Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
void UAnimatableGaussianSplattingComponent::StaticRegisterNativesUAnimatableGaussianSplattingComponent()
{
	UClass* Class = UAnimatableGaussianSplattingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPlay", &UAnimatableGaussianSplattingComponent::execCanPlay },
		{ "IsPlaying", &UAnimatableGaussianSplattingComponent::execIsPlaying },
		{ "Pause", &UAnimatableGaussianSplattingComponent::execPause },
		{ "Play", &UAnimatableGaussianSplattingComponent::execPlay },
		{ "SeekToFrame", &UAnimatableGaussianSplattingComponent::execSeekToFrame },
		{ "SetFrameIndex", &UAnimatableGaussianSplattingComponent::execSetFrameIndex },
		{ "SetPlaybackFps", &UAnimatableGaussianSplattingComponent::execSetPlaybackFps },
		{ "Stop", &UAnimatableGaussianSplattingComponent::execStop },
		{ "UpdateFrameIndex", &UAnimatableGaussianSplattingComponent::execUpdateFrameIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent;
UClass* UAnimatableGaussianSplattingComponent::GetPrivateStaticClass()
{
	using TClass = UAnimatableGaussianSplattingComponent;
	if (!Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimatableGaussianSplattingComponent"),
			Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.InnerSingleton,
			StaticRegisterNativesUAnimatableGaussianSplattingComponent,
			sizeof(TClass),
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
UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent_NoRegister()
{
	return UAnimatableGaussianSplattingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackFps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_CanPlay, "CanPlay" }, // 2311758786
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_IsPlaying, "IsPlaying" }, // 435694103
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Pause, "Pause" }, // 4022705431
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Play, "Play" }, // 1063002507
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SeekToFrame, "SeekToFrame" }, // 1032242965
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex, "SetFrameIndex" }, // 2950539196
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetPlaybackFps, "SetPlaybackFps" }, // 3261980061
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_Stop, "Stop" }, // 3031586184
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex, "UpdateFrameIndex" }, // 1028867243
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatableGaussianSplattingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatableGaussianSplattingComponent, FrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameIndex_MetaData), NewProp_FrameIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatableGaussianSplattingComponent, FrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameCount_MetaData), NewProp_FrameCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_PlaybackFps = { "PlaybackFps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatableGaussianSplattingComponent, PlaybackFps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackFps_MetaData), NewProp_PlaybackFps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_FrameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_PlaybackFps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGaussianSplattingComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::ClassParams = {
	&UAnimatableGaussianSplattingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent()
{
	if (!Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton, Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatableGaussianSplattingComponent);
UAnimatableGaussianSplattingComponent::~UAnimatableGaussianSplattingComponent() {}
// ********** End Class UAnimatableGaussianSplattingComponent **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatableGaussianSplattingComponent, UAnimatableGaussianSplattingComponent::StaticClass, TEXT("UAnimatableGaussianSplattingComponent"), &Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatableGaussianSplattingComponent), 2892852912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h__Script_MLSLabsRenderer_224869974(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
