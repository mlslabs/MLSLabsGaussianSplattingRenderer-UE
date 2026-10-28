// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaussianSplatingRendererLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGaussianSplatingRendererLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplatingRendererLibrary(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplatingRendererLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatCurrentTime *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms
	{
		int64 InNodeHashCode;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMlslabsSplatCurrentTime constinit property declarations ************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMlslabsSplatCurrentTime constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMlslabsSplatCurrentTime Property Definitions ***********************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMlslabsSplatCurrentTime Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "GetMlslabsSplatCurrentTime", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execGetMlslabsSplatCurrentTime)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGaussianSplatingRendererLibrary::GetMlslabsSplatCurrentTime(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatCurrentTime *******

// ********** Begin Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatDuration ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms
	{
		int64 InNodeHashCode;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMlslabsSplatDuration constinit property declarations ***************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMlslabsSplatDuration constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMlslabsSplatDuration Property Definitions **************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMlslabsSplatDuration Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "GetMlslabsSplatDuration", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execGetMlslabsSplatDuration)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGaussianSplatingRendererLibrary::GetMlslabsSplatDuration(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatDuration **********

// ********** Begin Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatFrameIndex ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatFrameIndex_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventGetMlslabsSplatFrameIndex_Parms
	{
		int64 InNodeHashCode;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMlslabsSplatFrameIndex constinit property declarations *************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMlslabsSplatFrameIndex constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMlslabsSplatFrameIndex Property Definitions ************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatFrameIndex_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatFrameIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMlslabsSplatFrameIndex Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "GetMlslabsSplatFrameIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventGetMlslabsSplatFrameIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventGetMlslabsSplatFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatFrameIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execGetMlslabsSplatFrameIndex)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UGaussianSplatingRendererLibrary::GetMlslabsSplatFrameIndex(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatFrameIndex ********

// ********** Begin Class UGaussianSplatingRendererLibrary Function GetSplatNodeBoundingBox ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms
	{
		int64 InNodeHashCode;
		FVector OutMin;
		FVector OutMax;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSplatNodeBoundingBox constinit property declarations ***************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMax;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSplatNodeBoundingBox constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSplatNodeBoundingBox Property Definitions **************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms, OutMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms, OutMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSplatNodeBoundingBox Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "GetSplatNodeBoundingBox", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execGetSplatNodeBoundingBox)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutMin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::GetSplatNodeBoundingBox(Z_Param_InNodeHashCode,Z_Param_Out_OutMin,Z_Param_Out_OutMax);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function GetSplatNodeBoundingBox **********

// ********** Begin Class UGaussianSplatingRendererLibrary Function InitWithCudaDevice *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms
	{
		int32 InCudaDeviceIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "Comment", "/** Kept for Blueprint compatibility: there is no native renderer to initialize, so this always returns 0. */" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
		{ "ToolTip", "Kept for Blueprint compatibility: there is no native renderer to initialize, so this always returns 0." },
	};
#endif // WITH_METADATA

// ********** Begin Function InitWithCudaDevice constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InCudaDeviceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitWithCudaDevice constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitWithCudaDevice Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InCudaDeviceIndex = { "InCudaDeviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms, InCudaDeviceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InCudaDeviceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitWithCudaDevice Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "InitWithCudaDevice", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execInitWithCudaDevice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InCudaDeviceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UGaussianSplatingRendererLibrary::InitWithCudaDevice(Z_Param_InCudaDeviceIndex);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function InitWithCudaDevice ***************

// ********** Begin Class UGaussianSplatingRendererLibrary Function IsMlslabsSplatPlaying **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms
	{
		int64 InNodeHashCode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsMlslabsSplatPlaying constinit property declarations *****************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsMlslabsSplatPlaying constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsMlslabsSplatPlaying Property Definitions ****************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsMlslabsSplatPlaying Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "IsMlslabsSplatPlaying", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execIsMlslabsSplatPlaying)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::IsMlslabsSplatPlaying(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function IsMlslabsSplatPlaying ************

// ********** Begin Class UGaussianSplatingRendererLibrary Function PauseMlslabsSplat **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms
	{
		int64 InNodeHashCode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PauseMlslabsSplat constinit property declarations *********************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PauseMlslabsSplat constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PauseMlslabsSplat Property Definitions ********************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PauseMlslabsSplat Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "PauseMlslabsSplat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execPauseMlslabsSplat)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::PauseMlslabsSplat(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function PauseMlslabsSplat ****************

// ********** Begin Class UGaussianSplatingRendererLibrary Function SetFrameIndexOfAnimatableSplatNode 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms
	{
		int64 InNodeHashCode;
		int32 InFrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFrameIndexOfAnimatableSplatNode constinit property declarations ****
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFrameIndexOfAnimatableSplatNode constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFrameIndexOfAnimatableSplatNode Property Definitions ***************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InFrameIndex = { "InFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms, InFrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetFrameIndexOfAnimatableSplatNode Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetFrameIndexOfAnimatableSplatNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetFrameIndexOfAnimatableSplatNode)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_PROPERTY(FIntProperty,Z_Param_InFrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetFrameIndexOfAnimatableSplatNode(Z_Param_InNodeHashCode,Z_Param_InFrameIndex);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function SetFrameIndexOfAnimatableSplatNode 

// ********** Begin Class UGaussianSplatingRendererLibrary Function SetLogLevel ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventSetLogLevel_Parms
	{
		int32 InLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "Comment", "/** Kept for Blueprint compatibility: the former native library's log level. No effect. */" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
		{ "ToolTip", "Kept for Blueprint compatibility: the former native library's log level. No effect." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLogLevel constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventSetLogLevel_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLogLevel constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLogLevel Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetLogLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetLogLevel_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLogLevel Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetLogLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventSetLogLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventSetLogLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetLogLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetLogLevel(Z_Param_InLevel);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function SetLogLevel **********************

// ********** Begin Class UGaussianSplatingRendererLibrary Function SetMlslabsSplatFrameIndex ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatFrameIndex_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventSetMlslabsSplatFrameIndex_Parms
	{
		int64 InNodeHashCode;
		int32 InFrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMlslabsSplatFrameIndex constinit property declarations *************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventSetMlslabsSplatFrameIndex_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMlslabsSplatFrameIndex constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMlslabsSplatFrameIndex Property Definitions ************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetMlslabsSplatFrameIndex_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InFrameIndex = { "InFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetMlslabsSplatFrameIndex_Parms, InFrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetMlslabsSplatFrameIndex_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMlslabsSplatFrameIndex Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetMlslabsSplatFrameIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventSetMlslabsSplatFrameIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventSetMlslabsSplatFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatFrameIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetMlslabsSplatFrameIndex)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_PROPERTY(FIntProperty,Z_Param_InFrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetMlslabsSplatFrameIndex(Z_Param_InNodeHashCode,Z_Param_InFrameIndex);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function SetMlslabsSplatFrameIndex ********

// ********** Begin Class UGaussianSplatingRendererLibrary Function SetMlslabsSplatTime ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms
	{
		int64 InNodeHashCode;
		float InTimeSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMlslabsSplatTime constinit property declarations *******************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMlslabsSplatTime constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMlslabsSplatTime Property Definitions ******************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InTimeSeconds = { "InTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms, InTimeSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMlslabsSplatTime Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetMlslabsSplatTime", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetMlslabsSplatTime)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetMlslabsSplatTime(Z_Param_InNodeHashCode,Z_Param_InTimeSeconds);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function SetMlslabsSplatTime **************

// ********** Begin Class UGaussianSplatingRendererLibrary Function SetSplatNodeTransform **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms
	{
		int64 InNodeHashCode;
		FVector InTranslation;
		FRotator InRotation;
		FVector InScale;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTranslation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSplatNodeTransform constinit property declarations *****************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSplatNodeTransform constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSplatNodeTransform Property Definitions ****************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InTranslation = { "InTranslation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms, InTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTranslation_MetaData), NewProp_InTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRotation_MetaData), NewProp_InRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScale_MetaData), NewProp_InScale_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSplatNodeTransform Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetSplatNodeTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetSplatNodeTransform)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InTranslation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetSplatNodeTransform(Z_Param_InNodeHashCode,Z_Param_Out_InTranslation,Z_Param_Out_InRotation,Z_Param_Out_InScale);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function SetSplatNodeTransform ************

// ********** Begin Class UGaussianSplatingRendererLibrary Function SetSplatNodeVisible ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms
	{
		int64 InNodeHashCode;
		bool bInVisible;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSplatNodeVisible constinit property declarations *******************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static void NewProp_bInVisible_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms*)Obj)->bInVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInVisible;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSplatNodeVisible constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSplatNodeVisible Property Definitions ******************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInVisible = { "bInVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms), &UHT_STATICS::NewProp_bInVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSplatNodeVisible Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetSplatNodeVisible", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetSplatNodeVisible)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_UBOOL(Z_Param_bInVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetSplatNodeVisible(Z_Param_InNodeHashCode,Z_Param_bInVisible);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function SetSplatNodeVisible **************

// ********** Begin Class UGaussianSplatingRendererLibrary Function StopMlslabsSplat ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics
struct UHT_STATICS
{
	struct GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms
	{
		int64 InNodeHashCode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopMlslabsSplat constinit property declarations **********************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopMlslabsSplat constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopMlslabsSplat Property Definitions *********************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopMlslabsSplat Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "StopMlslabsSplat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execStopMlslabsSplat)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::StopMlslabsSplat(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatingRendererLibrary Function StopMlslabsSplat *****************

// ********** Begin Class UGaussianSplatingRendererLibrary *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint function library for splat nodes. Static .ply / .sog, .ply / .sog sequences and .mlslabs are parsed\n * and rasterized by UE compute shaders on every platform; .spz / .rad sequences are not supported.\n */" },
		{ "IncludePath", "GaussianSplatingRendererLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
		{ "ToolTip", "Blueprint function library for splat nodes. Static .ply / .sog, .ply / .sog sequences and .mlslabs are parsed\nand rasterized by UE compute shaders on every platform; .spz / .rad sequences are not supported." },
	};
#endif // WITH_METADATA

// ********** Begin Class UGaussianSplatingRendererLibrary constinit property declarations *********
// ********** End Class UGaussianSplatingRendererLibrary constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetMlslabsSplatCurrentTime"), .Pointer = &UGaussianSplatingRendererLibrary::execGetMlslabsSplatCurrentTime },
		{ .NameUTF8 = UTF8TEXT("GetMlslabsSplatDuration"), .Pointer = &UGaussianSplatingRendererLibrary::execGetMlslabsSplatDuration },
		{ .NameUTF8 = UTF8TEXT("GetMlslabsSplatFrameIndex"), .Pointer = &UGaussianSplatingRendererLibrary::execGetMlslabsSplatFrameIndex },
		{ .NameUTF8 = UTF8TEXT("GetSplatNodeBoundingBox"), .Pointer = &UGaussianSplatingRendererLibrary::execGetSplatNodeBoundingBox },
		{ .NameUTF8 = UTF8TEXT("InitWithCudaDevice"), .Pointer = &UGaussianSplatingRendererLibrary::execInitWithCudaDevice },
		{ .NameUTF8 = UTF8TEXT("IsMlslabsSplatPlaying"), .Pointer = &UGaussianSplatingRendererLibrary::execIsMlslabsSplatPlaying },
		{ .NameUTF8 = UTF8TEXT("PauseMlslabsSplat"), .Pointer = &UGaussianSplatingRendererLibrary::execPauseMlslabsSplat },
		{ .NameUTF8 = UTF8TEXT("SetFrameIndexOfAnimatableSplatNode"), .Pointer = &UGaussianSplatingRendererLibrary::execSetFrameIndexOfAnimatableSplatNode },
		{ .NameUTF8 = UTF8TEXT("SetLogLevel"), .Pointer = &UGaussianSplatingRendererLibrary::execSetLogLevel },
		{ .NameUTF8 = UTF8TEXT("SetMlslabsSplatFrameIndex"), .Pointer = &UGaussianSplatingRendererLibrary::execSetMlslabsSplatFrameIndex },
		{ .NameUTF8 = UTF8TEXT("SetMlslabsSplatTime"), .Pointer = &UGaussianSplatingRendererLibrary::execSetMlslabsSplatTime },
		{ .NameUTF8 = UTF8TEXT("SetSplatNodeTransform"), .Pointer = &UGaussianSplatingRendererLibrary::execSetSplatNodeTransform },
		{ .NameUTF8 = UTF8TEXT("SetSplatNodeVisible"), .Pointer = &UGaussianSplatingRendererLibrary::execSetSplatNodeVisible },
		{ .NameUTF8 = UTF8TEXT("StopMlslabsSplat"), .Pointer = &UGaussianSplatingRendererLibrary::execStopMlslabsSplat },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime, "GetMlslabsSplatCurrentTime" }, // 84f449f734638f5fc6ade77b032fd7dec0392ac9
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration, "GetMlslabsSplatDuration" }, // 3c76ffd0ed92e6b8ce55af876f32133824706b3b
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatFrameIndex, "GetMlslabsSplatFrameIndex" }, // 1b9ac908953215672267312ca3a66b0032954721
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox, "GetSplatNodeBoundingBox" }, // 50e43656914a813a9b7eb086e9e1fdd7ab15b0b2
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice, "InitWithCudaDevice" }, // 2ac4eaa65e4d76e70ae4bcb8e3e899899579b3c2
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying, "IsMlslabsSplatPlaying" }, // 6d1d24fe153963c6330d82650dedfdd1bed132bd
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat, "PauseMlslabsSplat" }, // 734ec9a78dfaa55dcdec39bb17d24c21b41bebb3
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode, "SetFrameIndexOfAnimatableSplatNode" }, // 9bb582a5fb9e514885ebe8e903b55493bfd0b756
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel, "SetLogLevel" }, // d341a1fe33e13416543866d8b023e4841e0c8a09
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatFrameIndex, "SetMlslabsSplatFrameIndex" }, // 90bb37ccd1e31d85585ada1f093c32f70a3c6a70
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime, "SetMlslabsSplatTime" }, // d923d9193ecaef309a0f55c664a2b7d75a0dd137
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform, "SetSplatNodeTransform" }, // 975d35ed176445c4918efdb50eaafe32eaf17eda
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible, "SetSplatNodeVisible" }, // 20855295a93653f3d6e4184d0696d1ff53304cd6
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat, "StopMlslabsSplat" }, // 3cb39f367fc548ff25ed8820bad4e47799601da2
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianSplatingRendererLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UGaussianSplatingRendererLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UGaussianSplatingRendererLibrary_StaticRegisterNativesUGaussianSplatingRendererLibrary()
{
	UClass* Class = UGaussianSplatingRendererLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary;
UClass* Z_Construct_UClass_UGaussianSplatingRendererLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UGaussianSplatingRendererLibrary;
		if (!Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("GaussianSplatingRendererLibrary"),
				Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.InnerSingleton,
				UGaussianSplatingRendererLibrary_StaticRegisterNativesUGaussianSplatingRendererLibrary,
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
		return Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.OuterSingleton;
}
#undef UHT_STATICS
UGaussianSplatingRendererLibrary::UGaussianSplatingRendererLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGaussianSplatingRendererLibrary);
UGaussianSplatingRendererLibrary::~UGaussianSplatingRendererLibrary() {}
// ********** End Class UGaussianSplatingRendererLibrary *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h__Script_MLSLabsRenderer_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianSplatingRendererLibrary, TEXT("UGaussianSplatingRendererLibrary"), &Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianSplatingRendererLibrary), 1302729986U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h__Script_MLSLabsRenderer_4b116c384660c29e6eceb08862783d131d090eee{
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
