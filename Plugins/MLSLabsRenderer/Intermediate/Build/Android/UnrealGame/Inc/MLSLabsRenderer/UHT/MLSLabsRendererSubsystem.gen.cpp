// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/MLSLabsRendererSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLSLabsRendererSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsRendererSubsystem();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsRendererSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class UMLSLabsRendererSubsystem Function SetForceFreeCameraMode
struct Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics
{
	struct MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms
	{
		bool bFreeCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabs Renderer" },
		{ "Comment", "/** Optional override for free-camera detection; if unset, engine heuristics apply. */" },
		{ "ModuleRelativePath", "Public/MLSLabsRendererSubsystem.h" },
		{ "ToolTip", "Optional override for free-camera detection; if unset, engine heuristics apply." },
	};
#endif // WITH_METADATA
	static void NewProp_bFreeCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreeCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::NewProp_bFreeCamera_SetBit(void* Obj)
{
	((MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms*)Obj)->bFreeCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::NewProp_bFreeCamera = { "bFreeCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms), &Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::NewProp_bFreeCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::NewProp_bFreeCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLSLabsRendererSubsystem, nullptr, "SetForceFreeCameraMode", nullptr, nullptr, Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMLSLabsRendererSubsystem::execSetForceFreeCameraMode)
{
	P_GET_UBOOL(Z_Param_bFreeCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForceFreeCameraMode(Z_Param_bFreeCamera);
	P_NATIVE_END;
}
// End Class UMLSLabsRendererSubsystem Function SetForceFreeCameraMode

// Begin Class UMLSLabsRendererSubsystem
void UMLSLabsRendererSubsystem::StaticRegisterNativesUMLSLabsRendererSubsystem()
{
	UClass* Class = UMLSLabsRendererSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetForceFreeCameraMode", &UMLSLabsRendererSubsystem::execSetForceFreeCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLSLabsRendererSubsystem);
UClass* Z_Construct_UClass_UMLSLabsRendererSubsystem_NoRegister()
{
	return UMLSLabsRendererSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMLSLabsRendererSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** World subsystem owning the view extension and renderer instance. */" },
		{ "IncludePath", "MLSLabsRendererSubsystem.h" },
		{ "ModuleRelativePath", "Public/MLSLabsRendererSubsystem.h" },
		{ "ToolTip", "World subsystem owning the view extension and renderer instance." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode, "SetForceFreeCameraMode" }, // 655662039
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLSLabsRendererSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMLSLabsRendererSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMLSLabsRendererSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLSLabsRendererSubsystem_Statics::ClassParams = {
	&UMLSLabsRendererSubsystem::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMLSLabsRendererSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMLSLabsRendererSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMLSLabsRendererSubsystem()
{
	if (!Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.OuterSingleton, Z_Construct_UClass_UMLSLabsRendererSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<UMLSLabsRendererSubsystem>()
{
	return UMLSLabsRendererSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMLSLabsRendererSubsystem);
// End Class UMLSLabsRendererSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsRendererSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMLSLabsRendererSubsystem, UMLSLabsRendererSubsystem::StaticClass, TEXT("UMLSLabsRendererSubsystem"), &Z_Registration_Info_UClass_UMLSLabsRendererSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLSLabsRendererSubsystem), 2366255950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsRendererSubsystem_h_2985997701(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsRendererSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsRendererSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
