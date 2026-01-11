// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayMessageSubsystem.h"

#ifdef GAMEPLAYMESSAGERUNTIME_GameplayMessageSubsystem_generated_h
#error "GameplayMessageSubsystem.generated.h already included, missing '#pragma once' in GameplayMessageSubsystem.h"
#endif
#define GAMEPLAYMESSAGERUNTIME_GameplayMessageSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;

// ********** Begin ScriptStruct FGameplayMessageListenerHandle ************************************
struct Z_Construct_UScriptStruct_FGameplayMessageListenerHandle_Statics;
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayMessageListenerHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGameplayMessageListenerHandle;
// ********** End ScriptStruct FGameplayMessageListenerHandle **************************************

// ********** Begin ScriptStruct FGameplayMessageListenerData **************************************
struct Z_Construct_UScriptStruct_FGameplayMessageListenerData_Statics;
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayMessageListenerData_Statics; \
	GAMEPLAYMESSAGERUNTIME_API static class UScriptStruct* StaticStruct();


struct FGameplayMessageListenerData;
// ********** End ScriptStruct FGameplayMessageListenerData ****************************************

// ********** Begin Class UGameplayMessageSubsystem ************************************************
struct Z_Construct_UClass_UGameplayMessageSubsystem_Statics;
	struct Z_Construct_UFunction_UGameplayMessageSubsystem_K2_BroadcastMessage_Statics; \
GAMEPLAYMESSAGERUNTIME_API UClass* Z_Construct_UClass_UGameplayMessageSubsystem_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayMessageSubsystem(); \
	friend struct ::Z_Construct_UClass_UGameplayMessageSubsystem_Statics; \
	friend struct ::Z_Construct_UFunction_UGameplayMessageSubsystem_K2_BroadcastMessage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYMESSAGERUNTIME_API UClass* ::Z_Construct_UClass_UGameplayMessageSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayMessageSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayMessageRuntime"), Z_Construct_UClass_UGameplayMessageSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGameplayMessageSubsystem)


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayMessageSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayMessageSubsystem(UGameplayMessageSubsystem&&) = delete; \
	UGameplayMessageSubsystem(const UGameplayMessageSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayMessageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayMessageSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayMessageSubsystem) \
	NO_API virtual ~UGameplayMessageSubsystem();


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h_85_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h_88_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayMessageSubsystem;

// ********** End Class UGameplayMessageSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_GameplayMessageRouter_Source_GameplayMessageRuntime_Public_GameFramework_GameplayMessageSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
