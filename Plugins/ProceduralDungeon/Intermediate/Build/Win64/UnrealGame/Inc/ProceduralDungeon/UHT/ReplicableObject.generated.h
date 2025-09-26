// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplicableObject.h"

#ifdef PROCEDURALDUNGEON_ReplicableObject_generated_h
#error "ReplicableObject.generated.h already included, missing '#pragma once' in ReplicableObject.h"
#endif
#define PROCEDURALDUNGEON_ReplicableObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReplicableObject ********************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWakeUpOwnerActor);


PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject_NoRegister();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicableObject(); \
	friend struct Z_Construct_UClass_UReplicableObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicableObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_UReplicableObject_NoRegister) \
	DECLARE_SERIALIZER(UReplicableObject)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicableObject(UReplicableObject&&) = delete; \
	UReplicableObject(const UReplicableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicableObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicableObject) \
	NO_API virtual ~UReplicableObject();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_37_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicableObject;

// ********** End Class UReplicableObject **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
