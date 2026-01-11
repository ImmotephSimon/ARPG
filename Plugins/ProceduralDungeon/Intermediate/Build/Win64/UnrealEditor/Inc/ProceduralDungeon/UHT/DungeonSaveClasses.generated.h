// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Classes/DungeonSaveClasses.h"

#ifdef PROCEDURALDUNGEON_DungeonSaveClasses_generated_h
#error "DungeonSaveClasses.generated.h already included, missing '#pragma once' in DungeonSaveClasses.h"
#endif
#define PROCEDURALDUNGEON_DungeonSaveClasses_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USaveTestObject **********************************************************
struct Z_Construct_UClass_USaveTestObject_Statics;
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_USaveTestObject_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveTestObject(); \
	friend struct ::Z_Construct_UClass_USaveTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* ::Z_Construct_UClass_USaveTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USaveTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_USaveTestObject_NoRegister) \
	DECLARE_SERIALIZER(USaveTestObject) \
	virtual UObject* _getUObject() const override { return const_cast<USaveTestObject*>(this); }


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USaveTestObject(USaveTestObject&&) = delete; \
	USaveTestObject(const USaveTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveTestObject) \
	NO_API virtual ~USaveTestObject();


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h_16_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USaveTestObject;

// ********** End Class USaveTestObject ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
