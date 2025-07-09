// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Time.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Time() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TimeMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TimeMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTime();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTime **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTime;
class UScriptStruct* FROSTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTime, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTime"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTime.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Time.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sec_MetaData[] = {
		{ "Category", "ROSTime" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Time.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nanosec_MetaData[] = {
		{ "Category", "ROSTime" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Time.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Sec;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Nanosec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTime>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSTime_Statics::NewProp_Sec = { "Sec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTime, Sec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sec_MetaData), NewProp_Sec_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSTime_Statics::NewProp_Nanosec = { "Nanosec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTime, Nanosec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nanosec_MetaData), NewProp_Nanosec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTime_Statics::NewProp_Sec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTime_Statics::NewProp_Nanosec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTime_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTime",
	Z_Construct_UScriptStruct_FROSTime_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTime_Statics::PropPointers),
	sizeof(FROSTime),
	alignof(FROSTime),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTime_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTime()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTime.InnerSingleton, Z_Construct_UScriptStruct_FROSTime_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTime.InnerSingleton;
}
// ********** End ScriptStruct FROSTime ************************************************************

// ********** Begin Class UROS2TimeMsg Function GetMsg *********************************************
struct Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics
{
	struct ROS2TimeMsg_eventGetMsg_Parms
	{
		FROSTime Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Time.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TimeMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(0, nullptr) }; // 3189130280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TimeMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::ROS2TimeMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::ROS2TimeMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TimeMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TimeMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TimeMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTime,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TimeMsg Function GetMsg ***********************************************

// ********** Begin Class UROS2TimeMsg Function SetMsg *********************************************
struct Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics
{
	struct ROS2TimeMsg_eventSetMsg_Parms
	{
		FROSTime Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Time.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TimeMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3189130280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TimeMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::ROS2TimeMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::ROS2TimeMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TimeMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TimeMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TimeMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTime,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TimeMsg Function SetMsg ***********************************************

// ********** Begin Class UROS2TimeMsg *************************************************************
void UROS2TimeMsg::StaticRegisterNativesUROS2TimeMsg()
{
	UClass* Class = UROS2TimeMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2TimeMsg::execGetMsg },
		{ "SetMsg", &UROS2TimeMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TimeMsg;
UClass* UROS2TimeMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TimeMsg;
	if (!Z_Registration_Info_UClass_UROS2TimeMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TimeMsg"),
			Z_Registration_Info_UClass_UROS2TimeMsg.InnerSingleton,
			StaticRegisterNativesUROS2TimeMsg,
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
	return Z_Registration_Info_UClass_UROS2TimeMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TimeMsg_NoRegister()
{
	return UROS2TimeMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TimeMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Time.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Time.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TimeMsg_GetMsg, "GetMsg" }, // 1789674782
		{ &Z_Construct_UFunction_UROS2TimeMsg_SetMsg, "SetMsg" }, // 2484147479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TimeMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TimeMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TimeMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TimeMsg_Statics::ClassParams = {
	&UROS2TimeMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TimeMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TimeMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TimeMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TimeMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TimeMsg.OuterSingleton, Z_Construct_UClass_UROS2TimeMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TimeMsg.OuterSingleton;
}
UROS2TimeMsg::UROS2TimeMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TimeMsg);
UROS2TimeMsg::~UROS2TimeMsg() {}
// ********** End Class UROS2TimeMsg ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Time_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTime::StaticStruct, Z_Construct_UScriptStruct_FROSTime_Statics::NewStructOps, TEXT("ROSTime"), &Z_Registration_Info_UScriptStruct_FROSTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTime), 3189130280U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TimeMsg, UROS2TimeMsg::StaticClass, TEXT("UROS2TimeMsg"), &Z_Registration_Info_UClass_UROS2TimeMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TimeMsg), 3861193956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Time_h__Script_rclUE_1235411872(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Time_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Time_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Time_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Time_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
