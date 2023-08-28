// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ASTEROIDREMAKE_ShipPlayer_generated_h
#error "ShipPlayer.generated.h already included, missing '#pragma once' in ShipPlayer.h"
#endif
#define ASTEROIDREMAKE_ShipPlayer_generated_h

#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_SPARSE_DATA
#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInvulnerableTimerCallback); \
	DECLARE_FUNCTION(execOnHit);


#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInvulnerableTimerCallback); \
	DECLARE_FUNCTION(execOnHit);


#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShipPlayer(); \
	friend struct Z_Construct_UClass_AShipPlayer_Statics; \
public: \
	DECLARE_CLASS(AShipPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsteroidRemake"), NO_API) \
	DECLARE_SERIALIZER(AShipPlayer)


#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAShipPlayer(); \
	friend struct Z_Construct_UClass_AShipPlayer_Statics; \
public: \
	DECLARE_CLASS(AShipPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsteroidRemake"), NO_API) \
	DECLARE_SERIALIZER(AShipPlayer)


#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShipPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShipPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShipPlayer(AShipPlayer&&); \
	NO_API AShipPlayer(const AShipPlayer&); \
public:


#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShipPlayer(AShipPlayer&&); \
	NO_API AShipPlayer(const AShipPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShipPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShipPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShipPlayer)


#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bulletSpawnOffset() { return STRUCT_OFFSET(AShipPlayer, bulletSpawnOffset); } \
	FORCEINLINE static uint32 __PPO___rotationSpeed() { return STRUCT_OFFSET(AShipPlayer, _rotationSpeed); } \
	FORCEINLINE static uint32 __PPO___moveForce() { return STRUCT_OFFSET(AShipPlayer, _moveForce); } \
	FORCEINLINE static uint32 __PPO___maxSpeed() { return STRUCT_OFFSET(AShipPlayer, _maxSpeed); } \
	FORCEINLINE static uint32 __PPO___linearDamping() { return STRUCT_OFFSET(AShipPlayer, _linearDamping); }


#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_22_PROLOG
#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_PRIVATE_PROPERTY_OFFSET \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_SPARSE_DATA \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_RPC_WRAPPERS \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_INCLASS \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_PRIVATE_PROPERTY_OFFSET \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_SPARSE_DATA \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_INCLASS_NO_PURE_DECLS \
	AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDREMAKE_API UClass* StaticClass<class AShipPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AsteroidRemake_Source_AsteroidRemake_ShipPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
