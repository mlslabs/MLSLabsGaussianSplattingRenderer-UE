// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/MLSLabsAniGaussianSplattingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLSLabsAniGaussianSplattingComponent() {}

// Begin Cross Module References
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Class UMLSLabsAniGaussianSplattingComponent Function CanPlay
struct Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics
{
	struct MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms), &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "CanPlay", nullptr, nullptr, Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// End Class UMLSLabsAniGaussianSplattingComponent Function CanPlay

// Begin Class UMLSLabsAniGaussianSplattingComponent Function Pause
struct Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UMLSLabsAniGaussianSplattingComponent Function Pause

// Begin Class UMLSLabsAniGaussianSplattingComponent Function Play
struct Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UMLSLabsAniGaussianSplattingComponent Function Play

// Begin Class UMLSLabsAniGaussianSplattingComponent Function Stop
struct Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UMLSLabsAniGaussianSplattingComponent Function Stop

// Begin Class UMLSLabsAniGaussianSplattingComponent
void UMLSLabsAniGaussianSplattingComponent::StaticRegisterNativesUMLSLabsAniGaussianSplattingComponent()
{
	UClass* Class = UMLSLabsAniGaussianSplattingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPlay", &UMLSLabsAniGaussianSplattingComponent::execCanPlay },
		{ "Pause", &UMLSLabsAniGaussianSplattingComponent::execPause },
		{ "Play", &UMLSLabsAniGaussianSplattingComponent::execPlay },
		{ "Stop", &UMLSLabsAniGaussianSplattingComponent::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLSLabsAniGaussianSplattingComponent);
UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_NoRegister()
{
	return UMLSLabsAniGaussianSplattingComponent::StaticClass();
}
struct Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MLSLabsAniGaussianSplattingComponent.h" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay, "CanPlay" }, // 2754916332
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause, "Pause" }, // 1399783029
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play, "Play" }, // 3640034283
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop, "Stop" }, // 3142459789
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLSLabsAniGaussianSplattingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGaussianSplattingComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics::ClassParams = {
	&UMLSLabsAniGaussianSplattingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent()
{
	if (!Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton, Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<UMLSLabsAniGaussianSplattingComponent>()
{
	return UMLSLabsAniGaussianSplattingComponent::StaticClass();
}
UMLSLabsAniGaussianSplattingComponent::UMLSLabsAniGaussianSplattingComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMLSLabsAniGaussianSplattingComponent);
UMLSLabsAniGaussianSplattingComponent::~UMLSLabsAniGaussianSplattingComponent() {}
// End Class UMLSLabsAniGaussianSplattingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, UMLSLabsAniGaussianSplattingComponent::StaticClass, TEXT("UMLSLabsAniGaussianSplattingComponent"), &Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLSLabsAniGaussianSplattingComponent), 3201256122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h_216601342(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
