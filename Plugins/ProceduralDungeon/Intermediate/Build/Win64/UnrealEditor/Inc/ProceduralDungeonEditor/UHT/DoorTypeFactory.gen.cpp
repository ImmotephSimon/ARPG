// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/DoorTypeFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDoorTypeFactory() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UDoorTypeFactory();
PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UDoorTypeFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDoorTypeFactory *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDoorTypeFactory;
UClass* UDoorTypeFactory::GetPrivateStaticClass()
{
	using TClass = UDoorTypeFactory;
	if (!Z_Registration_Info_UClass_UDoorTypeFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DoorTypeFactory"),
			Z_Registration_Info_UClass_UDoorTypeFactory.InnerSingleton,
			StaticRegisterNativesUDoorTypeFactory,
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
	return Z_Registration_Info_UClass_UDoorTypeFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UDoorTypeFactory_NoRegister()
{
	return UDoorTypeFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDoorTypeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DoorTypeFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/DoorTypeFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDoorTypeFactory constinit property declarations *************************
// ********** End Class UDoorTypeFactory constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorTypeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDoorTypeFactory_Statics
UObject* (*const Z_Construct_UClass_UDoorTypeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorTypeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorTypeFactory_Statics::ClassParams = {
	&UDoorTypeFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorTypeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoorTypeFactory_Statics::Class_MetaDataParams)
};
void UDoorTypeFactory::StaticRegisterNativesUDoorTypeFactory()
{
}
UClass* Z_Construct_UClass_UDoorTypeFactory()
{
	if (!Z_Registration_Info_UClass_UDoorTypeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorTypeFactory.OuterSingleton, Z_Construct_UClass_UDoorTypeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoorTypeFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDoorTypeFactory);
UDoorTypeFactory::~UDoorTypeFactory() {}
// ********** End Class UDoorTypeFactory ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h__Script_ProceduralDungeonEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDoorTypeFactory, UDoorTypeFactory::StaticClass, TEXT("UDoorTypeFactory"), &Z_Registration_Info_UClass_UDoorTypeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorTypeFactory), 1779596712U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h__Script_ProceduralDungeonEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h__Script_ProceduralDungeonEditor_3030256518{
	TEXT("/Script/ProceduralDungeonEditor"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h__Script_ProceduralDungeonEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_DoorTypeFactory_h__Script_ProceduralDungeonEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
