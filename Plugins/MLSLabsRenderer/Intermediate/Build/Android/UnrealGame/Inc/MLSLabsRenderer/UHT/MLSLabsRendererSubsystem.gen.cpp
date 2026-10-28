// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRendererSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMLSLabsRendererSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsRendererSubsystem(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsRendererSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMLSLabsRendererSubsystem Function SetForceFreeCameraMode ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode_Statics
struct UHT_STATICS
{
	struct MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms
	{
		bool bFreeCamera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabs Renderer" },
		{ "Comment", "/** Optional override for free-camera detection; if unset, engine heuristics apply. */" },
		{ "ModuleRelativePath", "Public/MLSLabsRendererSubsystem.h" },
		{ "ToolTip", "Optional override for free-camera detection; if unset, engine heuristics apply." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetForceFreeCameraMode constinit property declarations ****************
	static void NewProp_bFreeCamera_SetBit(void* Obj)
	{
		((MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms*)Obj)->bFreeCamera = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreeCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetForceFreeCameraMode constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetForceFreeCameraMode Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFreeCamera = { "bFreeCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms), &UHT_STATICS::NewProp_bFreeCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFreeCamera,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetForceFreeCameraMode Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMLSLabsRendererSubsystem, nullptr, "SetForceFreeCameraMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MLSLabsRendererSubsystem_eventSetForceFreeCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMLSLabsRendererSubsystem::execSetForceFreeCameraMode)
{
	P_GET_UBOOL(Z_Param_bFreeCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForceFreeCameraMode(Z_Param_bFreeCamera);
	P_NATIVE_END;
}
// ********** End Class UMLSLabsRendererSubsystem Function SetForceFreeCameraMode ******************

// ********** Begin Class UMLSLabsRendererSubsystem ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMLSLabsRendererSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** World subsystem owning the view extension and renderer instance. */" },
		{ "IncludePath", "MLSLabsRendererSubsystem.h" },
		{ "ModuleRelativePath", "Public/MLSLabsRendererSubsystem.h" },
		{ "ToolTip", "World subsystem owning the view extension and renderer instance." },
	};
#endif // WITH_METADATA

// ********** Begin Class UMLSLabsRendererSubsystem constinit property declarations ****************
// ********** End Class UMLSLabsRendererSubsystem constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetForceFreeCameraMode"), .Pointer = &UMLSLabsRendererSubsystem::execSetForceFreeCameraMode },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLSLabsRendererSubsystem_SetForceFreeCameraMode, "SetForceFreeCameraMode" }, // 8232fe6e274acce0cdc7e2c34f238ddafd0313f7
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLSLabsRendererSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMLSLabsRendererSubsystem,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMLSLabsRendererSubsystem_StaticRegisterNativesUMLSLabsRendererSubsystem()
{
	UClass* Class = UMLSLabsRendererSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMLSLabsRendererSubsystem;
UClass* Z_Construct_UClass_UMLSLabsRendererSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMLSLabsRendererSubsystem;
		if (!Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MLSLabsRendererSubsystem"),
				Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.InnerSingleton,
				UMLSLabsRendererSubsystem_StaticRegisterNativesUMLSLabsRendererSubsystem,
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
		return Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMLSLabsRendererSubsystem.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMLSLabsRendererSubsystem);
// ********** End Class UMLSLabsRendererSubsystem **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsRendererSubsystem_h__Script_MLSLabsRenderer_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMLSLabsRendererSubsystem, TEXT("UMLSLabsRendererSubsystem"), &Z_Registration_Info_UClass_UMLSLabsRendererSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLSLabsRendererSubsystem), 3516630269U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsRendererSubsystem_h__Script_MLSLabsRenderer_51de17989a2431576c40194ce856b80e6d6a1a11{
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
