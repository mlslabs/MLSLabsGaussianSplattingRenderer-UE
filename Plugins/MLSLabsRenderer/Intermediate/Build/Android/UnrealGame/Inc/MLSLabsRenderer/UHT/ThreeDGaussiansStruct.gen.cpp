// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThreeDGaussiansStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeThreeDGaussiansStruct() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase);
MLSLABSRENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansAnimation(ETypeConstructPhase);
MLSLABSRENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FThreeDGaussiansData **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FThreeDGaussiansData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FThreeDGaussiansData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FThreeDGaussiansData Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SplatFileName = { "SplatFileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansData, SplatFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatFileName_MetaData), NewProp_SplatFileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplatFileName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FThreeDGaussiansData Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
	nullptr,
	&NewStructOps,
	"ThreeDGaussiansData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FThreeDGaussiansData>(),
	alignof(FThreeDGaussiansData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FThreeDGaussiansData;
UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThreeDGaussiansData, (UObject*)Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase::Outer), TEXT("ThreeDGaussiansData"));
		}
		return Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FThreeDGaussiansData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FThreeDGaussiansData ************************************************

// ********** Begin ScriptStruct FThreeDGaussiansAnimation *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FThreeDGaussiansAnimation>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FThreeDGaussiansAnimation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FThreeDGaussiansAnimation Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SplatFiles_Inner = { "SplatFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SplatFiles = { "SplatFiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansAnimation, SplatFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatFiles_MetaData), NewProp_SplatFiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SplatFileDirName = { "SplatFileDirName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansAnimation, SplatFileDirName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatFileDirName_MetaData), NewProp_SplatFileDirName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FrameNum = { "FrameNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FThreeDGaussiansAnimation, FrameNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameNum_MetaData), NewProp_FrameNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplatFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplatFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplatFileDirName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameNum,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FThreeDGaussiansAnimation Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
	nullptr,
	&NewStructOps,
	"ThreeDGaussiansAnimation",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FThreeDGaussiansAnimation>(),
	alignof(FThreeDGaussiansAnimation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation;
UScriptStruct* Z_Construct_UScriptStruct_FThreeDGaussiansAnimation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThreeDGaussiansAnimation, (UObject*)Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase::Outer), TEXT("ThreeDGaussiansAnimation"));
		}
		return Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FThreeDGaussiansAnimation *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h__Script_MLSLabsRenderer_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FThreeDGaussiansData, Z_Construct_UScriptStruct_FThreeDGaussiansData_Statics::NewStructOps, TEXT("ThreeDGaussiansData"),&Z_Registration_Info_UScriptStruct_FThreeDGaussiansData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThreeDGaussiansData), 807898513U) },
		{ Z_Construct_UScriptStruct_FThreeDGaussiansAnimation, Z_Construct_UScriptStruct_FThreeDGaussiansAnimation_Statics::NewStructOps, TEXT("ThreeDGaussiansAnimation"),&Z_Registration_Info_UScriptStruct_FThreeDGaussiansAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThreeDGaussiansAnimation), 190411863U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_ThreeDGaussiansStruct_h__Script_MLSLabsRenderer_3473e86e0943648a245c2e48eb837eb121d6ff41{
	TEXT("/Script/MLSLabsRenderer"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
