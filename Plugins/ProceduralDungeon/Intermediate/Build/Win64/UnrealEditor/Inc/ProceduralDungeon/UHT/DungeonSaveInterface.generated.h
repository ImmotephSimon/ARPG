// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DungeonSaveInterface.h"

#ifdef PROCEDURALDUNGEON_DungeonSaveInterface_generated_h
#error "DungeonSaveInterface.generated.h already included, missing '#pragma once' in DungeonSaveInterface.h"
#endif
#define PROCEDURALDUNGEON_DungeonSaveInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDungeonSaveInterface ************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PostLoadDungeon_Implementation() {}; \
	virtual void PreSaveDungeon_Implementation() {}; \
	virtual void DungeonPostSerialize_Implementation(bool bIsLoading) {}; \
	virtual void DungeonPreSerialize_Implementation(bool bIsLoading) {}; \
	DECLARE_FUNCTION(execPostLoadDungeon); \
	DECLARE_FUNCTION(execPreSaveDungeon); \
	DECLARE_FUNCTION(execDungeonPostSerialize); \
	DECLARE_FUNCTION(execDungeonPreSerialize);


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDungeonSaveInterface_Statics;
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSaveInterface_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonSaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDungeonSaveInterface(UDungeonSaveInterface&&) = delete; \
	UDungeonSaveInterface(const UDungeonSaveInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonSaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonSaveInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonSaveInterface) \
	virtual ~UDungeonSaveInterface() = default;


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDungeonSaveInterface(); \
	friend struct ::Z_Construct_UClass_UDungeonSaveInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* ::Z_Construct_UClass_UDungeonSaveInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDungeonSaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_UDungeonSaveInterface_NoRegister) \
	DECLARE_SERIALIZER(UDungeonSaveInterface)


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDungeonSaveInterface() {} \
public: \
	typedef UDungeonSaveInterface UClassType; \
	typedef IDungeonSaveInterface ThisClass; \
	static void Execute_DungeonPostSerialize(UObject* O, bool bIsLoading); \
	static void Execute_DungeonPreSerialize(UObject* O, bool bIsLoading); \
	static void Execute_PostLoadDungeon(UObject* O); \
	static void Execute_PreSaveDungeon(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_14_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDungeonSaveInterface;

// ********** End Interface UDungeonSaveInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
