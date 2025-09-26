// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/RoomActorGuid.h"

#ifdef PROCEDURALDUNGEON_RoomActorGuid_generated_h
#error "RoomActorGuid.generated.h already included, missing '#pragma once' in RoomActorGuid.h"
#endif
#define PROCEDURALDUNGEON_RoomActorGuid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGuid;

// ********** Begin Interface URoomActorGuid *******************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShouldSaveActor_Implementation() const { return false; }; \
	virtual FGuid GetGuid_Implementation() const { return FGuid(); }; \
	DECLARE_FUNCTION(execShouldSaveActor); \
	DECLARE_FUNCTION(execGetGuid);


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_CALLBACK_WRAPPERS
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomActorGuid_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoomActorGuid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoomActorGuid(URoomActorGuid&&) = delete; \
	URoomActorGuid(const URoomActorGuid&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomActorGuid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomActorGuid); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomActorGuid) \
	virtual ~URoomActorGuid() = default;


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURoomActorGuid(); \
	friend struct Z_Construct_UClass_URoomActorGuid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomActorGuid_NoRegister(); \
public: \
	DECLARE_CLASS2(URoomActorGuid, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoomActorGuid_NoRegister) \
	DECLARE_SERIALIZER(URoomActorGuid)


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRoomActorGuid() {} \
public: \
	typedef URoomActorGuid UClassType; \
	typedef IRoomActorGuid ThisClass; \
	static FGuid Execute_GetGuid(const UObject* O); \
	static bool Execute_ShouldSaveActor(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_14_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoomActorGuid;

// ********** End Interface URoomActorGuid *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
