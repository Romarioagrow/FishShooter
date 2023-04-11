// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/FishShooterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishShooterGameModeBase() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_AFishShooterGameModeBase_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_AFishShooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
// End Cross Module References
	void AFishShooterGameModeBase::StaticRegisterNativesAFishShooterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFishShooterGameModeBase_NoRegister()
	{
		return AFishShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFishShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFishShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FishShooterGameModeBase.h" },
		{ "ModuleRelativePath", "FishShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFishShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFishShooterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFishShooterGameModeBase_Statics::ClassParams = {
		&AFishShooterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFishShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFishShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFishShooterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFishShooterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFishShooterGameModeBase, 107683494);
	template<> FISHSHOOTER_API UClass* StaticClass<AFishShooterGameModeBase>()
	{
		return AFishShooterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFishShooterGameModeBase(Z_Construct_UClass_AFishShooterGameModeBase, &AFishShooterGameModeBase::StaticClass, TEXT("/Script/FishShooter"), TEXT("AFishShooterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishShooterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
