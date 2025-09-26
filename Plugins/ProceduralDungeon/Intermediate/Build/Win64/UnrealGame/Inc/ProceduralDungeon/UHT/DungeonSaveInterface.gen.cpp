// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/DungeonSaveInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDungeonSaveInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSaveInterface();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonSaveInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UDungeonSaveInterface Function DungeonPostSerialize ******************
struct DungeonSaveInterface_eventDungeonPostSerialize_Parms
{
	bool bIsLoading;
};
void IDungeonSaveInterface::DungeonPostSerialize(bool bIsLoading)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DungeonPostSerialize instead.");
}
static FName NAME_UDungeonSaveInterface_DungeonPostSerialize = FName(TEXT("DungeonPostSerialize"));
void IDungeonSaveInterface::Execute_DungeonPostSerialize(UObject* O, bool bIsLoading)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonSaveInterface::StaticClass()));
	DungeonSaveInterface_eventDungeonPostSerialize_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonSaveInterface_DungeonPostSerialize);
	if (Func)
	{
		Parms.bIsLoading=bIsLoading;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDungeonSaveInterface*)(O->GetNativeInterfaceAddress(UDungeonSaveInterface::StaticClass())))
	{
		I->DungeonPostSerialize_Implementation(bIsLoading);
	}
}
struct Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "Comment", "// Called just after deserializing this object from the dungeon save\n// Useful to initialize some actor states based on saved variables.\n" },
		{ "ModuleRelativePath", "Public/Interfaces/DungeonSaveInterface.h" },
		{ "ToolTip", "Called just after deserializing this object from the dungeon save\nUseful to initialize some actor states based on saved variables." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLoading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoading;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::NewProp_bIsLoading_SetBit(void* Obj)
{
	((DungeonSaveInterface_eventDungeonPostSerialize_Parms*)Obj)->bIsLoading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::NewProp_bIsLoading = { "bIsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonSaveInterface_eventDungeonPostSerialize_Parms), &Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::NewProp_bIsLoading_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::NewProp_bIsLoading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonSaveInterface, nullptr, "DungeonPostSerialize", Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::PropPointers), sizeof(DungeonSaveInterface_eventDungeonPostSerialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DungeonSaveInterface_eventDungeonPostSerialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonSaveInterface::execDungeonPostSerialize)
{
	P_GET_UBOOL(Z_Param_bIsLoading);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DungeonPostSerialize_Implementation(Z_Param_bIsLoading);
	P_NATIVE_END;
}
// ********** End Interface UDungeonSaveInterface Function DungeonPostSerialize ********************

// ********** Begin Interface UDungeonSaveInterface Function DungeonPreSerialize *******************
struct DungeonSaveInterface_eventDungeonPreSerialize_Parms
{
	bool bIsLoading;
};
void IDungeonSaveInterface::DungeonPreSerialize(bool bIsLoading)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DungeonPreSerialize instead.");
}
static FName NAME_UDungeonSaveInterface_DungeonPreSerialize = FName(TEXT("DungeonPreSerialize"));
void IDungeonSaveInterface::Execute_DungeonPreSerialize(UObject* O, bool bIsLoading)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonSaveInterface::StaticClass()));
	DungeonSaveInterface_eventDungeonPreSerialize_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonSaveInterface_DungeonPreSerialize);
	if (Func)
	{
		Parms.bIsLoading=bIsLoading;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDungeonSaveInterface*)(O->GetNativeInterfaceAddress(UDungeonSaveInterface::StaticClass())))
	{
		I->DungeonPreSerialize_Implementation(bIsLoading);
	}
}
struct Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "Comment", "// Called just before serializing this object into the dungeon save.\n// Useful to initialize some saved variables based on actor states.\n" },
		{ "ModuleRelativePath", "Public/Interfaces/DungeonSaveInterface.h" },
		{ "ToolTip", "Called just before serializing this object into the dungeon save.\nUseful to initialize some saved variables based on actor states." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLoading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoading;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::NewProp_bIsLoading_SetBit(void* Obj)
{
	((DungeonSaveInterface_eventDungeonPreSerialize_Parms*)Obj)->bIsLoading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::NewProp_bIsLoading = { "bIsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonSaveInterface_eventDungeonPreSerialize_Parms), &Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::NewProp_bIsLoading_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::NewProp_bIsLoading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonSaveInterface, nullptr, "DungeonPreSerialize", Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::PropPointers), sizeof(DungeonSaveInterface_eventDungeonPreSerialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DungeonSaveInterface_eventDungeonPreSerialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonSaveInterface::execDungeonPreSerialize)
{
	P_GET_UBOOL(Z_Param_bIsLoading);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DungeonPreSerialize_Implementation(Z_Param_bIsLoading);
	P_NATIVE_END;
}
// ********** End Interface UDungeonSaveInterface Function DungeonPreSerialize *********************

// ********** Begin Interface UDungeonSaveInterface Function PostLoadDungeon ***********************
void IDungeonSaveInterface::PostLoadDungeon()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PostLoadDungeon instead.");
}
static FName NAME_UDungeonSaveInterface_PostLoadDungeon = FName(TEXT("PostLoadDungeon"));
void IDungeonSaveInterface::Execute_PostLoadDungeon(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDungeonSaveInterface_PostLoadDungeon);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDungeonSaveInterface*)(O->GetNativeInterfaceAddress(UDungeonSaveInterface::StaticClass())))
	{
		I->PostLoadDungeon_Implementation();
	}
}
struct Z_Construct_UFunction_UDungeonSaveInterface_PostLoadDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "Comment", "// Called last after loading the dungeon\n" },
		{ "ModuleRelativePath", "Public/Interfaces/DungeonSaveInterface.h" },
		{ "ToolTip", "Called last after loading the dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonSaveInterface_PostLoadDungeon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonSaveInterface, nullptr, "PostLoadDungeon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSaveInterface_PostLoadDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonSaveInterface_PostLoadDungeon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDungeonSaveInterface_PostLoadDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonSaveInterface_PostLoadDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonSaveInterface::execPostLoadDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostLoadDungeon_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDungeonSaveInterface Function PostLoadDungeon *************************

// ********** Begin Interface UDungeonSaveInterface Function PreSaveDungeon ************************
void IDungeonSaveInterface::PreSaveDungeon()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PreSaveDungeon instead.");
}
static FName NAME_UDungeonSaveInterface_PreSaveDungeon = FName(TEXT("PreSaveDungeon"));
void IDungeonSaveInterface::Execute_PreSaveDungeon(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDungeonSaveInterface_PreSaveDungeon);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDungeonSaveInterface*)(O->GetNativeInterfaceAddress(UDungeonSaveInterface::StaticClass())))
	{
		I->PreSaveDungeon_Implementation();
	}
}
struct Z_Construct_UFunction_UDungeonSaveInterface_PreSaveDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "Comment", "// Called first before saving the dungeon\n" },
		{ "ModuleRelativePath", "Public/Interfaces/DungeonSaveInterface.h" },
		{ "ToolTip", "Called first before saving the dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonSaveInterface_PreSaveDungeon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDungeonSaveInterface, nullptr, "PreSaveDungeon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonSaveInterface_PreSaveDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonSaveInterface_PreSaveDungeon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDungeonSaveInterface_PreSaveDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonSaveInterface_PreSaveDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDungeonSaveInterface::execPreSaveDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreSaveDungeon_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDungeonSaveInterface Function PreSaveDungeon **************************

// ********** Begin Interface UDungeonSaveInterface ************************************************
void UDungeonSaveInterface::StaticRegisterNativesUDungeonSaveInterface()
{
	UClass* Class = UDungeonSaveInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DungeonPostSerialize", &IDungeonSaveInterface::execDungeonPostSerialize },
		{ "DungeonPreSerialize", &IDungeonSaveInterface::execDungeonPreSerialize },
		{ "PostLoadDungeon", &IDungeonSaveInterface::execPostLoadDungeon },
		{ "PreSaveDungeon", &IDungeonSaveInterface::execPreSaveDungeon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDungeonSaveInterface;
UClass* UDungeonSaveInterface::GetPrivateStaticClass()
{
	using TClass = UDungeonSaveInterface;
	if (!Z_Registration_Info_UClass_UDungeonSaveInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DungeonSaveInterface"),
			Z_Registration_Info_UClass_UDungeonSaveInterface.InnerSingleton,
			StaticRegisterNativesUDungeonSaveInterface,
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
	return Z_Registration_Info_UClass_UDungeonSaveInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UDungeonSaveInterface_NoRegister()
{
	return UDungeonSaveInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDungeonSaveInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/DungeonSaveInterface.h" },
		{ "Tooltip", "Give access to some serialization events to actors saved within a dungeon." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonSaveInterface_DungeonPostSerialize, "DungeonPostSerialize" }, // 3742384405
		{ &Z_Construct_UFunction_UDungeonSaveInterface_DungeonPreSerialize, "DungeonPreSerialize" }, // 1687769445
		{ &Z_Construct_UFunction_UDungeonSaveInterface_PostLoadDungeon, "PostLoadDungeon" }, // 3221551069
		{ &Z_Construct_UFunction_UDungeonSaveInterface_PreSaveDungeon, "PreSaveDungeon" }, // 3843628408
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDungeonSaveInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonSaveInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSaveInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonSaveInterface_Statics::ClassParams = {
	&UDungeonSaveInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSaveInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonSaveInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonSaveInterface()
{
	if (!Z_Registration_Info_UClass_UDungeonSaveInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonSaveInterface.OuterSingleton, Z_Construct_UClass_UDungeonSaveInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonSaveInterface.OuterSingleton;
}
UDungeonSaveInterface::UDungeonSaveInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonSaveInterface);
// ********** End Interface UDungeonSaveInterface **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonSaveInterface, UDungeonSaveInterface::StaticClass, TEXT("UDungeonSaveInterface"), &Z_Registration_Info_UClass_UDungeonSaveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonSaveInterface), 2918210454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h__Script_ProceduralDungeon_1019375580(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Interfaces_DungeonSaveInterface_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
