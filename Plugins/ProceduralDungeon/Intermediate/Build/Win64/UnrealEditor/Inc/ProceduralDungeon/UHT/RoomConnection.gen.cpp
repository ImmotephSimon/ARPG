// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomConnection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoomConnection() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonCustomSerialization_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSaveInterface_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConnection();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URoomConnection Function GetDoorInstance *********************************
struct Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics
{
	struct RoomConnection_eventGetDoorInstance_Parms
	{
		ADoor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConnection_eventGetDoorInstance_Parms, ReturnValue), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "GetDoorInstance", Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::RoomConnection_eventGetDoorInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::RoomConnection_eventGetDoorInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_GetDoorInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_GetDoorInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execGetDoorInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADoor**)Z_Param__Result=P_THIS->GetDoorInstance();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function GetDoorInstance ***********************************

// ********** Begin Class URoomConnection Function GetDoorLocation *********************************
struct Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics
{
	struct RoomConnection_eventGetDoorLocation_Parms
	{
		bool bIgnoreGeneratorTransform;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreGeneratorTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreGeneratorTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::NewProp_bIgnoreGeneratorTransform_SetBit(void* Obj)
{
	((RoomConnection_eventGetDoorLocation_Parms*)Obj)->bIgnoreGeneratorTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::NewProp_bIgnoreGeneratorTransform = { "bIgnoreGeneratorTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomConnection_eventGetDoorLocation_Parms), &Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::NewProp_bIgnoreGeneratorTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConnection_eventGetDoorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::NewProp_bIgnoreGeneratorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "GetDoorLocation", Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::RoomConnection_eventGetDoorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::RoomConnection_eventGetDoorLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_GetDoorLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_GetDoorLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execGetDoorLocation)
{
	P_GET_UBOOL(Z_Param_bIgnoreGeneratorTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDoorLocation(Z_Param_bIgnoreGeneratorTransform);
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function GetDoorLocation ***********************************

// ********** Begin Class URoomConnection Function GetDoorRotation *********************************
struct Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics
{
	struct RoomConnection_eventGetDoorRotation_Parms
	{
		bool bIgnoreGeneratorTransform;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreGeneratorTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreGeneratorTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::NewProp_bIgnoreGeneratorTransform_SetBit(void* Obj)
{
	((RoomConnection_eventGetDoorRotation_Parms*)Obj)->bIgnoreGeneratorTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::NewProp_bIgnoreGeneratorTransform = { "bIgnoreGeneratorTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomConnection_eventGetDoorRotation_Parms), &Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::NewProp_bIgnoreGeneratorTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConnection_eventGetDoorRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::NewProp_bIgnoreGeneratorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "GetDoorRotation", Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::RoomConnection_eventGetDoorRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::RoomConnection_eventGetDoorRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_GetDoorRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_GetDoorRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execGetDoorRotation)
{
	P_GET_UBOOL(Z_Param_bIgnoreGeneratorTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetDoorRotation(Z_Param_bIgnoreGeneratorTransform);
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function GetDoorRotation ***********************************

// ********** Begin Class URoomConnection Function GetID *******************************************
struct Z_Construct_UFunction_URoomConnection_GetID_Statics
{
	struct RoomConnection_eventGetID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoomConnection_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConnection_eventGetID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_GetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_GetID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "GetID", Z_Construct_UFunction_URoomConnection_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_GetID_Statics::RoomConnection_eventGetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_GetID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_GetID_Statics::RoomConnection_eventGetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_GetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_GetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execGetID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetID();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function GetID *********************************************

// ********** Begin Class URoomConnection Function GetRoomA_BP *************************************
struct Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics
{
	struct RoomConnection_eventGetRoomA_BP_Parms
	{
		const URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "CompactNodeTitle", "Room A" },
		{ "DisplayName", "Get Room A" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConnection_eventGetRoomA_BP_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "GetRoomA_BP", Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::RoomConnection_eventGetRoomA_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::RoomConnection_eventGetRoomA_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_GetRoomA_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_GetRoomA_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execGetRoomA_BP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const URoom**)Z_Param__Result=P_THIS->GetRoomA_BP();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function GetRoomA_BP ***************************************

// ********** Begin Class URoomConnection Function GetRoomADoorId **********************************
struct Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics
{
	struct RoomConnection_eventGetRoomADoorId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "DisplayName", "Get Door A Index" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConnection_eventGetRoomADoorId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "GetRoomADoorId", Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::RoomConnection_eventGetRoomADoorId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::RoomConnection_eventGetRoomADoorId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_GetRoomADoorId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_GetRoomADoorId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execGetRoomADoorId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRoomADoorId();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function GetRoomADoorId ************************************

// ********** Begin Class URoomConnection Function GetRoomB_BP *************************************
struct Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics
{
	struct RoomConnection_eventGetRoomB_BP_Parms
	{
		const URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "CompactNodeTitle", "Room B" },
		{ "DisplayName", "Get Room B" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConnection_eventGetRoomB_BP_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "GetRoomB_BP", Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::RoomConnection_eventGetRoomB_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::RoomConnection_eventGetRoomB_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_GetRoomB_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_GetRoomB_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execGetRoomB_BP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const URoom**)Z_Param__Result=P_THIS->GetRoomB_BP();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function GetRoomB_BP ***************************************

// ********** Begin Class URoomConnection Function GetRoomBDoorId **********************************
struct Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics
{
	struct RoomConnection_eventGetRoomBDoorId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "DisplayName", "Get Door B Index" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConnection_eventGetRoomBDoorId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "GetRoomBDoorId", Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::RoomConnection_eventGetRoomBDoorId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::RoomConnection_eventGetRoomBDoorId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_GetRoomBDoorId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_GetRoomBDoorId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execGetRoomBDoorId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRoomBDoorId();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function GetRoomBDoorId ************************************

// ********** Begin Class URoomConnection Function IsDoorInstanced *********************************
struct Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics
{
	struct RoomConnection_eventIsDoorInstanced_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Connection" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomConnection_eventIsDoorInstanced_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomConnection_eventIsDoorInstanced_Parms), &Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "IsDoorInstanced", Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::RoomConnection_eventIsDoorInstanced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::RoomConnection_eventIsDoorInstanced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConnection_IsDoorInstanced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_IsDoorInstanced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execIsDoorInstanced)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDoorInstanced();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function IsDoorInstanced ***********************************

// ********** Begin Class URoomConnection Function OnRep_ID ****************************************
struct Z_Construct_UFunction_URoomConnection_OnRep_ID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_OnRep_ID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "OnRep_ID", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_OnRep_ID_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_OnRep_ID_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URoomConnection_OnRep_ID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_OnRep_ID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execOnRep_ID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ID();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function OnRep_ID ******************************************

// ********** Begin Class URoomConnection Function OnRep_RoomA *************************************
struct Z_Construct_UFunction_URoomConnection_OnRep_RoomA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_OnRep_RoomA_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "OnRep_RoomA", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_OnRep_RoomA_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_OnRep_RoomA_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URoomConnection_OnRep_RoomA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_OnRep_RoomA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execOnRep_RoomA)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RoomA();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function OnRep_RoomA ***************************************

// ********** Begin Class URoomConnection Function OnRep_RoomB *************************************
struct Z_Construct_UFunction_URoomConnection_OnRep_RoomB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConnection_OnRep_RoomB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConnection, nullptr, "OnRep_RoomB", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConnection_OnRep_RoomB_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConnection_OnRep_RoomB_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URoomConnection_OnRep_RoomB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConnection_OnRep_RoomB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConnection::execOnRep_RoomB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RoomB();
	P_NATIVE_END;
}
// ********** End Class URoomConnection Function OnRep_RoomB ***************************************

// ********** Begin Class URoomConnection **********************************************************
void URoomConnection::StaticRegisterNativesURoomConnection()
{
	UClass* Class = URoomConnection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDoorInstance", &URoomConnection::execGetDoorInstance },
		{ "GetDoorLocation", &URoomConnection::execGetDoorLocation },
		{ "GetDoorRotation", &URoomConnection::execGetDoorRotation },
		{ "GetID", &URoomConnection::execGetID },
		{ "GetRoomA_BP", &URoomConnection::execGetRoomA_BP },
		{ "GetRoomADoorId", &URoomConnection::execGetRoomADoorId },
		{ "GetRoomB_BP", &URoomConnection::execGetRoomB_BP },
		{ "GetRoomBDoorId", &URoomConnection::execGetRoomBDoorId },
		{ "IsDoorInstanced", &URoomConnection::execIsDoorInstanced },
		{ "OnRep_ID", &URoomConnection::execOnRep_ID },
		{ "OnRep_RoomA", &URoomConnection::execOnRep_RoomA },
		{ "OnRep_RoomB", &URoomConnection::execOnRep_RoomB },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoomConnection;
UClass* URoomConnection::GetPrivateStaticClass()
{
	using TClass = URoomConnection;
	if (!Z_Registration_Info_UClass_URoomConnection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RoomConnection"),
			Z_Registration_Info_UClass_URoomConnection.InnerSingleton,
			StaticRegisterNativesURoomConnection,
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
	return Z_Registration_Info_UClass_URoomConnection.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomConnection_NoRegister()
{
	return URoomConnection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A DungeonGraph subobject that represents a connection between two rooms.\n" },
#endif
		{ "IncludePath", "RoomConnection.h" },
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A DungeonGraph subobject that represents a connection between two rooms." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomA_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomADoorId_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomB_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomBDoorId_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoomConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RoomA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomADoorId;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RoomB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomBDoorId;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DoorClass;
	static void NewProp_bFlipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipped;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DoorInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomConnection_GetDoorInstance, "GetDoorInstance" }, // 4064290838
		{ &Z_Construct_UFunction_URoomConnection_GetDoorLocation, "GetDoorLocation" }, // 3642552857
		{ &Z_Construct_UFunction_URoomConnection_GetDoorRotation, "GetDoorRotation" }, // 4056584424
		{ &Z_Construct_UFunction_URoomConnection_GetID, "GetID" }, // 574524131
		{ &Z_Construct_UFunction_URoomConnection_GetRoomA_BP, "GetRoomA_BP" }, // 2338372827
		{ &Z_Construct_UFunction_URoomConnection_GetRoomADoorId, "GetRoomADoorId" }, // 2771141250
		{ &Z_Construct_UFunction_URoomConnection_GetRoomB_BP, "GetRoomB_BP" }, // 2513586636
		{ &Z_Construct_UFunction_URoomConnection_GetRoomBDoorId, "GetRoomBDoorId" }, // 3093062930
		{ &Z_Construct_UFunction_URoomConnection_IsDoorInstanced, "IsDoorInstanced" }, // 2092205764
		{ &Z_Construct_UFunction_URoomConnection_OnRep_ID, "OnRep_ID" }, // 2675968905
		{ &Z_Construct_UFunction_URoomConnection_OnRep_RoomA, "OnRep_RoomA" }, // 715853238
		{ &Z_Construct_UFunction_URoomConnection_OnRep_RoomB, "OnRep_RoomB" }, // 3635288838
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoomConnection_Statics::NewProp_ID = { "ID", "OnRep_ID", (EPropertyFlags)0x0040000101000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConnection, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URoomConnection_Statics::NewProp_RoomA = { "RoomA", "OnRep_RoomA", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConnection, RoomA), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomA_MetaData), NewProp_RoomA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoomConnection_Statics::NewProp_RoomADoorId = { "RoomADoorId", nullptr, (EPropertyFlags)0x0040000001000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConnection, RoomADoorId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomADoorId_MetaData), NewProp_RoomADoorId_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URoomConnection_Statics::NewProp_RoomB = { "RoomB", "OnRep_RoomB", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConnection, RoomB), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomB_MetaData), NewProp_RoomB_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoomConnection_Statics::NewProp_RoomBDoorId = { "RoomBDoorId", nullptr, (EPropertyFlags)0x0040000001000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConnection, RoomBDoorId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomBDoorId_MetaData), NewProp_RoomBDoorId_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URoomConnection_Statics::NewProp_DoorClass = { "DoorClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConnection, DoorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorClass_MetaData), NewProp_DoorClass_MetaData) };
void Z_Construct_UClass_URoomConnection_Statics::NewProp_bFlipped_SetBit(void* Obj)
{
	((URoomConnection*)Obj)->bFlipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URoomConnection_Statics::NewProp_bFlipped = { "bFlipped", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URoomConnection), &Z_Construct_UClass_URoomConnection_Statics::NewProp_bFlipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipped_MetaData), NewProp_bFlipped_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URoomConnection_Statics::NewProp_DoorInstance = { "DoorInstance", nullptr, (EPropertyFlags)0x0044000000002020, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomConnection, DoorInstance), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorInstance_MetaData), NewProp_DoorInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConnection_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConnection_Statics::NewProp_RoomA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConnection_Statics::NewProp_RoomADoorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConnection_Statics::NewProp_RoomB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConnection_Statics::NewProp_RoomBDoorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConnection_Statics::NewProp_DoorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConnection_Statics::NewProp_bFlipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomConnection_Statics::NewProp_DoorInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URoomConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicableObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URoomConnection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDungeonCustomSerialization_NoRegister, (int32)VTABLE_OFFSET(URoomConnection, IDungeonCustomSerialization), false },  // 3173650839
	{ Z_Construct_UClass_UDungeonSaveInterface_NoRegister, (int32)VTABLE_OFFSET(URoomConnection, IDungeonSaveInterface), false },  // 893009087
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomConnection_Statics::ClassParams = {
	&URoomConnection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URoomConnection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URoomConnection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomConnection()
{
	if (!Z_Registration_Info_UClass_URoomConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomConnection.OuterSingleton, Z_Construct_UClass_URoomConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomConnection.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URoomConnection::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ID(TEXT("ID"));
	static FName Name_RoomA(TEXT("RoomA"));
	static FName Name_RoomADoorId(TEXT("RoomADoorId"));
	static FName Name_RoomB(TEXT("RoomB"));
	static FName Name_RoomBDoorId(TEXT("RoomBDoorId"));
	static FName Name_DoorInstance(TEXT("DoorInstance"));
	const bool bIsValid = true
		&& Name_ID == ClassReps[(int32)ENetFields_Private::ID].Property->GetFName()
		&& Name_RoomA == ClassReps[(int32)ENetFields_Private::RoomA].Property->GetFName()
		&& Name_RoomADoorId == ClassReps[(int32)ENetFields_Private::RoomADoorId].Property->GetFName()
		&& Name_RoomB == ClassReps[(int32)ENetFields_Private::RoomB].Property->GetFName()
		&& Name_RoomBDoorId == ClassReps[(int32)ENetFields_Private::RoomBDoorId].Property->GetFName()
		&& Name_DoorInstance == ClassReps[(int32)ENetFields_Private::DoorInstance].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URoomConnection"));
}
#endif
URoomConnection::URoomConnection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomConnection);
URoomConnection::~URoomConnection() {}
// ********** End Class URoomConnection ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomConnection, URoomConnection::StaticClass, TEXT("URoomConnection"), &Z_Registration_Info_UClass_URoomConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomConnection), 3530406687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h__Script_ProceduralDungeon_1314043443(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConnection_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
