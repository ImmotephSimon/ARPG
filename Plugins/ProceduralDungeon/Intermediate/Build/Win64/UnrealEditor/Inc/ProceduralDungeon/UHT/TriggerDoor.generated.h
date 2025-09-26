// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerDoor.h"

#ifdef PROCEDURALDUNGEON_TriggerDoor_generated_h
#error "TriggerDoor.generated.h already included, missing '#pragma once' in TriggerDoor.h"
#endif
#define PROCEDURALDUNGEON_TriggerDoor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ATriggerDoor *************************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsValidActor_Implementation(AActor* Actor, UPrimitiveComponent* Component); \
	DECLARE_FUNCTION(execIsValidActor); \
	DECLARE_FUNCTION(execOnTriggerExit); \
	DECLARE_FUNCTION(execOnTriggerEnter);


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_CALLBACK_WRAPPERS
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ATriggerDoor_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerDoor(); \
	friend struct Z_Construct_UClass_ATriggerDoor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ATriggerDoor_NoRegister(); \
public: \
	DECLARE_CLASS2(ATriggerDoor, ADoor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_ATriggerDoor_NoRegister) \
	DECLARE_SERIALIZER(ATriggerDoor)


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATriggerDoor(ATriggerDoor&&) = delete; \
	ATriggerDoor(const ATriggerDoor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerDoor) \
	NO_API virtual ~ATriggerDoor();


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_16_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATriggerDoor;

// ********** End Class ATriggerDoor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
