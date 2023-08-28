// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidRemake/BoundsTeleportComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundsTeleportComponent() {}
// Cross Module References
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_UBoundsTeleportComponent_NoRegister();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_UBoundsTeleportComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AsteroidRemake();
// End Cross Module References
	void UBoundsTeleportComponent::StaticRegisterNativesUBoundsTeleportComponent()
	{
	}
	UClass* Z_Construct_UClass_UBoundsTeleportComponent_NoRegister()
	{
		return UBoundsTeleportComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoundsTeleportComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoundsTeleportComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidRemake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundsTeleportComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BoundsTeleportComponent.h" },
		{ "ModuleRelativePath", "BoundsTeleportComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoundsTeleportComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoundsTeleportComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoundsTeleportComponent_Statics::ClassParams = {
		&UBoundsTeleportComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoundsTeleportComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsTeleportComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoundsTeleportComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoundsTeleportComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoundsTeleportComponent, 2490396629);
	template<> ASTEROIDREMAKE_API UClass* StaticClass<UBoundsTeleportComponent>()
	{
		return UBoundsTeleportComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoundsTeleportComponent(Z_Construct_UClass_UBoundsTeleportComponent, &UBoundsTeleportComponent::StaticClass, TEXT("/Script/AsteroidRemake"), TEXT("UBoundsTeleportComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoundsTeleportComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
