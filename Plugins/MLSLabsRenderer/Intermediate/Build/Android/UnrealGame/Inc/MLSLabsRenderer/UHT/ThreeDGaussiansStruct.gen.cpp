// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDGaussiansStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeThreeDGaussiansStruct() {}

// ********** Begin Cross Module References ********************************************************
MLSLABSRENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansAnimation();
MLSLABSRENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansData();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FThreeDGaussiansData **********************************************
struct Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FThreeDGaussiansData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FThreeDGaussiansData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Payload for Blueprint/C++ interchange (static splat). */" },
		{ "ModuleRelativePath", "Public/ThreeDGaussiansStruct.h" },
		{ "ToolTip", "Payload for Blueprint/C++ interchange (static splat)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatFileName_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/ThreeDGaussiansStruct.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FThreeDGaussiansData constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplatFileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FThreeDGaussiansData constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThreeDGaussiansData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FThreeDGaussiansData;
class UScriptStruct* FThreeDGaussiansData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThreeDGaussiansData, (UObject*)Z_Construct_UPackage__Script_MLSLabsRenderer(), TEXT("ThreeDGaussiansData"));
	}
	return Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.OuterSingleton;
	}

// ********** Begin ScriptStruct FThreeDGaussiansData Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::NewProp_SplatFileName = { "SplatFileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansData, SplatFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatFileName_MetaData), NewProp_SplatFileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::NewProp_SplatFileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FThreeDGaussiansData Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
	nullptr,
	&NewStructOps,
	"ThreeDGaussiansData",
	Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::PropPointers),
	sizeof(FThreeDGaussiansData),
	alignof(FThreeDGaussiansData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansData()
{
	if (!Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.InnerSingleton, Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.InnerSingleton);
}
// ********** End ScriptStruct FThreeDGaussiansData ************************************************

// ********** Begin ScriptStruct FThreeDGaussiansAnimation *****************************************
struct Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FThreeDGaussiansAnimation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FThreeDGaussiansAnimation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Payload for Blueprint/C++ interchange (animated splat sequence). */" },
		{ "ModuleRelativePath", "Public/ThreeDGaussiansStruct.h" },
		{ "ToolTip", "Payload for Blueprint/C++ interchange (animated splat sequence)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatFiles_MetaData[] = {
		{ "Category", "3D Gaussians" },
		{ "ModuleRelativePath", "Public/ThreeDGaussiansStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatFileDirName_MetaData[] = {
		{ "Category", "3D Gaussians" },
		{ "ModuleRelativePath", "Public/ThreeDGaussiansStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameNum_MetaData[] = {
		{ "Category", "3D Gaussians" },
		{ "ModuleRelativePath", "Public/ThreeDGaussiansStruct.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FThreeDGaussiansAnimation constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplatFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplatFiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplatFileDirName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FThreeDGaussiansAnimation constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThreeDGaussiansAnimation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation;
class UScriptStruct* FThreeDGaussiansAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThreeDGaussiansAnimation, (UObject*)Z_Construct_UPackage__Script_MLSLabsRenderer(), TEXT("ThreeDGaussiansAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.OuterSingleton;
	}

// ********** Begin ScriptStruct FThreeDGaussiansAnimation Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewProp_SplatFiles_Inner = { "SplatFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewProp_SplatFiles = { "SplatFiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansAnimation, SplatFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatFiles_MetaData), NewProp_SplatFiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewProp_SplatFileDirName = { "SplatFileDirName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansAnimation, SplatFileDirName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatFileDirName_MetaData), NewProp_SplatFileDirName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewProp_FrameNum = { "FrameNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansAnimation, FrameNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameNum_MetaData), NewProp_FrameNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewProp_SplatFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewProp_SplatFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewProp_SplatFileDirName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewProp_FrameNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FThreeDGaussiansAnimation Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
	nullptr,
	&NewStructOps,
	"ThreeDGaussiansAnimation",
	Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::PropPointers),
	sizeof(FThreeDGaussiansAnimation),
	alignof(FThreeDGaussiansAnimation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansAnimation()
{
	if (!Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.InnerSingleton, Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.InnerSingleton);
}
// ********** End ScriptStruct FThreeDGaussiansAnimation *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h__Script_MLSLabsRenderer_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FThreeDGaussiansData::StaticStruct, Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::NewStructOps, TEXT("ThreeDGaussiansData"),&Z_Registration_Info_UScriptStruct_FThreeDGaussiansData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThreeDGaussiansData), 3731226624U) },
		{ FThreeDGaussiansAnimation::StaticStruct, Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewStructOps, TEXT("ThreeDGaussiansAnimation"),&Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThreeDGaussiansAnimation), 2086369972U) },
	};
}; // Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h__Script_MLSLabsRenderer_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h__Script_MLSLabsRenderer_4181652722{
	TEXT("/Script/MLSLabsRenderer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h__Script_MLSLabsRenderer_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h__Script_MLSLabsRenderer_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
