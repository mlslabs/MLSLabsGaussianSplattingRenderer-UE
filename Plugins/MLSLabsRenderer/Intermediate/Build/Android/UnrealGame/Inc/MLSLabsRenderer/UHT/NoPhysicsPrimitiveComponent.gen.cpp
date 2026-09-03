// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/NoPhysicsPrimitiveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoPhysicsPrimitiveComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UNoPhysicsPrimitiveComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UNoPhysicsPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class UNoPhysicsPrimitiveComponent
void UNoPhysicsPrimitiveComponent::StaticRegisterNativesUNoPhysicsPrimitiveComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNoPhysicsPrimitiveComponent);
UClass* Z_Construct_UClass_UNoPhysicsPrimitiveComponent_NoRegister()
{
	return UNoPhysicsPrimitiveComponent::StaticClass();
}
struct Z_Construct_UClass_UNoPhysicsPrimitiveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/** Primitive component base that never creates physics state (render-only use cases). */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NoPhysicsPrimitiveComponent.h" },
		{ "ModuleRelativePath", "Public/NoPhysicsPrimitiveComponent.h" },
		{ "ToolTip", "Primitive component base that never creates physics state (render-only use cases)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoPhysicsPrimitiveComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNoPhysicsPrimitiveComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNoPhysicsPrimitiveComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoPhysicsPrimitiveComponent_Statics::ClassParams = {
	&UNoPhysicsPrimitiveComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNoPhysicsPrimitiveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNoPhysicsPrimitiveComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNoPhysicsPrimitiveComponent()
{
	if (!Z_Registration_Info_UClass_UNoPhysicsPrimitiveComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoPhysicsPrimitiveComponent.OuterSingleton, Z_Construct_UClass_UNoPhysicsPrimitiveComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNoPhysicsPrimitiveComponent.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<UNoPhysicsPrimitiveComponent>()
{
	return UNoPhysicsPrimitiveComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNoPhysicsPrimitiveComponent);
UNoPhysicsPrimitiveComponent::~UNoPhysicsPrimitiveComponent() {}
// End Class UNoPhysicsPrimitiveComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_NoPhysicsPrimitiveComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNoPhysicsPrimitiveComponent, UNoPhysicsPrimitiveComponent::StaticClass, TEXT("UNoPhysicsPrimitiveComponent"), &Z_Registration_Info_UClass_UNoPhysicsPrimitiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoPhysicsPrimitiveComponent), 469332998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_NoPhysicsPrimitiveComponent_h_320104195(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_NoPhysicsPrimitiveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_NoPhysicsPrimitiveComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
