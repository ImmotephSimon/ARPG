// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/GeneratorProvider.h"

#ifdef PROCEDURALDUNGEON_GeneratorProvider_generated_h
#error "GeneratorProvider.generated.h already included, missing '#pragma once' in GeneratorProvider.h"
#endif
#define PROCEDURALDUNGEON_GeneratorProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UGeneratorProvider ***************************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UGeneratorProvider_NoRegister();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALDUNGEON_API UGeneratorProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeneratorProvider(UGeneratorProvider&&) = delete; \
	UGeneratorProvider(const UGeneratorProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALDUNGEON_API, UGeneratorProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratorProvider) \
	virtual ~UGeneratorProvider() = default;


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGeneratorProvider(); \
	friend struct Z_Construct_UClass_UGeneratorProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UGeneratorProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeneratorProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), Z_Construct_UClass_UGeneratorProvider_NoRegister) \
	DECLARE_SERIALIZER(UGeneratorProvider)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_17_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGeneratorProvider() {} \
public: \
	typedef UGeneratorProvider UClassType; \
	typedef IGeneratorProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_14_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeneratorProvider;

// ********** End Interface UGeneratorProvider *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
