// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomData.h"
#include "ProceduralDungeonTypes.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSettings_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URoomData Function CleanupRoom *******************************************
struct RoomData_eventCleanupRoom_Parms
{
	URoom* Room;
	UDungeonGraph* Dungeon;
};
static FName NAME_URoomData_CleanupRoom = FName(TEXT("CleanupRoom"));
void URoomData::CleanupRoom(URoom* Room, UDungeonGraph* Dungeon) const
{
	UFunction* Func = FindFunctionChecked(NAME_URoomData_CleanupRoom);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RoomData_eventCleanupRoom_Parms Parms;
		Parms.Room=Room;
		Parms.Dungeon=Dungeon;
		const_cast<URoomData*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<URoomData*>(this)->CleanupRoom_Implementation(Room, Dungeon);
	}
}
struct Z_Construct_UFunction_URoomData_CleanupRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CleanupRoom constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CleanupRoom constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CleanupRoom Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_CleanupRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventCleanupRoom_Parms, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_CleanupRoom_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventCleanupRoom_Parms, Dungeon), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_CleanupRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_CleanupRoom_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_CleanupRoom_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_CleanupRoom_Statics::PropPointers) < 2048);
// ********** End Function CleanupRoom Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_CleanupRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "CleanupRoom", 	Z_Construct_UFunction_URoomData_CleanupRoom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_CleanupRoom_Statics::PropPointers), 
sizeof(RoomData_eventCleanupRoom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_CleanupRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_CleanupRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RoomData_eventCleanupRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_CleanupRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_CleanupRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execCleanupRoom)
{
	P_GET_OBJECT(URoom,Z_Param_Room);
	P_GET_OBJECT(UDungeonGraph,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupRoom_Implementation(Z_Param_Room,Z_Param_Dungeon);
	P_NATIVE_END;
}
// ********** End Class URoomData Function CleanupRoom *********************************************

// ********** Begin Class URoomData Function DoesPassAllConstraints ********************************
struct Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics
{
	struct RoomData_eventDoesPassAllConstraints_Parms
	{
		const URoomData* RoomData;
		FIntVector Location;
		EDoorDirection Direction;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Contraint" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesPassAllConstraints constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesPassAllConstraints constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesPassAllConstraints Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventDoesPassAllConstraints_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomData_MetaData), NewProp_RoomData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventDoesPassAllConstraints_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventDoesPassAllConstraints_Parms, Direction), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 4084058555
void Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventDoesPassAllConstraints_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventDoesPassAllConstraints_Parms), &Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::PropPointers) < 2048);
// ********** End Function DoesPassAllConstraints Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "DoesPassAllConstraints", 	Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::RoomData_eventDoesPassAllConstraints_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::RoomData_eventDoesPassAllConstraints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_DoesPassAllConstraints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_DoesPassAllConstraints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execDoesPassAllConstraints)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_GET_STRUCT(FIntVector,Z_Param_Location);
	P_GET_ENUM(EDoorDirection,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoomData::DoesPassAllConstraints(Z_Param_RoomData,Z_Param_Location,EDoorDirection(Z_Param_Direction));
	P_NATIVE_END;
}
// ********** End Class URoomData Function DoesPassAllConstraints **********************************

// ********** Begin Class URoomData Function GetCompatibleDoors ************************************
struct Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics
{
	struct RoomData_eventGetCompatibleDoors_Parms
	{
		FDoorDef DoorData;
		TArray<int32> CompatibleDoors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCompatibleDoors constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompatibleDoors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleDoors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCompatibleDoors constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCompatibleDoors Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetCompatibleDoors_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorData_MetaData), NewProp_DoorData_MetaData) }; // 3029669120
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::NewProp_CompatibleDoors_Inner = { "CompatibleDoors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::NewProp_CompatibleDoors = { "CompatibleDoors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetCompatibleDoors_Parms, CompatibleDoors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::NewProp_DoorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::NewProp_CompatibleDoors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::NewProp_CompatibleDoors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::PropPointers) < 2048);
// ********** End Function GetCompatibleDoors Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "GetCompatibleDoors", 	Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::RoomData_eventGetCompatibleDoors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::RoomData_eventGetCompatibleDoors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_GetCompatibleDoors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_GetCompatibleDoors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execGetCompatibleDoors)
{
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorData);
	P_GET_TARRAY_REF(int32,Z_Param_Out_CompatibleDoors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCompatibleDoors(Z_Param_Out_DoorData,Z_Param_Out_CompatibleDoors);
	P_NATIVE_END;
}
// ********** End Class URoomData Function GetCompatibleDoors **************************************

// ********** Begin Class URoomData Function GetDoorDef ********************************************
struct Z_Construct_UFunction_URoomData_GetDoorDef_Statics
{
	struct RoomData_eventGetDoorDef_Parms
	{
		int32 DoorIndex;
		FDoorDef ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDoorDef constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDoorDef constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDoorDef Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoomData_GetDoorDef_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetDoorDef_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomData_GetDoorDef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetDoorDef_Parms, ReturnValue), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3029669120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_GetDoorDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetDoorDef_Statics::NewProp_DoorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetDoorDef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetDoorDef_Statics::PropPointers) < 2048);
// ********** End Function GetDoorDef Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_GetDoorDef_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "GetDoorDef", 	Z_Construct_UFunction_URoomData_GetDoorDef_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetDoorDef_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_GetDoorDef_Statics::RoomData_eventGetDoorDef_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetDoorDef_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_GetDoorDef_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_GetDoorDef_Statics::RoomData_eventGetDoorDef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_GetDoorDef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_GetDoorDef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execGetDoorDef)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DoorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDoorDef*)Z_Param__Result=P_THIS->GetDoorDef(Z_Param_DoorIndex);
	P_NATIVE_END;
}
// ********** End Class URoomData Function GetDoorDef **********************************************

// ********** Begin Class URoomData Function GetNbDoor *********************************************
struct Z_Construct_UFunction_URoomData_GetNbDoor_Statics
{
	struct RoomData_eventGetNbDoor_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "CompactNodeTitle", "Door Count" },
		{ "DisplayName", "Door Count" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNbDoor constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNbDoor constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNbDoor Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoomData_GetNbDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetNbDoor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_GetNbDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetNbDoor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::PropPointers) < 2048);
// ********** End Function GetNbDoor Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_GetNbDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "GetNbDoor", 	Z_Construct_UFunction_URoomData_GetNbDoor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::RoomData_eventGetNbDoor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_GetNbDoor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::RoomData_eventGetNbDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_GetNbDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_GetNbDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execGetNbDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNbDoor();
	P_NATIVE_END;
}
// ********** End Class URoomData Function GetNbDoor ***********************************************

// ********** Begin Class URoomData Function GetRoomUnit *******************************************
struct Z_Construct_UFunction_URoomData_GetRoomUnit_Statics
{
	struct RoomData_eventGetRoomUnit_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomUnit constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomUnit constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomUnit Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetRoomUnit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::PropPointers) < 2048);
// ********** End Function GetRoomUnit Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "GetRoomUnit", 	Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::RoomData_eventGetRoomUnit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::RoomData_eventGetRoomUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_GetRoomUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_GetRoomUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execGetRoomUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRoomUnit();
	P_NATIVE_END;
}
// ********** End Class URoomData Function GetRoomUnit *********************************************

// ********** Begin Class URoomData Function GetSettings *******************************************
struct Z_Construct_UFunction_URoomData_GetSettings_Statics
{
	struct RoomData_eventGetSettings_Parms
	{
		const UDungeonSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSettings constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSettings constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSettings Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UDungeonSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_GetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetSettings_Statics::PropPointers) < 2048);
// ********** End Function GetSettings Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_GetSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "GetSettings", 	Z_Construct_UFunction_URoomData_GetSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_GetSettings_Statics::RoomData_eventGetSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_GetSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_GetSettings_Statics::RoomData_eventGetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_GetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_GetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execGetSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UDungeonSettings**)Z_Param__Result=P_THIS->GetSettings();
	P_NATIVE_END;
}
// ********** End Class URoomData Function GetSettings *********************************************

// ********** Begin Class URoomData Function GetSize ***********************************************
struct Z_Construct_UFunction_URoomData_GetSize_Statics
{
	struct RoomData_eventGetSize_Parms
	{
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSize constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSize constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSize Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomData_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetSize_Statics::PropPointers) < 2048);
// ********** End Function GetSize Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_GetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "GetSize", 	Z_Construct_UFunction_URoomData_GetSize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetSize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_GetSize_Statics::RoomData_eventGetSize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_GetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_GetSize_Statics::RoomData_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// ********** End Class URoomData Function GetSize *************************************************

// ********** Begin Class URoomData Function GetVolume *********************************************
struct Z_Construct_UFunction_URoomData_GetVolume_Statics
{
	struct RoomData_eventGetVolume_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVolume constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVolume constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVolume Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoomData_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_GetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetVolume_Statics::PropPointers) < 2048);
// ********** End Function GetVolume Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_GetVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "GetVolume", 	Z_Construct_UFunction_URoomData_GetVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_GetVolume_Statics::RoomData_eventGetVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_GetVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_GetVolume_Statics::RoomData_eventGetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_GetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_GetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execGetVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetVolume();
	P_NATIVE_END;
}
// ********** End Class URoomData Function GetVolume ***********************************************

// ********** Begin Class URoomData Function HasAllCustomData **************************************
struct Z_Construct_UFunction_URoomData_HasAllCustomData_Statics
{
	struct RoomData_eventHasAllCustomData_Parms
	{
		TArray<TSubclassOf<URoomCustomData>> CustomDataList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAllCustomData constinit property declarations **********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomDataList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAllCustomData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAllCustomData Property Definitions *********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::NewProp_CustomDataList_Inner = { "CustomDataList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::NewProp_CustomDataList = { "CustomDataList", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventHasAllCustomData_Parms, CustomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDataList_MetaData), NewProp_CustomDataList_MetaData) };
void Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventHasAllCustomData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventHasAllCustomData_Parms), &Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::NewProp_CustomDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::NewProp_CustomDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::PropPointers) < 2048);
// ********** End Function HasAllCustomData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "HasAllCustomData", 	Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::RoomData_eventHasAllCustomData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::RoomData_eventHasAllCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_HasAllCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_HasAllCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execHasAllCustomData)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomCustomData>,Z_Param_Out_CustomDataList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAllCustomData(Z_Param_Out_CustomDataList);
	P_NATIVE_END;
}
// ********** End Class URoomData Function HasAllCustomData ****************************************

// ********** Begin Class URoomData Function HasAllDoorOfType **************************************
struct Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics
{
	struct RoomData_eventHasAllDoorOfType_Parms
	{
		TArray<UDoorType*> DoorTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAllDoorOfType constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAllDoorOfType constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAllDoorOfType Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::NewProp_DoorTypes_Inner = { "DoorTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::NewProp_DoorTypes = { "DoorTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventHasAllDoorOfType_Parms, DoorTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorTypes_MetaData), NewProp_DoorTypes_MetaData) };
void Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventHasAllDoorOfType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventHasAllDoorOfType_Parms), &Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::NewProp_DoorTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::NewProp_DoorTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::PropPointers) < 2048);
// ********** End Function HasAllDoorOfType Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "HasAllDoorOfType", 	Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::RoomData_eventHasAllDoorOfType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::RoomData_eventHasAllDoorOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_HasAllDoorOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_HasAllDoorOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execHasAllDoorOfType)
{
	P_GET_TARRAY_REF(UDoorType*,Z_Param_Out_DoorTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAllDoorOfType(Z_Param_Out_DoorTypes);
	P_NATIVE_END;
}
// ********** End Class URoomData Function HasAllDoorOfType ****************************************

// ********** Begin Class URoomData Function HasAnyCustomData **************************************
struct Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics
{
	struct RoomData_eventHasAnyCustomData_Parms
	{
		TArray<TSubclassOf<URoomCustomData>> CustomDataList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAnyCustomData constinit property declarations **********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomDataList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAnyCustomData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAnyCustomData Property Definitions *********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::NewProp_CustomDataList_Inner = { "CustomDataList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::NewProp_CustomDataList = { "CustomDataList", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventHasAnyCustomData_Parms, CustomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDataList_MetaData), NewProp_CustomDataList_MetaData) };
void Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventHasAnyCustomData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventHasAnyCustomData_Parms), &Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::NewProp_CustomDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::NewProp_CustomDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::PropPointers) < 2048);
// ********** End Function HasAnyCustomData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "HasAnyCustomData", 	Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::RoomData_eventHasAnyCustomData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::RoomData_eventHasAnyCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_HasAnyCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_HasAnyCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execHasAnyCustomData)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomCustomData>,Z_Param_Out_CustomDataList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnyCustomData(Z_Param_Out_CustomDataList);
	P_NATIVE_END;
}
// ********** End Class URoomData Function HasAnyCustomData ****************************************

// ********** Begin Class URoomData Function HasAnyDoorOfType **************************************
struct Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics
{
	struct RoomData_eventHasAnyDoorOfType_Parms
	{
		TArray<UDoorType*> DoorTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAnyDoorOfType constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAnyDoorOfType constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAnyDoorOfType Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::NewProp_DoorTypes_Inner = { "DoorTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::NewProp_DoorTypes = { "DoorTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventHasAnyDoorOfType_Parms, DoorTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorTypes_MetaData), NewProp_DoorTypes_MetaData) };
void Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventHasAnyDoorOfType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventHasAnyDoorOfType_Parms), &Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::NewProp_DoorTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::NewProp_DoorTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::PropPointers) < 2048);
// ********** End Function HasAnyDoorOfType Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "HasAnyDoorOfType", 	Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::RoomData_eventHasAnyDoorOfType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::RoomData_eventHasAnyDoorOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_HasAnyDoorOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_HasAnyDoorOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execHasAnyDoorOfType)
{
	P_GET_TARRAY_REF(UDoorType*,Z_Param_Out_DoorTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnyDoorOfType(Z_Param_Out_DoorTypes);
	P_NATIVE_END;
}
// ********** End Class URoomData Function HasAnyDoorOfType ****************************************

// ********** Begin Class URoomData Function HasCompatibleDoor *************************************
struct Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics
{
	struct RoomData_eventHasCompatibleDoor_Parms
	{
		FDoorDef DoorData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasCompatibleDoor constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasCompatibleDoor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasCompatibleDoor Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventHasCompatibleDoor_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorData_MetaData), NewProp_DoorData_MetaData) }; // 3029669120
void Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventHasCompatibleDoor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventHasCompatibleDoor_Parms), &Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_DoorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::PropPointers) < 2048);
// ********** End Function HasCompatibleDoor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "HasCompatibleDoor", 	Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::RoomData_eventHasCompatibleDoor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::RoomData_eventHasCompatibleDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_HasCompatibleDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execHasCompatibleDoor)
{
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCompatibleDoor(Z_Param_Out_DoorData);
	P_NATIVE_END;
}
// ********** End Class URoomData Function HasCompatibleDoor ***************************************

// ********** Begin Class URoomData Function HasCustomData *****************************************
struct Z_Construct_UFunction_URoomData_HasCustomData_Statics
{
	struct RoomData_eventHasCustomData_Parms
	{
		TSubclassOf<URoomCustomData> CustomDataClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasCustomData constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomDataClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasCustomData constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasCustomData Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URoomData_HasCustomData_Statics::NewProp_CustomDataClass = { "CustomDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventHasCustomData_Parms, CustomDataClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URoomData_HasCustomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventHasCustomData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_HasCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventHasCustomData_Parms), &Z_Construct_UFunction_URoomData_HasCustomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_HasCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasCustomData_Statics::NewProp_CustomDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasCustomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCustomData_Statics::PropPointers) < 2048);
// ********** End Function HasCustomData Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_HasCustomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "HasCustomData", 	Z_Construct_UFunction_URoomData_HasCustomData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCustomData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_HasCustomData_Statics::RoomData_eventHasCustomData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_HasCustomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_HasCustomData_Statics::RoomData_eventHasCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_HasCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_HasCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execHasCustomData)
{
	P_GET_OBJECT(UClass,Z_Param_CustomDataClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCustomData(Z_Param_CustomDataClass);
	P_NATIVE_END;
}
// ********** End Class URoomData Function HasCustomData *******************************************

// ********** Begin Class URoomData Function HasDoorOfType *****************************************
struct Z_Construct_UFunction_URoomData_HasDoorOfType_Statics
{
	struct RoomData_eventHasDoorOfType_Parms
	{
		UDoorType* DoorType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasDoorOfType constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasDoorOfType constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasDoorOfType Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventHasDoorOfType_Parms, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventHasDoorOfType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventHasDoorOfType_Parms), &Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::PropPointers) < 2048);
// ********** End Function HasDoorOfType Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "HasDoorOfType", 	Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::RoomData_eventHasDoorOfType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::RoomData_eventHasDoorOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_HasDoorOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_HasDoorOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execHasDoorOfType)
{
	P_GET_OBJECT(UDoorType,Z_Param_DoorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDoorOfType(Z_Param_DoorType);
	P_NATIVE_END;
}
// ********** End Class URoomData Function HasDoorOfType *******************************************

// ********** Begin Class URoomData Function InitializeRoom ****************************************
struct RoomData_eventInitializeRoom_Parms
{
	URoom* Room;
	UDungeonGraph* Dungeon;
};
static FName NAME_URoomData_InitializeRoom = FName(TEXT("InitializeRoom"));
void URoomData::InitializeRoom(URoom* Room, UDungeonGraph* Dungeon) const
{
	UFunction* Func = FindFunctionChecked(NAME_URoomData_InitializeRoom);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RoomData_eventInitializeRoom_Parms Parms;
		Parms.Room=Room;
		Parms.Dungeon=Dungeon;
		const_cast<URoomData*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<URoomData*>(this)->InitializeRoom_Implementation(Room, Dungeon);
	}
}
struct Z_Construct_UFunction_URoomData_InitializeRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeRoom constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeRoom constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeRoom Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_InitializeRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventInitializeRoom_Parms, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_InitializeRoom_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventInitializeRoom_Parms, Dungeon), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_InitializeRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_InitializeRoom_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_InitializeRoom_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_InitializeRoom_Statics::PropPointers) < 2048);
// ********** End Function InitializeRoom Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_InitializeRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "InitializeRoom", 	Z_Construct_UFunction_URoomData_InitializeRoom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_InitializeRoom_Statics::PropPointers), 
sizeof(RoomData_eventInitializeRoom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_InitializeRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_InitializeRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RoomData_eventInitializeRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_InitializeRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_InitializeRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execInitializeRoom)
{
	P_GET_OBJECT(URoom,Z_Param_Room);
	P_GET_OBJECT(UDungeonGraph,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeRoom_Implementation(Z_Param_Room,Z_Param_Dungeon);
	P_NATIVE_END;
}
// ********** End Class URoomData Function InitializeRoom ******************************************

// ********** Begin Class URoomData ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoomData;
UClass* URoomData::GetPrivateStaticClass()
{
	using TClass = URoomData;
	if (!Z_Registration_Info_UClass_URoomData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoomData"),
			Z_Registration_Info_UClass_URoomData.InnerSingleton,
			StaticRegisterNativesURoomData,
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
	return Z_Registration_Info_UClass_URoomData.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomData_NoRegister()
{
	return URoomData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static data shared by multiple room instances.\n// This data is used to define the room's properties and the room level to spawn.\n" },
#endif
		{ "IncludePath", "RoomData.h" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static data shared by multiple room instances.\nThis data is used to define the room's properties and the room level to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomDoor_MetaData[] = {
		{ "Category", "Doors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This will force a random door to be chosen during the dungeon generation.\n// DEPRECATED: It will be removed in a future version of the plugin. As a replacement, you should return -1 as DoorIndex in the ChooseNextRoomData of your DungeonGenerator.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will force a random door to be chosen during the dungeon generation.\nDEPRECATED: It will be removed in a future version of the plugin. As a replacement, you should return -1 as DoorIndex in the ChooseNextRoomData of your DungeonGenerator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
		{ "Category", "Doors" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondPoint_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsOverrides_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_Inner_MetaData[] = {
		{ "Category", "Room" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "Room" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoomData constinit property declarations ********************************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_RandomDoor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomDoor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondPoint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoomData constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CleanupRoom"), .Pointer = &URoomData::execCleanupRoom },
		{ .NameUTF8 = UTF8TEXT("DoesPassAllConstraints"), .Pointer = &URoomData::execDoesPassAllConstraints },
		{ .NameUTF8 = UTF8TEXT("GetCompatibleDoors"), .Pointer = &URoomData::execGetCompatibleDoors },
		{ .NameUTF8 = UTF8TEXT("GetDoorDef"), .Pointer = &URoomData::execGetDoorDef },
		{ .NameUTF8 = UTF8TEXT("GetNbDoor"), .Pointer = &URoomData::execGetNbDoor },
		{ .NameUTF8 = UTF8TEXT("GetRoomUnit"), .Pointer = &URoomData::execGetRoomUnit },
		{ .NameUTF8 = UTF8TEXT("GetSettings"), .Pointer = &URoomData::execGetSettings },
		{ .NameUTF8 = UTF8TEXT("GetSize"), .Pointer = &URoomData::execGetSize },
		{ .NameUTF8 = UTF8TEXT("GetVolume"), .Pointer = &URoomData::execGetVolume },
		{ .NameUTF8 = UTF8TEXT("HasAllCustomData"), .Pointer = &URoomData::execHasAllCustomData },
		{ .NameUTF8 = UTF8TEXT("HasAllDoorOfType"), .Pointer = &URoomData::execHasAllDoorOfType },
		{ .NameUTF8 = UTF8TEXT("HasAnyCustomData"), .Pointer = &URoomData::execHasAnyCustomData },
		{ .NameUTF8 = UTF8TEXT("HasAnyDoorOfType"), .Pointer = &URoomData::execHasAnyDoorOfType },
		{ .NameUTF8 = UTF8TEXT("HasCompatibleDoor"), .Pointer = &URoomData::execHasCompatibleDoor },
		{ .NameUTF8 = UTF8TEXT("HasCustomData"), .Pointer = &URoomData::execHasCustomData },
		{ .NameUTF8 = UTF8TEXT("HasDoorOfType"), .Pointer = &URoomData::execHasDoorOfType },
		{ .NameUTF8 = UTF8TEXT("InitializeRoom"), .Pointer = &URoomData::execInitializeRoom },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomData_CleanupRoom, "CleanupRoom" }, // 3144422431
		{ &Z_Construct_UFunction_URoomData_DoesPassAllConstraints, "DoesPassAllConstraints" }, // 3805631952
		{ &Z_Construct_UFunction_URoomData_GetCompatibleDoors, "GetCompatibleDoors" }, // 584982232
		{ &Z_Construct_UFunction_URoomData_GetDoorDef, "GetDoorDef" }, // 4161589570
		{ &Z_Construct_UFunction_URoomData_GetNbDoor, "GetNbDoor" }, // 2954048417
		{ &Z_Construct_UFunction_URoomData_GetRoomUnit, "GetRoomUnit" }, // 425792370
		{ &Z_Construct_UFunction_URoomData_GetSettings, "GetSettings" }, // 3366329201
		{ &Z_Construct_UFunction_URoomData_GetSize, "GetSize" }, // 2221637852
		{ &Z_Construct_UFunction_URoomData_GetVolume, "GetVolume" }, // 3852489191
		{ &Z_Construct_UFunction_URoomData_HasAllCustomData, "HasAllCustomData" }, // 651739530
		{ &Z_Construct_UFunction_URoomData_HasAllDoorOfType, "HasAllDoorOfType" }, // 1117922028
		{ &Z_Construct_UFunction_URoomData_HasAnyCustomData, "HasAnyCustomData" }, // 3956528258
		{ &Z_Construct_UFunction_URoomData_HasAnyDoorOfType, "HasAnyDoorOfType" }, // 421506612
		{ &Z_Construct_UFunction_URoomData_HasCompatibleDoor, "HasCompatibleDoor" }, // 2096885393
		{ &Z_Construct_UFunction_URoomData_HasCustomData, "HasCustomData" }, // 1465027957
		{ &Z_Construct_UFunction_URoomData_HasDoorOfType, "HasDoorOfType" }, // 307296481
		{ &Z_Construct_UFunction_URoomData_InitializeRoom, "InitializeRoom" }, // 2444359378
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoomData_Statics

// ********** Begin Class URoomData Property Definitions *******************************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_SetBit(void* Obj)
{
	((URoomData*)Obj)->RandomDoor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor = { "RandomDoor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URoomData), &Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomDoor_MetaData), NewProp_RandomDoor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(0, nullptr) }; // 3029669120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 3029669120
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, FirstPoint), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPoint_MetaData), NewProp_FirstPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_SecondPoint = { "SecondPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, SecondPoint), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondPoint_MetaData), NewProp_SecondPoint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_CustomData_ElementProp = { "CustomData", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, CustomData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_SettingsOverrides = { "SettingsOverrides", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, SettingsOverrides), Z_Construct_UClass_UDungeonSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsOverrides_MetaData), NewProp_SettingsOverrides_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomConstraint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_Inner_MetaData), NewProp_Constraints_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Doors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_FirstPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_SecondPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_CustomData_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_SettingsOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::PropPointers) < 2048);
// ********** End Class URoomData Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_URoomData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomData_Statics::ClassParams = {
	&URoomData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URoomData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomData_Statics::Class_MetaDataParams)
};
void URoomData::StaticRegisterNativesURoomData()
{
	UClass* Class = URoomData::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URoomData_Statics::Funcs));
}
UClass* Z_Construct_UClass_URoomData()
{
	if (!Z_Registration_Info_UClass_URoomData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomData.OuterSingleton, Z_Construct_UClass_URoomData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomData);
URoomData::~URoomData() {}
// ********** End Class URoomData ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomData, URoomData::StaticClass, TEXT("URoomData"), &Z_Registration_Info_UClass_URoomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomData), 1609238605U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h__Script_ProceduralDungeon_3110282189{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
