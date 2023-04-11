// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/ConfigurationDataActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfigurationDataActor() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_AConfigurationDataActor_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_AConfigurationDataActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void AConfigurationDataActor::StaticRegisterNativesAConfigurationDataActor()
	{
	}
	UClass* Z_Construct_UClass_AConfigurationDataActor_NoRegister()
	{
		return AConfigurationDataActor::StaticClass();
	}
	struct Z_Construct_UClass_AConfigurationDataActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigurationDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfigurationDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConfigurationDataActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n*/" },
		{ "IncludePath", "ConfigurationDataActor.h" },
		{ "ModuleRelativePath", "ConfigurationDataActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable_MetaData[] = {
		{ "Category", "Configuration Data Table" },
		{ "ModuleRelativePath", "ConfigurationDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable = { "ConfigurationDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfigurationDataActor, ConfigurationDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConfigurationDataActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfigurationDataActor_Statics::NewProp_ConfigurationDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConfigurationDataActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConfigurationDataActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConfigurationDataActor_Statics::ClassParams = {
		&AConfigurationDataActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConfigurationDataActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConfigurationDataActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConfigurationDataActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConfigurationDataActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConfigurationDataActor, 3548129868);
	template<> FISHSHOOTER_API UClass* StaticClass<AConfigurationDataActor>()
	{
		return AConfigurationDataActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConfigurationDataActor(Z_Construct_UClass_AConfigurationDataActor, &AConfigurationDataActor::StaticClass, TEXT("/Script/FishShooter"), TEXT("AConfigurationDataActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConfigurationDataActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
