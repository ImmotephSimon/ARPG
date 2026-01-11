// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomConstraints/RoomConstraint_Location.h"
#include "BoundsParams.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomConstraint_Location() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint_Location();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint_Location_NoRegister();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FBoundsParams();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URoomConstraint_Location *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoomConstraint_Location;
UClass* URoomConstraint_Location::GetPrivateStaticClass()
{
	using TClass = URoomConstraint_Location;
	if (!Z_Registration_Info_UClass_URoomConstraint_Location.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoomConstraint_Location"),
			Z_Registration_Info_UClass_URoomConstraint_Location.InnerSingleton,
			StaticRegisterNativesURoomConstraint_Location,
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
	return Z_Registration_Info_UClass_URoomConstraint_Location.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomConstraint_Location_NoRegister()
{
	return URoomConstraint_Location::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomConstraint_Location_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Constraints the room to be inside the provided bounds\n" },
#endif
		{ "DisplayName", "Location Constraint" },
		{ "IncludePath", "RoomConstraints/RoomConstraint_Location.h" },
		{ "ModuleRelativePath", "Public/RoomConstraints/RoomConstraint_Location.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constraints the room to be inside the provided bounds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/RoomConstraints/RoomConstraint_Location.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoomConstraint_Location constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Limits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoomConstraint_Location constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomConstraint_Location>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoomConstraint_Location_Statics

// ********** Begin Class URoomConstraint_Location Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomConstraint_Location_Statics::NewProp_Limits = { "Limits", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConstraint_Location, Limits), Z_Construct_UScriptStruct_FBoundsParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limits_MetaData), NewProp_Limits_MetaData) }; // 606268345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomConstraint_Location_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConstraint_Location_Statics::NewProp_Limits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Location_Statics::PropPointers) < 2048);
// ********** End Class URoomConstraint_Location Property Definitions ******************************
UObject* (*const Z_Construct_UClass_URoomConstraint_Location_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Location_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomConstraint_Location_Statics::ClassParams = {
	&URoomConstraint_Location::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URoomConstraint_Location_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Location_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Location_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomConstraint_Location_Statics::Class_MetaDataParams)
};
void URoomConstraint_Location::StaticRegisterNativesURoomConstraint_Location()
{
}
UClass* Z_Construct_UClass_URoomConstraint_Location()
{
	if (!Z_Registration_Info_UClass_URoomConstraint_Location.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomConstraint_Location.OuterSingleton, Z_Construct_UClass_URoomConstraint_Location_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomConstraint_Location.OuterSingleton;
}
URoomConstraint_Location::URoomConstraint_Location(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomConstraint_Location);
URoomConstraint_Location::~URoomConstraint_Location() {}
// ********** End Class URoomConstraint_Location ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Location_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomConstraint_Location, URoomConstraint_Location::StaticClass, TEXT("URoomConstraint_Location"), &Z_Registration_Info_UClass_URoomConstraint_Location, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomConstraint_Location), 1639289012U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Location_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Location_h__Script_ProceduralDungeon_4166834026{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Location_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Location_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
