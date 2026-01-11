// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RoomObserverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoomObserverComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomObserverComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomObserverComponent_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor_NoRegister();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FRoomObserverEvent ****************************************************
struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics
{
	struct _Script_ProceduralDungeon_eventRoomObserverEvent_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/RoomObserverComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRoomObserverEvent constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRoomObserverEvent constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRoomObserverEvent Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomObserverEvent_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomObserverEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRoomObserverEvent Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomObserverEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomObserverEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomObserverEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRoomObserverEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomObserverEvent, ARoomLevel* RoomLevel, AActor* Actor)
{
	struct _Script_ProceduralDungeon_eventRoomObserverEvent_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Actor;
	};
	_Script_ProceduralDungeon_eventRoomObserverEvent_Parms Parms;
	Parms.RoomLevel=RoomLevel;
	Parms.Actor=Actor;
	RoomObserverEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FRoomObserverEvent ******************************************************

// ********** Begin Class URoomObserverComponent Function OnActorEnterRoom *************************
struct Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics
{
	struct RoomObserverComponent_eventOnActorEnterRoom_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/RoomObserverComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnActorEnterRoom constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnActorEnterRoom constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnActorEnterRoom Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomObserverComponent_eventOnActorEnterRoom_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomObserverComponent_eventOnActorEnterRoom_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::PropPointers) < 2048);
// ********** End Function OnActorEnterRoom Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomObserverComponent, nullptr, "OnActorEnterRoom", 	Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::RoomObserverComponent_eventOnActorEnterRoom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::RoomObserverComponent_eventOnActorEnterRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomObserverComponent::execOnActorEnterRoom)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorEnterRoom(Z_Param_RoomLevel,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class URoomObserverComponent Function OnActorEnterRoom ***************************

// ********** Begin Class URoomObserverComponent Function OnActorExitRoom **************************
struct Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics
{
	struct RoomObserverComponent_eventOnActorExitRoom_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/RoomObserverComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnActorExitRoom constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnActorExitRoom constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnActorExitRoom Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomObserverComponent_eventOnActorExitRoom_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomObserverComponent_eventOnActorExitRoom_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::PropPointers) < 2048);
// ********** End Function OnActorExitRoom Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URoomObserverComponent, nullptr, "OnActorExitRoom", 	Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::RoomObserverComponent_eventOnActorExitRoom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::RoomObserverComponent_eventOnActorExitRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomObserverComponent::execOnActorExitRoom)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorExitRoom(Z_Param_RoomLevel,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class URoomObserverComponent Function OnActorExitRoom ****************************

// ********** Begin Class URoomObserverComponent ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoomObserverComponent;
UClass* URoomObserverComponent::GetPrivateStaticClass()
{
	using TClass = URoomObserverComponent;
	if (!Z_Registration_Info_UClass_URoomObserverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoomObserverComponent"),
			Z_Registration_Info_UClass_URoomObserverComponent.InnerSingleton,
			StaticRegisterNativesURoomObserverComponent,
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
	return Z_Registration_Info_UClass_URoomObserverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URoomObserverComponent_NoRegister()
{
	return URoomObserverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoomObserverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ProceduralDungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Room Observer that auto-(un)bind itself when it enters/exits a dungeon room.\n// Could observe (be bound) multiple rooms at once if the actor overlaps multiple room.\n// This component **does** track its own Room, thus the actor can move between rooms (use StaticRoomObserverComponent instead if this behavior is not needed).\n" },
#endif
		{ "IncludePath", "Components/RoomObserverComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RoomObserverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Room Observer that auto-(un)bind itself when it enters/exits a dungeon room.\nCould observe (be bound) multiple rooms at once if the actor overlaps multiple room.\nThis component **does** track its own Room, thus the actor can move between rooms (use StaticRoomObserverComponent instead if this behavior is not needed)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorEnterRoomEvent_MetaData[] = {
		{ "Category", "Room Observer" },
		{ "DisplayName", "On Actor Enter Room" },
		{ "ModuleRelativePath", "Public/Components/RoomObserverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorExitRoomEvent_MetaData[] = {
		{ "Category", "Room Observer" },
		{ "DisplayName", "On Actor Exit Room" },
		{ "ModuleRelativePath", "Public/Components/RoomObserverComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoomObserverComponent constinit property declarations *******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActorEnterRoomEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActorExitRoomEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoomObserverComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnActorEnterRoom"), .Pointer = &URoomObserverComponent::execOnActorEnterRoom },
		{ .NameUTF8 = UTF8TEXT("OnActorExitRoom"), .Pointer = &URoomObserverComponent::execOnActorExitRoom },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomObserverComponent_OnActorEnterRoom, "OnActorEnterRoom" }, // 81590454
		{ &Z_Construct_UFunction_URoomObserverComponent_OnActorExitRoom, "OnActorExitRoom" }, // 3266189963
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomObserverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoomObserverComponent_Statics

// ********** Begin Class URoomObserverComponent Property Definitions ******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URoomObserverComponent_Statics::NewProp_ActorEnterRoomEvent = { "ActorEnterRoomEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomObserverComponent, ActorEnterRoomEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorEnterRoomEvent_MetaData), NewProp_ActorEnterRoomEvent_MetaData) }; // 2271782211
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URoomObserverComponent_Statics::NewProp_ActorExitRoomEvent = { "ActorExitRoomEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomObserverComponent, ActorExitRoomEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorExitRoomEvent_MetaData), NewProp_ActorExitRoomEvent_MetaData) }; // 2271782211
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomObserverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomObserverComponent_Statics::NewProp_ActorEnterRoomEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomObserverComponent_Statics::NewProp_ActorExitRoomEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomObserverComponent_Statics::PropPointers) < 2048);
// ********** End Class URoomObserverComponent Property Definitions ********************************
UObject* (*const Z_Construct_UClass_URoomObserverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomObserverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URoomObserverComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URoomVisitor_NoRegister, (int32)VTABLE_OFFSET(URoomObserverComponent, IRoomVisitor), false },  // 1780546270
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomObserverComponent_Statics::ClassParams = {
	&URoomObserverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URoomObserverComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URoomObserverComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomObserverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomObserverComponent_Statics::Class_MetaDataParams)
};
void URoomObserverComponent::StaticRegisterNativesURoomObserverComponent()
{
	UClass* Class = URoomObserverComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URoomObserverComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_URoomObserverComponent()
{
	if (!Z_Registration_Info_UClass_URoomObserverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomObserverComponent.OuterSingleton, Z_Construct_UClass_URoomObserverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomObserverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoomObserverComponent);
URoomObserverComponent::~URoomObserverComponent() {}
// ********** End Class URoomObserverComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h__Script_ProceduralDungeon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomObserverComponent, URoomObserverComponent::StaticClass, TEXT("URoomObserverComponent"), &Z_Registration_Info_UClass_URoomObserverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomObserverComponent), 1446077934U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h__Script_ProceduralDungeon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h__Script_ProceduralDungeon_1859830535{
	TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h__Script_ProceduralDungeon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_7_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h__Script_ProceduralDungeon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
