// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/Classes/CustomScoreCallbacks.h"
#include "VoxelBounds/VoxelBounds.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomScoreCallbacks() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomScoreCallback();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomScoreCallback_NoRegister();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoundsConnection();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomScoreCallback Function NeverPass **********************************
struct Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics
{
	struct CustomScoreCallback_eventNeverPass_Parms
	{
		FVoxelBoundsConnection A;
		FVoxelBoundsConnection B;
		int32 Score;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Classes/CustomScoreCallbacks.h" },
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomScoreCallback_eventNeverPass_Parms, A), Z_Construct_UScriptStruct_FVoxelBoundsConnection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2736431164
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomScoreCallback_eventNeverPass_Parms, B), Z_Construct_UScriptStruct_FVoxelBoundsConnection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2736431164
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomScoreCallback_eventNeverPass_Parms, Score), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CustomScoreCallback_eventNeverPass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomScoreCallback_eventNeverPass_Parms), &Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomScoreCallback, nullptr, "NeverPass", Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::CustomScoreCallback_eventNeverPass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::CustomScoreCallback_eventNeverPass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomScoreCallback_NeverPass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomScoreCallback_NeverPass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomScoreCallback::execNeverPass)
{
	P_GET_STRUCT_REF(FVoxelBoundsConnection,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVoxelBoundsConnection,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NeverPass(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Score);
	P_NATIVE_END;
}
// ********** End Class UCustomScoreCallback Function NeverPass ************************************

// ********** Begin Class UCustomScoreCallback Function ZeroScore **********************************
struct Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics
{
	struct CustomScoreCallback_eventZeroScore_Parms
	{
		FVoxelBoundsConnection A;
		FVoxelBoundsConnection B;
		int32 Score;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Classes/CustomScoreCallbacks.h" },
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomScoreCallback_eventZeroScore_Parms, A), Z_Construct_UScriptStruct_FVoxelBoundsConnection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2736431164
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomScoreCallback_eventZeroScore_Parms, B), Z_Construct_UScriptStruct_FVoxelBoundsConnection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2736431164
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomScoreCallback_eventZeroScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CustomScoreCallback_eventZeroScore_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomScoreCallback_eventZeroScore_Parms), &Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomScoreCallback, nullptr, "ZeroScore", Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::CustomScoreCallback_eventZeroScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::CustomScoreCallback_eventZeroScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomScoreCallback_ZeroScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomScoreCallback_ZeroScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomScoreCallback::execZeroScore)
{
	P_GET_STRUCT_REF(FVoxelBoundsConnection,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVoxelBoundsConnection,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ZeroScore(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Score);
	P_NATIVE_END;
}
// ********** End Class UCustomScoreCallback Function ZeroScore ************************************

// ********** Begin Class UCustomScoreCallback *****************************************************
void UCustomScoreCallback::StaticRegisterNativesUCustomScoreCallback()
{
	UClass* Class = UCustomScoreCallback::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NeverPass", &UCustomScoreCallback::execNeverPass },
		{ "ZeroScore", &UCustomScoreCallback::execZeroScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomScoreCallback;
UClass* UCustomScoreCallback::GetPrivateStaticClass()
{
	using TClass = UCustomScoreCallback;
	if (!Z_Registration_Info_UClass_UCustomScoreCallback.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomScoreCallback"),
			Z_Registration_Info_UClass_UCustomScoreCallback.InnerSingleton,
			StaticRegisterNativesUCustomScoreCallback,
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
	return Z_Registration_Info_UClass_UCustomScoreCallback.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomScoreCallback_NoRegister()
{
	return UCustomScoreCallback::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomScoreCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/CustomScoreCallbacks.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/CustomScoreCallbacks.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomScoreCallback_NeverPass, "NeverPass" }, // 4013746398
		{ &Z_Construct_UFunction_UCustomScoreCallback_ZeroScore, "ZeroScore" }, // 2122205403
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomScoreCallback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomScoreCallback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomScoreCallback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomScoreCallback_Statics::ClassParams = {
	&UCustomScoreCallback::StaticClass,
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
	0x040000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomScoreCallback_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomScoreCallback_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomScoreCallback()
{
	if (!Z_Registration_Info_UClass_UCustomScoreCallback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomScoreCallback.OuterSingleton, Z_Construct_UClass_UCustomScoreCallback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomScoreCallback.OuterSingleton;
}
UCustomScoreCallback::UCustomScoreCallback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomScoreCallback);
UCustomScoreCallback::~UCustomScoreCallback() {}
// ********** End Class UCustomScoreCallback *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_CustomScoreCallbacks_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomScoreCallback, UCustomScoreCallback::StaticClass, TEXT("UCustomScoreCallback"), &Z_Registration_Info_UClass_UCustomScoreCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomScoreCallback), 3938628974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_CustomScoreCallbacks_h__Script_ProceduralDungeon_2010953314(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_CustomScoreCallbacks_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_CustomScoreCallbacks_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
