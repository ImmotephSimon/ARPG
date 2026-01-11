// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomVisibilityComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomVisibilityComponent() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisibilityComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisibilityComponent_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UStaticRoomVisibilityComponent();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URoomVisibilityComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoomVisibilityComponent;
UClass* URoomVisibilityComponent::GetPrivateStaticClass()
{
	using TClass = URoomVisibilityComponent;
	if (!Z_Registration_Info_UClass_URoomVisibilityComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoomVisibilityComponent"),
			Z_Registration_Info_UClass_URoomVisibilityComponent.InnerSingleton,
			StaticRegisterNativesURoomVisibilityComponent,
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
	return Z_Registration_Info_UClass_URoomVisibilityComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomVisibilityComponent_NoRegister()
{
	return URoomVisibilityComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomVisibilityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ProceduralDungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor component to manage the visibility of an actor in the dungeon.\n// Use this one if the actor is able to move room.\n// If the actor remains in the same room, use UStaticRoomVisibilityComponent instead.\n" },
#endif
		{ "DisplayName", "Room Visibility" },
		{ "IncludePath", "RoomVisibilityComponent.h" },
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor component to manage the visibility of an actor in the dungeon.\nUse this one if the actor is able to move room.\nIf the actor remains in the same room, use UStaticRoomVisibilityComponent instead." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URoomVisibilityComponent constinit property declarations *****************
// ********** End Class URoomVisibilityComponent constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomVisibilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoomVisibilityComponent_Statics
UObject* (*const Z_Construct_UClass_URoomVisibilityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticRoomVisibilityComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URoomVisibilityComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URoomVisitor_NoRegister, (int32)VTABLE_OFFSET(URoomVisibilityComponent, IRoomVisitor), false },  // 1780546270
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomVisibilityComponent_Statics::ClassParams = {
	&URoomVisibilityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomVisibilityComponent_Statics::Class_MetaDataParams)
};
void URoomVisibilityComponent::StaticRegisterNativesURoomVisibilityComponent()
{
}
UClass* Z_Construct_UClass_URoomVisibilityComponent()
{
	if (!Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton, Z_Construct_UClass_URoomVisibilityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomVisibilityComponent);
URoomVisibilityComponent::~URoomVisibilityComponent() {}
// ********** End Class URoomVisibilityComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomVisibilityComponent, URoomVisibilityComponent::StaticClass, TEXT("URoomVisibilityComponent"), &Z_Registration_Info_UClass_URoomVisibilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomVisibilityComponent), 1883866164U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h__Script_ProceduralDungeon_3091794251{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
