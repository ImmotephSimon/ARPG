// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomConstraints/RoomConstraint_Direction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomConstraint_Direction() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint_Direction();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint_Direction_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URoomConstraint_Direction ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoomConstraint_Direction;
UClass* URoomConstraint_Direction::GetPrivateStaticClass()
{
	using TClass = URoomConstraint_Direction;
	if (!Z_Registration_Info_UClass_URoomConstraint_Direction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoomConstraint_Direction"),
			Z_Registration_Info_UClass_URoomConstraint_Direction.InnerSingleton,
			StaticRegisterNativesURoomConstraint_Direction,
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
	return Z_Registration_Info_UClass_URoomConstraint_Direction.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomConstraint_Direction_NoRegister()
{
	return URoomConstraint_Direction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomConstraint_Direction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Constraint on the possible directions the room can be placed\n" },
#endif
		{ "DisplayName", "Direction Constraint" },
		{ "IncludePath", "RoomConstraints/RoomConstraint_Direction.h" },
		{ "ModuleRelativePath", "Public/RoomConstraints/RoomConstraint_Direction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constraint on the possible directions the room can be placed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedDirections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/RoomConstraints/RoomConstraint_Direction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoomConstraint_Direction constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedDirections_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedDirections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedDirections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoomConstraint_Direction constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomConstraint_Direction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoomConstraint_Direction_Statics

// ********** Begin Class URoomConstraint_Direction Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URoomConstraint_Direction_Statics::NewProp_AllowedDirections_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URoomConstraint_Direction_Statics::NewProp_AllowedDirections_Inner = { "AllowedDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 4084058555
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoomConstraint_Direction_Statics::NewProp_AllowedDirections = { "AllowedDirections", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConstraint_Direction, AllowedDirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedDirections_MetaData), NewProp_AllowedDirections_MetaData) }; // 4084058555
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomConstraint_Direction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConstraint_Direction_Statics::NewProp_AllowedDirections_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConstraint_Direction_Statics::NewProp_AllowedDirections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConstraint_Direction_Statics::NewProp_AllowedDirections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Direction_Statics::PropPointers) < 2048);
// ********** End Class URoomConstraint_Direction Property Definitions *****************************
UObject* (*const Z_Construct_UClass_URoomConstraint_Direction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Direction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomConstraint_Direction_Statics::ClassParams = {
	&URoomConstraint_Direction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URoomConstraint_Direction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Direction_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Direction_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomConstraint_Direction_Statics::Class_MetaDataParams)
};
void URoomConstraint_Direction::StaticRegisterNativesURoomConstraint_Direction()
{
}
UClass* Z_Construct_UClass_URoomConstraint_Direction()
{
	if (!Z_Registration_Info_UClass_URoomConstraint_Direction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomConstraint_Direction.OuterSingleton, Z_Construct_UClass_URoomConstraint_Direction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomConstraint_Direction.OuterSingleton;
}
URoomConstraint_Direction::URoomConstraint_Direction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomConstraint_Direction);
URoomConstraint_Direction::~URoomConstraint_Direction() {}
// ********** End Class URoomConstraint_Direction **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Direction_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomConstraint_Direction, URoomConstraint_Direction::StaticClass, TEXT("URoomConstraint_Direction"), &Z_Registration_Info_UClass_URoomConstraint_Direction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomConstraint_Direction), 1427723189U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Direction_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Direction_h__Script_ProceduralDungeon_130283322{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Direction_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_Direction_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
