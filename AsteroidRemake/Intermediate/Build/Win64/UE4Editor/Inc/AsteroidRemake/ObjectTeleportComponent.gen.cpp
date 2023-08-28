// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidRemake/ObjectTeleportComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectTeleportComponent() {}
// Cross Module References
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_UObjectTeleportComponent_NoRegister();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_UObjectTeleportComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AsteroidRemake();
// End Cross Module References
	void UObjectTeleportComponent::StaticRegisterNativesUObjectTeleportComponent()
	{
	}
	UClass* Z_Construct_UClass_UObjectTeleportComponent_NoRegister()
	{
		return UObjectTeleportComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObjectTeleportComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectTeleportComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidRemake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectTeleportComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*Component responsable for checking bounds and teleporting objects*/" },
		{ "IncludePath", "ObjectTeleportComponent.h" },
		{ "ModuleRelativePath", "ObjectTeleportComponent.h" },
		{ "ToolTip", "Component responsable for checking bounds and teleporting objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectTeleportComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectTeleportComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectTeleportComponent_Statics::ClassParams = {
		&UObjectTeleportComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectTeleportComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTeleportComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectTeleportComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectTeleportComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectTeleportComponent, 1528010165);
	template<> ASTEROIDREMAKE_API UClass* StaticClass<UObjectTeleportComponent>()
	{
		return UObjectTeleportComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectTeleportComponent(Z_Construct_UClass_UObjectTeleportComponent, &UObjectTeleportComponent::StaticClass, TEXT("/Script/AsteroidRemake"), TEXT("UObjectTeleportComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectTeleportComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
