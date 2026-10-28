// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiscHelperLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMiscHelperLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMiscHelperLibrary(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMiscHelperLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMiscHelperLibrary Function GetConfigBoolean *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean_Statics
struct UHT_STATICS
{
	struct MiscHelperLibrary_eventGetConfigBoolean_Parms
	{
		FString section;
		FString key;
		bool value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function GetConfigBoolean constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static void NewProp_value_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventGetConfigBoolean_Parms*)Obj)->value = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventGetConfigBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConfigBoolean constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConfigBoolean Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigBoolean_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigBoolean_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigBoolean_Parms), &UHT_STATICS::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigBoolean_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetConfigBoolean Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMiscHelperLibrary, nullptr, "GetConfigBoolean", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MiscHelperLibrary_eventGetConfigBoolean_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MiscHelperLibrary_eventGetConfigBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
// ********** End Class UMiscHelperLibrary Function GetConfigBoolean *******************************

// ********** Begin Class UMiscHelperLibrary Function GetConfigFloat *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat_Statics
struct UHT_STATICS
{
	struct MiscHelperLibrary_eventGetConfigFloat_Parms
	{
		FString section;
		FString key;
		float value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function GetConfigFloat constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventGetConfigFloat_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConfigFloat constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConfigFloat Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigFloat_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigFloat_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigFloat_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigFloat_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetConfigFloat Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMiscHelperLibrary, nullptr, "GetConfigFloat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MiscHelperLibrary_eventGetConfigFloat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MiscHelperLibrary_eventGetConfigFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
// ********** End Class UMiscHelperLibrary Function GetConfigFloat *********************************

// ********** Begin Class UMiscHelperLibrary Function GetConfigInteger *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger_Statics
struct UHT_STATICS
{
	struct MiscHelperLibrary_eventGetConfigInteger_Parms
	{
		FString section;
		FString key;
		int32 value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function GetConfigInteger constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventGetConfigInteger_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConfigInteger constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConfigInteger Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigInteger_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigInteger_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigInteger_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigInteger_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetConfigInteger Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMiscHelperLibrary, nullptr, "GetConfigInteger", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MiscHelperLibrary_eventGetConfigInteger_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MiscHelperLibrary_eventGetConfigInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
// ********** End Class UMiscHelperLibrary Function GetConfigInteger *******************************

// ********** Begin Class UMiscHelperLibrary Function GetConfigString ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString_Statics
struct UHT_STATICS
{
	struct MiscHelperLibrary_eventGetConfigString_Parms
	{
		FString section;
		FString key;
		FString value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function GetConfigString constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventGetConfigString_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConfigString constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConfigString Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigString_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigString_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventGetConfigString_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventGetConfigString_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetConfigString Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMiscHelperLibrary, nullptr, "GetConfigString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MiscHelperLibrary_eventGetConfigString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MiscHelperLibrary_eventGetConfigString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
// ********** End Class UMiscHelperLibrary Function GetConfigString ********************************

// ********** Begin Class UMiscHelperLibrary Function SetConfigBoolean *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean_Statics
struct UHT_STATICS
{
	struct MiscHelperLibrary_eventSetConfigBoolean_Parms
	{
		FString section;
		FString key;
		bool value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function SetConfigBoolean constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static void NewProp_value_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventSetConfigBoolean_Parms*)Obj)->value = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventSetConfigBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetConfigBoolean constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetConfigBoolean Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigBoolean_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigBoolean_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigBoolean_Parms), &UHT_STATICS::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigBoolean_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetConfigBoolean Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMiscHelperLibrary, nullptr, "SetConfigBoolean", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MiscHelperLibrary_eventSetConfigBoolean_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MiscHelperLibrary_eventSetConfigBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
// ********** End Class UMiscHelperLibrary Function SetConfigBoolean *******************************

// ********** Begin Class UMiscHelperLibrary Function SetConfigFloat *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat_Statics
struct UHT_STATICS
{
	struct MiscHelperLibrary_eventSetConfigFloat_Parms
	{
		FString section;
		FString key;
		float value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function SetConfigFloat constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventSetConfigFloat_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetConfigFloat constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetConfigFloat Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigFloat_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigFloat_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigFloat_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigFloat_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetConfigFloat Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMiscHelperLibrary, nullptr, "SetConfigFloat", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MiscHelperLibrary_eventSetConfigFloat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MiscHelperLibrary_eventSetConfigFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
// ********** End Class UMiscHelperLibrary Function SetConfigFloat *********************************

// ********** Begin Class UMiscHelperLibrary Function SetConfigInteger *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger_Statics
struct UHT_STATICS
{
	struct MiscHelperLibrary_eventSetConfigInteger_Parms
	{
		FString section;
		FString key;
		int32 value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function SetConfigInteger constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventSetConfigInteger_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetConfigInteger constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetConfigInteger Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigInteger_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigInteger_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigInteger_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigInteger_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetConfigInteger Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMiscHelperLibrary, nullptr, "SetConfigInteger", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MiscHelperLibrary_eventSetConfigInteger_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MiscHelperLibrary_eventSetConfigInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
// ********** End Class UMiscHelperLibrary Function SetConfigInteger *******************************

// ********** Begin Class UMiscHelperLibrary Function SetConfigString ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString_Statics
struct UHT_STATICS
{
	struct MiscHelperLibrary_eventSetConfigString_Parms
	{
		FString section;
		FString key;
		FString value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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

// ********** Begin Function SetConfigString constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscHelperLibrary_eventSetConfigString_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetConfigString constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetConfigString Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_section = { "section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigString_Parms, section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_section_MetaData), NewProp_section_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigString_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MiscHelperLibrary_eventSetConfigString_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MiscHelperLibrary_eventSetConfigString_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_section,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetConfigString Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMiscHelperLibrary, nullptr, "SetConfigString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MiscHelperLibrary_eventSetConfigString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MiscHelperLibrary_eventSetConfigString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
// ********** End Class UMiscHelperLibrary Function SetConfigString ********************************

// ********** Begin Class UMiscHelperLibrary *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMiscHelperLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MiscHelperLibrary.h" },
		{ "ModuleRelativePath", "Public/MiscHelperLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMiscHelperLibrary constinit property declarations ***********************
// ********** End Class UMiscHelperLibrary constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetConfigBoolean"), .Pointer = &UMiscHelperLibrary::execGetConfigBoolean },
		{ .NameUTF8 = UTF8TEXT("GetConfigFloat"), .Pointer = &UMiscHelperLibrary::execGetConfigFloat },
		{ .NameUTF8 = UTF8TEXT("GetConfigInteger"), .Pointer = &UMiscHelperLibrary::execGetConfigInteger },
		{ .NameUTF8 = UTF8TEXT("GetConfigString"), .Pointer = &UMiscHelperLibrary::execGetConfigString },
		{ .NameUTF8 = UTF8TEXT("SetConfigBoolean"), .Pointer = &UMiscHelperLibrary::execSetConfigBoolean },
		{ .NameUTF8 = UTF8TEXT("SetConfigFloat"), .Pointer = &UMiscHelperLibrary::execSetConfigFloat },
		{ .NameUTF8 = UTF8TEXT("SetConfigInteger"), .Pointer = &UMiscHelperLibrary::execSetConfigInteger },
		{ .NameUTF8 = UTF8TEXT("SetConfigString"), .Pointer = &UMiscHelperLibrary::execSetConfigString },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigBoolean, "GetConfigBoolean" }, // f4a1fc462a18c591f524d1fcb950f1cea3c1f5db
		{ &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigFloat, "GetConfigFloat" }, // d8df006dc8a335ecb4be052068207c94843962aa
		{ &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigInteger, "GetConfigInteger" }, // 8c92a6fc9e9a093d3df490a52cf17788b2515a57
		{ &Z_Construct_UFunction_UMiscHelperLibrary_GetConfigString, "GetConfigString" }, // e8fb32362a40c2521d8e17edcce5c70386bcba25
		{ &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigBoolean, "SetConfigBoolean" }, // 4db48db101ef08c8cb7c4456ba663158ab9aa8d2
		{ &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigFloat, "SetConfigFloat" }, // 414d6dc4dd019c4e0c5f1d09926576310c075b35
		{ &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigInteger, "SetConfigInteger" }, // b57f2f423ee967fb2df86cbd0140d9abd8f3c268
		{ &Z_Construct_UFunction_UMiscHelperLibrary_SetConfigString, "SetConfigString" }, // b81ba85f90302224152476953eb245f3001c9953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMiscHelperLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMiscHelperLibrary,
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
static void UMiscHelperLibrary_StaticRegisterNativesUMiscHelperLibrary()
{
	UClass* Class = UMiscHelperLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMiscHelperLibrary;
UClass* Z_Construct_UClass_UMiscHelperLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMiscHelperLibrary;
		if (!Z_Registration_Info_UClass_UMiscHelperLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MiscHelperLibrary"),
				Z_Registration_Info_UClass_UMiscHelperLibrary.InnerSingleton,
				UMiscHelperLibrary_StaticRegisterNativesUMiscHelperLibrary,
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
		return Z_Registration_Info_UClass_UMiscHelperLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMiscHelperLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMiscHelperLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMiscHelperLibrary.OuterSingleton;
}
#undef UHT_STATICS
UMiscHelperLibrary::UMiscHelperLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMiscHelperLibrary);
UMiscHelperLibrary::~UMiscHelperLibrary() {}
// ********** End Class UMiscHelperLibrary *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MiscHelperLibrary_h__Script_MLSLabsRenderer_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMiscHelperLibrary, TEXT("UMiscHelperLibrary"), &Z_Registration_Info_UClass_UMiscHelperLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMiscHelperLibrary), 1776693340U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MiscHelperLibrary_h__Script_MLSLabsRenderer_990679559c4096614524851822eea5aee8edcec0{
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
