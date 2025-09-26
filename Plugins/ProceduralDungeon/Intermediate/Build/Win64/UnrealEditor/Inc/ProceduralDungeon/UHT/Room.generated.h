// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Room.h"

#ifdef PROCEDURALDUNGEON_Room_generated_h
#error "Room.generated.h already included, missing '#pragma once' in Room.h"
#endif
#define PROCEDURALDUNGEON_Room_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADoor;
class URoom;
class URoomCustomData;
struct FDoorDef;
struct FRandomStream;

// ********** Begin ScriptStruct FCustomDataPair ***************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomDataPair_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


struct FCustomDataPair;
// ********** End ScriptStruct FCustomDataPair *****************************************************

// ********** Begin Class URoom ********************************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDoorDef); \
	DECLARE_FUNCTION(execOnInstanceLoaded); \
	DECLARE_FUNCTION(execOnRep_IsLocked); \
	DECLARE_FUNCTION(execOnRep_Connections); \
	DECLARE_FUNCTION(execOnRep_Id); \
	DECLARE_FUNCTION(execOnRep_RoomData); \
	DECLARE_FUNCTION(execGetDoorsWith); \
	DECLARE_FUNCTION(execGetConnectedRoomIndex); \
	DECLARE_FUNCTION(execGetAllConnectedRooms); \
	DECLARE_FUNCTION(execGetConnectedRoomAt); \
	DECLARE_FUNCTION(execIsDoorConnected); \
	DECLARE_FUNCTION(execGetAllDoors); \
	DECLARE_FUNCTION(execGetDoor); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execHasCustomData_BP); \
	DECLARE_FUNCTION(execGetCustomData_BP); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execForceVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsPlayerInside);


PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoom(); \
	friend struct Z_Construct_UClass_URoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister(); \
public: \
	DECLARE_CLASS2(URoom, UReplicableObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoom_NoRegister) \
	DECLARE_SERIALIZER(URoom) \
	virtual UObject* _getUObject() const override { return const_cast<URoom*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Position=NETFIELD_REP_START, \
		Direction, \
		RoomData, \
		CustomData, \
		Connections, \
		GeneratorOwner, \
		Id, \
		bIsLocked, \
		NETFIELD_REP_END=bIsLocked	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(URoom) \
public:


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoom(URoom&&) = delete; \
	URoom(const URoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoom) \
	NO_API virtual ~URoom();


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_44_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_47_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoom;

// ********** End Class URoom **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
