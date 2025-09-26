// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelBounds/VoxelBounds.h"

#ifdef PROCEDURALDUNGEON_VoxelBounds_generated_h
#error "VoxelBounds.generated.h already included, missing '#pragma once' in VoxelBounds.h"
#endif
#define PROCEDURALDUNGEON_VoxelBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FVoxelBoundsConnection;

// ********** Begin ScriptStruct FVoxelBoundsConnection ********************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


struct FVoxelBoundsConnection;
// ********** End ScriptStruct FVoxelBoundsConnection **********************************************

// ********** Begin Delegate FScoreCallback ********************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h_52_DELEGATE \
PROCEDURALDUNGEON_API bool FScoreCallback_DelegateWrapper(const FScriptDelegate& ScoreCallback, FVoxelBoundsConnection const& A, FVoxelBoundsConnection const& B, int32& Score);


// ********** End Delegate FScoreCallback **********************************************************

// ********** Begin ScriptStruct FVoxelBounds ******************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelBounds_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


struct FVoxelBounds;
// ********** End ScriptStruct FVoxelBounds ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h

// ********** Begin Enum EVoxelBoundsConnectionType ************************************************
#define FOREACH_ENUM_EVOXELBOUNDSCONNECTIONTYPE(op) \
	op(EVoxelBoundsConnectionType::None) \
	op(EVoxelBoundsConnectionType::Wall) \
	op(EVoxelBoundsConnectionType::Door) 

enum class EVoxelBoundsConnectionType : uint8;
template<> struct TIsUEnumClass<EVoxelBoundsConnectionType> { enum { Value = true }; };
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EVoxelBoundsConnectionType>();
// ********** End Enum EVoxelBoundsConnectionType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
