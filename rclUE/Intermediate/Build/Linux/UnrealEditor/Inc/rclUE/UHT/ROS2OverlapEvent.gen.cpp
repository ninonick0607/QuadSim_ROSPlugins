// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2OverlapEvent.h"
#include "rclUE/Public/Msgs/ROS2HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2OverlapEvent() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OverlapEventMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OverlapEventMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHitResult();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOverlapEvent();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSOverlapEvent **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSOverlapEvent;
class UScriptStruct* FROSOverlapEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOverlapEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSOverlapEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSOverlapEvent, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSOverlapEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FROSOverlapEvent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSOverlapEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBegin_MetaData[] = {
		{ "Category", "ROSOverlapEvent" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfName_MetaData[] = {
		{ "Category", "ROSOverlapEvent" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActorName_MetaData[] = {
		{ "Category", "ROSOverlapEvent" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponentName_MetaData[] = {
		{ "Category", "ROSOverlapEvent" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherBodyIndex_MetaData[] = {
		{ "Category", "ROSOverlapEvent" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFromSweep_MetaData[] = {
		{ "Category", "ROSOverlapEvent" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "Category", "ROSOverlapEvent" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bBegin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBegin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelfName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OtherActorName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OtherComponentName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSOverlapEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_bBegin_SetBit(void* Obj)
{
	((FROSOverlapEvent*)Obj)->bBegin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_bBegin = { "bBegin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSOverlapEvent), &Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_bBegin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBegin_MetaData), NewProp_bBegin_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_SelfName = { "SelfName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlapEvent, SelfName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfName_MetaData), NewProp_SelfName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_OtherActorName = { "OtherActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlapEvent, OtherActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActorName_MetaData), NewProp_OtherActorName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_OtherComponentName = { "OtherComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlapEvent, OtherComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponentName_MetaData), NewProp_OtherComponentName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlapEvent, OtherBodyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherBodyIndex_MetaData), NewProp_OtherBodyIndex_MetaData) };
void Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((FROSOverlapEvent*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSOverlapEvent), &Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFromSweep_MetaData), NewProp_bFromSweep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlapEvent, SweepResult), Z_Construct_UScriptStruct_FROSHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 130609294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_bBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_SelfName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_OtherActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_OtherComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSOverlapEvent",
	Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::PropPointers),
	sizeof(FROSOverlapEvent),
	alignof(FROSOverlapEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSOverlapEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOverlapEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSOverlapEvent.InnerSingleton, Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSOverlapEvent.InnerSingleton;
}
// ********** End ScriptStruct FROSOverlapEvent ****************************************************

// ********** Begin Class UROS2OverlapEventMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics
{
	struct ROS2OverlapEventMsg_eventGetMsg_Parms
	{
		FROSOverlapEvent Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OverlapEventMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSOverlapEvent, METADATA_PARAMS(0, nullptr) }; // 1808658814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OverlapEventMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::ROS2OverlapEventMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::ROS2OverlapEventMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OverlapEventMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSOverlapEvent,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2OverlapEventMsg Function GetMsg ***************************************

// ********** Begin Class UROS2OverlapEventMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics
{
	struct ROS2OverlapEventMsg_eventSetMsg_Parms
	{
		FROSOverlapEvent Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OverlapEventMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSOverlapEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1808658814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OverlapEventMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::ROS2OverlapEventMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::ROS2OverlapEventMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OverlapEventMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSOverlapEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2OverlapEventMsg Function SetMsg ***************************************

// ********** Begin Class UROS2OverlapEventMsg *****************************************************
void UROS2OverlapEventMsg::StaticRegisterNativesUROS2OverlapEventMsg()
{
	UClass* Class = UROS2OverlapEventMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2OverlapEventMsg::execGetMsg },
		{ "SetMsg", &UROS2OverlapEventMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2OverlapEventMsg;
UClass* UROS2OverlapEventMsg::GetPrivateStaticClass()
{
	using TClass = UROS2OverlapEventMsg;
	if (!Z_Registration_Info_UClass_UROS2OverlapEventMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2OverlapEventMsg"),
			Z_Registration_Info_UClass_UROS2OverlapEventMsg.InnerSingleton,
			StaticRegisterNativesUROS2OverlapEventMsg,
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
	return Z_Registration_Info_UClass_UROS2OverlapEventMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2OverlapEventMsg_NoRegister()
{
	return UROS2OverlapEventMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2OverlapEventMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2OverlapEvent.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OverlapEvent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2OverlapEventMsg_GetMsg, "GetMsg" }, // 1789233386
		{ &Z_Construct_UFunction_UROS2OverlapEventMsg_SetMsg, "SetMsg" }, // 2551283490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2OverlapEventMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2OverlapEventMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OverlapEventMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2OverlapEventMsg_Statics::ClassParams = {
	&UROS2OverlapEventMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OverlapEventMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2OverlapEventMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2OverlapEventMsg()
{
	if (!Z_Registration_Info_UClass_UROS2OverlapEventMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2OverlapEventMsg.OuterSingleton, Z_Construct_UClass_UROS2OverlapEventMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2OverlapEventMsg.OuterSingleton;
}
UROS2OverlapEventMsg::UROS2OverlapEventMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2OverlapEventMsg);
UROS2OverlapEventMsg::~UROS2OverlapEventMsg() {}
// ********** End Class UROS2OverlapEventMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlapEvent_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSOverlapEvent::StaticStruct, Z_Construct_UScriptStruct_FROSOverlapEvent_Statics::NewStructOps, TEXT("ROSOverlapEvent"), &Z_Registration_Info_UScriptStruct_FROSOverlapEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSOverlapEvent), 1808658814U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2OverlapEventMsg, UROS2OverlapEventMsg::StaticClass, TEXT("UROS2OverlapEventMsg"), &Z_Registration_Info_UClass_UROS2OverlapEventMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2OverlapEventMsg), 1286125735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlapEvent_h__Script_rclUE_3159822342(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlapEvent_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlapEvent_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlapEvent_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlapEvent_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
