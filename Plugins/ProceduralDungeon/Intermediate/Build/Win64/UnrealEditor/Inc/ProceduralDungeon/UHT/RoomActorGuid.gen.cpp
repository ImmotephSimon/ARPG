// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/RoomActorGuid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRoomActorGuid() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomActorGuid();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomActorGuid_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface URoomActorGuid Function GetGuid **************************************
struct RoomActorGuid_eventGetGuid_Parms
{
	FGuid ReturnValue;
};
FGuid IRoomActorGuid::GetGuid() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGuid instead.");
	RoomActorGuid_eventGetGuid_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_URoomActorGuid_GetGuid = FName(TEXT("GetGuid"));
FGuid IRoomActorGuid::Execute_GetGuid(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URoomActorGuid::StaticClass()));
	RoomActorGuid_eventGetGuid_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URoomActorGuid_GetGuid);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IRoomActorGuid*)(O->GetNativeInterfaceAddress(URoomActorGuid::StaticClass())))
	{
		Parms.ReturnValue = I->GetGuid_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Actor Id" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the guid associated with this actor.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/RoomActorGuid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the guid associated with this actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomActorGuid_eventGetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomActorGuid, nullptr, "GetGuid", Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::PropPointers), sizeof(RoomActorGuid_eventGetGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RoomActorGuid_eventGetGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomActorGuid_GetGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomActorGuid_GetGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRoomActorGuid::execGetGuid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetGuid_Implementation();
	P_NATIVE_END;
}
// ********** End Interface URoomActorGuid Function GetGuid ****************************************

// ********** Begin Interface URoomActorGuid Function ShouldSaveActor ******************************
struct RoomActorGuid_eventShouldSaveActor_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	RoomActorGuid_eventShouldSaveActor_Parms()
		: ReturnValue(false)
	{
	}
};
bool IRoomActorGuid::ShouldSaveActor() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShouldSaveActor instead.");
	RoomActorGuid_eventShouldSaveActor_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_URoomActorGuid_ShouldSaveActor = FName(TEXT("ShouldSaveActor"));
bool IRoomActorGuid::Execute_ShouldSaveActor(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URoomActorGuid::StaticClass()));
	RoomActorGuid_eventShouldSaveActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URoomActorGuid_ShouldSaveActor);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IRoomActorGuid*)(O->GetNativeInterfaceAddress(URoomActorGuid::StaticClass())))
	{
		Parms.ReturnValue = I->ShouldSaveActor_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Actor Id" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the actor should be included in the saved dungeon.\n// Returns false to just use a Guid without the need to include the actor in saved games.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/RoomActorGuid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor should be included in the saved dungeon.\nReturns false to just use a Guid without the need to include the actor in saved games." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomActorGuid_eventShouldSaveActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomActorGuid_eventShouldSaveActor_Parms), &Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomActorGuid, nullptr, "ShouldSaveActor", Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::PropPointers), sizeof(RoomActorGuid_eventShouldSaveActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RoomActorGuid_eventShouldSaveActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRoomActorGuid::execShouldSaveActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSaveActor_Implementation();
	P_NATIVE_END;
}
// ********** End Interface URoomActorGuid Function ShouldSaveActor ********************************

// ********** Begin Interface URoomActorGuid *******************************************************
void URoomActorGuid::StaticRegisterNativesURoomActorGuid()
{
	UClass* Class = URoomActorGuid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGuid", &IRoomActorGuid::execGetGuid },
		{ "ShouldSaveActor", &IRoomActorGuid::execShouldSaveActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoomActorGuid;
UClass* URoomActorGuid::GetPrivateStaticClass()
{
	using TClass = URoomActorGuid;
	if (!Z_Registration_Info_UClass_URoomActorGuid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RoomActorGuid"),
			Z_Registration_Info_UClass_URoomActorGuid.InnerSingleton,
			StaticRegisterNativesURoomActorGuid,
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
	return Z_Registration_Info_UClass_URoomActorGuid.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomActorGuid_NoRegister()
{
	return URoomActorGuid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomActorGuid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/RoomActorGuid.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Interface to access a custom Guid for actors saved within a dungeon." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomActorGuid_GetGuid, "GetGuid" }, // 1845691024
		{ &Z_Construct_UFunction_URoomActorGuid_ShouldSaveActor, "ShouldSaveActor" }, // 1214142878
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRoomActorGuid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URoomActorGuid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomActorGuid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomActorGuid_Statics::ClassParams = {
	&URoomActorGuid::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomActorGuid_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomActorGuid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomActorGuid()
{
	if (!Z_Registration_Info_UClass_URoomActorGuid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomActorGuid.OuterSingleton, Z_Construct_UClass_URoomActorGuid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomActorGuid.OuterSingleton;
}
URoomActorGuid::URoomActorGuid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomActorGuid);
// ********** End Interface URoomActorGuid *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomActorGuid, URoomActorGuid::StaticClass, TEXT("URoomActorGuid"), &Z_Registration_Info_UClass_URoomActorGuid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomActorGuid), 8697722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h__Script_ProceduralDungeon_183391852(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_6_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_RoomActorGuid_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
