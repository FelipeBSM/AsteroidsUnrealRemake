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
#ifdef ASTEROIDREMAKE_BigAsteroid_generated_h
#error "BigAsteroid.generated.h already included, missing '#pragma once' in BigAsteroid.h"
#endif
#define ASTEROIDREMAKE_BigAsteroid_generated_h

#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_SPARSE_DATA
#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABigAsteroid(); \
	friend struct Z_Construct_UClass_ABigAsteroid_Statics; \
public: \
	DECLARE_CLASS(ABigAsteroid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsteroidRemake"), NO_API) \
	DECLARE_SERIALIZER(ABigAsteroid)


#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABigAsteroid(); \
	friend struct Z_Construct_UClass_ABigAsteroid_Statics; \
public: \
	DECLARE_CLASS(ABigAsteroid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsteroidRemake"), NO_API) \
	DECLARE_SERIALIZER(ABigAsteroid)


#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABigAsteroid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABigAsteroid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigAsteroid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigAsteroid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABigAsteroid(ABigAsteroid&&); \
	NO_API ABigAsteroid(const ABigAsteroid&); \
public:


#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABigAsteroid(ABigAsteroid&&); \
	NO_API ABigAsteroid(const ABigAsteroid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigAsteroid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigAsteroid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABigAsteroid)


#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__defaultSceneRoot() { return STRUCT_OFFSET(ABigAsteroid, defaultSceneRoot); } \
	FORCEINLINE static uint32 __PPO__asteroidMeshComponent() { return STRUCT_OFFSET(ABigAsteroid, asteroidMeshComponent); } \
	FORCEINLINE static uint32 __PPO__asteroidBoxCollider() { return STRUCT_OFFSET(ABigAsteroid, asteroidBoxCollider); } \
	FORCEINLINE static uint32 __PPO__explosionParticle() { return STRUCT_OFFSET(ABigAsteroid, explosionParticle); } \
	FORCEINLINE static uint32 __PPO__explosionSound() { return STRUCT_OFFSET(ABigAsteroid, explosionSound); } \
	FORCEINLINE static uint32 __PPO__MediumAsteroidBPClass() { return STRUCT_OFFSET(ABigAsteroid, MediumAsteroidBPClass); }


#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_21_PROLOG
#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_PRIVATE_PROPERTY_OFFSET \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_SPARSE_DATA \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_RPC_WRAPPERS \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_INCLASS \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_PRIVATE_PROPERTY_OFFSET \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_SPARSE_DATA \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_INCLASS_NO_PURE_DECLS \
	AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDREMAKE_API UClass* StaticClass<class ABigAsteroid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AsteroidRemake_Source_AsteroidRemake_BigAsteroid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
