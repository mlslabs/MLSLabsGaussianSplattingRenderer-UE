// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/GaussianSplatingRendererLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianSplatingRendererLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplatingRendererLibrary();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplatingRendererLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatCurrentTime
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics
{
	struct GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms
	{
		int64 InNodeHashCode;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "GetMlslabsSplatCurrentTime", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::GaussianSplatingRendererLibrary_eventGetMlslabsSplatCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execGetMlslabsSplatCurrentTime)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGaussianSplatingRendererLibrary::GetMlslabsSplatCurrentTime(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatCurrentTime

// Begin Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatDuration
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics
{
	struct GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms
	{
		int64 InNodeHashCode;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "GetMlslabsSplatDuration", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::GaussianSplatingRendererLibrary_eventGetMlslabsSplatDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execGetMlslabsSplatDuration)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGaussianSplatingRendererLibrary::GetMlslabsSplatDuration(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function GetMlslabsSplatDuration

// Begin Class UGaussianSplatingRendererLibrary Function GetSplatNodeBoundingBox
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics
{
	struct GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms
	{
		int64 InNodeHashCode;
		FVector OutMin;
		FVector OutMax;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMax;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms, OutMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms, OutMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_OutMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_OutMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "GetSplatNodeBoundingBox", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::GaussianSplatingRendererLibrary_eventGetSplatNodeBoundingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// End Class UGaussianSplatingRendererLibrary Function GetSplatNodeBoundingBox

// Begin Class UGaussianSplatingRendererLibrary Function InitWithCudaDevice
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics
{
	struct GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms
	{
		int32 InCudaDeviceIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "Comment", "/**\n\x09 * Initializes the renderer using a specific CUDA device.\n\x09 * * @param InCudaDeviceIndex  The index of the GPU device to be used (typically starts from 0).\n\x09 * @return                   Returns 0 if initialization was successful; otherwise, returns an error code.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
		{ "ToolTip", "Initializes the renderer using a specific CUDA device.\n* @param InCudaDeviceIndex  The index of the GPU device to be used (typically starts from 0).\n@return                   Returns 0 if initialization was successful; otherwise, returns an error code." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InCudaDeviceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::NewProp_InCudaDeviceIndex = { "InCudaDeviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms, InCudaDeviceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::NewProp_InCudaDeviceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "InitWithCudaDevice", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::GaussianSplatingRendererLibrary_eventInitWithCudaDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execInitWithCudaDevice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InCudaDeviceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UGaussianSplatingRendererLibrary::InitWithCudaDevice(Z_Param_InCudaDeviceIndex);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function InitWithCudaDevice

// Begin Class UGaussianSplatingRendererLibrary Function IsMlslabsSplatPlaying
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics
{
	struct GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms
	{
		int64 InNodeHashCode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "IsMlslabsSplatPlaying", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::GaussianSplatingRendererLibrary_eventIsMlslabsSplatPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execIsMlslabsSplatPlaying)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::IsMlslabsSplatPlaying(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function IsMlslabsSplatPlaying

// Begin Class UGaussianSplatingRendererLibrary Function PauseMlslabsSplat
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics
{
	struct GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms
	{
		int64 InNodeHashCode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "PauseMlslabsSplat", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::GaussianSplatingRendererLibrary_eventPauseMlslabsSplat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execPauseMlslabsSplat)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::PauseMlslabsSplat(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function PauseMlslabsSplat

// Begin Class UGaussianSplatingRendererLibrary Function SetFrameIndexOfAnimatableSplatNode
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics
{
	struct GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms
	{
		int64 InNodeHashCode;
		int32 InFrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::NewProp_InFrameIndex = { "InFrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms, InFrameIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::NewProp_InFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetFrameIndexOfAnimatableSplatNode", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::GaussianSplatingRendererLibrary_eventSetFrameIndexOfAnimatableSplatNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetFrameIndexOfAnimatableSplatNode)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_PROPERTY(FIntProperty,Z_Param_InFrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetFrameIndexOfAnimatableSplatNode(Z_Param_InNodeHashCode,Z_Param_InFrameIndex);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function SetFrameIndexOfAnimatableSplatNode

// Begin Class UGaussianSplatingRendererLibrary Function SetLogLevel
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics
{
	struct GaussianSplatingRendererLibrary_eventSetLogLevel_Parms
	{
		int32 InLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "Comment", "/** Log verbosity: 0=Trace, 1=Debug, 2=Info, 3=Warn, 4=Error, 5=Critical, 6=Off */" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
		{ "ToolTip", "Log verbosity: 0=Trace, 1=Debug, 2=Info, 3=Warn, 4=Error, 5=Critical, 6=Off" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetLogLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventSetLogLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetLogLevel_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetLogLevel", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::GaussianSplatingRendererLibrary_eventSetLogLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::GaussianSplatingRendererLibrary_eventSetLogLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetLogLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetLogLevel(Z_Param_InLevel);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function SetLogLevel

// Begin Class UGaussianSplatingRendererLibrary Function SetMlslabsSplatTime
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics
{
	struct GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms
	{
		int64 InNodeHashCode;
		float InTimeSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::NewProp_InTimeSeconds = { "InTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms, InTimeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::NewProp_InTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetMlslabsSplatTime", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::GaussianSplatingRendererLibrary_eventSetMlslabsSplatTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetMlslabsSplatTime)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetMlslabsSplatTime(Z_Param_InNodeHashCode,Z_Param_InTimeSeconds);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function SetMlslabsSplatTime

// Begin Class UGaussianSplatingRendererLibrary Function SetSplatNodeTransform
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_InTranslation = { "InTranslation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms, InTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTranslation_MetaData), NewProp_InTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRotation_MetaData), NewProp_InRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScale_MetaData), NewProp_InScale_MetaData) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_InTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_InScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetSplatNodeTransform", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::GaussianSplatingRendererLibrary_eventSetSplatNodeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// End Class UGaussianSplatingRendererLibrary Function SetSplatNodeTransform

// Begin Class UGaussianSplatingRendererLibrary Function SetSplatNodeVisible
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics
{
	struct GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms
	{
		int64 InNodeHashCode;
		bool bInVisible;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static void NewProp_bInVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInVisible;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_bInVisible_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms*)Obj)->bInVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_bInVisible = { "bInVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_bInVisible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_bInVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "SetSplatNodeVisible", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::GaussianSplatingRendererLibrary_eventSetSplatNodeVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execSetSplatNodeVisible)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_GET_UBOOL(Z_Param_bInVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::SetSplatNodeVisible(Z_Param_InNodeHashCode,Z_Param_bInVisible);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function SetSplatNodeVisible

// Begin Class UGaussianSplatingRendererLibrary Function StopMlslabsSplat
struct Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics
{
	struct GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms
	{
		int64 InNodeHashCode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InNodeHashCode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::NewProp_InNodeHashCode = { "InNodeHashCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms, InNodeHashCode), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms), &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::NewProp_InNodeHashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaussianSplatingRendererLibrary, nullptr, "StopMlslabsSplat", nullptr, nullptr, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::GaussianSplatingRendererLibrary_eventStopMlslabsSplat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatingRendererLibrary::execStopMlslabsSplat)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InNodeHashCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGaussianSplatingRendererLibrary::StopMlslabsSplat(Z_Param_InNodeHashCode);
	P_NATIVE_END;
}
// End Class UGaussianSplatingRendererLibrary Function StopMlslabsSplat

// Begin Class UGaussianSplatingRendererLibrary
void UGaussianSplatingRendererLibrary::StaticRegisterNativesUGaussianSplatingRendererLibrary()
{
	UClass* Class = UGaussianSplatingRendererLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMlslabsSplatCurrentTime", &UGaussianSplatingRendererLibrary::execGetMlslabsSplatCurrentTime },
		{ "GetMlslabsSplatDuration", &UGaussianSplatingRendererLibrary::execGetMlslabsSplatDuration },
		{ "GetSplatNodeBoundingBox", &UGaussianSplatingRendererLibrary::execGetSplatNodeBoundingBox },
		{ "InitWithCudaDevice", &UGaussianSplatingRendererLibrary::execInitWithCudaDevice },
		{ "IsMlslabsSplatPlaying", &UGaussianSplatingRendererLibrary::execIsMlslabsSplatPlaying },
		{ "PauseMlslabsSplat", &UGaussianSplatingRendererLibrary::execPauseMlslabsSplat },
		{ "SetFrameIndexOfAnimatableSplatNode", &UGaussianSplatingRendererLibrary::execSetFrameIndexOfAnimatableSplatNode },
		{ "SetLogLevel", &UGaussianSplatingRendererLibrary::execSetLogLevel },
		{ "SetMlslabsSplatTime", &UGaussianSplatingRendererLibrary::execSetMlslabsSplatTime },
		{ "SetSplatNodeTransform", &UGaussianSplatingRendererLibrary::execSetSplatNodeTransform },
		{ "SetSplatNodeVisible", &UGaussianSplatingRendererLibrary::execSetSplatNodeVisible },
		{ "StopMlslabsSplat", &UGaussianSplatingRendererLibrary::execStopMlslabsSplat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGaussianSplatingRendererLibrary);
UClass* Z_Construct_UClass_UGaussianSplatingRendererLibrary_NoRegister()
{
	return UGaussianSplatingRendererLibrary::StaticClass();
}
struct Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Blueprint function library wrapping the native Gaussian splatting renderer DLL. */" },
		{ "IncludePath", "GaussianSplatingRendererLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GaussianSplatingRendererLibrary.h" },
		{ "ToolTip", "Blueprint function library wrapping the native Gaussian splatting renderer DLL." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatCurrentTime, "GetMlslabsSplatCurrentTime" }, // 3588805692
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetMlslabsSplatDuration, "GetMlslabsSplatDuration" }, // 2853447887
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_GetSplatNodeBoundingBox, "GetSplatNodeBoundingBox" }, // 1407620132
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_InitWithCudaDevice, "InitWithCudaDevice" }, // 2186604982
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_IsMlslabsSplatPlaying, "IsMlslabsSplatPlaying" }, // 3072876602
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_PauseMlslabsSplat, "PauseMlslabsSplat" }, // 2571570971
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetFrameIndexOfAnimatableSplatNode, "SetFrameIndexOfAnimatableSplatNode" }, // 3886292463
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetLogLevel, "SetLogLevel" }, // 1097990538
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetMlslabsSplatTime, "SetMlslabsSplatTime" }, // 702155801
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeTransform, "SetSplatNodeTransform" }, // 3899014940
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_SetSplatNodeVisible, "SetSplatNodeVisible" }, // 1197782764
		{ &Z_Construct_UFunction_UGaussianSplatingRendererLibrary_StopMlslabsSplat, "StopMlslabsSplat" }, // 976112354
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianSplatingRendererLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics::ClassParams = {
	&UGaussianSplatingRendererLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaussianSplatingRendererLibrary()
{
	if (!Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.OuterSingleton, Z_Construct_UClass_UGaussianSplatingRendererLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<UGaussianSplatingRendererLibrary>()
{
	return UGaussianSplatingRendererLibrary::StaticClass();
}
UGaussianSplatingRendererLibrary::UGaussianSplatingRendererLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianSplatingRendererLibrary);
UGaussianSplatingRendererLibrary::~UGaussianSplatingRendererLibrary() {}
// End Class UGaussianSplatingRendererLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianSplatingRendererLibrary, UGaussianSplatingRendererLibrary::StaticClass, TEXT("UGaussianSplatingRendererLibrary"), &Z_Registration_Info_UClass_UGaussianSplatingRendererLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianSplatingRendererLibrary), 2070066522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_2000271902(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplatingRendererLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
