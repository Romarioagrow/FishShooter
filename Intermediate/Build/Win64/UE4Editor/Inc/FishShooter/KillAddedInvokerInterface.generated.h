// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FISHSHOOTER_KillAddedInvokerInterface_generated_h
#error "KillAddedInvokerInterface.generated.h already included, missing '#pragma once' in KillAddedInvokerInterface.h"
#endif
#define FISHSHOOTER_KillAddedInvokerInterface_generated_h

#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_SPARSE_DATA
#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_RPC_WRAPPERS
#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FISHSHOOTER_API UKillAddedInvokerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKillAddedInvokerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FISHSHOOTER_API, UKillAddedInvokerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillAddedInvokerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FISHSHOOTER_API UKillAddedInvokerInterface(UKillAddedInvokerInterface&&); \
	FISHSHOOTER_API UKillAddedInvokerInterface(const UKillAddedInvokerInterface&); \
public:


#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FISHSHOOTER_API UKillAddedInvokerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FISHSHOOTER_API UKillAddedInvokerInterface(UKillAddedInvokerInterface&&); \
	FISHSHOOTER_API UKillAddedInvokerInterface(const UKillAddedInvokerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FISHSHOOTER_API, UKillAddedInvokerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillAddedInvokerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKillAddedInvokerInterface)


#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUKillAddedInvokerInterface(); \
	friend struct Z_Construct_UClass_UKillAddedInvokerInterface_Statics; \
public: \
	DECLARE_CLASS(UKillAddedInvokerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FishShooter"), FISHSHOOTER_API) \
	DECLARE_SERIALIZER(UKillAddedInvokerInterface)


#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IKillAddedInvokerInterface() {} \
public: \
	typedef UKillAddedInvokerInterface UClassType; \
	typedef IKillAddedInvokerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IKillAddedInvokerInterface() {} \
public: \
	typedef UKillAddedInvokerInterface UClassType; \
	typedef IKillAddedInvokerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_11_PROLOG
#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_SPARSE_DATA \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_RPC_WRAPPERS \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_SPARSE_DATA \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FishShooter_Source_FishShooter_KillAddedInvokerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FISHSHOOTER_API UClass* StaticClass<class UKillAddedInvokerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FishShooter_Source_FishShooter_KillAddedInvokerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
