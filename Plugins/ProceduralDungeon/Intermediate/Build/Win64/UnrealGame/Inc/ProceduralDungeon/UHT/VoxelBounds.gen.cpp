// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelBounds/VoxelBounds.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelBounds() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBounds();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoundsConnection();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelBoundsConnectionType ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelBoundsConnectionType;
static UEnum* EVoxelBoundsConnectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelBoundsConnectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelBoundsConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EVoxelBoundsConnectionType"));
	}
	return Z_Registration_Info_UEnum_EVoxelBoundsConnectionType.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EVoxelBoundsConnectionType>()
{
	return EVoxelBoundsConnectionType_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Room Bounds Connection Type" },
		{ "Door.Name", "EVoxelBoundsConnectionType::Door" },
		{ "ModuleRelativePath", "Public/VoxelBounds/VoxelBounds.h" },
		{ "None.Name", "EVoxelBoundsConnectionType::None" },
		{ "Wall.Name", "EVoxelBoundsConnectionType::Wall" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelBoundsConnectionType::None", (int64)EVoxelBoundsConnectionType::None },
		{ "EVoxelBoundsConnectionType::Wall", (int64)EVoxelBoundsConnectionType::Wall },
		{ "EVoxelBoundsConnectionType::Door", (int64)EVoxelBoundsConnectionType::Door },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	"EVoxelBoundsConnectionType",
	"EVoxelBoundsConnectionType",
	Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType()
{
	if (!Z_Registration_Info_UEnum_EVoxelBoundsConnectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelBoundsConnectionType.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelBoundsConnectionType.InnerSingleton;
}
// ********** End Enum EVoxelBoundsConnectionType **************************************************

// ********** Begin ScriptStruct FVoxelBoundsConnection ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelBoundsConnection;
class UScriptStruct* FVoxelBoundsConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBoundsConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelBoundsConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBoundsConnection, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("VoxelBoundsConnection"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBoundsConnection.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Base class for the different connection types.\n" },
		{ "DisplayName", "Room Bounds Connection" },
		{ "ModuleRelativePath", "Public/VoxelBounds/VoxelBounds.h" },
		{ "ToolTip", "Base class for the different connection types." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Bounds Connection" },
		{ "ModuleRelativePath", "Public/VoxelBounds/VoxelBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[] = {
		{ "Category", "Bounds Connection" },
		{ "Comment", "// Used when `Type` is `Door`\n// Same door types give a high score whereas different door types give a low score.\n" },
		{ "ModuleRelativePath", "Public/VoxelBounds/VoxelBounds.h" },
		{ "ToolTip", "Used when `Type` is `Door`\nSame door types give a high score whereas different door types give a low score." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBoundsConnection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelBoundsConnection, Type), Z_Construct_UEnum_ProceduralDungeon_EVoxelBoundsConnectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1177054314
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelBoundsConnection, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::NewProp_DoorType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	&NewStructOps,
	"VoxelBoundsConnection",
	Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::PropPointers),
	sizeof(FVoxelBoundsConnection),
	alignof(FVoxelBoundsConnection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoundsConnection()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBoundsConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelBoundsConnection.InnerSingleton, Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBoundsConnection.InnerSingleton;
}
// ********** End ScriptStruct FVoxelBoundsConnection **********************************************

// ********** Begin Delegate FScoreCallback ********************************************************
struct Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics
{
	struct _Script_ProceduralDungeon_eventScoreCallback_Parms
	{
		FVoxelBoundsConnection A;
		FVoxelBoundsConnection B;
		int32 Score;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelBounds/VoxelBounds.h" },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventScoreCallback_Parms, A), Z_Construct_UScriptStruct_FVoxelBoundsConnection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2736431164
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventScoreCallback_Parms, B), Z_Construct_UScriptStruct_FVoxelBoundsConnection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2736431164
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventScoreCallback_Parms, Score), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((_Script_ProceduralDungeon_eventScoreCallback_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProceduralDungeon_eventScoreCallback_Parms), &Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "ScoreCallback__DelegateSignature", Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::_Script_ProceduralDungeon_eventScoreCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::_Script_ProceduralDungeon_eventScoreCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_ScoreCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
bool FScoreCallback_DelegateWrapper(const FScriptDelegate& ScoreCallback, FVoxelBoundsConnection const& A, FVoxelBoundsConnection const& B, int32& Score)
{
	struct _Script_ProceduralDungeon_eventScoreCallback_Parms
	{
		FVoxelBoundsConnection A;
		FVoxelBoundsConnection B;
		int32 Score;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ProceduralDungeon_eventScoreCallback_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_ProceduralDungeon_eventScoreCallback_Parms Parms;
	Parms.A=A;
	Parms.B=B;
	Parms.Score=Score;
	ScoreCallback.ProcessDelegate<UObject>(&Parms);
	Score=Parms.Score;
	return !!Parms.ReturnValue;
}
// ********** End Delegate FScoreCallback **********************************************************

// ********** Begin ScriptStruct FVoxelBounds ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelBounds;
class UScriptStruct* FVoxelBounds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBounds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelBounds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBounds, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("VoxelBounds"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBounds.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelBounds/VoxelBounds.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBounds>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBounds_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	&NewStructOps,
	"VoxelBounds",
	nullptr,
	0,
	sizeof(FVoxelBounds),
	alignof(FVoxelBounds),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBounds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelBounds_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelBounds()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBounds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelBounds.InnerSingleton, Z_Construct_UScriptStruct_FVoxelBounds_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBounds.InnerSingleton;
}
// ********** End ScriptStruct FVoxelBounds ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h__Script_ProceduralDungeon_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelBoundsConnectionType_StaticEnum, TEXT("EVoxelBoundsConnectionType"), &Z_Registration_Info_UEnum_EVoxelBoundsConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1177054314U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelBoundsConnection::StaticStruct, Z_Construct_UScriptStruct_FVoxelBoundsConnection_Statics::NewStructOps, TEXT("VoxelBoundsConnection"), &Z_Registration_Info_UScriptStruct_FVoxelBoundsConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelBoundsConnection), 2736431164U) },
		{ FVoxelBounds::StaticStruct, Z_Construct_UScriptStruct_FVoxelBounds_Statics::NewStructOps, TEXT("VoxelBounds"), &Z_Registration_Info_UScriptStruct_FVoxelBounds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelBounds), 245726750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h__Script_ProceduralDungeon_50089354(TEXT("/Script/ProceduralDungeon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h__Script_ProceduralDungeon_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h__Script_ProceduralDungeon_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h__Script_ProceduralDungeon_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_VoxelBounds_VoxelBounds_h__Script_ProceduralDungeon_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
