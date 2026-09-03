// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/MiscHelperLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiscHelperLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMiscHelperLibrary();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMiscHelperLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class UMiscHelperLibrary Function GetConfigBoolean
struct Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics
{
	struct MiscHelperLibrary_eventGetConfigBoolean_Parms
	{
		FString section;
		FString key;
		bool value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MiscHelper|Core" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigBoolean_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigBoolean_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
void Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_value_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventGetConfigBoolean_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigBoolean_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventGetConfigBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigBoolean_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscHelperLibrary, nullptr, "GetConfigBoolean", nullptr, nullptr, Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::MiscHelperLibrary_eventGetConfigBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::MiscHelperLibrary_eventGetConfigBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMiscHelperLibrary::execGetConfigBoolean)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_section);
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_UBOOL_REF(Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMiscHelperLibrary::GetConfigBoolean(Z_Param_section,Z_Param_key,Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class UMiscHelperLibrary Function GetConfigBoolean

// Begin Class UMiscHelperLibrary Function GetConfigFloat
struct Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics
{
	struct MiscHelperLibrary_eventGetConfigFloat_Parms
	{
		FString section;
		FString key;
		float value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MiscHelper|Core" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigFloat_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigFloat_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigFloat_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventGetConfigFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigFloat_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscHelperLibrary, nullptr, "GetConfigFloat", nullptr, nullptr, Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::MiscHelperLibrary_eventGetConfigFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::MiscHelperLibrary_eventGetConfigFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMiscHelperLibrary::execGetConfigFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_section);
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMiscHelperLibrary::GetConfigFloat(Z_Param_section,Z_Param_key,Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class UMiscHelperLibrary Function GetConfigFloat

// Begin Class UMiscHelperLibrary Function GetConfigInteger
struct Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics
{
	struct MiscHelperLibrary_eventGetConfigInteger_Parms
	{
		FString section;
		FString key;
		int32 value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MiscHelper|Core" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigInteger_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigInteger_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigInteger_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventGetConfigInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigInteger_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscHelperLibrary, nullptr, "GetConfigInteger", nullptr, nullptr, Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::MiscHelperLibrary_eventGetConfigInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::MiscHelperLibrary_eventGetConfigInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMiscHelperLibrary::execGetConfigInteger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_section);
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMiscHelperLibrary::GetConfigInteger(Z_Param_section,Z_Param_key,Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class UMiscHelperLibrary Function GetConfigInteger

// Begin Class UMiscHelperLibrary Function GetConfigString
struct Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics
{
	struct MiscHelperLibrary_eventGetConfigString_Parms
	{
		FString section;
		FString key;
		FString value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MiscHelper|Core" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigString_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigString_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigString_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventGetConfigString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigString_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscHelperLibrary, nullptr, "GetConfigString", nullptr, nullptr, Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::MiscHelperLibrary_eventGetConfigString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::MiscHelperLibrary_eventGetConfigString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMiscHelperLibrary::execGetConfigString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_section);
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMiscHelperLibrary::GetConfigString(Z_Param_section,Z_Param_key,Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class UMiscHelperLibrary Function GetConfigString

// Begin Class UMiscHelperLibrary Function SetConfigBoolean
struct Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics
{
	struct MiscHelperLibrary_eventSetConfigBoolean_Parms
	{
		FString section;
		FString key;
		bool value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MiscHelper|Core" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigBoolean_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigBoolean_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
void Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_value_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventSetConfigBoolean_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigBoolean_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventSetConfigBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigBoolean_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscHelperLibrary, nullptr, "SetConfigBoolean", nullptr, nullptr, Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::MiscHelperLibrary_eventSetConfigBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::MiscHelperLibrary_eventSetConfigBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMiscHelperLibrary::execSetConfigBoolean)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_section);
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_UBOOL(Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMiscHelperLibrary::SetConfigBoolean(Z_Param_section,Z_Param_key,Z_Param_value);
	P_NATIVE_END;
}
// End Class UMiscHelperLibrary Function SetConfigBoolean

// Begin Class UMiscHelperLibrary Function SetConfigFloat
struct Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics
{
	struct MiscHelperLibrary_eventSetConfigFloat_Parms
	{
		FString section;
		FString key;
		float value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MiscHelper|Core" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigFloat_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigFloat_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigFloat_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventSetConfigFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigFloat_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscHelperLibrary, nullptr, "SetConfigFloat", nullptr, nullptr, Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::MiscHelperLibrary_eventSetConfigFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::MiscHelperLibrary_eventSetConfigFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMiscHelperLibrary::execSetConfigFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_section);
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMiscHelperLibrary::SetConfigFloat(Z_Param_section,Z_Param_key,Z_Param_value);
	P_NATIVE_END;
}
// End Class UMiscHelperLibrary Function SetConfigFloat

// Begin Class UMiscHelperLibrary Function SetConfigInteger
struct Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics
{
	struct MiscHelperLibrary_eventSetConfigInteger_Parms
	{
		FString section;
		FString key;
		int32 value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MiscHelper|Core" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigInteger_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigInteger_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigInteger_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventSetConfigInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigInteger_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscHelperLibrary, nullptr, "SetConfigInteger", nullptr, nullptr, Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::MiscHelperLibrary_eventSetConfigInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::MiscHelperLibrary_eventSetConfigInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMiscHelperLibrary::execSetConfigInteger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_section);
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_PROPERTY(FIntProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMiscHelperLibrary::SetConfigInteger(Z_Param_section,Z_Param_key,Z_Param_value);
	P_NATIVE_END;
}
// End Class UMiscHelperLibrary Function SetConfigInteger

// Begin Class UMiscHelperLibrary Function SetConfigString
struct Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics
{
	struct MiscHelperLibrary_eventSetConfigString_Parms
	{
		FString section;
		FString key;
		FString value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MiscHelper|Core" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigString_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigString_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigString_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
void Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MiscHelperLibrary_eventSetConfigString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigString_Parms), &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscHelperLibrary, nullptr, "SetConfigString", nullptr, nullptr, Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::MiscHelperLibrary_eventSetConfigString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::MiscHelperLibrary_eventSetConfigString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMiscHelperLibrary::execSetConfigString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_section);
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_PROPERTY(FStrProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMiscHelperLibrary::SetConfigString(Z_Param_section,Z_Param_key,Z_Param_value);
	P_NATIVE_END;
}
// End Class UMiscHelperLibrary Function SetConfigString

// Begin Class UMiscHelperLibrary
void UMiscHelperLibrary::StaticRegisterNativesUMiscHelperLibrary()
{
	UClass* Class = UMiscHelperLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetConfigBoolean", &UMiscHelperLibrary::execGetConfigBoolean },
		{ "GetConfigFloat", &UMiscHelperLibrary::execGetConfigFloat },
		{ "GetConfigInteger", &UMiscHelperLibrary::execGetConfigInteger },
		{ "GetConfigString", &UMiscHelperLibrary::execGetConfigString },
		{ "SetConfigBoolean", &UMiscHelperLibrary::execSetConfigBoolean },
		{ "SetConfigFloat", &UMiscHelperLibrary::execSetConfigFloat },
		{ "SetConfigInteger", &UMiscHelperLibrary::execSetConfigInteger },
		{ "SetConfigString", &UMiscHelperLibrary::execSetConfigString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMiscHelperLibrary);
UClass* Z_Construct_UClass_UMiscHelperLibrary_NoRegister()
{
	return UMiscHelperLibrary::StaticClass();
}
struct Z_Construct_UClass_UMiscHelperLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MiscHelperLibrary.h" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean, "GetConfigBoolean" }, // 1506159923
		{ &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat, "GetConfigFloat" }, // 603655563
		{ &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger, "GetConfigInteger" }, // 2922801898
		{ &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString, "GetConfigString" }, // 4242369494
		{ &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean, "SetConfigBoolean" }, // 91258780
		{ &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat, "SetConfigFloat" }, // 2522374246
		{ &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger, "SetConfigInteger" }, // 2314004641
		{ &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString, "SetConfigString" }, // 1155102180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMiscHelperLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMiscHelperLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMiscHelperLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMiscHelperLibrary_Statics::ClassParams = {
	&UMiscHelperLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMiscHelperLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMiscHelperLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMiscHelperLibrary()
{
	if (!Z_Registration_Info_UClass_UMiscHelperLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMiscHelperLibrary.OuterSingleton, Z_Construct_UClass_UMiscHelperLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMiscHelperLibrary.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<UMiscHelperLibrary>()
{
	return UMiscHelperLibrary::StaticClass();
}
UMiscHelperLibrary::UMiscHelperLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMiscHelperLibrary);
UMiscHelperLibrary::~UMiscHelperLibrary() {}
// End Class UMiscHelperLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MiscHelperLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMiscHelperLibrary, UMiscHelperLibrary::StaticClass, TEXT("UMiscHelperLibrary"), &Z_Registration_Info_UClass_UMiscHelperLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMiscHelperLibrary), 2410216497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MiscHelperLibrary_h_3086012040(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MiscHelperLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MiscHelperLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
