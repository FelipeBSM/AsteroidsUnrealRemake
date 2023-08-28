// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidRemake/BoundTeleportComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundTeleportComponent() {}
// Cross Module References
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_UBoundTeleportComponent_NoRegister();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_UBoundTeleportComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AsteroidRemake();
// End Cross Module References
	DEFINE_FUNCTION(UBoundTeleportComponent::execTeleportPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportPlayer();
		P_NATIVE_END;
	}
	void UBoundTeleportComponent::StaticRegisterNativesUBoundTeleportComponent()
	{
		UClass* Class = UBoundTeleportComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TeleportPlayer", &UBoundTeleportComponent::execTeleportPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoundTeleportComponent_TeleportPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoundTeleportComponent_TeleportPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoundTeleportComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoundTeleportComponent_TeleportPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoundTeleportComponent, nullptr, "TeleportPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoundTeleportComponent_TeleportPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoundTeleportComponent_TeleportPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoundTeleportComponent_TeleportPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoundTeleportComponent_TeleportPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBoundTeleportComponent_NoRegister()
	{
		return UBoundTeleportComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoundTeleportComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoundTeleportComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidRemake,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoundTeleportComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoundTeleportComponent_TeleportPlayer, "TeleportPlayer" }, // 3183525603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundTeleportComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BoundTeleportComponent.h" },
		{ "ModuleRelativePath", "BoundTeleportComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoundTeleportComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoundTeleportComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoundTeleportComponent_Statics::ClassParams = {
		&UBoundTeleportComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoundTeleportComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoundTeleportComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoundTeleportComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoundTeleportComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoundTeleportComponent, 3817868529);
	template<> ASTEROIDREMAKE_API UClass* StaticClass<UBoundTeleportComponent>()
	{
		return UBoundTeleportComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoundTeleportComponent(Z_Construct_UClass_UBoundTeleportComponent, &UBoundTeleportComponent::StaticClass, TEXT("/Script/AsteroidRemake"), TEXT("UBoundTeleportComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoundTeleportComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
