// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGeneratorBase.h"

#ifdef PROCEDURALDUNGEON_DungeonGeneratorBase_generated_h
#error "DungeonGeneratorBase.generated.h already included, missing '#pragma once' in DungeonGeneratorBase.h"
#endif
#define PROCEDURALDUNGEON_DungeonGeneratorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoor;
class APawn;
class APlayerController;
class IReadOnlyRoom;
class UClass;
class UDoorType;
class UDungeonGraph;
class UObject;
class URoom;
class URoomData;
class UWorld;
enum class EDoorDirection : uint8;
struct FDoorDef;
struct FDungeonSaveData;
struct FRandomStream;
struct FRoomCandidate;

// ********** Begin Delegate FGenerationEvent ******************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_20_DELEGATE \
PROCEDURALDUNGEON_API void FGenerationEvent_DelegateWrapper(const FMulticastScriptDelegate& GenerationEvent);


// ********** End Delegate FGenerationEvent ********************************************************

// ********** Begin Delegate FRoomEvent ************************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_21_DELEGATE \
PROCEDURALDUNGEON_API void FRoomEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomEvent, const URoomData* Room, TScriptInterface<IReadOnlyRoom> const& RoomInstance);


// ********** End Delegate FRoomEvent **************************************************************

// ********** Begin Delegate FRoomDoorEvent ********************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_22_DELEGATE \
PROCEDURALDUNGEON_API void FRoomDoorEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomDoorEvent, const URoomData* Room, FDoorDef const& Door);


// ********** End Delegate FRoomDoorEvent **********************************************************

// ********** Begin ScriptStruct FDungeonSaveData **************************************************
struct Z_Construct_UScriptStruct_FDungeonSaveData_Statics;
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDungeonSaveData_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


struct FDungeonSaveData;
// ********** End ScriptStruct FDungeonSaveData ****************************************************

// ********** Begin Class ADungeonGeneratorBase ****************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CreateDungeon_Implementation(); \
	virtual void OnFailedToAddRoom_Implementation(const URoomData* FromRoom, FDoorDef const& FromDoor); \
	virtual void OnRoomAdded_Implementation(const URoomData* NewRoom, TScriptInterface<IReadOnlyRoom> const& RoomInstance); \
	virtual void OnGenerationFailed_Implementation(); \
	virtual void OnGenerationSuccess_Implementation(); \
	virtual void OnGenerationInit_Implementation(); \
	virtual void OnPostGeneration_Implementation(); \
	virtual void OnPreGeneration_Implementation(); \
	virtual APawn* GetVisibilityPawn_Implementation(APlayerController* PlayerController); \
	virtual void InitializeDungeon_Implementation(const UDungeonGraph* Rooms); \
	virtual TSubclassOf<ADoor> ChooseDoor_Implementation(const URoomData* CurrentRoom, const URoom* CurrentRoomInstance, const URoomData* NextRoom, const URoom* NextRoomInstance, const UDoorType* DoorType, const UDoorType* OtherDoorType, bool& Flipped); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execYieldGeneration); \
	DECLARE_FUNCTION(execAddRoomToDungeon); \
	DECLARE_FUNCTION(execTryPlaceRoomAtLocation); \
	DECLARE_FUNCTION(execTryPlaceRoom); \
	DECLARE_FUNCTION(execCreateRoomInstance); \
	DECLARE_FUNCTION(execFinalizeDungeon); \
	DECLARE_FUNCTION(execStartNewDungeon); \
	DECLARE_FUNCTION(execCreateDungeon); \
	DECLARE_FUNCTION(execLoadAllDungeons); \
	DECLARE_FUNCTION(execSaveAllDungeons); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execGetCompatibleRoomData); \
	DECLARE_FUNCTION(execGetRandomRoomCandidate); \
	DECLARE_FUNCTION(execGetRandomRoomDataWeighted); \
	DECLARE_FUNCTION(execGetRandomRoomData); \
	DECLARE_FUNCTION(execOnFailedToAddRoom); \
	DECLARE_FUNCTION(execOnRoomAdded); \
	DECLARE_FUNCTION(execOnGenerationFailed); \
	DECLARE_FUNCTION(execOnGenerationSuccess); \
	DECLARE_FUNCTION(execOnGenerationInit); \
	DECLARE_FUNCTION(execOnPostGeneration); \
	DECLARE_FUNCTION(execOnPreGeneration); \
	DECLARE_FUNCTION(execGetVisibilityPawn); \
	DECLARE_FUNCTION(execInitializeDungeon); \
	DECLARE_FUNCTION(execChooseDoor); \
	DECLARE_FUNCTION(execLoadDungeon); \
	DECLARE_FUNCTION(execSaveDungeon); \
	DECLARE_FUNCTION(execUnload); \
	DECLARE_FUNCTION(execGenerate);


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ADungeonGeneratorBase_Statics;
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGeneratorBase_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGeneratorBase(); \
	friend struct ::Z_Construct_UClass_ADungeonGeneratorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* ::Z_Construct_UClass_ADungeonGeneratorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ADungeonGeneratorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_ADungeonGeneratorBase_NoRegister) \
	DECLARE_SERIALIZER(ADungeonGeneratorBase) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Seed=NETFIELD_REP_START, \
		NETFIELD_REP_END=Seed	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADungeonGeneratorBase(ADungeonGeneratorBase&&) = delete; \
	ADungeonGeneratorBase(const ADungeonGeneratorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGeneratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGeneratorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADungeonGeneratorBase) \
	NO_API virtual ~ADungeonGeneratorBase();


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_66_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADungeonGeneratorBase;

// ********** End Class ADungeonGeneratorBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h

// ********** Begin Enum EGenerationResult *********************************************************
#define FOREACH_ENUM_EGENERATIONRESULT(op) \
	op(EGenerationResult::None) \
	op(EGenerationResult::Error) \
	op(EGenerationResult::Success) 

enum class EGenerationResult : uint8;
template<> struct TIsUEnumClass<EGenerationResult> { enum { Value = true }; };
template<> PROCEDURALDUNGEON_NON_ATTRIBUTED_API UEnum* StaticEnum<EGenerationResult>();
// ********** End Enum EGenerationResult ***********************************************************

// ********** Begin Enum EGeneratorFlags ***********************************************************
#define FOREACH_ENUM_EGENERATORFLAGS(op) \
	op(EGeneratorFlags::None) \
	op(EGeneratorFlags::Generating) \
	op(EGeneratorFlags::LoadSavedDungeon) \
	op(EGeneratorFlags::All) 

enum class EGeneratorFlags;
template<> struct TIsUEnumClass<EGeneratorFlags> { enum { Value = true }; };
template<> PROCEDURALDUNGEON_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeneratorFlags>();
// ********** End Enum EGeneratorFlags *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
