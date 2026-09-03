// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/GaussianSplattingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaussianSplattingComponent() {}

// Begin Cross Module References
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent_NoRegister();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UNoPhysicsPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class UGaussianSplattingComponent
void UGaussianSplattingComponent::StaticRegisterNativesUGaussianSplattingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGaussianSplattingComponent);
UClass* Z_Construct_UClass_UGaussianSplattingComponent_NoRegister()
{
	return UGaussianSplattingComponent::StaticClass();
}
struct Z_Construct_UClass_UGaussianSplattingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GaussianSplattingComponent.h" },
		{ "ModuleRelativePath", "Public/GaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatDataPath_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/GaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplatDataPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianSplattingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGaussianSplattingComponent_Statics::NewProp_SplatDataPath = { "SplatDataPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplattingComponent, SplatDataPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatDataPath_MetaData), NewProp_SplatDataPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaussianSplattingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplattingComponent_Statics::NewProp_SplatDataPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplattingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGaussianSplattingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNoPhysicsPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplattingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianSplattingComponent_Statics::ClassParams = {
	&UGaussianSplattingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGaussianSplattingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplattingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplattingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianSplattingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaussianSplattingComponent()
{
	if (!Z_Registration_Info_UClass_UGaussianSplattingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianSplattingComponent.OuterSingleton, Z_Construct_UClass_UGaussianSplattingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianSplattingComponent.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<UGaussianSplattingComponent>()
{
	return UGaussianSplattingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianSplattingComponent);
UGaussianSplattingComponent::~UGaussianSplattingComponent() {}
// End Class UGaussianSplattingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianSplattingComponent, UGaussianSplattingComponent::StaticClass, TEXT("UGaussianSplattingComponent"), &Z_Registration_Info_UClass_UGaussianSplattingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianSplattingComponent), 3055400094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingComponent_h_1507501115(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_GaussianSplattingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
