// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDungeonSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSettings();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDungeonSettings Function GetRoomUnit ************************************
struct Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics
{
	struct DungeonSettings_eventGetRoomUnit_Parms
	{
		const UDungeonSettings* Settings;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
		{ "CPP_Default_Settings", "None" },
		{ "ModuleRelativePath", "Public/DungeonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomUnit constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomUnit constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomUnit Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonSettings_eventGetRoomUnit_Parms, Settings), Z_Construct_UClass_UDungeonSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonSettings_eventGetRoomUnit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::PropPointers) < 2048);
// ********** End Function GetRoomUnit Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonSettings, nullptr, "GetRoomUnit", 	Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::DungeonSettings_eventGetRoomUnit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::DungeonSettings_eventGetRoomUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonSettings_GetRoomUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonSettings_GetRoomUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonSettings::execGetRoomUnit)
{
	P_GET_OBJECT(UDungeonSettings,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UDungeonSettings::GetRoomUnit(Z_Param_Settings);
	P_NATIVE_END;
}
// ********** End Class UDungeonSettings Function GetRoomUnit **************************************

// ********** Begin Class UDungeonSettings *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDungeonSettings;
UClass* UDungeonSettings::GetPrivateStaticClass()
{
	using TClass = UDungeonSettings;
	if (!Z_Registration_Info_UClass_UDungeonSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DungeonSettings"),
			Z_Registration_Info_UClass_UDungeonSettings.InnerSingleton,
			StaticRegisterNativesUDungeonSettings,
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
	return Z_Registration_Info_UClass_UDungeonSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UDungeonSettings_NoRegister()
{
	return UDungeonSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDungeonSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data asset to allow overriding the plugin's settings\n" },
#endif
		{ "IncludePath", "DungeonSettings.h" },
		{ "ModuleRelativePath", "Public/DungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data asset to allow overriding the plugin's settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomUnit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "General" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of a room unit. Room's size in data assets will express the multiple of this unit size.\n// For example a room size of (5, 10, 1) with a unit size of (100, 100, 400) will result of a real room size of (500, 1000, 400).\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of a room unit. Room's size in data assets will express the multiple of this unit size.\nFor example a room size of (5, 10, 1) with a unit size of (100, 100, 400) will result of a real room size of (500, 1000, 400)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UDungeonSettings constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDungeonSettings constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRoomUnit"), .Pointer = &UDungeonSettings::execGetRoomUnit },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonSettings_GetRoomUnit, "GetRoomUnit" }, // 1599636928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDungeonSettings_Statics

// ********** Begin Class UDungeonSettings Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonSettings_Statics::NewProp_RoomUnit = { "RoomUnit", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonSettings, RoomUnit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomUnit_MetaData), NewProp_RoomUnit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonSettings_Statics::NewProp_RoomUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSettings_Statics::PropPointers) < 2048);
// ********** End Class UDungeonSettings Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UDungeonSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonSettings_Statics::ClassParams = {
	&UDungeonSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonSettings_Statics::Class_MetaDataParams)
};
void UDungeonSettings::StaticRegisterNativesUDungeonSettings()
{
	UClass* Class = UDungeonSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDungeonSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDungeonSettings()
{
	if (!Z_Registration_Info_UClass_UDungeonSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonSettings.OuterSingleton, Z_Construct_UClass_UDungeonSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDungeonSettings);
UDungeonSettings::~UDungeonSettings() {}
// ********** End Class UDungeonSettings ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonSettings_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonSettings, UDungeonSettings::StaticClass, TEXT("UDungeonSettings"), &Z_Registration_Info_UClass_UDungeonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonSettings), 3812871404U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonSettings_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonSettings_h__Script_ProceduralDungeon_987725941{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonSettings_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonSettings_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
