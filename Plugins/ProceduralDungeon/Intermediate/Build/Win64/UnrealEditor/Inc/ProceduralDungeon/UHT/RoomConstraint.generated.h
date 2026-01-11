// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomConstraints/RoomConstraint.h"

#ifdef PROCEDURALDUNGEON_RoomConstraint_generated_h
#error "RoomConstraint.generated.h already included, missing '#pragma once' in RoomConstraint.h"
#endif
#define PROCEDURALDUNGEON_RoomConstraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URoomData;
enum class EDoorDirection : uint8;

// ********** Begin Class URoomConstraint **********************************************************
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Check_Implementation(const URoomData* RoomData, FIntVector Location, EDoorDirection Direction) const; \
	DECLARE_FUNCTION(execCheck);


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URoomConstraint_Statics;
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint_NoRegister();

#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomConstraint(); \
	friend struct ::Z_Construct_UClass_URoomConstraint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* ::Z_Construct_UClass_URoomConstraint_NoRegister(); \
public: \
	DECLARE_CLASS2(URoomConstraint, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_URoomConstraint_NoRegister) \
	DECLARE_SERIALIZER(URoomConstraint)


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoomConstraint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoomConstraint(URoomConstraint&&) = delete; \
	URoomConstraint(const URoomConstraint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomConstraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomConstraint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomConstraint) \
	NO_API virtual ~URoomConstraint();


#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_17_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoomConstraint;

// ********** End Class URoomConstraint ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
