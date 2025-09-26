// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGraph.h"
#include "ProceduralDungeonTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDungeonGraph() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonCustomSerialization_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSaveInterface_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UGeneratorProvider_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConnection_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomContainer_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FRoomCandidate();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRoomCandidate ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoomCandidate;
class UScriptStruct* FRoomCandidate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRoomCandidate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRoomCandidate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomCandidate, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("RoomCandidate"));
	}
	return Z_Registration_Info_UScriptStruct_FRoomCandidate.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRoomCandidate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Describe a potential room to be added to the dungeon.\n// Mainly used by FilterAndSortRooms function.\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Describe a potential room to be added to the dungeon.\nMainly used by FilterAndSortRooms function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Room Candidate" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorIndex_MetaData[] = {
		{ "Category", "Room Candidate" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Room Candidate" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomCandidate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomCandidate_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomCandidate, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoomCandidate_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomCandidate, DoorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorIndex_MetaData), NewProp_DoorIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoomCandidate_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomCandidate, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomCandidate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomCandidate_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomCandidate_Statics::NewProp_DoorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomCandidate_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomCandidate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomCandidate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	&NewStructOps,
	"RoomCandidate",
	Z_Construct_UScriptStruct_FRoomCandidate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomCandidate_Statics::PropPointers),
	sizeof(FRoomCandidate),
	alignof(FRoomCandidate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomCandidate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoomCandidate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRoomCandidate()
{
	if (!Z_Registration_Info_UScriptStruct_FRoomCandidate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoomCandidate.InnerSingleton, Z_Construct_UScriptStruct_FRoomCandidate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRoomCandidate.InnerSingleton;
}
// ********** End ScriptStruct FRoomCandidate ******************************************************

// ********** Begin Class UDungeonGraph Function Count *********************************************
struct Z_Construct_UFunction_UDungeonGraph_Count_Statics
{
	struct DungeonGraph_eventCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the total number of room\n" },
		{ "CompactNodeTitle", "Count" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the total number of room" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_Count_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_Count_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "Count", Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_Count_Statics::DungeonGraph_eventCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_Count_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_Count_Statics::DungeonGraph_eventCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_Count()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_Count_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Count();
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function Count ***********************************************

// ********** Begin Class UDungeonGraph Function CountRoomData *************************************
struct Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics
{
	struct DungeonGraph_eventCountRoomData_Parms
	{
		const URoomData* RoomData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the number of a specific RoomData in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the number of a specific RoomData in the dungeon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomData_MetaData), NewProp_RoomData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountRoomData", Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::DungeonGraph_eventCountRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::DungeonGraph_eventCountRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_CountRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCountRoomData)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountRoomData(Z_Param_RoomData);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function CountRoomData ***************************************

// ********** Begin Class UDungeonGraph Function CountRoomType *************************************
struct Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics
{
	struct DungeonGraph_eventCountRoomType_Parms
	{
		const TSubclassOf<URoomData> RoomType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "RoomType" },
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the number of a specific RoomData type in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the number of a specific RoomData type in the dungeon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomType_MetaData), NewProp_RoomType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountRoomType", Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::DungeonGraph_eventCountRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::DungeonGraph_eventCountRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_CountRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCountRoomType)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomData>,Z_Param_Out_RoomType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountRoomType(Z_Param_Out_RoomType);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function CountRoomType ***************************************

// ********** Begin Class UDungeonGraph Function CountTotalRoomData ********************************
struct Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics
{
	struct DungeonGraph_eventCountTotalRoomData_Parms
	{
		TArray<URoomData*> RoomDataList;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the total number of RoomData in the dungeon from the list provided\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the total number of RoomData in the dungeon from the list provided" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomData_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDataList_MetaData), NewProp_RoomDataList_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountTotalRoomData", Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::DungeonGraph_eventCountTotalRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::DungeonGraph_eventCountTotalRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCountTotalRoomData)
{
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomDataList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalRoomData(Z_Param_Out_RoomDataList);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function CountTotalRoomData **********************************

// ********** Begin Class UDungeonGraph Function CountTotalRoomType ********************************
struct Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics
{
	struct DungeonGraph_eventCountTotalRoomType_Parms
	{
		TArray<TSubclassOf<URoomData>> RoomTypeList;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the total number of RoomData type in the dungeon from the list provided\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the total number of RoomData type in the dungeon from the list provided" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomTypeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomType_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomTypeList_MetaData), NewProp_RoomTypeList_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountTotalRoomType", Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::DungeonGraph_eventCountTotalRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::DungeonGraph_eventCountTotalRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCountTotalRoomType)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomData>,Z_Param_Out_RoomTypeList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalRoomType(Z_Param_Out_RoomTypeList);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function CountTotalRoomType **********************************

// ********** Begin Class UDungeonGraph Function FilterAndSortRooms ********************************
struct Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics
{
	struct DungeonGraph_eventFilterAndSortRooms_Parms
	{
		TArray<URoomData*> RoomList;
		FDoorDef FromDoor;
		TArray<FRoomCandidate> SortedRooms;
		FScriptDelegate CustomScore;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CustomFilter" },
		{ "AutoCreateRefTerm", "CustomScore" },
		{ "Category", "Dungeon Graph" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomList_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromDoor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromDoor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortedRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedRooms;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_CustomScore;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_RoomList_Inner = { "RoomList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_RoomList = { "RoomList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventFilterAndSortRooms_Parms, RoomList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomList_MetaData), NewProp_RoomList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_FromDoor = { "FromDoor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventFilterAndSortRooms_Parms, FromDoor), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromDoor_MetaData), NewProp_FromDoor_MetaData) }; // 2900168320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_SortedRooms_Inner = { "SortedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoomCandidate, METADATA_PARAMS(0, nullptr) }; // 229682168
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_SortedRooms = { "SortedRooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventFilterAndSortRooms_Parms, SortedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 229682168
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_CustomScore = { "CustomScore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventFilterAndSortRooms_Parms, CustomScore), Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomScore_MetaData), NewProp_CustomScore_MetaData) }; // 48665520
void Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventFilterAndSortRooms_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventFilterAndSortRooms_Parms), &Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_RoomList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_RoomList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_FromDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_SortedRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_SortedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_CustomScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "FilterAndSortRooms", Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::DungeonGraph_eventFilterAndSortRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::DungeonGraph_eventFilterAndSortRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execFilterAndSortRooms)
{
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomList);
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_FromDoor);
	P_GET_TARRAY_REF(FRoomCandidate,Z_Param_Out_SortedRooms);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_CustomScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FilterAndSortRooms(Z_Param_Out_RoomList,Z_Param_Out_FromDoor,Z_Param_Out_SortedRooms,FScoreCallback(Z_Param_Out_CustomScore));
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function FilterAndSortRooms **********************************

// ********** Begin Class UDungeonGraph Function GetAllConnections *********************************
struct Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics
{
	struct DungeonGraph_eventGetAllConnections_Parms
	{
		TArray<URoomConnection*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns all room connections\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns all room connections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllConnections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllConnections", Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::DungeonGraph_eventGetAllConnections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::DungeonGraph_eventGetAllConnections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllConnections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllConnections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllConnections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<URoomConnection*>*)Z_Param__Result=P_THIS->GetAllConnections();
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetAllConnections ***********************************

// ********** Begin Class UDungeonGraph Function GetAllRooms ***************************************
struct Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics
{
	struct DungeonGraph_eventGetAllRooms_Parms
	{
		TArray<URoom*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns all rooms\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns all rooms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRooms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRooms", Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::DungeonGraph_eventGetAllRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::DungeonGraph_eventGetAllRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRooms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<URoom*>*)Z_Param__Result=P_THIS->GetAllRooms();
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetAllRooms *****************************************

// ********** Begin Class UDungeonGraph Function GetAllRoomsFromData *******************************
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics
{
	struct DungeonGraph_eventGetAllRoomsFromData_Parms
	{
		const URoomData* Data;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns all room instances of the provided room data\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns all room instances of the provided room data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromData_Parms, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsFromData", Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::DungeonGraph_eventGetAllRoomsFromData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::DungeonGraph_eventGetAllRoomsFromData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsFromData)
{
	P_GET_OBJECT(URoomData,Z_Param_Data);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsFromData(Z_Param_Data,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetAllRoomsFromData *********************************

// ********** Begin Class UDungeonGraph Function GetAllRoomsFromDataList ***************************
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics
{
	struct DungeonGraph_eventGetAllRoomsFromDataList_Parms
	{
		TArray<URoomData*> Data;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns all room instances of any of the provided room data\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns all room instances of any of the provided room data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromDataList_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromDataList_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsFromDataList", Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::DungeonGraph_eventGetAllRoomsFromDataList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::DungeonGraph_eventGetAllRoomsFromDataList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsFromDataList)
{
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_Data);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsFromDataList(Z_Param_Out_Data,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetAllRoomsFromDataList *****************************

// ********** Begin Class UDungeonGraph Function GetAllRoomsWithAllCustomData **********************
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics
{
	struct DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms
	{
		TArray<TSubclassOf<URoomCustomData>> CustomData;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns all room instances having ALL the provided custom data\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns all room instances having ALL the provided custom data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithAllCustomData", Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithAllCustomData)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomCustomData>,Z_Param_Out_CustomData);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsWithAllCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetAllRoomsWithAllCustomData ************************

// ********** Begin Class UDungeonGraph Function GetAllRoomsWithAnyCustomData **********************
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics
{
	struct DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms
	{
		TArray<TSubclassOf<URoomCustomData>> CustomData;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns all room instances having at least one of the provided custom data\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns all room instances having at least one of the provided custom data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithAnyCustomData", Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithAnyCustomData)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomCustomData>,Z_Param_Out_CustomData);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsWithAnyCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetAllRoomsWithAnyCustomData ************************

// ********** Begin Class UDungeonGraph Function GetAllRoomsWithCustomData *************************
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics
{
	struct DungeonGraph_eventGetAllRoomsWithCustomData_Parms
	{
		const TSubclassOf<URoomCustomData> CustomData;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CustomData" },
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns all room instances having the provided custom data\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns all room instances having the provided custom data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithCustomData_Parms, CustomData), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithCustomData", Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::DungeonGraph_eventGetAllRoomsWithCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::DungeonGraph_eventGetAllRoomsWithCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithCustomData)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomCustomData>,Z_Param_Out_CustomData);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsWithCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetAllRoomsWithCustomData ***************************

// ********** Begin Class UDungeonGraph Function GetDungeonBoundsCenter ****************************
struct Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics
{
	struct DungeonGraph_eventGetDungeonBoundsCenter_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the center of the bounding box of the dungeon.\n// @see GetDungeonBoundsExtents\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the center of the bounding box of the dungeon.\n@see GetDungeonBoundsExtents" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetDungeonBoundsCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetDungeonBoundsCenter", Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::DungeonGraph_eventGetDungeonBoundsCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::DungeonGraph_eventGetDungeonBoundsCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetDungeonBoundsCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDungeonBoundsCenter();
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetDungeonBoundsCenter ******************************

// ********** Begin Class UDungeonGraph Function GetDungeonBoundsExtent ****************************
struct Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics
{
	struct DungeonGraph_eventGetDungeonBoundsExtent_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the extent (half size) of the bounding box of the dungeon.\n// @see GetDungeonBoundsCenter\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the extent (half size) of the bounding box of the dungeon.\n@see GetDungeonBoundsCenter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetDungeonBoundsExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetDungeonBoundsExtent", Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::DungeonGraph_eventGetDungeonBoundsExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::DungeonGraph_eventGetDungeonBoundsExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetDungeonBoundsExtent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDungeonBoundsExtent();
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetDungeonBoundsExtent ******************************

// ********** Begin Class UDungeonGraph Function GetFirstRoomFromData ******************************
struct Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics
{
	struct DungeonGraph_eventGetFirstRoomFromData_Parms
	{
		const URoomData* Data;
		const URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the first found room instance of the provided room data\n// (no defined order, so could be any room of the dungeon)\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the first found room instance of the provided room data\n(no defined order, so could be any room of the dungeon)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetFirstRoomFromData_Parms, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetFirstRoomFromData_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetFirstRoomFromData", Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::DungeonGraph_eventGetFirstRoomFromData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::DungeonGraph_eventGetFirstRoomFromData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetFirstRoomFromData)
{
	P_GET_OBJECT(URoomData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const URoom**)Z_Param__Result=P_THIS->GetFirstRoomFromData(Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetFirstRoomFromData ********************************

// ********** Begin Class UDungeonGraph Function GetPathBetween ************************************
struct Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics
{
	struct DungeonGraph_eventGetPathBetween_Parms
	{
		const URoom* A;
		const URoom* B;
		TArray<URoom*> ResultPath;
		bool IgnoreLockedRooms;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the path between A and B.\n// Note: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls.\n" },
		{ "CPP_Default_IgnoreLockedRooms", "false" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ReturnDisplayName", "Has Path" },
		{ "ToolTip", "Returns the path between A and B.\nNote: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultPath;
	static void NewProp_IgnoreLockedRooms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLockedRooms;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetPathBetween_Parms, A), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetPathBetween_Parms, B), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ResultPath_Inner = { "ResultPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ResultPath = { "ResultPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetPathBetween_Parms, ResultPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_IgnoreLockedRooms_SetBit(void* Obj)
{
	((DungeonGraph_eventGetPathBetween_Parms*)Obj)->IgnoreLockedRooms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_IgnoreLockedRooms = { "IgnoreLockedRooms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventGetPathBetween_Parms), &Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_IgnoreLockedRooms_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventGetPathBetween_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventGetPathBetween_Parms), &Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ResultPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ResultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_IgnoreLockedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetPathBetween", Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::DungeonGraph_eventGetPathBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::DungeonGraph_eventGetPathBetween_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetPathBetween()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetPathBetween)
{
	P_GET_OBJECT(URoom,Z_Param_A);
	P_GET_OBJECT(URoom,Z_Param_B);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_ResultPath);
	P_GET_UBOOL(Z_Param_IgnoreLockedRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPathBetween(Z_Param_A,Z_Param_B,Z_Param_Out_ResultPath,Z_Param_IgnoreLockedRooms);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetPathBetween **************************************

// ********** Begin Class UDungeonGraph Function GetRandomRoom *************************************
struct Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics
{
	struct DungeonGraph_eventGetRandomRoom_Parms
	{
		TArray<URoom*> RoomList;
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns a random room from an array of room\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns a random room from an array of room" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_Inner = { "RoomList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList = { "RoomList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRandomRoom_Parms, RoomList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomList_MetaData), NewProp_RoomList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRandomRoom_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetRandomRoom", Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::DungeonGraph_eventGetRandomRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::DungeonGraph_eventGetRandomRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetRandomRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetRandomRoom)
{
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_RoomList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=P_THIS->GetRandomRoom(Z_Param_Out_RoomList);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetRandomRoom ***************************************

// ********** Begin Class UDungeonGraph Function GetRoomAt *****************************************
struct Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics
{
	struct DungeonGraph_eventGetRoomAt_Parms
	{
		FIntVector RoomCell;
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the room instance at the provided room cell (expressed in Room Units, not Unreal Units!!!).\n// Returns null if no room located at the provided cell.\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the room instance at the provided room cell (expressed in Room Units, not Unreal Units!!!).\nReturns null if no room located at the provided cell." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomCell;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::NewProp_RoomCell = { "RoomCell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRoomAt_Parms, RoomCell), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRoomAt_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::NewProp_RoomCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetRoomAt", Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::DungeonGraph_eventGetRoomAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::DungeonGraph_eventGetRoomAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetRoomAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetRoomAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetRoomAt)
{
	P_GET_STRUCT(FIntVector,Z_Param_RoomCell);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=P_THIS->GetRoomAt(Z_Param_RoomCell);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetRoomAt *******************************************

// ********** Begin Class UDungeonGraph Function GetRoomByIndex ************************************
struct Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics
{
	struct DungeonGraph_eventGetRoomByIndex_Parms
	{
		int64 Index;
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "//~ Begin IRoomContainer Interface\n// Returns the room instance with the provided index.\n// Returns null if no room exists with the provided index.\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the room instance with the provided index.\nReturns null if no room exists with the provided index." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRoomByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRoomByIndex_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetRoomByIndex", Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::DungeonGraph_eventGetRoomByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::DungeonGraph_eventGetRoomByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetRoomByIndex)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=P_THIS->GetRoomByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function GetRoomByIndex **************************************

// ********** Begin Class UDungeonGraph Function HasAlreadyOneRoomDataFrom *************************
struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics
{
	struct DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms
	{
		TArray<URoomData*> RoomDataList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns true if at least one of the RoomData from the list provided is already in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns true if at least one of the RoomData from the list provided is already in the dungeon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDataList_MetaData), NewProp_RoomDataList_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyOneRoomDataFrom", Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyOneRoomDataFrom)
{
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomDataList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomDataFrom(Z_Param_Out_RoomDataList);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function HasAlreadyOneRoomDataFrom ***************************

// ********** Begin Class UDungeonGraph Function HasAlreadyOneRoomTypeFrom *************************
struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics
{
	struct DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms
	{
		TArray<TSubclassOf<URoomData>> RoomTypeList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns true if at least one of the RoomData type from the list provided is already in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns true if at least one of the RoomData type from the list provided is already in the dungeon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomTypeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomTypeList_MetaData), NewProp_RoomTypeList_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyOneRoomTypeFrom", Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyOneRoomTypeFrom)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomData>,Z_Param_Out_RoomTypeList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomTypeFrom(Z_Param_Out_RoomTypeList);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function HasAlreadyOneRoomTypeFrom ***************************

// ********** Begin Class UDungeonGraph Function HasAlreadyRoomData ********************************
struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics
{
	struct DungeonGraph_eventHasAlreadyRoomData_Parms
	{
		const URoomData* RoomData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns true if a specific RoomData is already in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns true if a specific RoomData is already in the dungeon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomData_MetaData), NewProp_RoomData_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasAlreadyRoomData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyRoomData_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyRoomData", Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::DungeonGraph_eventHasAlreadyRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::DungeonGraph_eventHasAlreadyRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyRoomData)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomData(Z_Param_RoomData);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function HasAlreadyRoomData **********************************

// ********** Begin Class UDungeonGraph Function HasAlreadyRoomType ********************************
struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics
{
	struct DungeonGraph_eventHasAlreadyRoomType_Parms
	{
		const TSubclassOf<URoomData> RoomType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "RoomType" },
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns true if a specific RoomData type is already in the dungeon\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns true if a specific RoomData type is already in the dungeon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomType_MetaData), NewProp_RoomType_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasAlreadyRoomType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyRoomType_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyRoomType", Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::DungeonGraph_eventHasAlreadyRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::DungeonGraph_eventHasAlreadyRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyRoomType)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomData>,Z_Param_Out_RoomType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomType(Z_Param_Out_RoomType);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function HasAlreadyRoomType **********************************

// ********** Begin Class UDungeonGraph Function HasValidPath **************************************
struct Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics
{
	struct DungeonGraph_eventHasValidPath_Parms
	{
		const URoom* From;
		const URoom* To;
		bool IgnoreLockedRooms;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns wether a path is valid between 2 rooms (no locked room blocking the way)\n// Note: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls.\n" },
		{ "CPP_Default_IgnoreLockedRooms", "false" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ReturnDisplayName", "Yes" },
		{ "ToolTip", "Returns wether a path is valid between 2 rooms (no locked room blocking the way)\nNote: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
	static void NewProp_IgnoreLockedRooms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLockedRooms;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasValidPath_Parms, From), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_From_MetaData), NewProp_From_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasValidPath_Parms, To), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_To_MetaData), NewProp_To_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms_SetBit(void* Obj)
{
	((DungeonGraph_eventHasValidPath_Parms*)Obj)->IgnoreLockedRooms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms = { "IgnoreLockedRooms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasValidPath_Parms), &Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasValidPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasValidPath_Parms), &Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasValidPath", Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::DungeonGraph_eventHasValidPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::DungeonGraph_eventHasValidPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasValidPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasValidPath)
{
	P_GET_OBJECT(URoom,Z_Param_From);
	P_GET_OBJECT(URoom,Z_Param_To);
	P_GET_UBOOL(Z_Param_IgnoreLockedRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidPath(Z_Param_From,Z_Param_To,Z_Param_IgnoreLockedRooms);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function HasValidPath ****************************************

// ********** Begin Class UDungeonGraph Function NumberOfRoomBetween *******************************
struct Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics
{
	struct DungeonGraph_eventNumberOfRoomBetween_Parms
	{
		const URoom* A;
		const URoom* B;
		bool IgnoreLockedRooms;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the minimum number of connected rooms between A and B.\n// Note: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls.\n" },
		{ "CPP_Default_IgnoreLockedRooms", "false" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the minimum number of connected rooms between A and B.\nNote: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
	static void NewProp_IgnoreLockedRooms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLockedRooms;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_Parms, A), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_Parms, B), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_IgnoreLockedRooms_SetBit(void* Obj)
{
	((DungeonGraph_eventNumberOfRoomBetween_Parms*)Obj)->IgnoreLockedRooms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_IgnoreLockedRooms = { "IgnoreLockedRooms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventNumberOfRoomBetween_Parms), &Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_IgnoreLockedRooms_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_IgnoreLockedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "NumberOfRoomBetween", Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::DungeonGraph_eventNumberOfRoomBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::DungeonGraph_eventNumberOfRoomBetween_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execNumberOfRoomBetween)
{
	P_GET_OBJECT(URoom,Z_Param_A);
	P_GET_OBJECT(URoom,Z_Param_B);
	P_GET_UBOOL(Z_Param_IgnoreLockedRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->NumberOfRoomBetween(Z_Param_A,Z_Param_B,Z_Param_IgnoreLockedRooms);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function NumberOfRoomBetween *********************************

// ********** Begin Class UDungeonGraph Function NumberOfRoomBetween_ReadOnly **********************
struct Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics
{
	struct DungeonGraph_eventNumberOfRoomBetween_ReadOnly_Parms
	{
		TScriptInterface<IReadOnlyRoom> A;
		TScriptInterface<IReadOnlyRoom> B;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
		{ "Comment", "// Returns the minimum number of connected rooms between A and B.\n// Note: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls.\n" },
		{ "DisplayName", "Number Of Room Between (using ReadOnlyRoom)" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Returns the minimum number of connected rooms between A and B.\nNote: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_A;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_ReadOnly_Parms, A), Z_Construct_UClass_UReadOnlyRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_ReadOnly_Parms, B), Z_Construct_UClass_UReadOnlyRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_ReadOnly_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "NumberOfRoomBetween_ReadOnly", Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::DungeonGraph_eventNumberOfRoomBetween_ReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::DungeonGraph_eventNumberOfRoomBetween_ReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execNumberOfRoomBetween_ReadOnly)
{
	P_GET_TINTERFACE(IReadOnlyRoom,Z_Param_A);
	P_GET_TINTERFACE(IReadOnlyRoom,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->NumberOfRoomBetween_ReadOnly(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function NumberOfRoomBetween_ReadOnly ************************

// ********** Begin Class UDungeonGraph Function OnRep_Rooms ***************************************
struct Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "OnRep_Rooms", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execOnRep_Rooms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Rooms();
	P_NATIVE_END;
}
// ********** End Class UDungeonGraph Function OnRep_Rooms *****************************************

// ********** Begin Class UDungeonGraph ************************************************************
void UDungeonGraph::StaticRegisterNativesUDungeonGraph()
{
	UClass* Class = UDungeonGraph::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Count", &UDungeonGraph::execCount },
		{ "CountRoomData", &UDungeonGraph::execCountRoomData },
		{ "CountRoomType", &UDungeonGraph::execCountRoomType },
		{ "CountTotalRoomData", &UDungeonGraph::execCountTotalRoomData },
		{ "CountTotalRoomType", &UDungeonGraph::execCountTotalRoomType },
		{ "FilterAndSortRooms", &UDungeonGraph::execFilterAndSortRooms },
		{ "GetAllConnections", &UDungeonGraph::execGetAllConnections },
		{ "GetAllRooms", &UDungeonGraph::execGetAllRooms },
		{ "GetAllRoomsFromData", &UDungeonGraph::execGetAllRoomsFromData },
		{ "GetAllRoomsFromDataList", &UDungeonGraph::execGetAllRoomsFromDataList },
		{ "GetAllRoomsWithAllCustomData", &UDungeonGraph::execGetAllRoomsWithAllCustomData },
		{ "GetAllRoomsWithAnyCustomData", &UDungeonGraph::execGetAllRoomsWithAnyCustomData },
		{ "GetAllRoomsWithCustomData", &UDungeonGraph::execGetAllRoomsWithCustomData },
		{ "GetDungeonBoundsCenter", &UDungeonGraph::execGetDungeonBoundsCenter },
		{ "GetDungeonBoundsExtent", &UDungeonGraph::execGetDungeonBoundsExtent },
		{ "GetFirstRoomFromData", &UDungeonGraph::execGetFirstRoomFromData },
		{ "GetPathBetween", &UDungeonGraph::execGetPathBetween },
		{ "GetRandomRoom", &UDungeonGraph::execGetRandomRoom },
		{ "GetRoomAt", &UDungeonGraph::execGetRoomAt },
		{ "GetRoomByIndex", &UDungeonGraph::execGetRoomByIndex },
		{ "HasAlreadyOneRoomDataFrom", &UDungeonGraph::execHasAlreadyOneRoomDataFrom },
		{ "HasAlreadyOneRoomTypeFrom", &UDungeonGraph::execHasAlreadyOneRoomTypeFrom },
		{ "HasAlreadyRoomData", &UDungeonGraph::execHasAlreadyRoomData },
		{ "HasAlreadyRoomType", &UDungeonGraph::execHasAlreadyRoomType },
		{ "HasValidPath", &UDungeonGraph::execHasValidPath },
		{ "NumberOfRoomBetween", &UDungeonGraph::execNumberOfRoomBetween },
		{ "NumberOfRoomBetween_ReadOnly", &UDungeonGraph::execNumberOfRoomBetween_ReadOnly },
		{ "OnRep_Rooms", &UDungeonGraph::execOnRep_Rooms },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDungeonGraph;
UClass* UDungeonGraph::GetPrivateStaticClass()
{
	using TClass = UDungeonGraph;
	if (!Z_Registration_Info_UClass_UDungeonGraph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DungeonGraph"),
			Z_Registration_Info_UClass_UDungeonGraph.InnerSingleton,
			StaticRegisterNativesUDungeonGraph,
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
	return Z_Registration_Info_UClass_UDungeonGraph.InnerSingleton;
}
UClass* Z_Construct_UClass_UDungeonGraph_NoRegister()
{
	return UDungeonGraph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDungeonGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Holds the generated dungeon.\n// You can access the rooms using many functions.\n" },
		{ "IncludePath", "DungeonGraph.h" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "Holds the generated dungeon.\nYou can access the rooms using many functions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomConnections_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedRooms_MetaData[] = {
		{ "Comment", "// This array is synchronized with the server\n// We keep it separated to be able to unload previous rooms on clients\n" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ToolTip", "This array is synchronized with the server\nWe keep it separated to be able to unload previous rooms on clients" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomConnections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomConnections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicatedRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicatedRooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonGraph_Count, "Count" }, // 2382350358
		{ &Z_Construct_UFunction_UDungeonGraph_CountRoomData, "CountRoomData" }, // 1761990867
		{ &Z_Construct_UFunction_UDungeonGraph_CountRoomType, "CountRoomType" }, // 1312911708
		{ &Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData, "CountTotalRoomData" }, // 2337325797
		{ &Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType, "CountTotalRoomType" }, // 1415557792
		{ &Z_Construct_UFunction_UDungeonGraph_FilterAndSortRooms, "FilterAndSortRooms" }, // 797139469
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllConnections, "GetAllConnections" }, // 3245599612
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRooms, "GetAllRooms" }, // 155755529
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData, "GetAllRoomsFromData" }, // 3311168057
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList, "GetAllRoomsFromDataList" }, // 737297642
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData, "GetAllRoomsWithAllCustomData" }, // 1181578838
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData, "GetAllRoomsWithAnyCustomData" }, // 1804849719
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData, "GetAllRoomsWithCustomData" }, // 3676933017
		{ &Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsCenter, "GetDungeonBoundsCenter" }, // 123655089
		{ &Z_Construct_UFunction_UDungeonGraph_GetDungeonBoundsExtent, "GetDungeonBoundsExtent" }, // 3938014799
		{ &Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData, "GetFirstRoomFromData" }, // 3194928516
		{ &Z_Construct_UFunction_UDungeonGraph_GetPathBetween, "GetPathBetween" }, // 2396498416
		{ &Z_Construct_UFunction_UDungeonGraph_GetRandomRoom, "GetRandomRoom" }, // 3595536650
		{ &Z_Construct_UFunction_UDungeonGraph_GetRoomAt, "GetRoomAt" }, // 3201031905
		{ &Z_Construct_UFunction_UDungeonGraph_GetRoomByIndex, "GetRoomByIndex" }, // 3665925942
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom, "HasAlreadyOneRoomDataFrom" }, // 2415648276
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom, "HasAlreadyOneRoomTypeFrom" }, // 2610043938
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData, "HasAlreadyRoomData" }, // 1815191506
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType, "HasAlreadyRoomType" }, // 2265898356
		{ &Z_Construct_UFunction_UDungeonGraph_HasValidPath, "HasValidPath" }, // 113066606
		{ &Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween, "NumberOfRoomBetween" }, // 3126491465
		{ &Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_ReadOnly, "NumberOfRoomBetween_ReadOnly" }, // 4010983153
		{ &Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms, "OnRep_Rooms" }, // 1853273797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonGraph, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_RoomConnections_Inner = { "RoomConnections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_RoomConnections = { "RoomConnections", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonGraph, RoomConnections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomConnections_MetaData), NewProp_RoomConnections_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_Inner = { "ReplicatedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms = { "ReplicatedRooms", "OnRep_Rooms", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonGraph, ReplicatedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedRooms_MetaData), NewProp_ReplicatedRooms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_RoomConnections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_RoomConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicableObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDungeonGraph_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URoomContainer_NoRegister, (int32)VTABLE_OFFSET(UDungeonGraph, IRoomContainer), false },  // 3414910679
	{ Z_Construct_UClass_UGeneratorProvider_NoRegister, (int32)VTABLE_OFFSET(UDungeonGraph, IGeneratorProvider), false },  // 392268654
	{ Z_Construct_UClass_UDungeonCustomSerialization_NoRegister, (int32)VTABLE_OFFSET(UDungeonGraph, IDungeonCustomSerialization), false },  // 3173650839
	{ Z_Construct_UClass_UDungeonSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UDungeonGraph, IDungeonSaveInterface), false },  // 2918210454
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonGraph_Statics::ClassParams = {
	&UDungeonGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonGraph_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonGraph()
{
	if (!Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton, Z_Construct_UClass_UDungeonGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UDungeonGraph::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_RoomConnections(TEXT("RoomConnections"));
	static FName Name_ReplicatedRooms(TEXT("ReplicatedRooms"));
	const bool bIsValid = true
		&& Name_RoomConnections == ClassReps[(int32)ENetFields_Private::RoomConnections].Property->GetFName()
		&& Name_ReplicatedRooms == ClassReps[(int32)ENetFields_Private::ReplicatedRooms].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDungeonGraph"));
}
#endif
UDungeonGraph::UDungeonGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonGraph);
UDungeonGraph::~UDungeonGraph() {}
// ********** End Class UDungeonGraph **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h__Script_ProceduralDungeon_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRoomCandidate::StaticStruct, Z_Construct_UScriptStruct_FRoomCandidate_Statics::NewStructOps, TEXT("RoomCandidate"), &Z_Registration_Info_UScriptStruct_FRoomCandidate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomCandidate), 229682168U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonGraph, UDungeonGraph::StaticClass, TEXT("UDungeonGraph"), &Z_Registration_Info_UClass_UDungeonGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonGraph), 1578175426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h__Script_ProceduralDungeon_2582479066(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h__Script_ProceduralDungeon_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h__Script_ProceduralDungeon_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h__Script_ProceduralDungeon_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
