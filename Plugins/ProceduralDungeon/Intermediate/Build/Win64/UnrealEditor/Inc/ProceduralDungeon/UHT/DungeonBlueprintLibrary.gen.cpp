// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonBlueprintLibrary.h"
#include "Engine/DataTable.h"
#include "ProceduralDungeonTypes.h"
#include "RoomCustomData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDungeonBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonBlueprintLibrary();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDungeonBlueprintLibrary Function CompareDataTableRows *******************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics
{
	struct DungeonBlueprintLibrary_eventCompareDataTableRows_Parms
	{
		FDataTableRowHandle A;
		FDataTableRowHandle B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Data Table Row Handle)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms, A), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 4101738896
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms, B), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 4101738896
void Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventCompareDataTableRows_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "CompareDataTableRows", Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::DungeonBlueprintLibrary_eventCompareDataTableRows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::DungeonBlueprintLibrary_eventCompareDataTableRows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execCompareDataTableRows)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_A);
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::CompareDataTableRows(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function CompareDataTableRows *********************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDef_GetOpposite ********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDef_GetOpposite_Parms
	{
		FDoorDef DoorDef;
		FDoorDef ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoorDef" },
		{ "CompactNodeTitle", "Opposite" },
		{ "DisplayName", "Opposite" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorDef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorDef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::NewProp_DoorDef = { "DoorDef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDef_GetOpposite_Parms, DoorDef), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorDef_MetaData), NewProp_DoorDef_MetaData) }; // 121548433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDef_GetOpposite_Parms, ReturnValue), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(0, nullptr) }; // 121548433
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::NewProp_DoorDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDef_GetOpposite", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::DungeonBlueprintLibrary_eventDoorDef_GetOpposite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::DungeonBlueprintLibrary_eventDoorDef_GetOpposite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDef_GetOpposite)
{
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDoorDef*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDef_GetOpposite(Z_Param_Out_DoorDef);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDef_GetOpposite **********************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_Add **********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Add_Parms
	{
		EDoorDirection A;
		EDoorDirection B;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A,B" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Addition (A + B)\n" },
#endif
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "Direction + Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Addition (A + B)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3779627541
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, B), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3779627541
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Add", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::DungeonBlueprintLibrary_eventDoorDirection_Add_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::DungeonBlueprintLibrary_eventDoorDirection_Add_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Add)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Add((EDoorDirection&)(Z_Param_Out_A),(EDoorDirection&)(Z_Param_Out_B));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_Add ************************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_Decrement ****************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms
	{
		EDoorDirection A;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decrement the direction and set it\n" },
#endif
		{ "CompactNodeTitle", "--" },
		{ "DisplayName", "Decrement Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decrement the direction and set it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Decrement", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Decrement)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Decrement((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_Decrement ******************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_Increment ****************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms
	{
		EDoorDirection A;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increment the direction and set it\n" },
#endif
		{ "CompactNodeTitle", "++" },
		{ "DisplayName", "Increment Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increment the direction and set it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Increment", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Increment)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Increment((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_Increment ******************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_Negate *******************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms
	{
		EDoorDirection A;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Negate the direction and set it (same as North - Direction)\n" },
#endif
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Negate Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Negate the direction and set it (same as North - Direction)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Negate", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Negate)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Negate((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_Negate *********************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_Opposite *****************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms
	{
		EDoorDirection A;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transforms North into South and East into West (and vice versa)\n" },
#endif
		{ "CompactNodeTitle", "Opposite" },
		{ "DisplayName", "Opposite" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transforms North into South and East into West (and vice versa)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3779627541
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Opposite", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Opposite)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Opposite((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_Opposite *******************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_Sub **********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms
	{
		EDoorDirection A;
		EDoorDirection B;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A,B" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Subtraction (A - B)\n" },
#endif
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Direction - Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subtraction (A - B)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3779627541
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, B), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3779627541
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 3779627541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Sub", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Sub)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Sub((EDoorDirection&)(Z_Param_Out_A),(EDoorDirection&)(Z_Param_Out_B));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_Sub ************************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_ToAngle ******************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_ToAngle_Parms
	{
		EDoorDirection A;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A" },
		{ "BlueprintAutocast", "" },
		{ "Category", "Conversion|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a DoorDirection enum value into a unit IntVector pointing in that direction.\n" },
#endif
		{ "DisplayName", "To Angle" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a DoorDirection enum value into a unit IntVector pointing in that direction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_ToAngle_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3779627541
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_ToAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_ToAngle", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::DungeonBlueprintLibrary_eventDoorDirection_ToAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::DungeonBlueprintLibrary_eventDoorDirection_ToAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_ToAngle)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_ToAngle((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_ToAngle ********************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_ToIntVector **************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_ToIntVector_Parms
	{
		EDoorDirection A;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A" },
		{ "BlueprintAutocast", "" },
		{ "Category", "Conversion|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert a DoorDirection enum value into a unit IntVector pointing in that direction.\n" },
#endif
		{ "DisplayName", "To Int Vector" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a DoorDirection enum value into a unit IntVector pointing in that direction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_ToIntVector_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3779627541
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_ToIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_ToIntVector", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::DungeonBlueprintLibrary_eventDoorDirection_ToIntVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::DungeonBlueprintLibrary_eventDoorDirection_ToIntVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_ToIntVector)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_ToIntVector((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_ToIntVector ****************

// ********** Begin Class UDungeonBlueprintLibrary Function DoorDirection_Valid ********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms
	{
		EDoorDirection A;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if the value is set (either North, South, East, West)\n// False otherwise\n" },
#endif
		{ "DisplayName", "Is Valid" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the value is set (either North, South, East, West)\nFalse otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3779627541
void Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Valid", Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Valid)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Valid((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function DoorDirection_Valid **********************

// ********** Begin Class UDungeonBlueprintLibrary Function Dungeon_InverseTransformDoorDef ********
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics
{
	struct DungeonBlueprintLibrary_eventDungeon_InverseTransformDoorDef_Parms
	{
		FDoorDef DoorDef;
		FIntVector Translation;
		EDoorDirection Rotation;
		FDoorDef ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Rotation" },
		{ "Category", "Math|Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inverse transform a DoorDef structure from the dungeon coordinates into a local coordinates\n" },
#endif
		{ "DisplayName", "Inverse Transform DoorDef (Dungeon)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inverse transform a DoorDef structure from the dungeon coordinates into a local coordinates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorDef_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorDef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_DoorDef = { "DoorDef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_InverseTransformDoorDef_Parms, DoorDef), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorDef_MetaData), NewProp_DoorDef_MetaData) }; // 121548433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_InverseTransformDoorDef_Parms, Translation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_Rotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_InverseTransformDoorDef_Parms, Rotation), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 3779627541
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_InverseTransformDoorDef_Parms, ReturnValue), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(0, nullptr) }; // 121548433
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_DoorDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_Rotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Dungeon_InverseTransformDoorDef", Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::DungeonBlueprintLibrary_eventDungeon_InverseTransformDoorDef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::DungeonBlueprintLibrary_eventDungeon_InverseTransformDoorDef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDungeon_InverseTransformDoorDef)
{
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorDef);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Translation);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDoorDef*)Z_Param__Result=UDungeonBlueprintLibrary::Dungeon_InverseTransformDoorDef(Z_Param_Out_DoorDef,Z_Param_Out_Translation,(EDoorDirection&)(Z_Param_Out_Rotation));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Dungeon_InverseTransformDoorDef **********

// ********** Begin Class UDungeonBlueprintLibrary Function Dungeon_InverseTransformPosition *******
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics
{
	struct DungeonBlueprintLibrary_eventDungeon_InverseTransformPosition_Parms
	{
		FIntVector DungeonPos;
		FIntVector Translation;
		EDoorDirection Rotation;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Rotation" },
		{ "Category", "Math|Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inverse transform a cell position from the dungeon coordinates into a local coordinates\n" },
#endif
		{ "DisplayName", "Inverse Transform Position (Dungeon)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inverse transform a cell position from the dungeon coordinates into a local coordinates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_DungeonPos = { "DungeonPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_InverseTransformPosition_Parms, DungeonPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonPos_MetaData), NewProp_DungeonPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_InverseTransformPosition_Parms, Translation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_Rotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_InverseTransformPosition_Parms, Rotation), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 3779627541
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_InverseTransformPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_DungeonPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_Rotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Dungeon_InverseTransformPosition", Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::DungeonBlueprintLibrary_eventDungeon_InverseTransformPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::DungeonBlueprintLibrary_eventDungeon_InverseTransformPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDungeon_InverseTransformPosition)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_DungeonPos);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Translation);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UDungeonBlueprintLibrary::Dungeon_InverseTransformPosition(Z_Param_Out_DungeonPos,Z_Param_Out_Translation,(EDoorDirection&)(Z_Param_Out_Rotation));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Dungeon_InverseTransformPosition *********

// ********** Begin Class UDungeonBlueprintLibrary Function Dungeon_TransformDoorDef ***************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics
{
	struct DungeonBlueprintLibrary_eventDungeon_TransformDoorDef_Parms
	{
		FDoorDef DoorDef;
		FIntVector Translation;
		EDoorDirection Rotation;
		FDoorDef ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Rotation" },
		{ "Category", "Math|Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform a DoorDef structure from local coordinates into the dungeon coordinates\n" },
#endif
		{ "DisplayName", "Transform DoorDef (Dungeon)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform a DoorDef structure from local coordinates into the dungeon coordinates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorDef_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorDef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_DoorDef = { "DoorDef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_TransformDoorDef_Parms, DoorDef), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorDef_MetaData), NewProp_DoorDef_MetaData) }; // 121548433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_TransformDoorDef_Parms, Translation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_Rotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_TransformDoorDef_Parms, Rotation), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 3779627541
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_TransformDoorDef_Parms, ReturnValue), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(0, nullptr) }; // 121548433
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_DoorDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_Rotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Dungeon_TransformDoorDef", Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::DungeonBlueprintLibrary_eventDungeon_TransformDoorDef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::DungeonBlueprintLibrary_eventDungeon_TransformDoorDef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDungeon_TransformDoorDef)
{
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorDef);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Translation);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDoorDef*)Z_Param__Result=UDungeonBlueprintLibrary::Dungeon_TransformDoorDef(Z_Param_Out_DoorDef,Z_Param_Out_Translation,(EDoorDirection&)(Z_Param_Out_Rotation));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Dungeon_TransformDoorDef *****************

// ********** Begin Class UDungeonBlueprintLibrary Function Dungeon_TransformPosition **************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics
{
	struct DungeonBlueprintLibrary_eventDungeon_TransformPosition_Parms
	{
		FIntVector LocalPos;
		FIntVector Translation;
		EDoorDirection Rotation;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Rotation" },
		{ "Category", "Math|Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform a cell position from local coordinates into the dungeon coordinates\n" },
#endif
		{ "DisplayName", "Transform Position (Dungeon)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform a cell position from local coordinates into the dungeon coordinates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_LocalPos = { "LocalPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_TransformPosition_Parms, LocalPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPos_MetaData), NewProp_LocalPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_TransformPosition_Parms, Translation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_Rotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_TransformPosition_Parms, Rotation), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 3779627541
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDungeon_TransformPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_LocalPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_Rotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Dungeon_TransformPosition", Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::DungeonBlueprintLibrary_eventDungeon_TransformPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::DungeonBlueprintLibrary_eventDungeon_TransformPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDungeon_TransformPosition)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_LocalPos);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Translation);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UDungeonBlueprintLibrary::Dungeon_TransformPosition(Z_Param_Out_LocalPos,Z_Param_Out_Translation,(EDoorDirection&)(Z_Param_Out_Rotation));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Dungeon_TransformPosition ****************

// ********** Begin Class UDungeonBlueprintLibrary Function GetOwningRoom **************************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics
{
	struct DungeonBlueprintLibrary_eventGetOwningRoom_Parms
	{
		const AActor* Target;
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room instance the actor is in.\n// If the actor is spawned at runtime or the owning level is not a room level, returns null.\n" },
#endif
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room instance the actor is in.\nIf the actor is spawned at runtime or the owning level is not a room level, returns null." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoom_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoom_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "GetOwningRoom", Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::DungeonBlueprintLibrary_eventGetOwningRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::DungeonBlueprintLibrary_eventGetOwningRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execGetOwningRoom)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=UDungeonBlueprintLibrary::GetOwningRoom(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function GetOwningRoom ****************************

// ********** Begin Class UDungeonBlueprintLibrary Function GetOwningRoomCustomData ****************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics
{
	struct DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms
	{
		const AActor* Target;
		TSubclassOf<URoomCustomData> CustomDataClass;
		URoomCustomData* CustomData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the first RoomCustomData of the provided type in the owning room.\n// If no owning room or no custom data of this type, returns null.\n" },
#endif
		{ "DefaultToSelf", "Target" },
		{ "DeterminesOutputType", "CustomDataClass" },
		{ "DynamicOutputParam", "CustomData" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the first RoomCustomData of the provided type in the owning room.\nIf no owning room or no custom data of this type, returns null." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomDataClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_CustomDataClass = { "CustomDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms, CustomDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms, CustomData), Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_CustomDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "GetOwningRoomCustomData", Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execGetOwningRoomCustomData)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_OBJECT(UClass,Z_Param_CustomDataClass);
	P_GET_OBJECT_REF(URoomCustomData,Z_Param_Out_CustomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::GetOwningRoomCustomData(Z_Param_Target,Z_Param_CustomDataClass,P_ARG_GC_BARRIER(Z_Param_Out_CustomData));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function GetOwningRoomCustomData ******************

// ********** Begin Class UDungeonBlueprintLibrary Function IntVector_Add **************************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics
{
	struct DungeonBlueprintLibrary_eventIntVector_Add_Parms
	{
		FIntVector A;
		FIntVector B;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Utilities|Operators" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Int Vector Operators =====\n" },
#endif
		{ "CommutativeAssociativeBinaryOperator", "" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "Add (Int Vector)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Int Vector Operators =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Add_Parms, A), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Add_Parms, B), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Add_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IntVector_Add", Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::DungeonBlueprintLibrary_eventIntVector_Add_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::DungeonBlueprintLibrary_eventIntVector_Add_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIntVector_Add)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_A);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UDungeonBlueprintLibrary::IntVector_Add(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function IntVector_Add ****************************

// ********** Begin Class UDungeonBlueprintLibrary Function IntVector_Equal ************************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics
{
	struct DungeonBlueprintLibrary_eventIntVector_Equal_Parms
	{
		FIntVector A;
		FIntVector B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Utilities|Operators" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Int Vector)" },
		{ "Keywords", "==" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Equal_Parms, A), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Equal_Parms, B), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
void Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventIntVector_Equal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventIntVector_Equal_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IntVector_Equal", Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::DungeonBlueprintLibrary_eventIntVector_Equal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::DungeonBlueprintLibrary_eventIntVector_Equal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIntVector_Equal)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_A);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::IntVector_Equal(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function IntVector_Equal **************************

// ********** Begin Class UDungeonBlueprintLibrary Function IntVector_Next *************************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics
{
	struct DungeonBlueprintLibrary_eventIntVector_Next_Parms
	{
		FIntVector Vector;
		EDoorDirection Direction;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the neighbor at the provided direction.\n// Same as Vector + ToIntVector(Direction)\n" },
#endif
		{ "DisplayName", "Next (Int Vector)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the neighbor at the provided direction.\nSame as Vector + ToIntVector(Direction)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Next_Parms, Vector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Next_Parms, Direction), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3779627541
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Next_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IntVector_Next", Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::DungeonBlueprintLibrary_eventIntVector_Next_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::DungeonBlueprintLibrary_eventIntVector_Next_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIntVector_Next)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Vector);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UDungeonBlueprintLibrary::IntVector_Next(Z_Param_Out_Vector,(EDoorDirection&)(Z_Param_Out_Direction));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function IntVector_Next ***************************

// ********** Begin Class UDungeonBlueprintLibrary Function IntVector_NotEqual *********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics
{
	struct DungeonBlueprintLibrary_eventIntVector_NotEqual_Parms
	{
		FIntVector A;
		FIntVector B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Utilities|Operators" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (Int Vector)" },
		{ "Keywords", "!=" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_NotEqual_Parms, A), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_NotEqual_Parms, B), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
void Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventIntVector_NotEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventIntVector_NotEqual_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IntVector_NotEqual", Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::DungeonBlueprintLibrary_eventIntVector_NotEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::DungeonBlueprintLibrary_eventIntVector_NotEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIntVector_NotEqual)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_A);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::IntVector_NotEqual(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function IntVector_NotEqual ***********************

// ********** Begin Class UDungeonBlueprintLibrary Function IntVector_Rotate ***********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics
{
	struct DungeonBlueprintLibrary_eventIntVector_Rotate_Parms
	{
		FIntVector Vector;
		EDoorDirection Direction;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Transform" },
		{ "DisplayName", "Rotate (Int Vector)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Rotate_Parms, Vector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Rotate_Parms, Direction), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3779627541
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Rotate_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IntVector_Rotate", Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::DungeonBlueprintLibrary_eventIntVector_Rotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::DungeonBlueprintLibrary_eventIntVector_Rotate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIntVector_Rotate)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Vector);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UDungeonBlueprintLibrary::IntVector_Rotate(Z_Param_Out_Vector,(EDoorDirection&)(Z_Param_Out_Direction));
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function IntVector_Rotate *************************

// ********** Begin Class UDungeonBlueprintLibrary Function IntVector_Subtract *********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics
{
	struct DungeonBlueprintLibrary_eventIntVector_Subtract_Parms
	{
		FIntVector A;
		FIntVector B;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Utilities|Operators" },
		{ "CommutativeAssociativeBinaryOperator", "" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Subtract (Int Vector)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Subtract_Parms, A), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Subtract_Parms, B), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIntVector_Subtract_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IntVector_Subtract", Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::DungeonBlueprintLibrary_eventIntVector_Subtract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::DungeonBlueprintLibrary_eventIntVector_Subtract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIntVector_Subtract)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_A);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UDungeonBlueprintLibrary::IntVector_Subtract(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function IntVector_Subtract ***********************

// ********** Begin Class UDungeonBlueprintLibrary Function IsDoorOfType ***************************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics
{
	struct DungeonBlueprintLibrary_eventIsDoorOfType_Parms
	{
		const TSubclassOf<ADoor> DoorClass;
		const UDoorType* DoorType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DoorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass = { "DoorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIsDoorOfType_Parms, DoorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorClass_MetaData), NewProp_DoorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIsDoorOfType_Parms, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) };
void Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventIsDoorOfType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventIsDoorOfType_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IsDoorOfType", Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::DungeonBlueprintLibrary_eventIsDoorOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::DungeonBlueprintLibrary_eventIsDoorOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIsDoorOfType)
{
	P_GET_OBJECT(UClass,Z_Param_DoorClass);
	P_GET_OBJECT(UDoorType,Z_Param_DoorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::IsDoorOfType(Z_Param_DoorClass,Z_Param_DoorType);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function IsDoorOfType *****************************

// ********** Begin Class UDungeonBlueprintLibrary Function Settings_DefaultDoorSize ***************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_DefaultDoorSize_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the default door type's size\n" },
#endif
		{ "DisplayName", "Get Default Door Size" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the default door type's size" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_DefaultDoorSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_DefaultDoorSize", Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::DungeonBlueprintLibrary_eventSettings_DefaultDoorSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::DungeonBlueprintLibrary_eventSettings_DefaultDoorSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_DefaultDoorSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_DefaultDoorSize();
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Settings_DefaultDoorSize *****************

// ********** Begin Class UDungeonBlueprintLibrary Function Settings_DoorOffset ********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_DoorOffset_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room offset as a percentage of the height of a room unit\n" },
#endif
		{ "DisplayName", "Get Door Offset" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room offset as a percentage of the height of a room unit" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_DoorOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_DoorOffset", Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::DungeonBlueprintLibrary_eventSettings_DoorOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::DungeonBlueprintLibrary_eventSettings_DoorOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_DoorOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_DoorOffset();
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Settings_DoorOffset **********************

// ********** Begin Class UDungeonBlueprintLibrary Function Settings_OccludeDynamicActors **********
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if actors with a RoomVisibility component should have their visibility toggled with the rooms\n" },
#endif
		{ "DisplayName", "Should Dynamic Actors Be Occluded" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if actors with a RoomVisibility component should have their visibility toggled with the rooms" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_OccludeDynamicActors", Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_OccludeDynamicActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_OccludeDynamicActors();
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Settings_OccludeDynamicActors ************

// ********** Begin Class UDungeonBlueprintLibrary Function Settings_OcclusionCulling **************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the plugin's occlusion system is enabled\n" },
#endif
		{ "DisplayName", "Is Occlusion Culling Enabled" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the plugin's occlusion system is enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_OcclusionCulling", Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_OcclusionCulling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_OcclusionCulling();
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Settings_OcclusionCulling ****************

// ********** Begin Class UDungeonBlueprintLibrary Function Settings_OcclusionDistance *************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_OcclusionDistance_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of visible room from the player's room (1 mean only the player room is visible)\n" },
#endif
		{ "DisplayName", "Get Occlusion Culling Distance" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of visible room from the player's room (1 mean only the player room is visible)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_OcclusionDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_OcclusionDistance", Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::DungeonBlueprintLibrary_eventSettings_OcclusionDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::DungeonBlueprintLibrary_eventSettings_OcclusionDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_OcclusionDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_OcclusionDistance();
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Settings_OcclusionDistance ***************

// ********** Begin Class UDungeonBlueprintLibrary Function Settings_RoomUnit **********************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_RoomUnit_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room unit size in unreal units\n" },
#endif
		{ "DisplayName", "Get Room Unit" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room unit size in unreal units" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_RoomUnit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_RoomUnit", Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::DungeonBlueprintLibrary_eventSettings_RoomUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::DungeonBlueprintLibrary_eventSettings_RoomUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_RoomUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_RoomUnit();
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Settings_RoomUnit ************************

// ********** Begin Class UDungeonBlueprintLibrary Function Settings_SetOcclusionCulling ***********
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms
	{
		bool Enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable/disable the plugin's occlusion system\n" },
#endif
		{ "DisplayName", "Enable Occlusion Culling" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable the plugin's occlusion system" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_SetOcclusionCulling", Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_SetOcclusionCulling)
{
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonBlueprintLibrary::Settings_SetOcclusionCulling(Z_Param_Enable);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Settings_SetOcclusionCulling *************

// ********** Begin Class UDungeonBlueprintLibrary Function Settings_SetOcclusionDistance **********
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_SetOcclusionDistance_Parms
	{
		int32 Distance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the number of visible rooms from the player's room (1 mean only the player room is visible)\n" },
#endif
		{ "DisplayName", "Set Occlusion Culling Distance" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the number of visible rooms from the player's room (1 mean only the player room is visible)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_SetOcclusionDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_SetOcclusionDistance", Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::DungeonBlueprintLibrary_eventSettings_SetOcclusionDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::DungeonBlueprintLibrary_eventSettings_SetOcclusionDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_SetOcclusionDistance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonBlueprintLibrary::Settings_SetOcclusionDistance(Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Settings_SetOcclusionDistance ************

// ********** Begin Class UDungeonBlueprintLibrary Function Spectate *******************************
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics
{
	struct DungeonBlueprintLibrary_eventSpectate_Parms
	{
		APlayerController* Controller;
		bool DestroyPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set player to spectate\n" },
#endif
		{ "CPP_Default_DestroyPawn", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set player to spectate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_DestroyPawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSpectate_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventSpectate_Parms*)Obj)->DestroyPawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn = { "DestroyPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSpectate_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Spectate", Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::DungeonBlueprintLibrary_eventSpectate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::DungeonBlueprintLibrary_eventSpectate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSpectate)
{
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_UBOOL(Z_Param_DestroyPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonBlueprintLibrary::Spectate(Z_Param_Controller,Z_Param_DestroyPawn);
	P_NATIVE_END;
}
// ********** End Class UDungeonBlueprintLibrary Function Spectate *********************************

// ********** Begin Class UDungeonBlueprintLibrary *************************************************
void UDungeonBlueprintLibrary::StaticRegisterNativesUDungeonBlueprintLibrary()
{
	UClass* Class = UDungeonBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompareDataTableRows", &UDungeonBlueprintLibrary::execCompareDataTableRows },
		{ "DoorDef_GetOpposite", &UDungeonBlueprintLibrary::execDoorDef_GetOpposite },
		{ "DoorDirection_Add", &UDungeonBlueprintLibrary::execDoorDirection_Add },
		{ "DoorDirection_Decrement", &UDungeonBlueprintLibrary::execDoorDirection_Decrement },
		{ "DoorDirection_Increment", &UDungeonBlueprintLibrary::execDoorDirection_Increment },
		{ "DoorDirection_Negate", &UDungeonBlueprintLibrary::execDoorDirection_Negate },
		{ "DoorDirection_Opposite", &UDungeonBlueprintLibrary::execDoorDirection_Opposite },
		{ "DoorDirection_Sub", &UDungeonBlueprintLibrary::execDoorDirection_Sub },
		{ "DoorDirection_ToAngle", &UDungeonBlueprintLibrary::execDoorDirection_ToAngle },
		{ "DoorDirection_ToIntVector", &UDungeonBlueprintLibrary::execDoorDirection_ToIntVector },
		{ "DoorDirection_Valid", &UDungeonBlueprintLibrary::execDoorDirection_Valid },
		{ "Dungeon_InverseTransformDoorDef", &UDungeonBlueprintLibrary::execDungeon_InverseTransformDoorDef },
		{ "Dungeon_InverseTransformPosition", &UDungeonBlueprintLibrary::execDungeon_InverseTransformPosition },
		{ "Dungeon_TransformDoorDef", &UDungeonBlueprintLibrary::execDungeon_TransformDoorDef },
		{ "Dungeon_TransformPosition", &UDungeonBlueprintLibrary::execDungeon_TransformPosition },
		{ "GetOwningRoom", &UDungeonBlueprintLibrary::execGetOwningRoom },
		{ "GetOwningRoomCustomData", &UDungeonBlueprintLibrary::execGetOwningRoomCustomData },
		{ "IntVector_Add", &UDungeonBlueprintLibrary::execIntVector_Add },
		{ "IntVector_Equal", &UDungeonBlueprintLibrary::execIntVector_Equal },
		{ "IntVector_Next", &UDungeonBlueprintLibrary::execIntVector_Next },
		{ "IntVector_NotEqual", &UDungeonBlueprintLibrary::execIntVector_NotEqual },
		{ "IntVector_Rotate", &UDungeonBlueprintLibrary::execIntVector_Rotate },
		{ "IntVector_Subtract", &UDungeonBlueprintLibrary::execIntVector_Subtract },
		{ "IsDoorOfType", &UDungeonBlueprintLibrary::execIsDoorOfType },
		{ "Settings_DefaultDoorSize", &UDungeonBlueprintLibrary::execSettings_DefaultDoorSize },
		{ "Settings_DoorOffset", &UDungeonBlueprintLibrary::execSettings_DoorOffset },
		{ "Settings_OccludeDynamicActors", &UDungeonBlueprintLibrary::execSettings_OccludeDynamicActors },
		{ "Settings_OcclusionCulling", &UDungeonBlueprintLibrary::execSettings_OcclusionCulling },
		{ "Settings_OcclusionDistance", &UDungeonBlueprintLibrary::execSettings_OcclusionDistance },
		{ "Settings_RoomUnit", &UDungeonBlueprintLibrary::execSettings_RoomUnit },
		{ "Settings_SetOcclusionCulling", &UDungeonBlueprintLibrary::execSettings_SetOcclusionCulling },
		{ "Settings_SetOcclusionDistance", &UDungeonBlueprintLibrary::execSettings_SetOcclusionDistance },
		{ "Spectate", &UDungeonBlueprintLibrary::execSpectate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDungeonBlueprintLibrary;
UClass* UDungeonBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UDungeonBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UDungeonBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DungeonBlueprintLibrary"),
			Z_Registration_Info_UClass_UDungeonBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUDungeonBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UDungeonBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister()
{
	return UDungeonBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDungeonBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows, "CompareDataTableRows" }, // 3331740648
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDef_GetOpposite, "DoorDef_GetOpposite" }, // 2374065030
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add, "DoorDirection_Add" }, // 2937988325
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement, "DoorDirection_Decrement" }, // 3714800241
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment, "DoorDirection_Increment" }, // 968033823
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate, "DoorDirection_Negate" }, // 3260665483
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite, "DoorDirection_Opposite" }, // 1254903338
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub, "DoorDirection_Sub" }, // 2857744779
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToAngle, "DoorDirection_ToAngle" }, // 2075399823
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_ToIntVector, "DoorDirection_ToIntVector" }, // 1700558747
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid, "DoorDirection_Valid" }, // 987375556
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformDoorDef, "Dungeon_InverseTransformDoorDef" }, // 3189661269
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_InverseTransformPosition, "Dungeon_InverseTransformPosition" }, // 3881047174
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformDoorDef, "Dungeon_TransformDoorDef" }, // 1812166737
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Dungeon_TransformPosition, "Dungeon_TransformPosition" }, // 1404577
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom, "GetOwningRoom" }, // 3646686379
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData, "GetOwningRoomCustomData" }, // 3348268907
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Add, "IntVector_Add" }, // 880525225
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Equal, "IntVector_Equal" }, // 3769829126
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Next, "IntVector_Next" }, // 3233081317
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_NotEqual, "IntVector_NotEqual" }, // 1190290533
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Rotate, "IntVector_Rotate" }, // 2725783019
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IntVector_Subtract, "IntVector_Subtract" }, // 1041518399
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType, "IsDoorOfType" }, // 3322319304
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize, "Settings_DefaultDoorSize" }, // 282255733
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset, "Settings_DoorOffset" }, // 3081128651
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors, "Settings_OccludeDynamicActors" }, // 130856767
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling, "Settings_OcclusionCulling" }, // 3677655361
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance, "Settings_OcclusionDistance" }, // 1552796625
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit, "Settings_RoomUnit" }, // 785994702
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling, "Settings_SetOcclusionCulling" }, // 3288707397
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance, "Settings_SetOcclusionDistance" }, // 2565723003
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate, "Spectate" }, // 2254909215
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::ClassParams = {
	&UDungeonBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton;
}
UDungeonBlueprintLibrary::UDungeonBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonBlueprintLibrary);
UDungeonBlueprintLibrary::~UDungeonBlueprintLibrary() {}
// ********** End Class UDungeonBlueprintLibrary ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonBlueprintLibrary, UDungeonBlueprintLibrary::StaticClass, TEXT("UDungeonBlueprintLibrary"), &Z_Registration_Info_UClass_UDungeonBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonBlueprintLibrary), 2221145110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h__Script_ProceduralDungeon_203168204(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
