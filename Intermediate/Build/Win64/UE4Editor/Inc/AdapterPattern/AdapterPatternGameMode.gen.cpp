// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdapterPattern/AdapterPatternGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdapterPatternGameMode() {}
// Cross Module References
	ADAPTERPATTERN_API UClass* Z_Construct_UClass_AAdapterPatternGameMode_NoRegister();
	ADAPTERPATTERN_API UClass* Z_Construct_UClass_AAdapterPatternGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AdapterPattern();
// End Cross Module References
	void AAdapterPatternGameMode::StaticRegisterNativesAAdapterPatternGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAdapterPatternGameMode_NoRegister()
	{
		return AAdapterPatternGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAdapterPatternGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdapterPatternGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdapterPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterPatternGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdapterPatternGameMode.h" },
		{ "ModuleRelativePath", "AdapterPatternGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdapterPatternGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdapterPatternGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdapterPatternGameMode_Statics::ClassParams = {
		&AAdapterPatternGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAdapterPatternGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterPatternGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdapterPatternGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdapterPatternGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdapterPatternGameMode, 654712775);
	template<> ADAPTERPATTERN_API UClass* StaticClass<AAdapterPatternGameMode>()
	{
		return AAdapterPatternGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdapterPatternGameMode(Z_Construct_UClass_AAdapterPatternGameMode, &AAdapterPatternGameMode::StaticClass, TEXT("/Script/AdapterPattern"), TEXT("AAdapterPatternGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdapterPatternGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
