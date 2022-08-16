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
#ifdef GALAGA_GalagaProjectile_generated_h
#error "GalagaProjectile.generated.h already included, missing '#pragma once' in GalagaProjectile.h"
#endif
#define GALAGA_GalagaProjectile_generated_h

#define Galaga_Source_Galaga_GalagaProjectile_h_15_SPARSE_DATA
#define Galaga_Source_Galaga_GalagaProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_Source_Galaga_GalagaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_Source_Galaga_GalagaProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalagaProjectile(); \
	friend struct Z_Construct_UClass_AGalagaProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalagaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga"), NO_API) \
	DECLARE_SERIALIZER(AGalagaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_Source_Galaga_GalagaProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGalagaProjectile(); \
	friend struct Z_Construct_UClass_AGalagaProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalagaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga"), NO_API) \
	DECLARE_SERIALIZER(AGalagaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_Source_Galaga_GalagaProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalagaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalagaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalagaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalagaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalagaProjectile(AGalagaProjectile&&); \
	NO_API AGalagaProjectile(const AGalagaProjectile&); \
public:


#define Galaga_Source_Galaga_GalagaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalagaProjectile(AGalagaProjectile&&); \
	NO_API AGalagaProjectile(const AGalagaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalagaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalagaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalagaProjectile)


#define Galaga_Source_Galaga_GalagaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGalagaProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGalagaProjectile, ProjectileMovement); }


#define Galaga_Source_Galaga_GalagaProjectile_h_12_PROLOG
#define Galaga_Source_Galaga_GalagaProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Source_Galaga_GalagaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_Source_Galaga_GalagaProjectile_h_15_SPARSE_DATA \
	Galaga_Source_Galaga_GalagaProjectile_h_15_RPC_WRAPPERS \
	Galaga_Source_Galaga_GalagaProjectile_h_15_INCLASS \
	Galaga_Source_Galaga_GalagaProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_Source_Galaga_GalagaProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Source_Galaga_GalagaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_Source_Galaga_GalagaProjectile_h_15_SPARSE_DATA \
	Galaga_Source_Galaga_GalagaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_Source_Galaga_GalagaProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Galaga_Source_Galaga_GalagaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class AGalagaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_Source_Galaga_GalagaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
