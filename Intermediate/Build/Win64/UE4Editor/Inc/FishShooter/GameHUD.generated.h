// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FISHSHOOTER_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define FISHSHOOTER_GameHUD_generated_h

#define FishShooter_Source_FishShooter_GameHUD_h_16_SPARSE_DATA
#define FishShooter_Source_FishShooter_GameHUD_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPlay);


#define FishShooter_Source_FishShooter_GameHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay);


#define FishShooter_Source_FishShooter_GameHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FishShooter"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define FishShooter_Source_FishShooter_GameHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FishShooter"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define FishShooter_Source_FishShooter_GameHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public:


#define FishShooter_Source_FishShooter_GameHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD)


#define FishShooter_Source_FishShooter_GameHUD_h_16_PRIVATE_PROPERTY_OFFSET
#define FishShooter_Source_FishShooter_GameHUD_h_13_PROLOG
#define FishShooter_Source_FishShooter_GameHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FishShooter_Source_FishShooter_GameHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	FishShooter_Source_FishShooter_GameHUD_h_16_SPARSE_DATA \
	FishShooter_Source_FishShooter_GameHUD_h_16_RPC_WRAPPERS \
	FishShooter_Source_FishShooter_GameHUD_h_16_INCLASS \
	FishShooter_Source_FishShooter_GameHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FishShooter_Source_FishShooter_GameHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FishShooter_Source_FishShooter_GameHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	FishShooter_Source_FishShooter_GameHUD_h_16_SPARSE_DATA \
	FishShooter_Source_FishShooter_GameHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FishShooter_Source_FishShooter_GameHUD_h_16_INCLASS_NO_PURE_DECLS \
	FishShooter_Source_FishShooter_GameHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FISHSHOOTER_API UClass* StaticClass<class AGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FishShooter_Source_FishShooter_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
