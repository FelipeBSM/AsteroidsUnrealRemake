// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidRemake/BigAsteroid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBigAsteroid() {}
// Cross Module References
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_ABigAsteroid_NoRegister();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_ABigAsteroid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AsteroidRemake();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_AMediumAsteroid_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABigAsteroid::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ABigAsteroid::StaticRegisterNativesABigAsteroid()
	{
		UClass* Class = ABigAsteroid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ABigAsteroid::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABigAsteroid_OnHit_Statics
	{
		struct BigAsteroid_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BigAsteroid_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BigAsteroid_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BigAsteroid_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BigAsteroid_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BigAsteroid_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BigAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABigAsteroid, nullptr, "OnHit", nullptr, nullptr, sizeof(BigAsteroid_eventOnHit_Parms), Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABigAsteroid_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABigAsteroid_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABigAsteroid_NoRegister()
	{
		return ABigAsteroid::StaticClass();
	}
	struct Z_Construct_UClass_ABigAsteroid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_defaultSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_asteroidMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_asteroidMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_asteroidBoxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_asteroidBoxCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explosionParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumAsteroidBPClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MediumAsteroidBPClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABigAsteroid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidRemake,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABigAsteroid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABigAsteroid_OnHit, "OnHit" }, // 3142075929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigAsteroid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BigAsteroid.h" },
		{ "ModuleRelativePath", "BigAsteroid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigAsteroid_Statics::NewProp_defaultSceneRoot_MetaData[] = {
		{ "Category", "BigAsteroid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BigAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABigAsteroid_Statics::NewProp_defaultSceneRoot = { "defaultSceneRoot", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigAsteroid, defaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_defaultSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_defaultSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidMeshComponent_MetaData[] = {
		{ "Category", "BigAsteroid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BigAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidMeshComponent = { "asteroidMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigAsteroid, asteroidMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidBoxCollider_MetaData[] = {
		{ "Category", "BigAsteroid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BigAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidBoxCollider = { "asteroidBoxCollider", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigAsteroid, asteroidBoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidBoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidBoxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionParticle_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "BigAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionParticle = { "explosionParticle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigAsteroid, explosionParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "BigAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionSound = { "explosionSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigAsteroid, explosionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigAsteroid_Statics::NewProp_MediumAsteroidBPClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "BigAsteroid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABigAsteroid_Statics::NewProp_MediumAsteroidBPClass = { "MediumAsteroidBPClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABigAsteroid, MediumAsteroidBPClass), Z_Construct_UClass_AMediumAsteroid_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_MediumAsteroidBPClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABigAsteroid_Statics::NewProp_MediumAsteroidBPClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABigAsteroid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigAsteroid_Statics::NewProp_defaultSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigAsteroid_Statics::NewProp_asteroidBoxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigAsteroid_Statics::NewProp_explosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABigAsteroid_Statics::NewProp_MediumAsteroidBPClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABigAsteroid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABigAsteroid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABigAsteroid_Statics::ClassParams = {
		&ABigAsteroid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABigAsteroid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABigAsteroid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABigAsteroid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABigAsteroid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABigAsteroid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABigAsteroid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABigAsteroid, 446680564);
	template<> ASTEROIDREMAKE_API UClass* StaticClass<ABigAsteroid>()
	{
		return ABigAsteroid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABigAsteroid(Z_Construct_UClass_ABigAsteroid, &ABigAsteroid::StaticClass, TEXT("/Script/AsteroidRemake"), TEXT("ABigAsteroid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABigAsteroid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
