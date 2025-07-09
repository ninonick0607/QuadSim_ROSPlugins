// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2JointTrajPoint.h"
#include "rclUE/Public/Msgs/ROS2Duration.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2JointTrajPoint() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2JointTrajPointMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2JointTrajPointMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDuration();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSJointTrajPoint();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSJointTrajPoint ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSJointTrajPoint;
class UScriptStruct* FROSJointTrajPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSJointTrajPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSJointTrajPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSJointTrajPoint, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSJointTrajPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FROSJointTrajPoint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "ROSJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocities_MetaData[] = {
		{ "Category", "ROSJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accelerations_MetaData[] = {
		{ "Category", "ROSJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effort_MetaData[] = {
		{ "Category", "ROSJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeFromStart_MetaData[] = {
		{ "Category", "ROSJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Velocities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Velocities;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Accelerations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Accelerations;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Effort_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeFromStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSJointTrajPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJointTrajPoint, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Velocities_Inner = { "Velocities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Velocities = { "Velocities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJointTrajPoint, Velocities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocities_MetaData), NewProp_Velocities_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Accelerations_Inner = { "Accelerations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Accelerations = { "Accelerations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJointTrajPoint, Accelerations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accelerations_MetaData), NewProp_Accelerations_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Effort_Inner = { "Effort", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Effort = { "Effort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJointTrajPoint, Effort), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effort_MetaData), NewProp_Effort_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_TimeFromStart = { "TimeFromStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJointTrajPoint, TimeFromStart), Z_Construct_UScriptStruct_FROSDuration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeFromStart_MetaData), NewProp_TimeFromStart_MetaData) }; // 3152230835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Velocities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Velocities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Accelerations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Accelerations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Effort_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_Effort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewProp_TimeFromStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSJointTrajPoint",
	Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::PropPointers),
	sizeof(FROSJointTrajPoint),
	alignof(FROSJointTrajPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSJointTrajPoint()
{
	if (!Z_Registration_Info_UScriptStruct_FROSJointTrajPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSJointTrajPoint.InnerSingleton, Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSJointTrajPoint.InnerSingleton;
}
// ********** End ScriptStruct FROSJointTrajPoint **************************************************

// ********** Begin Class UROS2JointTrajPointMsg Function GetMsg ***********************************
struct Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics
{
	struct ROS2JointTrajPointMsg_eventGetMsg_Parms
	{
		FROSJointTrajPoint Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JointTrajPointMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSJointTrajPoint, METADATA_PARAMS(0, nullptr) }; // 3756569243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JointTrajPointMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::ROS2JointTrajPointMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::ROS2JointTrajPointMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JointTrajPointMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSJointTrajPoint,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2JointTrajPointMsg Function GetMsg *************************************

// ********** Begin Class UROS2JointTrajPointMsg Function SetMsg ***********************************
struct Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics
{
	struct ROS2JointTrajPointMsg_eventSetMsg_Parms
	{
		FROSJointTrajPoint Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JointTrajPointMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSJointTrajPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3756569243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JointTrajPointMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::ROS2JointTrajPointMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::ROS2JointTrajPointMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JointTrajPointMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSJointTrajPoint,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2JointTrajPointMsg Function SetMsg *************************************

// ********** Begin Class UROS2JointTrajPointMsg ***************************************************
void UROS2JointTrajPointMsg::StaticRegisterNativesUROS2JointTrajPointMsg()
{
	UClass* Class = UROS2JointTrajPointMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2JointTrajPointMsg::execGetMsg },
		{ "SetMsg", &UROS2JointTrajPointMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2JointTrajPointMsg;
UClass* UROS2JointTrajPointMsg::GetPrivateStaticClass()
{
	using TClass = UROS2JointTrajPointMsg;
	if (!Z_Registration_Info_UClass_UROS2JointTrajPointMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2JointTrajPointMsg"),
			Z_Registration_Info_UClass_UROS2JointTrajPointMsg.InnerSingleton,
			StaticRegisterNativesUROS2JointTrajPointMsg,
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
	return Z_Registration_Info_UClass_UROS2JointTrajPointMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2JointTrajPointMsg_NoRegister()
{
	return UROS2JointTrajPointMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2JointTrajPointMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2JointTrajPoint.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTrajPoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2JointTrajPointMsg_GetMsg, "GetMsg" }, // 2816847200
		{ &Z_Construct_UFunction_UROS2JointTrajPointMsg_SetMsg, "SetMsg" }, // 3737092431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2JointTrajPointMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2JointTrajPointMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2JointTrajPointMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2JointTrajPointMsg_Statics::ClassParams = {
	&UROS2JointTrajPointMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2JointTrajPointMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2JointTrajPointMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2JointTrajPointMsg()
{
	if (!Z_Registration_Info_UClass_UROS2JointTrajPointMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2JointTrajPointMsg.OuterSingleton, Z_Construct_UClass_UROS2JointTrajPointMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2JointTrajPointMsg.OuterSingleton;
}
UROS2JointTrajPointMsg::UROS2JointTrajPointMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2JointTrajPointMsg);
UROS2JointTrajPointMsg::~UROS2JointTrajPointMsg() {}
// ********** End Class UROS2JointTrajPointMsg *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSJointTrajPoint::StaticStruct, Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics::NewStructOps, TEXT("ROSJointTrajPoint"), &Z_Registration_Info_UScriptStruct_FROSJointTrajPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSJointTrajPoint), 3756569243U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2JointTrajPointMsg, UROS2JointTrajPointMsg::StaticClass, TEXT("UROS2JointTrajPointMsg"), &Z_Registration_Info_UClass_UROS2JointTrajPointMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2JointTrajPointMsg), 3724021621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h__Script_rclUE_1238124772(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
