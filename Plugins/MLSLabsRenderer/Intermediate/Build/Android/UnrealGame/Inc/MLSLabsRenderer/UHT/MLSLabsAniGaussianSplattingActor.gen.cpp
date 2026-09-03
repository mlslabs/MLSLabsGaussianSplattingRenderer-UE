// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLSLabsRenderer/Public/MLSLabsAniGaussianSplattingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLSLabsAniGaussianSplattingActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_NoRegister();
MLSLABSRENDERER_API UClass* Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_NoRegister();
MLSLABSRENDERER_API UEnum* Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState();
MLSLABSRENDERER_API UFunction* Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MLSLabsRenderer();
// End Cross Module References

// Begin Enum EMlslabsPlaybackState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMlslabsPlaybackState;
static UEnum* EMlslabsPlaybackState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMlslabsPlaybackState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMlslabsPlaybackState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState, (UObject*)Z_Construct_UPackage__Script_MLSLabsRenderer(), TEXT("EMlslabsPlaybackState"));
	}
	return Z_Registration_Info_UEnum_EMlslabsPlaybackState.OuterSingleton;
}
template<> MLSLABSRENDERER_API UEnum* StaticEnum<EMlslabsPlaybackState>()
{
	return EMlslabsPlaybackState_StaticEnum();
}
struct Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ended.DisplayName", "Ended" },
		{ "Ended.Name", "EMlslabsPlaybackState::Ended" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
		{ "Playing.DisplayName", "Playing" },
		{ "Playing.Name", "EMlslabsPlaybackState::Playing" },
		{ "Started.DisplayName", "Started" },
		{ "Started.Name", "EMlslabsPlaybackState::Started" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMlslabsPlaybackState::Started", (int64)EMlslabsPlaybackState::Started },
		{ "EMlslabsPlaybackState::Playing", (int64)EMlslabsPlaybackState::Playing },
		{ "EMlslabsPlaybackState::Ended", (int64)EMlslabsPlaybackState::Ended },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
	nullptr,
	"EMlslabsPlaybackState",
	"EMlslabsPlaybackState",
	Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState()
{
	if (!Z_Registration_Info_UEnum_EMlslabsPlaybackState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMlslabsPlaybackState.InnerSingleton, Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMlslabsPlaybackState.InnerSingleton;
}
// End Enum EMlslabsPlaybackState

// Begin Delegate FOnMlslabsPlaybackStateChanged
struct Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics
{
	struct _Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms
	{
		EMlslabsPlaybackState PlaybackState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::NewProp_PlaybackState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::NewProp_PlaybackState = { "PlaybackState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms, PlaybackState), Z_Construct_UEnum_MLSLabsRenderer_EMlslabsPlaybackState, METADATA_PARAMS(0, nullptr) }; // 2059576302
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::NewProp_PlaybackState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::NewProp_PlaybackState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MLSLabsRenderer, nullptr, "OnMlslabsPlaybackStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::_Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::_Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMlslabsPlaybackStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMlslabsPlaybackStateChanged, EMlslabsPlaybackState PlaybackState)
{
	struct _Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms
	{
		EMlslabsPlaybackState PlaybackState;
	};
	_Script_MLSLabsRenderer_eventOnMlslabsPlaybackStateChanged_Parms Parms;
	Parms.PlaybackState=PlaybackState;
	OnMlslabsPlaybackStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMlslabsPlaybackStateChanged

// Begin Class AMLSLabsAniGaussianSplattingActor Function CanPlay
struct Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics
{
	struct MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms), &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "CanPlay", nullptr, nullptr, Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::MLSLabsAniGaussianSplattingActor_eventCanPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execCanPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlay();
	P_NATIVE_END;
}
// End Class AMLSLabsAniGaussianSplattingActor Function CanPlay

// Begin Class AMLSLabsAniGaussianSplattingActor Function Pause
struct Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class AMLSLabsAniGaussianSplattingActor Function Pause

// Begin Class AMLSLabsAniGaussianSplattingActor Function Play
struct Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class AMLSLabsAniGaussianSplattingActor Function Play

// Begin Class AMLSLabsAniGaussianSplattingActor Function Stop
struct Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMLSLabsAniGaussianSplattingActor::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class AMLSLabsAniGaussianSplattingActor Function Stop

// Begin Class AMLSLabsAniGaussianSplattingActor
void AMLSLabsAniGaussianSplattingActor::StaticRegisterNativesAMLSLabsAniGaussianSplattingActor()
{
	UClass* Class = AMLSLabsAniGaussianSplattingActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPlay", &AMLSLabsAniGaussianSplattingActor::execCanPlay },
		{ "Pause", &AMLSLabsAniGaussianSplattingActor::execPause },
		{ "Play", &AMLSLabsAniGaussianSplattingActor::execPlay },
		{ "Stop", &AMLSLabsAniGaussianSplattingActor::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMLSLabsAniGaussianSplattingActor);
UClass* Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_NoRegister()
{
	return AMLSLabsAniGaussianSplattingActor::StaticClass();
}
struct Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MLSLabsAniGaussianSplattingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplattingComponent_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackStateChanged_MetaData[] = {
		{ "Category", "MLSLabsRenderer" },
		{ "ModuleRelativePath", "Public/MLSLabsAniGaussianSplattingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplattingComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_CanPlay, "CanPlay" }, // 2053938986
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Pause, "Pause" }, // 466468811
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Play, "Play" }, // 192971787
		{ &Z_Construct_UFunction_AMLSLabsAniGaussianSplattingActor_Stop, "Stop" }, // 3261291850
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMLSLabsAniGaussianSplattingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::NewProp_SplattingComponent = { "SplattingComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMLSLabsAniGaussianSplattingActor, SplattingComponent), Z_Construct_UClass_UMLSLabsAniGaussianSplattingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplattingComponent_MetaData), NewProp_SplattingComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::NewProp_OnPlaybackStateChanged = { "OnPlaybackStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMLSLabsAniGaussianSplattingActor, OnPlaybackStateChanged), Z_Construct_UDelegateFunction_MLSLabsRenderer_OnMlslabsPlaybackStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackStateChanged_MetaData), NewProp_OnPlaybackStateChanged_MetaData) }; // 1910389631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::NewProp_SplattingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::NewProp_OnPlaybackStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MLSLabsRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::ClassParams = {
	&AMLSLabsAniGaussianSplattingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor()
{
	if (!Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.OuterSingleton, Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor.OuterSingleton;
}
template<> MLSLABSRENDERER_API UClass* StaticClass<AMLSLabsAniGaussianSplattingActor>()
{
	return AMLSLabsAniGaussianSplattingActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMLSLabsAniGaussianSplattingActor);
AMLSLabsAniGaussianSplattingActor::~AMLSLabsAniGaussianSplattingActor() {}
// End Class AMLSLabsAniGaussianSplattingActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMlslabsPlaybackState_StaticEnum, TEXT("EMlslabsPlaybackState"), &Z_Registration_Info_UEnum_EMlslabsPlaybackState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2059576302U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMLSLabsAniGaussianSplattingActor, AMLSLabsAniGaussianSplattingActor::StaticClass, TEXT("AMLSLabsAniGaussianSplattingActor"), &Z_Registration_Info_UClass_AMLSLabsAniGaussianSplattingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMLSLabsAniGaussianSplattingActor), 2183740055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_2943816055(TEXT("/Script/MLSLabsRenderer"),
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hezhiwu_git_GSPlugin_Publish_PluginRelease_MLSLabsRenderer_HostProject_Plugins_MLSLabsRenderer_Source_MLSLabsRenderer_Public_MLSLabsAniGaussianSplattingActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
