// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Classes/RoomCustomDataChildClasses.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoomCustomDataChildClasses() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataA();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataA_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataB();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataB_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataC();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataC_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomDataA *************************************************************
void UCustomDataA::StaticRegisterNativesUCustomDataA()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomDataA;
UClass* UCustomDataA::GetPrivateStaticClass()
{
	using TClass = UCustomDataA;
	if (!Z_Registration_Info_UClass_UCustomDataA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomDataA"),
			Z_Registration_Info_UClass_UCustomDataA.InnerSingleton,
			StaticRegisterNativesUCustomDataA,
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
	return Z_Registration_Info_UClass_UCustomDataA.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomDataA_NoRegister()
{
	return UCustomDataA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomDataA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomDataA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomDataA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomCustomData,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomDataA_Statics::ClassParams = {
	&UCustomDataA::StaticClass,
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
	0x048000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataA_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomDataA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomDataA()
{
	if (!Z_Registration_Info_UClass_UCustomDataA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomDataA.OuterSingleton, Z_Construct_UClass_UCustomDataA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomDataA.OuterSingleton;
}
UCustomDataA::UCustomDataA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDataA);
UCustomDataA::~UCustomDataA() {}
// ********** End Class UCustomDataA ***************************************************************

// ********** Begin Class UCustomDataB *************************************************************
void UCustomDataB::StaticRegisterNativesUCustomDataB()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomDataB;
UClass* UCustomDataB::GetPrivateStaticClass()
{
	using TClass = UCustomDataB;
	if (!Z_Registration_Info_UClass_UCustomDataB.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomDataB"),
			Z_Registration_Info_UClass_UCustomDataB.InnerSingleton,
			StaticRegisterNativesUCustomDataB,
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
	return Z_Registration_Info_UClass_UCustomDataB.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomDataB_NoRegister()
{
	return UCustomDataB::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomDataB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomDataB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomDataB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomCustomData,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomDataB_Statics::ClassParams = {
	&UCustomDataB::StaticClass,
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
	0x048000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataB_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomDataB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomDataB()
{
	if (!Z_Registration_Info_UClass_UCustomDataB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomDataB.OuterSingleton, Z_Construct_UClass_UCustomDataB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomDataB.OuterSingleton;
}
UCustomDataB::UCustomDataB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDataB);
UCustomDataB::~UCustomDataB() {}
// ********** End Class UCustomDataB ***************************************************************

// ********** Begin Class UCustomDataC *************************************************************
void UCustomDataC::StaticRegisterNativesUCustomDataC()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomDataC;
UClass* UCustomDataC::GetPrivateStaticClass()
{
	using TClass = UCustomDataC;
	if (!Z_Registration_Info_UClass_UCustomDataC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomDataC"),
			Z_Registration_Info_UClass_UCustomDataC.InnerSingleton,
			StaticRegisterNativesUCustomDataC,
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
	return Z_Registration_Info_UClass_UCustomDataC.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomDataC_NoRegister()
{
	return UCustomDataC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomDataC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomDataC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomDataC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomCustomData,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomDataC_Statics::ClassParams = {
	&UCustomDataC::StaticClass,
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
	0x048000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataC_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomDataC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomDataC()
{
	if (!Z_Registration_Info_UClass_UCustomDataC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomDataC.OuterSingleton, Z_Construct_UClass_UCustomDataC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomDataC.OuterSingleton;
}
UCustomDataC::UCustomDataC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDataC);
UCustomDataC::~UCustomDataC() {}
// ********** End Class UCustomDataC ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomCustomDataChildClasses_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomDataA, UCustomDataA::StaticClass, TEXT("UCustomDataA"), &Z_Registration_Info_UClass_UCustomDataA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomDataA), 4022667536U) },
		{ Z_Construct_UClass_UCustomDataB, UCustomDataB::StaticClass, TEXT("UCustomDataB"), &Z_Registration_Info_UClass_UCustomDataB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomDataB), 933601369U) },
		{ Z_Construct_UClass_UCustomDataC, UCustomDataC::StaticClass, TEXT("UCustomDataC"), &Z_Registration_Info_UClass_UCustomDataC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomDataC), 2722503285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomCustomDataChildClasses_h__Script_ProceduralDungeon_457294348(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomCustomDataChildClasses_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomCustomDataChildClasses_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
