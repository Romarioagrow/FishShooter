// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/KillAddedInvokerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillAddedInvokerInterface() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_UKillAddedInvokerInterface_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_UKillAddedInvokerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
// End Cross Module References
	void UKillAddedInvokerInterface::StaticRegisterNativesUKillAddedInvokerInterface()
	{
	}
	UClass* Z_Construct_UClass_UKillAddedInvokerInterface_NoRegister()
	{
		return UKillAddedInvokerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UKillAddedInvokerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillAddedInvokerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillAddedInvokerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "KillAddedInvokerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillAddedInvokerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKillAddedInvokerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillAddedInvokerInterface_Statics::ClassParams = {
		&UKillAddedInvokerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKillAddedInvokerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillAddedInvokerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillAddedInvokerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillAddedInvokerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillAddedInvokerInterface, 1750232175);
	template<> FISHSHOOTER_API UClass* StaticClass<UKillAddedInvokerInterface>()
	{
		return UKillAddedInvokerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillAddedInvokerInterface(Z_Construct_UClass_UKillAddedInvokerInterface, &UKillAddedInvokerInterface::StaticClass, TEXT("/Script/FishShooter"), TEXT("UKillAddedInvokerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillAddedInvokerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
