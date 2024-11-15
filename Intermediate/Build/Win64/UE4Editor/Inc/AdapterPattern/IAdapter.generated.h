// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTERPATTERN_IAdapter_generated_h
#error "IAdapter.generated.h already included, missing '#pragma once' in IAdapter.h"
#endif
#define ADAPTERPATTERN_IAdapter_generated_h

#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_SPARSE_DATA
#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_RPC_WRAPPERS
#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTERPATTERN_API UIAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAdapter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTERPATTERN_API, UIAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAdapter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTERPATTERN_API UIAdapter(UIAdapter&&); \
	ADAPTERPATTERN_API UIAdapter(const UIAdapter&); \
public:


#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTERPATTERN_API UIAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTERPATTERN_API UIAdapter(UIAdapter&&); \
	ADAPTERPATTERN_API UIAdapter(const UIAdapter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTERPATTERN_API, UIAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAdapter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAdapter)


#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIAdapter(); \
	friend struct Z_Construct_UClass_UIAdapter_Statics; \
public: \
	DECLARE_CLASS(UIAdapter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AdapterPattern"), ADAPTERPATTERN_API) \
	DECLARE_SERIALIZER(UIAdapter)


#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_GENERATED_UINTERFACE_BODY() \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_GENERATED_UINTERFACE_BODY() \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIAdapter() {} \
public: \
	typedef UIAdapter UClassType; \
	typedef IIAdapter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AdapterPattern_Source_AdapterPattern_IAdapter_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIAdapter() {} \
public: \
	typedef UIAdapter UClassType; \
	typedef IIAdapter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AdapterPattern_Source_AdapterPattern_IAdapter_h_10_PROLOG
#define AdapterPattern_Source_AdapterPattern_IAdapter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_SPARSE_DATA \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_RPC_WRAPPERS \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterPattern_Source_AdapterPattern_IAdapter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_SPARSE_DATA \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AdapterPattern_Source_AdapterPattern_IAdapter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERPATTERN_API UClass* StaticClass<class UIAdapter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdapterPattern_Source_AdapterPattern_IAdapter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
