// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Classes/RoomConstraintChildClasses.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomConstraintChildClasses() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UConstraintFail();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UConstraintFail_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UConstraintPass();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UConstraintPass_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UConstraintPass **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UConstraintPass;
UClass* UConstraintPass::GetPrivateStaticClass()
{
	using TClass = UConstraintPass;
	if (!Z_Registration_Info_UClass_UConstraintPass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ConstraintPass"),
			Z_Registration_Info_UClass_UConstraintPass.InnerSingleton,
			StaticRegisterNativesUConstraintPass,
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
	return Z_Registration_Info_UClass_UConstraintPass.InnerSingleton;
}
UClass* Z_Construct_UClass_UConstraintPass_NoRegister()
{
	return UConstraintPass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UConstraintPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/RoomConstraintChildClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/RoomConstraintChildClasses.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Class UConstraintPass constinit property declarations **************************
// ********** End Class UConstraintPass constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstraintPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UConstraintPass_Statics
UObject* (*const Z_Construct_UClass_UConstraintPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstraintPass_Statics::ClassParams = {
	&UConstraintPass::StaticClass,
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
	0x040010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstraintPass_Statics::Class_MetaDataParams)
};
void UConstraintPass::StaticRegisterNativesUConstraintPass()
{
}
UClass* Z_Construct_UClass_UConstraintPass()
{
	if (!Z_Registration_Info_UClass_UConstraintPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstraintPass.OuterSingleton, Z_Construct_UClass_UConstraintPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstraintPass.OuterSingleton;
}
UConstraintPass::UConstraintPass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UConstraintPass);
UConstraintPass::~UConstraintPass() {}
// ********** End Class UConstraintPass ************************************************************

// ********** Begin Class UConstraintFail **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UConstraintFail;
UClass* UConstraintFail::GetPrivateStaticClass()
{
	using TClass = UConstraintFail;
	if (!Z_Registration_Info_UClass_UConstraintFail.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ConstraintFail"),
			Z_Registration_Info_UClass_UConstraintFail.InnerSingleton,
			StaticRegisterNativesUConstraintFail,
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
	return Z_Registration_Info_UClass_UConstraintFail.InnerSingleton;
}
UClass* Z_Construct_UClass_UConstraintFail_NoRegister()
{
	return UConstraintFail::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UConstraintFail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/RoomConstraintChildClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/RoomConstraintChildClasses.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Class UConstraintFail constinit property declarations **************************
// ********** End Class UConstraintFail constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstraintFail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UConstraintFail_Statics
UObject* (*const Z_Construct_UClass_UConstraintFail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintFail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstraintFail_Statics::ClassParams = {
	&UConstraintFail::StaticClass,
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
	0x040010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintFail_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstraintFail_Statics::Class_MetaDataParams)
};
void UConstraintFail::StaticRegisterNativesUConstraintFail()
{
}
UClass* Z_Construct_UClass_UConstraintFail()
{
	if (!Z_Registration_Info_UClass_UConstraintFail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstraintFail.OuterSingleton, Z_Construct_UClass_UConstraintFail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstraintFail.OuterSingleton;
}
UConstraintFail::UConstraintFail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UConstraintFail);
UConstraintFail::~UConstraintFail() {}
// ********** End Class UConstraintFail ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomConstraintChildClasses_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConstraintPass, UConstraintPass::StaticClass, TEXT("UConstraintPass"), &Z_Registration_Info_UClass_UConstraintPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstraintPass), 465213269U) },
		{ Z_Construct_UClass_UConstraintFail, UConstraintFail::StaticClass, TEXT("UConstraintFail"), &Z_Registration_Info_UClass_UConstraintFail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstraintFail), 3820559078U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomConstraintChildClasses_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomConstraintChildClasses_h__Script_ProceduralDungeon_566896205{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomConstraintChildClasses_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomConstraintChildClasses_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
