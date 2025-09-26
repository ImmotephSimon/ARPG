// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonBlueprintLibrary.h"

#ifdef PROCEDURALDUNGEON_DungeonBlueprintLibrary_generated_h
#error "DungeonBlueprintLibrary.generated.h already included, missing '#pragma once' in DungeonBlueprintLibrary.h"
#endif
#define PROCEDURALDUNGEON_DungeonBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ADoor;
class APlayerController;
class UDoorType;
class URoom;
class URoomCustomData;
enum class EDoorDirection : uint8;
struct FDataTableRowHandle;
struct FDoorDef;

// ********** Begin Class UDungeonBlueprintLibrary *************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpectate); \
	DECLARE_FUNCTION(execSettings_OccludeDynamicActors); \
	DECLARE_FUNCTION(execSettings_SetOcclusionDistance); \
	DECLARE_FUNCTION(execSettings_OcclusionDistance); \
	DECLARE_FUNCTION(execSettings_SetOcclusionCulling); \
	DECLARE_FUNCTION(execSettings_OcclusionCulling); \
	DECLARE_FUNCTION(execSettings_DoorOffset); \
	DECLARE_FUNCTION(execSettings_DefaultDoorSize); \
	DECLARE_FUNCTION(execSettings_RoomUnit); \
	DECLARE_FUNCTION(execIntVector_NotEqual); \
	DECLARE_FUNCTION(execIntVector_Equal); \
	DECLARE_FUNCTION(execIntVector_Subtract); \
	DECLARE_FUNCTION(execIntVector_Add); \
	DECLARE_FUNCTION(execDungeon_InverseTransformDoorDef); \
	DECLARE_FUNCTION(execDungeon_TransformDoorDef); \
	DECLARE_FUNCTION(execDungeon_InverseTransformPosition); \
	DECLARE_FUNCTION(execDungeon_TransformPosition); \
	DECLARE_FUNCTION(execIntVector_Rotate); \
	DECLARE_FUNCTION(execIntVector_Next); \
	DECLARE_FUNCTION(execDoorDirection_ToAngle); \
	DECLARE_FUNCTION(execDoorDirection_ToIntVector); \
	DECLARE_FUNCTION(execDoorDirection_Opposite); \
	DECLARE_FUNCTION(execDoorDirection_Negate); \
	DECLARE_FUNCTION(execDoorDirection_Decrement); \
	DECLARE_FUNCTION(execDoorDirection_Increment); \
	DECLARE_FUNCTION(execDoorDirection_Sub); \
	DECLARE_FUNCTION(execDoorDirection_Add); \
	DECLARE_FUNCTION(execDoorDirection_Valid); \
	DECLARE_FUNCTION(execDoorDef_GetOpposite); \
	DECLARE_FUNCTION(execGetOwningRoomCustomData); \
	DECLARE_FUNCTION(execGetOwningRoom); \
	DECLARE_FUNCTION(execCompareDataTableRows); \
	DECLARE_FUNCTION(execIsDoorOfType);


PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDungeonBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDungeonBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDungeonBlueprintLibrary)


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDungeonBlueprintLibrary(UDungeonBlueprintLibrary&&) = delete; \
	UDungeonBlueprintLibrary(const UDungeonBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonBlueprintLibrary) \
	NO_API virtual ~UDungeonBlueprintLibrary();


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_19_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDungeonBlueprintLibrary;

// ********** End Class UDungeonBlueprintLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
