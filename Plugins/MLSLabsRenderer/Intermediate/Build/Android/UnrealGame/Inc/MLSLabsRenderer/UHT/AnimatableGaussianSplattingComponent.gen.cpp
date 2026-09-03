// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/AnimatableGaussianSplattingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatableGaussianSplattingComponent() {}

// Begin Cross Module References
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent_NoRegister();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class UAnimatableGaussianSplattingComponent Function SetFrameIndex
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics
{
	struct AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms
	{
		float NewFrameIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFrameIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFrameIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::NewProp_NewFrameIndex = { "NewFrameIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms, NewFrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFrameIndex_MetaData), NewProp_NewFrameIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::NewProp_NewFrameIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "SetFrameIndex", nullptr, nullptr, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::AnimatableGaussianSplattingComponent_eventSetFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execSetFrameIndex)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameIndex(Z_Param_NewFrameIndex);
	P_NATIVE_END;
}
// End Class UAnimatableGaussianSplattingComponent Function SetFrameIndex

// Begin Class UAnimatableGaussianSplattingComponent Function UpdateFrameIndex
struct Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics
{
	struct AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms
	{
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatableGaussianSplattingComponent, nullptr, "UpdateFrameIndex", nullptr, nullptr, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::AnimatableGaussianSplattingComponent_eventUpdateFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatableGaussianSplattingComponent::execUpdateFrameIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFrameIndex(Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UAnimatableGaussianSplattingComponent Function UpdateFrameIndex

// Begin Class UAnimatableGaussianSplattingComponent
void UAnimatableGaussianSplattingComponent::StaticRegisterNativesUAnimatableGaussianSplattingComponent()
{
	UClass* Class = UAnimatableGaussianSplattingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFrameIndex", &UAnimatableGaussianSplattingComponent::execSetFrameIndex },
		{ "UpdateFrameIndex", &UAnimatableGaussianSplattingComponent::execUpdateFrameIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimatableGaussianSplattingComponent);
UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent_NoRegister()
{
	return UAnimatableGaussianSplattingComponent::StaticClass();
}
struct Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "AnimatableGaussianSplattingComponent.h" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameIndex_MetaData[] = {
		{ "BlueprintSetter", "SetFrameIndex" },
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/AnimatableGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_SetFrameIndex, "SetFrameIndex" }, // 3718028384
		{ &Z_Construct_UFunction_UAnimatableGaussianSplattingComponent_UpdateFrameIndex, "UpdateFrameIndex" }, // 498254042
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatableGaussianSplattingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatableGaussianSplattingComponent, FrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameIndex_MetaData), NewProp_FrameIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatableGaussianSplattingComponent, FrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameCount_MetaData), NewProp_FrameCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::NewProp_FrameCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGaussianSplattingComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::ClassParams = {
	&UAnimatableGaussianSplattingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatableGaussianSplattingComponent()
{
	if (!Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton, Z_Construct_UClass_UAnimatableGaussianSplattingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<UAnimatableGaussianSplattingComponent>()
{
	return UAnimatableGaussianSplattingComponent::StaticClass();
}
UAnimatableGaussianSplattingComponent::UAnimatableGaussianSplattingComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatableGaussianSplattingComponent);
UAnimatableGaussianSplattingComponent::~UAnimatableGaussianSplattingComponent() {}
// End Class UAnimatableGaussianSplattingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatableGaussianSplattingComponent, UAnimatableGaussianSplattingComponent::StaticClass, TEXT("UAnimatableGaussianSplattingComponent"), &Z_Registration_Info_UClass_UAnimatableGaussianSplattingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatableGaussianSplattingComponent), 577606720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h_1904115358(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_AnimatableGaussianSplattingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
