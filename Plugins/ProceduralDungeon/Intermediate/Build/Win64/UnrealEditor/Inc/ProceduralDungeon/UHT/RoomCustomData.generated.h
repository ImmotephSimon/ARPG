// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomCustomData.h"

#ifdef PROCEDURALDUNGEON_RoomCustomData_generated_h
#error "RoomCustomData.generated.h already included, missing '#pragma once' in RoomCustomData.h"
#endif
#define PROCEDURALDUNGEON_RoomCustomData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URoomCustomData **********************************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomCustomData(); \
	friend struct Z_Construct_UClass_URoomCustomData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister(); \
public: \
	DECLARE_CLASS2(URoomCustomData, UReplicableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoomCustomData_NoRegister) \
	DECLARE_SERIALIZER(URoomCustomData) \
	virtual UObject* _getUObject() const override { return const_cast<URoomCustomData*>(this); }


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoomCustomData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoomCustomData(URoomCustomData&&) = delete; \
	URoomCustomData(const URoomCustomData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomCustomData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomCustomData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomCustomData) \
	NO_API virtual ~URoomCustomData();


#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_19_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoomCustomData;

// ********** End Class URoomCustomData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
