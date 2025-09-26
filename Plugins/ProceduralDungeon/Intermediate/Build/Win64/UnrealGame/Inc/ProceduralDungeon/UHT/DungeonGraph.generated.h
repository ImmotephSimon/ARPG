// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGraph.h"

#ifdef PROCEDURALDUNGEON_DungeonGraph_generated_h
#error "DungeonGraph.generated.h already included, missing '#pragma once' in DungeonGraph.h"
#endif
#define PROCEDURALDUNGEON_DungeonGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IReadOnlyRoom;
class URoom;
class URoomConnection;
class URoomCustomData;
class URoomData;
struct FDoorDef;
struct FRoomCandidate;

// ********** Begin ScriptStruct FRoomCandidate ****************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomCandidate_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


struct FRoomCandidate;
// ********** End ScriptStruct FRoomCandidate ******************************************************

// ********** Begin Class UDungeonGraph ************************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Rooms); \
	DECLARE_FUNCTION(execFilterAndSortRooms); \
	DECLARE_FUNCTION(execGetDungeonBoundsExtent); \
	DECLARE_FUNCTION(execGetDungeonBoundsCenter); \
	DECLARE_FUNCTION(execGetRoomAt); \
	DECLARE_FUNCTION(execGetPathBetween); \
	DECLARE_FUNCTION(execNumberOfRoomBetween_ReadOnly); \
	DECLARE_FUNCTION(execNumberOfRoomBetween); \
	DECLARE_FUNCTION(execHasValidPath); \
	DECLARE_FUNCTION(execCountTotalRoomType); \
	DECLARE_FUNCTION(execCountRoomType); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomTypeFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomType); \
	DECLARE_FUNCTION(execCountTotalRoomData); \
	DECLARE_FUNCTION(execCountRoomData); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomDataFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomData); \
	DECLARE_FUNCTION(execCount); \
	DECLARE_FUNCTION(execGetRandomRoom); \
	DECLARE_FUNCTION(execGetAllRoomsWithAnyCustomData); \
	DECLARE_FUNCTION(execGetAllRoomsWithAllCustomData); \
	DECLARE_FUNCTION(execGetAllRoomsWithCustomData); \
	DECLARE_FUNCTION(execGetFirstRoomFromData); \
	DECLARE_FUNCTION(execGetAllRoomsFromDataList); \
	DECLARE_FUNCTION(execGetAllRoomsFromData); \
	DECLARE_FUNCTION(execGetAllConnections); \
	DECLARE_FUNCTION(execGetAllRooms); \
	DECLARE_FUNCTION(execGetRoomByIndex);


PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonGraph(); \
	friend struct Z_Construct_UClass_UDungeonGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UDungeonGraph, UReplicableObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_UDungeonGraph_NoRegister) \
	DECLARE_SERIALIZER(UDungeonGraph) \
	virtual UObject* _getUObject() const override { return const_cast<UDungeonGraph*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RoomConnections=NETFIELD_REP_START, \
		ReplicatedRooms, \
		NETFIELD_REP_END=ReplicatedRooms	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UDungeonGraph) \
public:


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDungeonGraph(UDungeonGraph&&) = delete; \
	UDungeonGraph(const UDungeonGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonGraph) \
	NO_API virtual ~UDungeonGraph();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_47_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDungeonGraph;

// ********** End Class UDungeonGraph **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
