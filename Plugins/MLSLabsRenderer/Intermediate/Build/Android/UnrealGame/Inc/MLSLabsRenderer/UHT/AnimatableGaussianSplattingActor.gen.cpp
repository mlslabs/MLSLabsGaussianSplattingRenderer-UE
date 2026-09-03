// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/AnimatableGaussianSplattingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatableGaussianSplattingActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor_NoRegister();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class AAnimatableGaussianSplattingActor
void AAnimatableGaussianSplattingActor::StaticRegisterNativesAAnimatableGaussianSplattingActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnimatableGaussianSplattingActor);
UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor_NoRegister()
{
	return AAnimatableGaussianSplattingActor::StaticClass();
}
struct Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimatableGaussianSplattingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplattingComponent_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplattingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimatableGaussianSplattingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::NewProp_SplattingComponent = { "SplattingComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnimatableGaussianSplattingActor, SplattingComponent), Z_Construct_UClass_UAnimatableGaussianSplattingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplattingComponent_MetaData), NewProp_SplattingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::NewProp_SplattingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::ClassParams = {
	&AAnimatableGaussianSplattingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnimatableGaussianSplattingActor()
{
	if (!Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton, Z_Construct_UClass_AAnimatableGaussianSplattingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<AAnimatableGaussianSplattingActor>()
{
	return AAnimatableGaussianSplattingActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimatableGaussianSplattingActor);
AAnimatableGaussianSplattingActor::~AAnimatableGaussianSplattingActor() {}
// End Class AAnimatableGaussianSplattingActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnimatableGaussianSplattingActor, AAnimatableGaussianSplattingActor::StaticClass, TEXT("AAnimatableGaussianSplattingActor"), &Z_Registration_Info_UClass_AAnimatableGaussianSplattingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimatableGaussianSplattingActor), 2790888301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h_649298176(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
