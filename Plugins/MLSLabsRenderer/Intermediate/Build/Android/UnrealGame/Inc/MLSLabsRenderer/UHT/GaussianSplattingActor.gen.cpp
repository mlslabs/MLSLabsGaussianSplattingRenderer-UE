// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaussianSplattingActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGaussianSplattingActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AGaussianSplattingActor();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AGaussianSplattingActor_NoRegister();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGaussianSplattingActor **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGaussianSplattingActor;
UClass* AGaussianSplattingActor::GetPrivateStaticClass()
{
	using TClass = AGaussianSplattingActor;
	if (!Z_Registration_Info_UClass_AGaussianSplattingActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GaussianSplattingActor"),
			Z_Registration_Info_UClass_AGaussianSplattingActor.InnerSingleton,
			StaticRegisterNativesAGaussianSplattingActor,
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
	return Z_Registration_Info_UClass_AGaussianSplattingActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AGaussianSplattingActor_NoRegister()
{
	return AGaussianSplattingActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGaussianSplattingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GaussianSplattingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GaussianSplattingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplattingComponent_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaussianSplattingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGaussianSplattingActor constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplattingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGaussianSplattingActor constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaussianSplattingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGaussianSplattingActor_Statics

// ********** Begin Class AGaussianSplattingActor Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaussianSplattingActor_Statics::NewProp_SplattingComponent = { "SplattingComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianSplattingActor, SplattingComponent), Z_Construct_UClass_UGaussianSplattingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplattingComponent_MetaData), NewProp_SplattingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaussianSplattingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianSplattingActor_Statics::NewProp_SplattingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianSplattingActor_Statics::PropPointers) < 2048);
// ********** End Class AGaussianSplattingActor Property Definitions *******************************
UObject* (*const Z_Construct_UClass_AGaussianSplattingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianSplattingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGaussianSplattingActor_Statics::ClassParams = {
	&AGaussianSplattingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGaussianSplattingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianSplattingActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianSplattingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGaussianSplattingActor_Statics::Class_MetaDataParams)
};
void AGaussianSplattingActor::StaticRegisterNativesAGaussianSplattingActor()
{
}
UClass* Z_Construct_UClass_AGaussianSplattingActor()
{
	if (!Z_Registration_Info_UClass_AGaussianSplattingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGaussianSplattingActor.OuterSingleton, Z_Construct_UClass_AGaussianSplattingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGaussianSplattingActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGaussianSplattingActor);
AGaussianSplattingActor::~AGaussianSplattingActor() {}
// ********** End Class AGaussianSplattingActor ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingActor_h__Script_MLSLabsRenderer_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGaussianSplattingActor, AGaussianSplattingActor::StaticClass, TEXT("AGaussianSplattingActor"), &Z_Registration_Info_UClass_AGaussianSplattingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGaussianSplattingActor), 204055474U) },
	};
}; // Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingActor_h__Script_MLSLabsRenderer_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingActor_h__Script_MLSLabsRenderer_1781008459{
	TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingActor_h__Script_MLSLabsRenderer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingActor_h__Script_MLSLabsRenderer_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
