// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomCustomData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoomCustomData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonCustomSerialization_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSaveInterface_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URoomCustomData **********************************************************
void URoomCustomData::StaticRegisterNativesURoomCustomData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoomCustomData;
UClass* URoomCustomData::GetPrivateStaticClass()
{
	using TClass = URoomCustomData;
	if (!Z_Registration_Info_UClass_URoomCustomData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RoomCustomData"),
			Z_Registration_Info_UClass_URoomCustomData.InnerSingleton,
			StaticRegisterNativesURoomCustomData,
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
	return Z_Registration_Info_UClass_URoomCustomData.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomCustomData_NoRegister()
{
	return URoomCustomData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Base class for user custom data embedded in room instances\n" },
		{ "IncludePath", "RoomCustomData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoomCustomData.h" },
		{ "ToolTip", "Base class for user custom data embedded in room instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelComponent_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon Rules" },
		{ "Comment", "// Component to create and attach on the Level Script Actor of the instanced room.\n" },
		{ "ModuleRelativePath", "Public/RoomCustomData.h" },
		{ "ToolTip", "Component to create and attach on the Level Script Actor of the instanced room." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelComponentInstance_MetaData[] = {
		{ "Comment", "// Keep a reference to the created component instance\n" },
		{ "ModuleRelativePath", "Public/RoomCustomData.h" },
		{ "ToolTip", "Keep a reference to the created component instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LevelComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LevelComponentInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomCustomData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URoomCustomData_Statics::NewProp_LevelComponent = { "LevelComponent", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomCustomData, LevelComponent), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelComponent_MetaData), NewProp_LevelComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URoomCustomData_Statics::NewProp_LevelComponentInstance = { "LevelComponentInstance", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomCustomData, LevelComponentInstance), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelComponentInstance_MetaData), NewProp_LevelComponentInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomCustomData_Statics::NewProp_LevelComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomCustomData_Statics::NewProp_LevelComponentInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomCustomData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URoomCustomData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicableObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomCustomData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URoomCustomData_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDungeonCustomSerialization_NoRegister, (int32)VTABLE_OFFSET(URoomCustomData, IDungeonCustomSerialization), false },  // 3173650839
	{ Z_Construct_UClass_UDungeonSaveInterface_NoRegister, (int32)VTABLE_OFFSET(URoomCustomData, IDungeonSaveInterface), false },  // 2918210454
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomCustomData_Statics::ClassParams = {
	&URoomCustomData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URoomCustomData_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URoomCustomData_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomCustomData_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomCustomData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomCustomData()
{
	if (!Z_Registration_Info_UClass_URoomCustomData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomCustomData.OuterSingleton, Z_Construct_UClass_URoomCustomData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomCustomData.OuterSingleton;
}
URoomCustomData::URoomCustomData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomCustomData);
URoomCustomData::~URoomCustomData() {}
// ********** End Class URoomCustomData ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomCustomData, URoomCustomData::StaticClass, TEXT("URoomCustomData"), &Z_Registration_Info_UClass_URoomCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomCustomData), 3098644495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h__Script_ProceduralDungeon_2600080243(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
