// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomData.h"

#ifdef PROCEDURALDUNGEON_RoomData_generated_h
#error "RoomData.generated.h already included, missing '#pragma once' in RoomData.h"
#endif
#define PROCEDURALDUNGEON_RoomData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDoorType;
class UDungeonGraph;
class URoom;
class URoomCustomData;
struct FDoorDef;

// ********** Begin Class URoomData ****************************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CleanupRoom_Implementation(URoom* Room, UDungeonGraph* Dungeon) const; \
	virtual void InitializeRoom_Implementation(URoom* Room, UDungeonGraph* Dungeon) const; \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execCleanupRoom); \
	DECLARE_FUNCTION(execInitializeRoom); \
	DECLARE_FUNCTION(execHasAllCustomData); \
	DECLARE_FUNCTION(execHasAnyCustomData); \
	DECLARE_FUNCTION(execHasCustomData); \
	DECLARE_FUNCTION(execHasAllDoorOfType); \
	DECLARE_FUNCTION(execHasAnyDoorOfType); \
	DECLARE_FUNCTION(execHasDoorOfType); \
	DECLARE_FUNCTION(execGetCompatibleDoors); \
	DECLARE_FUNCTION(execHasCompatibleDoor); \
	DECLARE_FUNCTION(execGetDoorDef); \
	DECLARE_FUNCTION(execGetNbDoor);


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_CALLBACK_WRAPPERS
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomData(); \
	friend struct Z_Construct_UClass_URoomData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister(); \
public: \
	DECLARE_CLASS2(URoomData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoomData_NoRegister) \
	DECLARE_SERIALIZER(URoomData)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoomData(URoomData&&) = delete; \
	URoomData(const URoomData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoomData) \
	NO_API virtual ~URoomData();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_35_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoomData;

// ********** End Class URoomData ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
