// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomConnection.h"

#ifdef PROCEDURALDUNGEON_RoomConnection_generated_h
#error "RoomConnection.generated.h already included, missing '#pragma once' in RoomConnection.h"
#endif
#define PROCEDURALDUNGEON_RoomConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADoor;
class URoom;

// ********** Begin Class URoomConnection **********************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_RoomB); \
	DECLARE_FUNCTION(execOnRep_RoomA); \
	DECLARE_FUNCTION(execOnRep_ID); \
	DECLARE_FUNCTION(execGetRoomB_BP); \
	DECLARE_FUNCTION(execGetRoomA_BP); \
	DECLARE_FUNCTION(execGetDoorRotation); \
	DECLARE_FUNCTION(execGetDoorLocation); \
	DECLARE_FUNCTION(execGetDoorInstance); \
	DECLARE_FUNCTION(execIsDoorInstanced); \
	DECLARE_FUNCTION(execGetRoomBDoorId); \
	DECLARE_FUNCTION(execGetRoomADoorId); \
	DECLARE_FUNCTION(execGetID);


PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConnection_NoRegister();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomConnection(); \
	friend struct Z_Construct_UClass_URoomConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(URoomConnection, UReplicableObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoomConnection_NoRegister) \
	DECLARE_SERIALIZER(URoomConnection) \
	virtual UObject* _getUObject() const override { return const_cast<URoomConnection*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ID=NETFIELD_REP_START, \
		RoomA, \
		RoomADoorId, \
		RoomB, \
		RoomBDoorId, \
		DoorInstance, \
		NETFIELD_REP_END=DoorInstance	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(URoomConnection) \
public:


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoomConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoomConnection(URoomConnection&&) = delete; \
	URoomConnection(const URoomConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomConnection) \
	NO_API virtual ~URoomConnection();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h_20_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoomConnection;

// ********** End Class URoomConnection ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
