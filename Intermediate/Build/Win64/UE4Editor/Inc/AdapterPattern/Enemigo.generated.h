// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTERPATTERN_Enemigo_generated_h
#error "Enemigo.generated.h already included, missing '#pragma once' in Enemigo.h"
#endif
#define ADAPTERPATTERN_Enemigo_generated_h

#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_SPARSE_DATA
#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_RPC_WRAPPERS
#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterPattern"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemigo*>(this); }


#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterPattern"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemigo*>(this); }


#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public:


#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo)


#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_PRIVATE_PROPERTY_OFFSET
#define AdapterPattern_Source_AdapterPattern_Enemigo_h_10_PROLOG
#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_PRIVATE_PROPERTY_OFFSET \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_SPARSE_DATA \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_RPC_WRAPPERS \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_INCLASS \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterPattern_Source_AdapterPattern_Enemigo_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_PRIVATE_PROPERTY_OFFSET \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_SPARSE_DATA \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_INCLASS_NO_PURE_DECLS \
	AdapterPattern_Source_AdapterPattern_Enemigo_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERPATTERN_API UClass* StaticClass<class AEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdapterPattern_Source_AdapterPattern_Enemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
