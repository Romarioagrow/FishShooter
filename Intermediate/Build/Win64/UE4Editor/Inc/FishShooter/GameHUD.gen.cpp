// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/GameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_AGameHUD_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_AGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameHUD::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void AGameHUD::StaticRegisterNativesAGameHUD()
	{
		UClass* Class = AGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &AGameHUD::execEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameHUD_EndPlay_Statics
	{
		struct GameHUD_eventEndPlay_Parms
		{
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameHUD_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameHUD_EndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameHUD_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameHUD_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameHUD, nullptr, "EndPlay", nullptr, nullptr, sizeof(GameHUD_eventEndPlay_Parms), Z_Construct_UFunction_AGameHUD_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameHUD_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameHUD_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameHUD_NoRegister()
	{
		return AGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HudFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameHUD_EndPlay, "EndPlay" }, // 729163104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The HUD\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GameHUD.h" },
		{ "ModuleRelativePath", "GameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The HUD" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData[] = {
		{ "Category", "HUDFont" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont = { "HudFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameHUD, HudFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameHUD_Statics::ClassParams = {
		&AGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameHUD, 3073143024);
	template<> FISHSHOOTER_API UClass* StaticClass<AGameHUD>()
	{
		return AGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameHUD(Z_Construct_UClass_AGameHUD, &AGameHUD::StaticClass, TEXT("/Script/FishShooter"), TEXT("AGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
