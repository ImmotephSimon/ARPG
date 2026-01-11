// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/RoomContainer.h"

#ifdef PROCEDURALDUNGEON_RoomContainer_generated_h
#error "RoomContainer.generated.h already included, missing '#pragma once' in RoomContainer.h"
#endif
#define PROCEDURALDUNGEON_RoomContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface URoomContainer *******************************************************
struct Z_Construct_UClass_URoomContainer_Statics;
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomContainer_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALDUNGEON_API URoomContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoomContainer(URoomContainer&&) = delete; \
	URoomContainer(const URoomContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALDUNGEON_API, URoomContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomContainer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomContainer) \
	virtual ~URoomContainer() = default;


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURoomContainer(); \
	friend struct ::Z_Construct_UClass_URoomContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* ::Z_Construct_UClass_URoomContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(URoomContainer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoomContainer_NoRegister) \
	DECLARE_SERIALIZER(URoomContainer)


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRoomContainer() {} \
public: \
	typedef URoomContainer UClassType; \
	typedef IRoomContainer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_17_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoomContainer;

// ********** End Interface URoomContainer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
