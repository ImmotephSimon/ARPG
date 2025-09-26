// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/DungeonCustomSerialization.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDungeonCustomSerialization() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonCustomSerialization();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonCustomSerialization_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UDungeonCustomSerialization ******************************************
void UDungeonCustomSerialization::StaticRegisterNativesUDungeonCustomSerialization()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDungeonCustomSerialization;
UClass* UDungeonCustomSerialization::GetPrivateStaticClass()
{
	using TClass = UDungeonCustomSerialization;
	if (!Z_Registration_Info_UClass_UDungeonCustomSerialization.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DungeonCustomSerialization"),
			Z_Registration_Info_UClass_UDungeonCustomSerialization.InnerSingleton,
			StaticRegisterNativesUDungeonCustomSerialization,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDungeonCustomSerialization.InnerSingleton;
}
UClass* Z_Construct_UClass_UDungeonCustomSerialization_NoRegister()
{
	return UDungeonCustomSerialization::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDungeonCustomSerialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Interfaces/DungeonCustomSerialization.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDungeonCustomSerialization>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonCustomSerialization_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCustomSerialization_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCustomSerialization_Statics::ClassParams = {
	&UDungeonCustomSerialization::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCustomSerialization_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCustomSerialization_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCustomSerialization()
{
	if (!Z_Registration_Info_UClass_UDungeonCustomSerialization.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCustomSerialization.OuterSingleton, Z_Construct_UClass_UDungeonCustomSerialization_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCustomSerialization.OuterSingleton;
}
UDungeonCustomSerialization::UDungeonCustomSerialization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCustomSerialization);
// ********** End Interface UDungeonCustomSerialization ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCustomSerialization, UDungeonCustomSerialization::StaticClass, TEXT("UDungeonCustomSerialization"), &Z_Registration_Info_UClass_UDungeonCustomSerialization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCustomSerialization), 3173650839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h__Script_ProceduralDungeon_2291680563(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonCustomSerialization_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
