// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsAniGaussianSplattingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMLSLabsAniGaussianSplattingComponent() {}

// ********** Begin Cross Module References ********************************************************
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UGaussianSplattingComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function CanPlay *******************
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

// ********** Begin Function CanPlay constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanPlay constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanPlay Property Definitions ******************************************
void Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms), &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::PropPointers) < 2048);
// ********** End Function CanPlay Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "CanPlay", 	Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::MLSLabsAniGaussianSplattingComponent_eventCanPlay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function CanPlay *********************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function Pause *********************
struct Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Pause", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function Pause ***********************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function Play **********************
struct Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Play", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function Play ************************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent Function SeekToFrame ***************
struct Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics
{
	struct MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms
	{
		int32 FrameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SeekToFrame constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SeekToFrame constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SeekToFrame Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms, FrameIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms), &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::PropPointers) < 2048);
// ********** End Function SeekToFrame Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "SeekToFrame", 	Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::MLSLabsAniGaussianSplattingComponent_eventSeekToFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, nullptr, "Stop", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UMLSLabsAniGaussianSplattingComponent Function Stop ************************

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent;
UClass* UMLSLabsAniGaussianSplattingComponent::GetPrivateStaticClass()
{
	using TClass = UMLSLabsAniGaussianSplattingComponent;
	if (!Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MLSLabsAniGaussianSplattingComponent"),
			Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.InnerSingleton,
			StaticRegisterNativesUMLSLabsAniGaussianSplattingComponent,
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
	return Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_NoRegister()
{
	return UMLSLabsAniGaussianSplattingComponent::GetPrivateStaticClass();
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

// ********** Begin Class UMLSLabsAniGaussianSplattingComponent constinit property declarations ****
// ********** End Class UMLSLabsAniGaussianSplattingComponent constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanPlay"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execCanPlay },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execPause },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execPlay },
		{ .NameUTF8 = UTF8TEXT("SeekToFrame"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execSeekToFrame },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UMLSLabsAniGaussianSplattingComponent::execStop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_CanPlay, "CanPlay" }, // 3454494916
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Pause, "Pause" }, // 4210221406
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Play, "Play" }, // 3165866403
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_SeekToFrame, "SeekToFrame" }, // 4842875
		{ &Z_Construct_UFunction_UMLSLabsAniGaussianSplattingComponent_Stop, "Stop" }, // 1815671592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLSLabsAniGaussianSplattingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics
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
void UMLSLabsAniGaussianSplattingComponent::StaticRegisterNativesUMLSLabsAniGaussianSplattingComponent()
{
	UClass* Class = UMLSLabsAniGaussianSplattingComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent()
{
	if (!Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton, Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent.OuterSingleton;
}
UMLSLabsAniGaussianSplattingComponent::UMLSLabsAniGaussianSplattingComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMLSLabsAniGaussianSplattingComponent);
UMLSLabsAniGaussianSplattingComponent::~UMLSLabsAniGaussianSplattingComponent() {}
// ********** End Class UMLSLabsAniGaussianSplattingComponent **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent, UMLSLabsAniGaussianSplattingComponent::StaticClass, TEXT("UMLSLabsAniGaussianSplattingComponent"), &Z_Registration_Info_UClass_UMLSLabsAniGaussianSplattingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLSLabsAniGaussianSplattingComponent), 1712932054U) },
	};
}; // Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h__Script_MLSLabsRenderer_3881922783{
	TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingComponent_h__Script_MLSLabsRenderer_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
