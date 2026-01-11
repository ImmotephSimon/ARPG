// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicableObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplicableObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UReplicableObject Function WakeUpOwnerActor ******************************
struct Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wakes up the owner actor from dormance to indicate that a replicated variable will change.\n// You have to use it *before* modifying the replicated variables.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplicableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wakes up the owner actor from dormance to indicate that a replicated variable will change.\nYou have to use it *before* modifying the replicated variables." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function WakeUpOwnerActor constinit property declarations **********************
// ********** End Function WakeUpOwnerActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplicableObject, nullptr, "WakeUpOwnerActor", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplicableObject::execWakeUpOwnerActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WakeUpOwnerActor();
	P_NATIVE_END;
}
// ********** End Class UReplicableObject Function WakeUpOwnerActor ********************************

// ********** Begin Class UReplicableObject ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UReplicableObject;
UClass* UReplicableObject::GetPrivateStaticClass()
{
	using TClass = UReplicableObject;
	if (!Z_Registration_Info_UClass_UReplicableObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ReplicableObject"),
			Z_Registration_Info_UClass_UReplicableObject.InnerSingleton,
			StaticRegisterNativesUReplicableObject,
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
	return Z_Registration_Info_UClass_UReplicableObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UReplicableObject_NoRegister()
{
	return UReplicableObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReplicableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base class for sub-objects that can be replicated.\n// This class is not blueprintable and should not be used directly in blueprints.\n" },
#endif
		{ "IncludePath", "ReplicableObject.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ReplicableObject.h" },
		{ "NotBlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for sub-objects that can be replicated.\nThis class is not blueprintable and should not be used directly in blueprints." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UReplicableObject constinit property declarations ************************
// ********** End Class UReplicableObject constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("WakeUpOwnerActor"), .Pointer = &UReplicableObject::execWakeUpOwnerActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplicableObject_WakeUpOwnerActor, "WakeUpOwnerActor" }, // 3152556399
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UReplicableObject_Statics
UObject* (*const Z_Construct_UClass_UReplicableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicableObject_Statics::ClassParams = {
	&UReplicableObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicableObject_Statics::Class_MetaDataParams)
};
void UReplicableObject::StaticRegisterNativesUReplicableObject()
{
	UClass* Class = UReplicableObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UReplicableObject_Statics::Funcs));
}
UClass* Z_Construct_UClass_UReplicableObject()
{
	if (!Z_Registration_Info_UClass_UReplicableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicableObject.OuterSingleton, Z_Construct_UClass_UReplicableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplicableObject.OuterSingleton;
}
UReplicableObject::UReplicableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UReplicableObject);
UReplicableObject::~UReplicableObject() {}
// ********** End Class UReplicableObject **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplicableObject, UReplicableObject::StaticClass, TEXT("UReplicableObject"), &Z_Registration_Info_UClass_UReplicableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicableObject), 2072421595U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h__Script_ProceduralDungeon_514028355{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
