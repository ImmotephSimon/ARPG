// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDoorType() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDoorType ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDoorType;
UClass* UDoorType::GetPrivateStaticClass()
{
	using TClass = UDoorType;
	if (!Z_Registration_Info_UClass_UDoorType.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DoorType"),
			Z_Registration_Info_UClass_UDoorType.InnerSingleton,
			StaticRegisterNativesUDoorType,
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
	return Z_Registration_Info_UClass_UDoorType.InnerSingleton;
}
UClass* Z_Construct_UClass_UDoorType_NoRegister()
{
	return UDoorType::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDoorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data asset to define a door type.\n// A door type is used to define the size, offset, and color of a door bounds.\n// Doors with different types are not compatible with each others.\n" },
#endif
		{ "IncludePath", "DoorType.h" },
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data asset to define a door type.\nA door type is used to define the size, offset, and color of a door bounds.\nDoors with different types are not compatible with each others." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Door Type" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of the door bounds, only used by the debug draw as a visual hint for designers and artists.\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the door bounds, only used by the debug draw as a visual hint for designers and artists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Door Type" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The offset of the door bounds from the room's base (in percentage of the room unit Z).\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset of the door bounds from the room's base (in percentage of the room unit Z)." },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Door Type" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The color used to draw the door bounds in the editor.\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The color used to draw the door bounds in the editor." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Door Type" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Just a description, used nowhere.\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Just a description, used nowhere." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompatibleWithItself_MetaData[] = {
		{ "Category", "Door Type" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can this door type be connected with itself?\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can this door type be connected with itself?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Compatibility_MetaData[] = {
		{ "Category", "Door Type" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Which door types are compatible with this one\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which door types are compatible with this one" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UDoorType constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bCompatibleWithItself_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompatibleWithItself;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Compatibility_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Compatibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDoorType constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDoorType_Statics

// ********** Begin Class UDoorType Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080800000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UDoorType_Statics::NewProp_bCompatibleWithItself_SetBit(void* Obj)
{
	((UDoorType*)Obj)->bCompatibleWithItself = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_bCompatibleWithItself = { "bCompatibleWithItself", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDoorType), &Z_Construct_UClass_UDoorType_Statics::NewProp_bCompatibleWithItself_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompatibleWithItself_MetaData), NewProp_bCompatibleWithItself_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Compatibility_Inner = { "Compatibility", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Compatibility = { "Compatibility", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Compatibility), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Compatibility_MetaData), NewProp_Compatibility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Color,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_bCompatibleWithItself,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Compatibility_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Compatibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::PropPointers) < 2048);
// ********** End Class UDoorType Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_UDoorType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorType_Statics::ClassParams = {
	&UDoorType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDoorType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoorType_Statics::Class_MetaDataParams)
};
void UDoorType::StaticRegisterNativesUDoorType()
{
}
UClass* Z_Construct_UClass_UDoorType()
{
	if (!Z_Registration_Info_UClass_UDoorType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorType.OuterSingleton, Z_Construct_UClass_UDoorType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoorType.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDoorType);
UDoorType::~UDoorType() {}
// ********** End Class UDoorType ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDoorType, UDoorType::StaticClass, TEXT("UDoorType"), &Z_Registration_Info_UClass_UDoorType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorType), 3173956521U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h__Script_ProceduralDungeon_220179175{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
