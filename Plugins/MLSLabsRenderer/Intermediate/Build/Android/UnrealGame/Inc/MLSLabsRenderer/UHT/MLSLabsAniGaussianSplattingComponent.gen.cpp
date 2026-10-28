// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsAniGaussianSplattingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMLSLabsAniGaussianSplattingComponent() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent(ETypeConstructPhase);
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function CanPlay *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics
struct UHT_STATICS
{
	struct MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanPlay constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanPlay constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanPlay Property Definitions ******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanPlay Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "CanPlay", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function CanPlay *********************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function Pause *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function Pause ***********************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function Play **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function Play ************************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function SeekToFrame ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics
struct UHT_STATICS
{
	struct MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms
	{
		int32 FrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SeekToFrame constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SeekToFrame constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SeekToFrame Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms, FrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SeekToFrame Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "SeekToFrame", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execSeekToFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SeekToFrame(Z_Param_FrameIndex);
	P_NATIVE_END;
}
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function SeekToFrame *****************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function Stop **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMLSLabsAniGaussianSplattingComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function Stop ************************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MLSLabsAniGaussianSplattingComponent.h" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent constinit property declarations ****
// ********** End Class UMLSLabsAniGaussianSplattingComponent constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanPlay"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execCanPlay },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execPause },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execPlay },
		{ .NameUTF8 = UTF8TEXT("SeekToFrame"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execSeekToFrame },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execStop },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay, "CanPlay" }, // da9b4915044e9d3c5f9892532933c42db14c44c9
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause, "Pause" }, // e312dcbd8a96bf42805e9bcf17b125ae220e555a
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play, "Play" }, // 940332cf01798182026436c020094c8f2ea7f16a
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame, "SeekToFrame" }, // 4201b2b06fbfec908c9dddf81969dc81c3563421
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop, "Stop" }, // 5089bc12d78f63ae0d64c1aea74af3a9eb4de426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLSLabsAniGaussianSplattingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGaussianSplattingComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMLSLabsAniGaussianSplattingComponent_StaticRegisterNativesUMLSLabsAniGaussianSplattingComponent()
{
	UClass* Class = UMLSLabsAniGaussianSplattingComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent;
UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMLSLabsAniGaussianSplattingComponent;
		if (!Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MLSLabsAniGaussianSplattingComponent"),
				Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.InnerSingleton,
				UMLSLabsAniGaussianSplattingComponent_StaticRegisterNativesUMLSLabsAniGaussianSplattingComponent,
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
		return Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton;
}
#undef UHT_STATICS
UMLSLabsAniGaussianSplattingComponent::UMLSLabsAniGaussianSplattingComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMLSLabsAniGaussianSplattingComponent);
UMLSLabsAniGaussianSplattingComponent::~UMLSLabsAniGaussianSplattingComponent() {}
// ********** End Class UMLSLabsAniGaussianSplattingComponent **************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, TEXT("UMLSLabsAniGaussianSplattingComponent"), &Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLSLabsAniGaussianSplattingComponent), 329945557U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h__Script_MLSLabsRenderer_595a84fafffe8eb57463c5e0a239ba87a71b76ba{
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
