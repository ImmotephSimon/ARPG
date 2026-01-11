// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Classes/DungeonSaveClasses.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDungeonSaveClasses() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonCustomSerialization_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSaveInterface_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_USaveTestObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_USaveTestObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USaveTestObject **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USaveTestObject;
UClass* USaveTestObject::GetPrivateStaticClass()
{
	using TClass = USaveTestObject;
	if (!Z_Registration_Info_UClass_USaveTestObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SaveTestObject"),
			Z_Registration_Info_UClass_USaveTestObject.InnerSingleton,
			StaticRegisterNativesUSaveTestObject,
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
	return Z_Registration_Info_UClass_USaveTestObject.InnerSingleton;
}
UClass* Z_Construct_UClass_USaveTestObject_NoRegister()
{
	return USaveTestObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USaveTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/DungeonSaveClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/DungeonSaveClasses.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestSaveGameFlag_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Classes/DungeonSaveClasses.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderOfExecution_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Classes/DungeonSaveClasses.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USaveTestObject constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestSaveGameFlag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderOfExecution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USaveTestObject constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USaveTestObject_Statics

// ********** Begin Class USaveTestObject Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveTestObject_Statics::NewProp_TestSaveGameFlag = { "TestSaveGameFlag", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveTestObject, TestSaveGameFlag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestSaveGameFlag_MetaData), NewProp_TestSaveGameFlag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveTestObject_Statics::NewProp_OrderOfExecution = { "OrderOfExecution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveTestObject, OrderOfExecution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderOfExecution_MetaData), NewProp_OrderOfExecution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveTestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveTestObject_Statics::NewProp_TestSaveGameFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveTestObject_Statics::NewProp_OrderOfExecution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveTestObject_Statics::PropPointers) < 2048);
// ********** End Class USaveTestObject Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_USaveTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USaveTestObject_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDungeonCustomSerialization_NoRegister, (int32)VTABLE_OFFSET(USaveTestObject, IDungeonCustomSerialization), false },  // 1577964527
	{ Z_Construct_UClass_UDungeonSaveInterface_NoRegister, (int32)VTABLE_OFFSET(USaveTestObject, IDungeonSaveInterface), false },  // 728230088
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveTestObject_Statics::ClassParams = {
	&USaveTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveTestObject_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveTestObject_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x040000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveTestObject_Statics::Class_MetaDataParams)
};
void USaveTestObject::StaticRegisterNativesUSaveTestObject()
{
}
UClass* Z_Construct_UClass_USaveTestObject()
{
	if (!Z_Registration_Info_UClass_USaveTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveTestObject.OuterSingleton, Z_Construct_UClass_USaveTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveTestObject.OuterSingleton;
}
USaveTestObject::USaveTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USaveTestObject);
USaveTestObject::~USaveTestObject() {}
// ********** End Class USaveTestObject ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveTestObject, USaveTestObject::StaticClass, TEXT("USaveTestObject"), &Z_Registration_Info_UClass_USaveTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveTestObject), 3228579454U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h__Script_ProceduralDungeon_3355747303{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_DungeonSaveClasses_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
