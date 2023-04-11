// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishShooter/TeddyBearSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearSpawner() {}
// Cross Module References
	FISHSHOOTER_API UClass* Z_Construct_UClass_ATeddyBearSpawner_NoRegister();
	FISHSHOOTER_API UClass* Z_Construct_UClass_ATeddyBearSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FishShooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FISHSHOOTER_API UClass* Z_Construct_UClass_ATeddyBear_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATeddyBearSpawner::execSpawnTeddyBear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnTeddyBear();
		P_NATIVE_END;
	}
	void ATeddyBearSpawner::StaticRegisterNativesATeddyBearSpawner()
	{
		UClass* Class = ATeddyBearSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnTeddyBear", &ATeddyBearSpawner::execSpawnTeddyBear },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Spawns a teddy bear\n\x09*/" },
		{ "ModuleRelativePath", "TeddyBearSpawner.h" },
		{ "ToolTip", "Spawns a teddy bear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeddyBearSpawner, nullptr, "SpawnTeddyBear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATeddyBearSpawner_NoRegister()
	{
		return ATeddyBearSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UTeddyBear_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UTeddyBear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FishShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeddyBearSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeddyBearSpawner_SpawnTeddyBear, "SpawnTeddyBear" }, // 1806636807
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A teddy bear spawner\n*/" },
		{ "IncludePath", "TeddyBearSpawner.h" },
		{ "ModuleRelativePath", "TeddyBearSpawner.h" },
		{ "ToolTip", "A teddy bear spawner" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UTeddyBear_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "TeddyBearSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UTeddyBear = { "UTeddyBear", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearSpawner, UTeddyBear), Z_Construct_UClass_ATeddyBear_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UTeddyBear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UTeddyBear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeddyBearSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawner_Statics::NewProp_UTeddyBear,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearSpawner_Statics::ClassParams = {
		&ATeddyBearSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATeddyBearSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearSpawner, 335404581);
	template<> FISHSHOOTER_API UClass* StaticClass<ATeddyBearSpawner>()
	{
		return ATeddyBearSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearSpawner(Z_Construct_UClass_ATeddyBearSpawner, &ATeddyBearSpawner::StaticClass, TEXT("/Script/FishShooter"), TEXT("ATeddyBearSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
