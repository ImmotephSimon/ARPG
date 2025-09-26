// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RoomObserverComponent.h"

#ifdef PROCEDURALDUNGEON_RoomObserverComponent_generated_h
#error "RoomObserverComponent.generated.h already included, missing '#pragma once' in RoomObserverComponent.h"
#endif
#define PROCEDURALDUNGEON_RoomObserverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ARoomLevel;

// ********** Begin Delegate FRoomObserverEvent ****************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_15_DELEGATE \
PROCEDURALDUNGEON_API void FRoomObserverEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomObserverEvent, ARoomLevel* RoomLevel, AActor* Actor);


// ********** End Delegate FRoomObserverEvent ******************************************************

// ********** Begin Class URoomObserverComponent ***************************************************
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorExitRoom); \
	DECLARE_FUNCTION(execOnActorEnterRoom);


PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomObserverComponent_NoRegister();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomObserverComponent(); \
	friend struct Z_Construct_UClass_URoomObserverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomObserverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URoomObserverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoomObserverComponent_NoRegister) \
	DECLARE_SERIALIZER(URoomObserverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URoomObserverComponent*>(this); }


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoomObserverComponent(URoomObserverComponent&&) = delete; \
	URoomObserverComponent(const URoomObserverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomObserverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomObserverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoomObserverComponent) \
	NO_API virtual ~URoomObserverComponent();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_20_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoomObserverComponent;

// ********** End Class URoomObserverComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
