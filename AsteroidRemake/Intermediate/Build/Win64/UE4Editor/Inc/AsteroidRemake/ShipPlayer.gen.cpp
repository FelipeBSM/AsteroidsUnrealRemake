// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsteroidRemake/ShipPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipPlayer() {}
// Cross Module References
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_AShipPlayer_NoRegister();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_AShipPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AsteroidRemake();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASTEROIDREMAKE_API UClass* Z_Construct_UClass_ABullet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShipPlayer::execInvulnerableTimerCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvulnerableTimerCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShipPlayer::execOnHit)
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
	void AShipPlayer::StaticRegisterNativesAShipPlayer()
	{
		UClass* Class = AShipPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InvulnerableTimerCallback", &AShipPlayer::execInvulnerableTimerCallback },
			{ "OnHit", &AShipPlayer::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShipPlayer_InvulnerableTimerCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShipPlayer_InvulnerableTimerCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShipPlayer_InvulnerableTimerCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShipPlayer, nullptr, "InvulnerableTimerCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShipPlayer_InvulnerableTimerCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShipPlayer_InvulnerableTimerCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShipPlayer_InvulnerableTimerCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShipPlayer_InvulnerableTimerCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShipPlayer_OnHit_Statics
	{
		struct ShipPlayer_eventOnHit_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShipPlayer_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShipPlayer_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShipPlayer_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShipPlayer_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShipPlayer_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShipPlayer_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShipPlayer_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShipPlayer_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShipPlayer_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShipPlayer, nullptr, "OnHit", nullptr, nullptr, sizeof(ShipPlayer_eventOnHit_Parms), Z_Construct_UFunction_AShipPlayer_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShipPlayer_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShipPlayer_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShipPlayer_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShipPlayer_NoRegister()
	{
		return AShipPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AShipPlayer_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerBoxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerBoxCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deathParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deathParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerDeathAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerDeathAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletSpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bulletSpawnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__moveForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__moveForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__linearDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShipPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AsteroidRemake,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShipPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShipPlayer_InvulnerableTimerCallback, "InvulnerableTimerCallback" }, // 2674198047
		{ &Z_Construct_UFunction_AShipPlayer_OnHit, "OnHit" }, // 1187057990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShipPlayer.h" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp_defaultSceneRoot_MetaData[] = {
		{ "Category", "ShipPlayer" },
		{ "Comment", "//PLATER COMPONENTS\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
		{ "ToolTip", "PLATER COMPONENTS" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp_defaultSceneRoot = { "defaultSceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, defaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp_defaultSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp_defaultSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerMeshComponent_MetaData[] = {
		{ "Category", "ShipPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerMeshComponent = { "playerMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, playerMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerBoxCollider_MetaData[] = {
		{ "Category", "ShipPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerBoxCollider = { "playerBoxCollider", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, playerBoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerBoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerBoxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp_deathParticleSystem_MetaData[] = {
		{ "Category", "ShipPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp_deathParticleSystem = { "deathParticleSystem", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, deathParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp_deathParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp_deathParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerDeathAudio_MetaData[] = {
		{ "Category", "ShipPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerDeathAudio = { "playerDeathAudio", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, playerDeathAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerDeathAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerDeathAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp_arrowComponent_MetaData[] = {
		{ "Category", "ShipPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp_arrowComponent = { "arrowComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, arrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp_arrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp_arrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp_projectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, projectile), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp_projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp_projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp_bulletSpawnOffset_MetaData[] = {
		{ "Category", "Fire Spawn" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp_bulletSpawnOffset = { "bulletSpawnOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, bulletSpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp_bulletSpawnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp_bulletSpawnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp__rotationSpeed_MetaData[] = {
		{ "Category", "Ship Movement" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp__rotationSpeed = { "_rotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, _rotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp__rotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp__rotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp__moveForce_MetaData[] = {
		{ "Category", "Ship Movement" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp__moveForce = { "_moveForce", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, _moveForce), METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp__moveForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp__moveForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp__maxSpeed_MetaData[] = {
		{ "Category", "Ship Movement" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp__maxSpeed = { "_maxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, _maxSpeed), METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp__maxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp__maxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipPlayer_Statics::NewProp__linearDamping_MetaData[] = {
		{ "Category", "Ship Movement" },
		{ "ModuleRelativePath", "ShipPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShipPlayer_Statics::NewProp__linearDamping = { "_linearDamping", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShipPlayer, _linearDamping), METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::NewProp__linearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::NewProp__linearDamping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShipPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp_defaultSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerBoxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp_deathParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp_playerDeathAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp_arrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp_projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp_bulletSpawnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp__rotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp__moveForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp__maxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipPlayer_Statics::NewProp__linearDamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShipPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShipPlayer_Statics::ClassParams = {
		&AShipPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShipPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShipPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShipPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShipPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShipPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShipPlayer, 82557704);
	template<> ASTEROIDREMAKE_API UClass* StaticClass<AShipPlayer>()
	{
		return AShipPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShipPlayer(Z_Construct_UClass_AShipPlayer, &AShipPlayer::StaticClass, TEXT("/Script/AsteroidRemake"), TEXT("AShipPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
