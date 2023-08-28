// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidRemake/AsteroidRemakeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidRemakeGameModeBase() {}
// Cross Module References
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_AAsteroidRemakeGameModeBase_NoRegister();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_AAsteroidRemakeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AsteroidRemake();
// End Cross Module References
	void AAsteroidRemakeGameModeBase::StaticRegisterNativesAAsteroidRemakeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAsteroidRemakeGameModeBase_NoRegister()
	{
		return AAsteroidRemakeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAsteroidRemakeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteroidRemakeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidRemake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidRemakeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AsteroidRemakeGameModeBase.h" },
		{ "ModuleRelativePath", "AsteroidRemakeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteroidRemakeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroidRemakeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsteroidRemakeGameModeBase_Statics::ClassParams = {
		&AAsteroidRemakeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAsteroidRemakeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidRemakeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteroidRemakeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteroidRemakeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroidRemakeGameModeBase, 3240290283);
	template<> ASTEROIDREMAKE_API UClass* StaticClass<AAsteroidRemakeGameModeBase>()
	{
		return AAsteroidRemakeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroidRemakeGameModeBase(Z_Construct_UClass_AAsteroidRemakeGameModeBase, &AAsteroidRemakeGameModeBase::StaticClass, TEXT("/Script/AsteroidRemake"), TEXT("AAsteroidRemakeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroidRemakeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
