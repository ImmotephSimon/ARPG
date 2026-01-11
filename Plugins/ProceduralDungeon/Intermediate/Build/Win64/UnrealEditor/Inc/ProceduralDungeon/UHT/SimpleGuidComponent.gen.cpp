// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/SimpleGuidComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSimpleGuidComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomActorGuid_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_USimpleGuidComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_USimpleGuidComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USimpleGuidComponent *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USimpleGuidComponent;
UClass* USimpleGuidComponent::GetPrivateStaticClass()
{
	using TClass = USimpleGuidComponent;
	if (!Z_Registration_Info_UClass_USimpleGuidComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SimpleGuidComponent"),
			Z_Registration_Info_UClass_USimpleGuidComponent.InnerSingleton,
			StaticRegisterNativesUSimpleGuidComponent,
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
	return Z_Registration_Info_UClass_USimpleGuidComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USimpleGuidComponent_NoRegister()
{
	return USimpleGuidComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USimpleGuidComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ProceduralDungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A simple guid component that will retrieve the Editor's ActorGuid\n// to save/load it in packaged games.\n//\n// :::warning\n//\n// This component will work only on placed actor, not actors spawned during runtime!!!\n//\n// :::\n" },
#endif
		{ "IncludePath", "Components/SimpleGuidComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SimpleGuidComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple guid component that will retrieve the Editor's ActorGuid\nto save/load it in packaged games.\n\n:::warning\n\nThis component will work only on placed actor, not actors spawned during runtime!!!\n\n:::" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Guid" },
		{ "ModuleRelativePath", "Public/Components/SimpleGuidComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveActorInDungeon_MetaData[] = {
		{ "Category", "Dungeon Save" },
		{ "ModuleRelativePath", "Public/Components/SimpleGuidComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USimpleGuidComponent constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static void NewProp_bSaveActorInDungeon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveActorInDungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USimpleGuidComponent constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleGuidComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USimpleGuidComponent_Statics

// ********** Begin Class USimpleGuidComponent Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleGuidComponent_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010c00000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleGuidComponent, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
void Z_Construct_UClass_USimpleGuidComponent_Statics::NewProp_bSaveActorInDungeon_SetBit(void* Obj)
{
	((USimpleGuidComponent*)Obj)->bSaveActorInDungeon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleGuidComponent_Statics::NewProp_bSaveActorInDungeon = { "bSaveActorInDungeon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleGuidComponent), &Z_Construct_UClass_USimpleGuidComponent_Statics::NewProp_bSaveActorInDungeon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveActorInDungeon_MetaData), NewProp_bSaveActorInDungeon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleGuidComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleGuidComponent_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleGuidComponent_Statics::NewProp_bSaveActorInDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGuidComponent_Statics::PropPointers) < 2048);
// ********** End Class USimpleGuidComponent Property Definitions **********************************
UObject* (*const Z_Construct_UClass_USimpleGuidComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGuidComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USimpleGuidComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URoomActorGuid_NoRegister, (int32)VTABLE_OFFSET(USimpleGuidComponent, IRoomActorGuid), false },  // 3856908736
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleGuidComponent_Statics::ClassParams = {
	&USimpleGuidComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleGuidComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGuidComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGuidComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleGuidComponent_Statics::Class_MetaDataParams)
};
void USimpleGuidComponent::StaticRegisterNativesUSimpleGuidComponent()
{
}
UClass* Z_Construct_UClass_USimpleGuidComponent()
{
	if (!Z_Registration_Info_UClass_USimpleGuidComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleGuidComponent.OuterSingleton, Z_Construct_UClass_USimpleGuidComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleGuidComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USimpleGuidComponent);
USimpleGuidComponent::~USimpleGuidComponent() {}
// ********** End Class USimpleGuidComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_SimpleGuidComponent_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleGuidComponent, USimpleGuidComponent::StaticClass, TEXT("USimpleGuidComponent"), &Z_Registration_Info_UClass_USimpleGuidComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleGuidComponent), 2023975020U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_SimpleGuidComponent_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_SimpleGuidComponent_h__Script_ProceduralDungeon_4272287861{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_SimpleGuidComponent_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_SimpleGuidComponent_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
