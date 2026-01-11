// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoomVisitor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomVisitor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface URoomVisitor Function OnRoomEnter ************************************
struct RoomVisitor_eventOnRoomEnter_Parms
{
	ARoomLevel* RoomLevel;
};
void IRoomVisitor::OnRoomEnter(ARoomLevel* RoomLevel)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRoomEnter instead.");
}
static FName NAME_URoomVisitor_OnRoomEnter = FName(TEXT("OnRoomEnter"));
void IRoomVisitor::Execute_OnRoomEnter(UObject* O, ARoomLevel* RoomLevel)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URoomVisitor::StaticClass()));
	RoomVisitor_eventOnRoomEnter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URoomVisitor_OnRoomEnter);
	if (Func)
	{
		Parms.RoomLevel=std::move(RoomLevel);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRoomVisitor*)(O->GetNativeInterfaceAddress(URoomVisitor::StaticClass())))
	{
		I->OnRoomEnter_Implementation(RoomLevel);
	}
}
struct Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Visitor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This function is called when the actor enters a dungeon room.\n// @param RoomLevel The room level blueprint this actor has entered. You can use the Room accessor from here.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoomVisitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is called when the actor enters a dungeon room.\n@param RoomLevel The room level blueprint this actor has entered. You can use the Room accessor from here." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomEnter constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomEnter constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomEnter Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomVisitor_eventOnRoomEnter_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::NewProp_RoomLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::PropPointers) < 2048);
// ********** End Function OnRoomEnter Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomVisitor, nullptr, "OnRoomEnter", 	Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::PropPointers), 
sizeof(RoomVisitor_eventOnRoomEnter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RoomVisitor_eventOnRoomEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomVisitor_OnRoomEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRoomVisitor::execOnRoomEnter)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomEnter_Implementation(Z_Param_RoomLevel);
	P_NATIVE_END;
}
// ********** End Interface URoomVisitor Function OnRoomEnter **************************************

// ********** Begin Interface URoomVisitor Function OnRoomExit *************************************
struct RoomVisitor_eventOnRoomExit_Parms
{
	ARoomLevel* RoomLevel;
};
void IRoomVisitor::OnRoomExit(ARoomLevel* RoomLevel)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRoomExit instead.");
}
static FName NAME_URoomVisitor_OnRoomExit = FName(TEXT("OnRoomExit"));
void IRoomVisitor::Execute_OnRoomExit(UObject* O, ARoomLevel* RoomLevel)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URoomVisitor::StaticClass()));
	RoomVisitor_eventOnRoomExit_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URoomVisitor_OnRoomExit);
	if (Func)
	{
		Parms.RoomLevel=std::move(RoomLevel);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRoomVisitor*)(O->GetNativeInterfaceAddress(URoomVisitor::StaticClass())))
	{
		I->OnRoomExit_Implementation(RoomLevel);
	}
}
struct Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Visitor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This function is called when the actor exits a dungeon room.\n// @param RoomLevel The room level blueprint this actor has exited. You can use the Room accessor from here.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoomVisitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is called when the actor exits a dungeon room.\n@param RoomLevel The room level blueprint this actor has exited. You can use the Room accessor from here." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoomExit constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoomExit constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoomExit Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomVisitor_eventOnRoomExit_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::NewProp_RoomLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::PropPointers) < 2048);
// ********** End Function OnRoomExit Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomVisitor, nullptr, "OnRoomExit", 	Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::PropPointers), 
sizeof(RoomVisitor_eventOnRoomExit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RoomVisitor_eventOnRoomExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomVisitor_OnRoomExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRoomVisitor::execOnRoomExit)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomExit_Implementation(Z_Param_RoomLevel);
	P_NATIVE_END;
}
// ********** End Interface URoomVisitor Function OnRoomExit ***************************************

// ********** Begin Interface URoomVisitor *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoomVisitor;
UClass* URoomVisitor::GetPrivateStaticClass()
{
	using TClass = URoomVisitor;
	if (!Z_Registration_Info_UClass_URoomVisitor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoomVisitor"),
			Z_Registration_Info_UClass_URoomVisitor.InnerSingleton,
			StaticRegisterNativesURoomVisitor,
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
	return Z_Registration_Info_UClass_URoomVisitor.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomVisitor_NoRegister()
{
	return URoomVisitor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomVisitor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoomVisitor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Interface which adds events to an actor (or a component) when the actor enters/exits a dungeon room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Interface URoomVisitor constinit property declarations *************************
// ********** End Interface URoomVisitor constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRoomEnter"), .Pointer = &IRoomVisitor::execOnRoomEnter },
		{ .NameUTF8 = UTF8TEXT("OnRoomExit"), .Pointer = &IRoomVisitor::execOnRoomExit },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomVisitor_OnRoomEnter, "OnRoomEnter" }, // 767409397
		{ &Z_Construct_UFunction_URoomVisitor_OnRoomExit, "OnRoomExit" }, // 2796041391
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRoomVisitor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoomVisitor_Statics
UObject* (*const Z_Construct_UClass_URoomVisitor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisitor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomVisitor_Statics::ClassParams = {
	&URoomVisitor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisitor_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomVisitor_Statics::Class_MetaDataParams)
};
void URoomVisitor::StaticRegisterNativesURoomVisitor()
{
	UClass* Class = URoomVisitor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URoomVisitor_Statics::Funcs));
}
UClass* Z_Construct_UClass_URoomVisitor()
{
	if (!Z_Registration_Info_UClass_URoomVisitor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomVisitor.OuterSingleton, Z_Construct_UClass_URoomVisitor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomVisitor.OuterSingleton;
}
URoomVisitor::URoomVisitor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomVisitor);
// ********** End Interface URoomVisitor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomVisitor, URoomVisitor::StaticClass, TEXT("URoomVisitor"), &Z_Registration_Info_UClass_URoomVisitor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomVisitor), 1780546270U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h__Script_ProceduralDungeon_3003064667{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
