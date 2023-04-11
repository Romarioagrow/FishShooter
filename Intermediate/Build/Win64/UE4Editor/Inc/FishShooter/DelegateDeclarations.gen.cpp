// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/DelegateDeclarations.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateDeclarations() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_UDelegateDeclarations_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_UDelegateDeclarations();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
// End Cross Module References
	void UDelegateDeclarations::StaticRegisterNativesUDelegateDeclarations()
	{
	}
	UClass* Z_Construct_UClass_UDelegateDeclarations_NoRegister()
	{
		return UDelegateDeclarations::StaticClass();
	}
	struct Z_Construct_UClass_UDelegateDeclarations_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDelegateDeclarations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelegateDeclarations_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DelegateDeclarations.h" },
		{ "ModuleRelativePath", "DelegateDeclarations.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDelegateDeclarations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelegateDeclarations>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDelegateDeclarations_Statics::ClassParams = {
		&UDelegateDeclarations::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDelegateDeclarations_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateDeclarations_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDelegateDeclarations()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDelegateDeclarations_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDelegateDeclarations, 762036085);
	template<> FISHSHOOTER_API UClass* StaticClass<UDelegateDeclarations>()
	{
		return UDelegateDeclarations::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDelegateDeclarations(Z_Construct_UClass_UDelegateDeclarations, &UDelegateDeclarations::StaticClass, TEXT("/Script/FishShooter"), TEXT("UDelegateDeclarations"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDelegateDeclarations);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
