// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/GeneratorProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGeneratorProvider() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UGeneratorProvider();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UGeneratorProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UGeneratorProvider ***************************************************
void UGeneratorProvider::StaticRegisterNativesUGeneratorProvider()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGeneratorProvider;
UClass* UGeneratorProvider::GetPrivateStaticClass()
{
	using TClass = UGeneratorProvider;
	if (!Z_Registration_Info_UClass_UGeneratorProvider.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GeneratorProvider"),
			Z_Registration_Info_UClass_UGeneratorProvider.InnerSingleton,
			StaticRegisterNativesUGeneratorProvider,
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
	return Z_Registration_Info_UClass_UGeneratorProvider.InnerSingleton;
}
UClass* Z_Construct_UClass_UGeneratorProvider_NoRegister()
{
	return UGeneratorProvider::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGeneratorProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Interfaces/GeneratorProvider.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGeneratorProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeneratorProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorProvider_Statics::ClassParams = {
	&UGeneratorProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeneratorProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeneratorProvider()
{
	if (!Z_Registration_Info_UClass_UGeneratorProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneratorProvider.OuterSingleton, Z_Construct_UClass_UGeneratorProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeneratorProvider.OuterSingleton;
}
UGeneratorProvider::UGeneratorProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorProvider);
// ********** End Interface UGeneratorProvider *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeneratorProvider, UGeneratorProvider::StaticClass, TEXT("UGeneratorProvider"), &Z_Registration_Info_UClass_UGeneratorProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneratorProvider), 392268654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h__Script_ProceduralDungeon_865503399(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_GeneratorProvider_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
