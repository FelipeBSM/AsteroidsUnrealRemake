// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidRemake/MediumAsteroid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediumAsteroid() {}
// Cross Module References
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_AMediumAsteroid_NoRegister();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_AMediumAsteroid();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_ABigAsteroid();
	UPackage* Z_Construct_UPackage__Script_AsteroidRemake();
// End Cross Module References
	void AMediumAsteroid::StaticRegisterNativesAMediumAsteroid()
	{
	}
	UClass* Z_Construct_UClass_AMediumAsteroid_NoRegister()
	{
		return AMediumAsteroid::StaticClass();
	}
	struct Z_Construct_UClass_AMediumAsteroid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMediumAsteroid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABigAsteroid,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidRemake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediumAsteroid_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MediumAsteroid.h" },
		{ "ModuleRelativePath", "MediumAsteroid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMediumAsteroid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMediumAsteroid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMediumAsteroid_Statics::ClassParams = {
		&AMediumAsteroid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMediumAsteroid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMediumAsteroid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMediumAsteroid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMediumAsteroid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMediumAsteroid, 4105671204);
	template<> ASTEROIDREMAKE_API UClass* StaticClass<AMediumAsteroid>()
	{
		return AMediumAsteroid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMediumAsteroid(Z_Construct_UClass_AMediumAsteroid, &AMediumAsteroid::StaticClass, TEXT("/Script/AsteroidRemake"), TEXT("AMediumAsteroid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMediumAsteroid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
