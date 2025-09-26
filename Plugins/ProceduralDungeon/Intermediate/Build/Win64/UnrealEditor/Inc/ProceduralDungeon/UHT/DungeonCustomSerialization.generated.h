// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DungeonCustomSerialization.h"

#ifdef PROCEDURALDUNGEON_DungeonCustomSerialization_generated_h
#error "DungeonCustomSerialization.generated.h already included, missing '#pragma once' in DungeonCustomSerialization.h"
#endif
#define PROCEDURALDUNGEON_DungeonCustomSerialization_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDungeonCustomSerialization ******************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonCustomSerialization_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALDUNGEON_API UDungeonCustomSerialization(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDungeonCustomSerialization(UDungeonCustomSerialization&&) = delete; \
	UDungeonCustomSerialization(const UDungeonCustomSerialization&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALDUNGEON_API, UDungeonCustomSerialization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonCustomSerialization); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonCustomSerialization) \
	virtual ~UDungeonCustomSerialization() = default;


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDungeonCustomSerialization(); \
	friend struct Z_Construct_UClass_UDungeonCustomSerialization_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonCustomSerialization_NoRegister(); \
public: \
	DECLARE_CLASS2(UDungeonCustomSerialization, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_UDungeonCustomSerialization_NoRegister) \
	DECLARE_SERIALIZER(UDungeonCustomSerialization)


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDungeonCustomSerialization() {} \
public: \
	typedef UDungeonCustomSerialization UClassType; \
	typedef IDungeonCustomSerialization ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_15_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDungeonCustomSerialization;

// ********** End Interface UDungeonCustomSerialization ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
