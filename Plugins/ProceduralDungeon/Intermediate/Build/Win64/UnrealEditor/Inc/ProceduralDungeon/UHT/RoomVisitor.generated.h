// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomVisitor.h"

#ifdef PROCEDURALDUNGEON_RoomVisitor_generated_h
#error "RoomVisitor.generated.h already included, missing '#pragma once' in RoomVisitor.h"
#endif
#define PROCEDURALDUNGEON_RoomVisitor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ARoomLevel;

// ********** Begin Interface URoomVisitor *********************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRoomExit_Implementation(ARoomLevel* RoomLevel) {}; \
	virtual void OnRoomEnter_Implementation(ARoomLevel* RoomLevel) {}; \
	DECLARE_FUNCTION(execOnRoomExit); \
	DECLARE_FUNCTION(execOnRoomEnter);


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_CALLBACK_WRAPPERS
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALDUNGEON_API URoomVisitor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoomVisitor(URoomVisitor&&) = delete; \
	URoomVisitor(const URoomVisitor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALDUNGEON_API, URoomVisitor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomVisitor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomVisitor) \
	virtual ~URoomVisitor() = default;


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURoomVisitor(); \
	friend struct Z_Construct_UClass_URoomVisitor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor_NoRegister(); \
public: \
	DECLARE_CLASS2(URoomVisitor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoomVisitor_NoRegister) \
	DECLARE_SERIALIZER(URoomVisitor)


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRoomVisitor() {} \
public: \
	typedef URoomVisitor UClassType; \
	typedef IRoomVisitor ThisClass; \
	static void Execute_OnRoomEnter(UObject* O, ARoomLevel* RoomLevel); \
	static void Execute_OnRoomExit(UObject* O, ARoomLevel* RoomLevel); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_17_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoomVisitor;

// ********** End Interface URoomVisitor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
