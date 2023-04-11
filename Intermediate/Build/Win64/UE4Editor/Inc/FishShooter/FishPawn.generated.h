// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FISHSHOOTER_FishPawn_generated_h
#error "FishPawn.generated.h already included, missing '#pragma once' in FishPawn.h"
#endif
#define FISHSHOOTER_FishPawn_generated_h

#define FishShooter_Source_FishShooter_FishPawn_h_17_SPARSE_DATA
#define FishShooter_Source_FishShooter_FishPawn_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FishShooter_Source_FishShooter_FishPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FishShooter_Source_FishShooter_FishPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFishPawn(); \
	friend struct Z_Construct_UClass_AFishPawn_Statics; \
public: \
	DECLARE_CLASS(AFishPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FishShooter"), NO_API) \
	DECLARE_SERIALIZER(AFishPawn)


#define FishShooter_Source_FishShooter_FishPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFishPawn(); \
	friend struct Z_Construct_UClass_AFishPawn_Statics; \
public: \
	DECLARE_CLASS(AFishPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FishShooter"), NO_API) \
	DECLARE_SERIALIZER(AFishPawn)


#define FishShooter_Source_FishShooter_FishPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFishPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFishPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFishPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFishPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFishPawn(AFishPawn&&); \
	NO_API AFishPawn(const AFishPawn&); \
public:


#define FishShooter_Source_FishShooter_FishPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFishPawn(AFishPawn&&); \
	NO_API AFishPawn(const AFishPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFishPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFishPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFishPawn)


#define FishShooter_Source_FishShooter_FishPawn_h_17_PRIVATE_PROPERTY_OFFSET
#define FishShooter_Source_FishShooter_FishPawn_h_14_PROLOG
#define FishShooter_Source_FishShooter_FishPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FishShooter_Source_FishShooter_FishPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FishShooter_Source_FishShooter_FishPawn_h_17_SPARSE_DATA \
	FishShooter_Source_FishShooter_FishPawn_h_17_RPC_WRAPPERS \
	FishShooter_Source_FishShooter_FishPawn_h_17_INCLASS \
	FishShooter_Source_FishShooter_FishPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FishShooter_Source_FishShooter_FishPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FishShooter_Source_FishShooter_FishPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FishShooter_Source_FishShooter_FishPawn_h_17_SPARSE_DATA \
	FishShooter_Source_FishShooter_FishPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FishShooter_Source_FishShooter_FishPawn_h_17_INCLASS_NO_PURE_DECLS \
	FishShooter_Source_FishShooter_FishPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FISHSHOOTER_API UClass* StaticClass<class AFishPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FishShooter_Source_FishShooter_FishPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
