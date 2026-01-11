// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/RoomDataFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomDataFactory() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_URoomDataFactory();
PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_URoomDataFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URoomDataFactory *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoomDataFactory;
UClass* URoomDataFactory::GetPrivateStaticClass()
{
	using TClass = URoomDataFactory;
	if (!Z_Registration_Info_UClass_URoomDataFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoomDataFactory"),
			Z_Registration_Info_UClass_URoomDataFactory.InnerSingleton,
			StaticRegisterNativesURoomDataFactory,
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
	return Z_Registration_Info_UClass_URoomDataFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomDataFactory_NoRegister()
{
	return URoomDataFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomDataFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/RoomDataFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/RoomDataFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoomDataFactory constinit property declarations *************************
// ********** End Class URoomDataFactory constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomDataFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoomDataFactory_Statics
UObject* (*const Z_Construct_UClass_URoomDataFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomDataFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomDataFactory_Statics::ClassParams = {
	&URoomDataFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomDataFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomDataFactory_Statics::Class_MetaDataParams)
};
void URoomDataFactory::StaticRegisterNativesURoomDataFactory()
{
}
UClass* Z_Construct_UClass_URoomDataFactory()
{
	if (!Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton, Z_Construct_UClass_URoomDataFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomDataFactory);
URoomDataFactory::~URoomDataFactory() {}
// ********** End Class URoomDataFactory ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h__Script_ProceduralDungeonEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomDataFactory, URoomDataFactory::StaticClass, TEXT("URoomDataFactory"), &Z_Registration_Info_UClass_URoomDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomDataFactory), 110441141U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h__Script_ProceduralDungeonEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h__Script_ProceduralDungeonEditor_3361284164{
	TEXT("/Script/ProceduralDungeonEditor"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h__Script_ProceduralDungeonEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h__Script_ProceduralDungeonEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
