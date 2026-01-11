// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadOnlyRoom.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReadOnlyRoom() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UReadOnlyRoom Function AreAllDoorsConnected **************************
struct Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics
{
	struct ReadOnlyRoom_eventAreAllDoorsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if all the doors of this room are connected to other rooms.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if all the doors of this room are connected to other rooms." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AreAllDoorsConnected constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AreAllDoorsConnected constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AreAllDoorsConnected Property Definitions *****************************
void Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReadOnlyRoom_eventAreAllDoorsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadOnlyRoom_eventAreAllDoorsConnected_Parms), &Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::PropPointers) < 2048);
// ********** End Function AreAllDoorsConnected Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "AreAllDoorsConnected", 	Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::ReadOnlyRoom_eventAreAllDoorsConnected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::ReadOnlyRoom_eventAreAllDoorsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execAreAllDoorsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreAllDoorsConnected();
	P_NATIVE_END;
}
// ********** End Interface UReadOnlyRoom Function AreAllDoorsConnected ****************************

// ********** Begin Interface UReadOnlyRoom Function CountConnectedDoors ***************************
struct Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics
{
	struct ReadOnlyRoom_eventCountConnectedDoors_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of doors in this room connected to another room.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of doors in this room connected to another room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CountConnectedDoors constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CountConnectedDoors constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CountConnectedDoors Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventCountConnectedDoors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::PropPointers) < 2048);
// ********** End Function CountConnectedDoors Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "CountConnectedDoors", 	Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::ReadOnlyRoom_eventCountConnectedDoors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::ReadOnlyRoom_eventCountConnectedDoors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execCountConnectedDoors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountConnectedDoors();
	P_NATIVE_END;
}
// ********** End Interface UReadOnlyRoom Function CountConnectedDoors *****************************

// ********** Begin Interface UReadOnlyRoom Function GetBoundsCenter *******************************
struct Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics
{
	struct ReadOnlyRoom_eventGetBoundsCenter_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the world center position of the room.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the world center position of the room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoundsCenter constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoundsCenter constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoundsCenter Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetBoundsCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::PropPointers) < 2048);
// ********** End Function GetBoundsCenter Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetBoundsCenter", 	Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::ReadOnlyRoom_eventGetBoundsCenter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::ReadOnlyRoom_eventGetBoundsCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetBoundsCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBoundsCenter();
	P_NATIVE_END;
}
// ********** End Interface UReadOnlyRoom Function GetBoundsCenter *********************************

// ********** Begin Interface UReadOnlyRoom Function GetBoundsExtent *******************************
struct Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics
{
	struct ReadOnlyRoom_eventGetBoundsExtent_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the world extents (half size) of the room.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the world extents (half size) of the room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoundsExtent constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoundsExtent constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoundsExtent Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetBoundsExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::PropPointers) < 2048);
// ********** End Function GetBoundsExtent Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetBoundsExtent", 	Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::ReadOnlyRoom_eventGetBoundsExtent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::ReadOnlyRoom_eventGetBoundsExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetBoundsExtent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBoundsExtent();
	P_NATIVE_END;
}
// ********** End Interface UReadOnlyRoom Function GetBoundsExtent *********************************

// ********** Begin Interface UReadOnlyRoom Function GetDirection **********************************
struct Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics
{
	struct ReadOnlyRoom_eventGetDirection_Parms
	{
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the direction of the room.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the direction of the room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDirection constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDirection constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDirection Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetDirection_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 4084058555
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::PropPointers) < 2048);
// ********** End Function GetDirection Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetDirection", 	Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::ReadOnlyRoom_eventGetDirection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::ReadOnlyRoom_eventGetDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=P_THIS->GetDirection();
	P_NATIVE_END;
}
// ********** End Interface UReadOnlyRoom Function GetDirection ************************************

// ********** Begin Interface UReadOnlyRoom Function GetPosition ***********************************
struct Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics
{
	struct ReadOnlyRoom_eventGetPosition_Parms
	{
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the position of the room (in Room Units).\n" },
#endif
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the position of the room (in Room Units)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPosition constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPosition constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPosition Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::PropPointers) < 2048);
// ********** End Function GetPosition Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetPosition", 	Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::ReadOnlyRoom_eventGetPosition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::ReadOnlyRoom_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// ********** End Interface UReadOnlyRoom Function GetPosition *************************************

// ********** Begin Interface UReadOnlyRoom Function GetRoomData ***********************************
struct Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics
{
	struct ReadOnlyRoom_eventGetRoomData_Parms
	{
		const URoomData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room data asset of this room instance.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room data asset of this room instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomData constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomData Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::PropPointers) < 2048);
// ********** End Function GetRoomData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetRoomData", 	Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::ReadOnlyRoom_eventGetRoomData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::ReadOnlyRoom_eventGetRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetRoomData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const URoomData**)Z_Param__Result=P_THIS->GetRoomData();
	P_NATIVE_END;
}
// ********** End Interface UReadOnlyRoom Function GetRoomData *************************************

// ********** Begin Interface UReadOnlyRoom Function GetRoomID *************************************
struct Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics
{
	struct ReadOnlyRoom_eventGetRoomID_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the unique ID (per-dungeon) of the room.\n// The first room has ID 0 and then it increases in the order of placed room.\n" },
#endif
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the unique ID (per-dungeon) of the room.\nThe first room has ID 0 and then it increases in the order of placed room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoomID constinit property declarations *****************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoomID constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoomID Property Definitions ****************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetRoomID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::PropPointers) < 2048);
// ********** End Function GetRoomID Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetRoomID", 	Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::ReadOnlyRoom_eventGetRoomID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::ReadOnlyRoom_eventGetRoomID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetRoomID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetRoomID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetRoomID();
	P_NATIVE_END;
}
// ********** End Interface UReadOnlyRoom Function GetRoomID ***************************************

// ********** Begin Interface UReadOnlyRoom ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UReadOnlyRoom;
UClass* UReadOnlyRoom::GetPrivateStaticClass()
{
	using TClass = UReadOnlyRoom;
	if (!Z_Registration_Info_UClass_UReadOnlyRoom.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ReadOnlyRoom"),
			Z_Registration_Info_UClass_UReadOnlyRoom.InnerSingleton,
			StaticRegisterNativesUReadOnlyRoom,
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
	return Z_Registration_Info_UClass_UReadOnlyRoom.InnerSingleton;
}
UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister()
{
	return UReadOnlyRoom::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReadOnlyRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Documentable", "" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ReadOnlyRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Allow access to only some members of Room instances during the generation process." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Interface UReadOnlyRoom constinit property declarations ************************
// ********** End Interface UReadOnlyRoom constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AreAllDoorsConnected"), .Pointer = &IReadOnlyRoom::execAreAllDoorsConnected },
		{ .NameUTF8 = UTF8TEXT("CountConnectedDoors"), .Pointer = &IReadOnlyRoom::execCountConnectedDoors },
		{ .NameUTF8 = UTF8TEXT("GetBoundsCenter"), .Pointer = &IReadOnlyRoom::execGetBoundsCenter },
		{ .NameUTF8 = UTF8TEXT("GetBoundsExtent"), .Pointer = &IReadOnlyRoom::execGetBoundsExtent },
		{ .NameUTF8 = UTF8TEXT("GetDirection"), .Pointer = &IReadOnlyRoom::execGetDirection },
		{ .NameUTF8 = UTF8TEXT("GetPosition"), .Pointer = &IReadOnlyRoom::execGetPosition },
		{ .NameUTF8 = UTF8TEXT("GetRoomData"), .Pointer = &IReadOnlyRoom::execGetRoomData },
		{ .NameUTF8 = UTF8TEXT("GetRoomID"), .Pointer = &IReadOnlyRoom::execGetRoomID },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected, "AreAllDoorsConnected" }, // 2092517495
		{ &Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors, "CountConnectedDoors" }, // 456348173
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter, "GetBoundsCenter" }, // 3958812644
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent, "GetBoundsExtent" }, // 676961308
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetDirection, "GetDirection" }, // 1684026737
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetPosition, "GetPosition" }, // 1363775761
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetRoomData, "GetRoomData" }, // 1411999247
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetRoomID, "GetRoomID" }, // 3788603430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IReadOnlyRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UReadOnlyRoom_Statics
UObject* (*const Z_Construct_UClass_UReadOnlyRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadOnlyRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadOnlyRoom_Statics::ClassParams = {
	&UReadOnlyRoom::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadOnlyRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadOnlyRoom_Statics::Class_MetaDataParams)
};
void UReadOnlyRoom::StaticRegisterNativesUReadOnlyRoom()
{
	UClass* Class = UReadOnlyRoom::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UReadOnlyRoom_Statics::Funcs));
}
UClass* Z_Construct_UClass_UReadOnlyRoom()
{
	if (!Z_Registration_Info_UClass_UReadOnlyRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadOnlyRoom.OuterSingleton, Z_Construct_UClass_UReadOnlyRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadOnlyRoom.OuterSingleton;
}
UReadOnlyRoom::UReadOnlyRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UReadOnlyRoom);
// ********** End Interface UReadOnlyRoom **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadOnlyRoom, UReadOnlyRoom::StaticClass, TEXT("UReadOnlyRoom"), &Z_Registration_Info_UClass_UReadOnlyRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadOnlyRoom), 1569470869U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h__Script_ProceduralDungeon_2504890727{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReadOnlyRoom_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
