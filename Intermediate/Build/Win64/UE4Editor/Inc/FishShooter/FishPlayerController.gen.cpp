// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/FishPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishPlayerController() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_AFishPlayerController_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_AFishPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
// End Cross Module References
	void AFishPlayerController::StaticRegisterNativesAFishPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AFishPlayerController_NoRegister()
	{
		return AFishPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFishPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFishPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A fish player controller\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FishPlayerController.h" },
		{ "ModuleRelativePath", "FishPlayerController.h" },
		{ "ToolTip", "A fish player controller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFishPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFishPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFishPlayerController_Statics::ClassParams = {
		&AFishPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFishPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFishPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFishPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFishPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFishPlayerController, 2409212452);
	template<> FISHSHOOTER_API UClass* StaticClass<AFishPlayerController>()
	{
		return AFishPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFishPlayerController(Z_Construct_UClass_AFishPlayerController, &AFishPlayerController::StaticClass, TEXT("/Script/FishShooter"), TEXT("AFishPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
