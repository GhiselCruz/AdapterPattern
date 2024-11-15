// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdapterPattern/MivimientoAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMivimientoAdapter() {}
// Cross Module References
	ADAPTERPATTERN_API UClass* Z_Construct_UClass_AMivimientoAdapter_NoRegister();
	ADAPTERPATTERN_API UClass* Z_Construct_UClass_AMivimientoAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdapterPattern();
	ADAPTERPATTERN_API UClass* Z_Construct_UClass_UIAdapter_NoRegister();
// End Cross Module References
	void AMivimientoAdapter::StaticRegisterNativesAMivimientoAdapter()
	{
	}
	UClass* Z_Construct_UClass_AMivimientoAdapter_NoRegister()
	{
		return AMivimientoAdapter::StaticClass();
	}
	struct Z_Construct_UClass_AMivimientoAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMivimientoAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdapterPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMivimientoAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MivimientoAdapter.h" },
		{ "ModuleRelativePath", "MivimientoAdapter.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMivimientoAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAdapter_NoRegister, (int32)VTABLE_OFFSET(AMivimientoAdapter, IIAdapter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMivimientoAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMivimientoAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMivimientoAdapter_Statics::ClassParams = {
		&AMivimientoAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMivimientoAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMivimientoAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMivimientoAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMivimientoAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMivimientoAdapter, 1602202497);
	template<> ADAPTERPATTERN_API UClass* StaticClass<AMivimientoAdapter>()
	{
		return AMivimientoAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMivimientoAdapter(Z_Construct_UClass_AMivimientoAdapter, &AMivimientoAdapter::StaticClass, TEXT("/Script/AdapterPattern"), TEXT("AMivimientoAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMivimientoAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
