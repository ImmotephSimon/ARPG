// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomConstraints/RoomConstraint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomConstraint() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomConstraint_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URoomConstraint Function Check *******************************************
struct RoomConstraint_eventCheck_Parms
{
	const URoomData* RoomData;
	FIntVector Location;
	EDoorDirection Direction;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	RoomConstraint_eventCheck_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_URoomConstraint_Check = FName(TEXT("Check"));
bool URoomConstraint::Check(const URoomData* RoomData, FIntVector Location, EDoorDirection Direction) const
{
	UFunction* Func = FindFunctionChecked(NAME_URoomConstraint_Check);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RoomConstraint_eventCheck_Parms Parms;
		Parms.RoomData=RoomData;
		Parms.Location=Location;
		Parms.Direction=Direction;
		const_cast<URoomConstraint*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<URoomConstraint*>(this)->Check_Implementation(RoomData, Location, Direction);
	}
}
struct Z_Construct_UFunction_URoomConstraint_Check_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Constraint" },
		{ "ModuleRelativePath", "Public/RoomConstraints/RoomConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Check constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Check constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Check Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConstraint_eventCheck_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomData_MetaData), NewProp_RoomData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConstraint_eventCheck_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomConstraint_eventCheck_Parms, Direction), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 4084058555
void Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomConstraint_eventCheck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomConstraint_eventCheck_Parms), &Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomConstraint_Check_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomConstraint_Check_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConstraint_Check_Statics::PropPointers) < 2048);
// ********** End Function Check Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomConstraint_Check_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomConstraint, nullptr, "Check", 	Z_Construct_UFunction_URoomConstraint_Check_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConstraint_Check_Statics::PropPointers), 
sizeof(RoomConstraint_eventCheck_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomConstraint_Check_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomConstraint_Check_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RoomConstraint_eventCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomConstraint_Check()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomConstraint_Check_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomConstraint::execCheck)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_GET_STRUCT(FIntVector,Z_Param_Location);
	P_GET_ENUM(EDoorDirection,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Check_Implementation(Z_Param_RoomData,Z_Param_Location,EDoorDirection(Z_Param_Direction));
	P_NATIVE_END;
}
// ********** End Class URoomConstraint Function Check *********************************************

// ********** Begin Class URoomConstraint **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoomConstraint;
UClass* URoomConstraint::GetPrivateStaticClass()
{
	using TClass = URoomConstraint;
	if (!Z_Registration_Info_UClass_URoomConstraint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoomConstraint"),
			Z_Registration_Info_UClass_URoomConstraint.InnerSingleton,
			StaticRegisterNativesURoomConstraint,
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
	return Z_Registration_Info_UClass_URoomConstraint.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomConstraint_NoRegister()
{
	return URoomConstraint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base class for constraints applied to rooms\n" },
#endif
		{ "IncludePath", "RoomConstraints/RoomConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoomConstraints/RoomConstraint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for constraints applied to rooms" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URoomConstraint constinit property declarations **************************
// ********** End Class URoomConstraint constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Check"), .Pointer = &URoomConstraint::execCheck },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomConstraint_Check, "Check" }, // 2090598591
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoomConstraint_Statics
UObject* (*const Z_Construct_UClass_URoomConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomConstraint_Statics::ClassParams = {
	&URoomConstraint::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomConstraint_Statics::Class_MetaDataParams)
};
void URoomConstraint::StaticRegisterNativesURoomConstraint()
{
	UClass* Class = URoomConstraint::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URoomConstraint_Statics::Funcs));
}
UClass* Z_Construct_UClass_URoomConstraint()
{
	if (!Z_Registration_Info_UClass_URoomConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomConstraint.OuterSingleton, Z_Construct_UClass_URoomConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomConstraint.OuterSingleton;
}
URoomConstraint::URoomConstraint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomConstraint);
URoomConstraint::~URoomConstraint() {}
// ********** End Class URoomConstraint ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomConstraint, URoomConstraint::StaticClass, TEXT("URoomConstraint"), &Z_Registration_Info_UClass_URoomConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomConstraint), 3455949627U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h__Script_ProceduralDungeon_671047172{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomConstraints_RoomConstraint_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
