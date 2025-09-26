// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadOnlyRoom.h"

#ifdef PROCEDURALDUNGEON_ReadOnlyRoom_generated_h
#error "ReadOnlyRoom.generated.h already included, missing '#pragma once' in ReadOnlyRoom.h"
#endif
#define PROCEDURALDUNGEON_ReadOnlyRoom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class URoomData;
enum class EDoorDirection : uint8;

// ********** Begin Interface UReadOnlyRoom ********************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBoundsExtent); \
	DECLARE_FUNCTION(execGetBoundsCenter); \
	DECLARE_FUNCTION(execCountConnectedDoors); \
	DECLARE_FUNCTION(execAreAllDoorsConnected); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetRoomID); \
	DECLARE_FUNCTION(execGetRoomData);


PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALDUNGEON_API UReadOnlyRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReadOnlyRoom(UReadOnlyRoom&&) = delete; \
	UReadOnlyRoom(const UReadOnlyRoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALDUNGEON_API, UReadOnlyRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadOnlyRoom); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadOnlyRoom) \
	virtual ~UReadOnlyRoom() = default;


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUReadOnlyRoom(); \
	friend struct Z_Construct_UClass_UReadOnlyRoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister(); \
public: \
	DECLARE_CLASS2(UReadOnlyRoom, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_UReadOnlyRoom_NoRegister) \
	DECLARE_SERIALIZER(UReadOnlyRoom)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IReadOnlyRoom() {} \
public: \
	typedef UReadOnlyRoom UClassType; \
	typedef IReadOnlyRoom ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_16_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReadOnlyRoom;

// ********** End Interface UReadOnlyRoom **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
