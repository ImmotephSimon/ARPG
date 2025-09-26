// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/RoomContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoomContainer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomContainer();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface URoomContainer *******************************************************
void URoomContainer::StaticRegisterNativesURoomContainer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoomContainer;
UClass* URoomContainer::GetPrivateStaticClass()
{
	using TClass = URoomContainer;
	if (!Z_Registration_Info_UClass_URoomContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RoomContainer"),
			Z_Registration_Info_UClass_URoomContainer.InnerSingleton,
			StaticRegisterNativesURoomContainer,
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
	return Z_Registration_Info_UClass_URoomContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomContainer_NoRegister()
{
	return URoomContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Interfaces/RoomContainer.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRoomContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URoomContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomContainer_Statics::ClassParams = {
	&URoomContainer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomContainer()
{
	if (!Z_Registration_Info_UClass_URoomContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomContainer.OuterSingleton, Z_Construct_UClass_URoomContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomContainer.OuterSingleton;
}
URoomContainer::URoomContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomContainer);
// ********** End Interface URoomContainer *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomContainer, URoomContainer::StaticClass, TEXT("URoomContainer"), &Z_Registration_Info_UClass_URoomContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomContainer), 3414910679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h__Script_ProceduralDungeon_1251246939(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomContainer_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
