// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2OverlappingObjects.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2OverlappingObjects() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OverlappingObjectsMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OverlappingObjectsMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOverlappingObjects();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSOverlappingObjects ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSOverlappingObjects;
class UScriptStruct* FROSOverlappingObjects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOverlappingObjects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSOverlappingObjects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSOverlappingObjects, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSOverlappingObjects"));
	}
	return Z_Registration_Info_UScriptStruct_FROSOverlappingObjects.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlappingObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "Category", "ROSOverlappingObjects" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlappingObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "Category", "ROSOverlappingObjects" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlappingObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSOverlappingObjects>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlappingObjects, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlappingObjects, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewProp_Components,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSOverlappingObjects",
	Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::PropPointers),
	sizeof(FROSOverlappingObjects),
	alignof(FROSOverlappingObjects),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSOverlappingObjects()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOverlappingObjects.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSOverlappingObjects.InnerSingleton, Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSOverlappingObjects.InnerSingleton;
}
// ********** End ScriptStruct FROSOverlappingObjects **********************************************

// ********** Begin Class UROS2OverlappingObjectsMsg Function GetMsg *******************************
struct Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics
{
	struct ROS2OverlappingObjectsMsg_eventGetMsg_Parms
	{
		FROSOverlappingObjects Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlappingObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OverlappingObjectsMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSOverlappingObjects, METADATA_PARAMS(0, nullptr) }; // 751529697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OverlappingObjectsMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::ROS2OverlappingObjectsMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::ROS2OverlappingObjectsMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OverlappingObjectsMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSOverlappingObjects,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2OverlappingObjectsMsg Function GetMsg *********************************

// ********** Begin Class UROS2OverlappingObjectsMsg Function SetMsg *******************************
struct Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics
{
	struct ROS2OverlappingObjectsMsg_eventSetMsg_Parms
	{
		FROSOverlappingObjects Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlappingObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OverlappingObjectsMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSOverlappingObjects, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 751529697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OverlappingObjectsMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::ROS2OverlappingObjectsMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::ROS2OverlappingObjectsMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OverlappingObjectsMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSOverlappingObjects,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2OverlappingObjectsMsg Function SetMsg *********************************

// ********** Begin Class UROS2OverlappingObjectsMsg ***********************************************
void UROS2OverlappingObjectsMsg::StaticRegisterNativesUROS2OverlappingObjectsMsg()
{
	UClass* Class = UROS2OverlappingObjectsMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2OverlappingObjectsMsg::execGetMsg },
		{ "SetMsg", &UROS2OverlappingObjectsMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2OverlappingObjectsMsg;
UClass* UROS2OverlappingObjectsMsg::GetPrivateStaticClass()
{
	using TClass = UROS2OverlappingObjectsMsg;
	if (!Z_Registration_Info_UClass_UROS2OverlappingObjectsMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2OverlappingObjectsMsg"),
			Z_Registration_Info_UClass_UROS2OverlappingObjectsMsg.InnerSingleton,
			StaticRegisterNativesUROS2OverlappingObjectsMsg,
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
	return Z_Registration_Info_UClass_UROS2OverlappingObjectsMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2OverlappingObjectsMsg_NoRegister()
{
	return UROS2OverlappingObjectsMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2OverlappingObjectsMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2OverlappingObjects.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlappingObjects.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2OverlappingObjectsMsg_GetMsg, "GetMsg" }, // 630853000
		{ &Z_Construct_UFunction_UROS2OverlappingObjectsMsg_SetMsg, "SetMsg" }, // 2366386422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2OverlappingObjectsMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2OverlappingObjectsMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OverlappingObjectsMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2OverlappingObjectsMsg_Statics::ClassParams = {
	&UROS2OverlappingObjectsMsg::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OverlappingObjectsMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2OverlappingObjectsMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2OverlappingObjectsMsg()
{
	if (!Z_Registration_Info_UClass_UROS2OverlappingObjectsMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2OverlappingObjectsMsg.OuterSingleton, Z_Construct_UClass_UROS2OverlappingObjectsMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2OverlappingObjectsMsg.OuterSingleton;
}
UROS2OverlappingObjectsMsg::UROS2OverlappingObjectsMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2OverlappingObjectsMsg);
UROS2OverlappingObjectsMsg::~UROS2OverlappingObjectsMsg() {}
// ********** End Class UROS2OverlappingObjectsMsg *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSOverlappingObjects::StaticStruct, Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics::NewStructOps, TEXT("ROSOverlappingObjects"), &Z_Registration_Info_UScriptStruct_FROSOverlappingObjects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSOverlappingObjects), 751529697U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2OverlappingObjectsMsg, UROS2OverlappingObjectsMsg::StaticClass, TEXT("UROS2OverlappingObjectsMsg"), &Z_Registration_Info_UClass_UROS2OverlappingObjectsMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2OverlappingObjectsMsg), 1631398649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h__Script_rclUE_3866887321(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
