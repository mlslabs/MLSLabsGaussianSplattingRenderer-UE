// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/ThreeDGaussiansStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThreeDGaussiansStruct() {}

// Begin Cross Module References
MLSLABSRENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansAnimation();
MLSLABSRENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansData();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin ScriptStruct FThreeDGaussiansData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ThreeDGaussiansData;
class UScriptStruct* FThreeDGaussiansData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ThreeDGaussiansData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ThreeDGaussiansData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThreeDGaussiansData, (UObject*)Z_Construct_UPackage__Script_MLSLabsRenderer(), TEXT("ThreeDGaussiansData"));
	}
	return Z_Registration_Info_UScriptStruct_ThreeDGaussiansData.OuterSingleton;
}
template<> MLSLABSRENDERER_API UScriptStruct* StaticStruct<FThreeDGaussiansData>()
{
	return FThreeDGaussiansData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics
{
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplatFileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThreeDGaussiansData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::NewProp_SplatFileName = { "SplatFileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansData, SplatFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatFileName_MetaData), NewProp_SplatFileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::NewProp_SplatFileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::PropPointers) < 2048);
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
	if (!Z_Registration_Info_UScriptStruct_ThreeDGaussiansData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ThreeDGaussiansData.InnerSingleton, Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ThreeDGaussiansData.InnerSingleton;
}
// End ScriptStruct FThreeDGaussiansData

// Begin ScriptStruct FThreeDGaussiansAnimation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ThreeDGaussiansAnimation;
class UScriptStruct* FThreeDGaussiansAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ThreeDGaussiansAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ThreeDGaussiansAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThreeDGaussiansAnimation, (UObject*)Z_Construct_UPackage__Script_MLSLabsRenderer(), TEXT("ThreeDGaussiansAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_ThreeDGaussiansAnimation.OuterSingleton;
}
template<> MLSLABSRENDERER_API UScriptStruct* StaticStruct<FThreeDGaussiansAnimation>()
{
	return FThreeDGaussiansAnimation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics
{
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplatFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplatFiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplatFileDirName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThreeDGaussiansAnimation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
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
	if (!Z_Registration_Info_UScriptStruct_ThreeDGaussiansAnimation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ThreeDGaussiansAnimation.InnerSingleton, Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ThreeDGaussiansAnimation.InnerSingleton;
}
// End ScriptStruct FThreeDGaussiansAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FThreeDGaussiansData::StaticStruct, Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::NewStructOps, TEXT("ThreeDGaussiansData"), &Z_Registration_Info_UScriptStruct_ThreeDGaussiansData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThreeDGaussiansData), 2657223499U) },
		{ FThreeDGaussiansAnimation::StaticStruct, Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewStructOps, TEXT("ThreeDGaussiansAnimation"), &Z_Registration_Info_UScriptStruct_ThreeDGaussiansAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThreeDGaussiansAnimation), 26601818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h_582800842(TEXT("/Script/MLSLabsRenderer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
