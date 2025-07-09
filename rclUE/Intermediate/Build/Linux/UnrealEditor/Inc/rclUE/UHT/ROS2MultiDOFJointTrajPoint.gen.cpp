// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MultiDOFJointTrajPoint.h"
#include "rclUE/Public/Msgs/ROS2Duration.h"
#include "rclUE/Public/Msgs/ROS2Twist.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MultiDOFJointTrajPoint() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDuration();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwist();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMultiDOFJointTrajPoint ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMultiDOFJointTrajPoint;
class UScriptStruct* FROSMultiDOFJointTrajPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMultiDOFJointTrajPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMultiDOFJointTrajPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMultiDOFJointTrajPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMultiDOFJointTrajPoint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "ROSMultiDOFJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocities_MetaData[] = {
		{ "Category", "ROSMultiDOFJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accelerations_MetaData[] = {
		{ "Category", "ROSMultiDOFJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeFromStart_MetaData[] = {
		{ "Category", "ROSMultiDOFJointTrajPoint" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointTrajPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Velocities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Accelerations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Accelerations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeFromStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMultiDOFJointTrajPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointTrajPoint, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Velocities_Inner = { "Velocities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSTwist, METADATA_PARAMS(0, nullptr) }; // 3641426361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Velocities = { "Velocities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointTrajPoint, Velocities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocities_MetaData), NewProp_Velocities_MetaData) }; // 3641426361
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Accelerations_Inner = { "Accelerations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSTwist, METADATA_PARAMS(0, nullptr) }; // 3641426361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Accelerations = { "Accelerations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointTrajPoint, Accelerations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accelerations_MetaData), NewProp_Accelerations_MetaData) }; // 3641426361
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_TimeFromStart = { "TimeFromStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointTrajPoint, TimeFromStart), Z_Construct_UScriptStruct_FROSDuration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeFromStart_MetaData), NewProp_TimeFromStart_MetaData) }; // 3152230835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Velocities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Velocities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Accelerations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_Accelerations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewProp_TimeFromStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMultiDOFJointTrajPoint",
	Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::PropPointers),
	sizeof(FROSMultiDOFJointTrajPoint),
	alignof(FROSMultiDOFJointTrajPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMultiDOFJointTrajPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMultiDOFJointTrajPoint.InnerSingleton, Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMultiDOFJointTrajPoint.InnerSingleton;
}
// ********** End ScriptStruct FROSMultiDOFJointTrajPoint ******************************************

// ********** Begin Class UROS2MultiDOFJointTrajPointMsg Function GetMsg ***************************
struct Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics
{
	struct ROS2MultiDOFJointTrajPointMsg_eventGetMsg_Parms
	{
		FROSMultiDOFJointTrajPoint Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointTrajPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MultiDOFJointTrajPointMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint, METADATA_PARAMS(0, nullptr) }; // 1907675364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::ROS2MultiDOFJointTrajPointMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::ROS2MultiDOFJointTrajPointMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MultiDOFJointTrajPointMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMultiDOFJointTrajPoint,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MultiDOFJointTrajPointMsg Function GetMsg *****************************

// ********** Begin Class UROS2MultiDOFJointTrajPointMsg Function SetMsg ***************************
struct Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics
{
	struct ROS2MultiDOFJointTrajPointMsg_eventSetMsg_Parms
	{
		FROSMultiDOFJointTrajPoint Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointTrajPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MultiDOFJointTrajPointMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1907675364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::ROS2MultiDOFJointTrajPointMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::ROS2MultiDOFJointTrajPointMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MultiDOFJointTrajPointMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMultiDOFJointTrajPoint,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MultiDOFJointTrajPointMsg Function SetMsg *****************************

// ********** Begin Class UROS2MultiDOFJointTrajPointMsg *******************************************
void UROS2MultiDOFJointTrajPointMsg::StaticRegisterNativesUROS2MultiDOFJointTrajPointMsg()
{
	UClass* Class = UROS2MultiDOFJointTrajPointMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2MultiDOFJointTrajPointMsg::execGetMsg },
		{ "SetMsg", &UROS2MultiDOFJointTrajPointMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MultiDOFJointTrajPointMsg;
UClass* UROS2MultiDOFJointTrajPointMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MultiDOFJointTrajPointMsg;
	if (!Z_Registration_Info_UClass_UROS2MultiDOFJointTrajPointMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MultiDOFJointTrajPointMsg"),
			Z_Registration_Info_UClass_UROS2MultiDOFJointTrajPointMsg.InnerSingleton,
			StaticRegisterNativesUROS2MultiDOFJointTrajPointMsg,
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
	return Z_Registration_Info_UClass_UROS2MultiDOFJointTrajPointMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_NoRegister()
{
	return UROS2MultiDOFJointTrajPointMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MultiDOFJointTrajPoint.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointTrajPoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_GetMsg, "GetMsg" }, // 293529509
		{ &Z_Construct_UFunction_UROS2MultiDOFJointTrajPointMsg_SetMsg, "SetMsg" }, // 3543132314
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MultiDOFJointTrajPointMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_Statics::ClassParams = {
	&UROS2MultiDOFJointTrajPointMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MultiDOFJointTrajPointMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MultiDOFJointTrajPointMsg.OuterSingleton, Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MultiDOFJointTrajPointMsg.OuterSingleton;
}
UROS2MultiDOFJointTrajPointMsg::UROS2MultiDOFJointTrajPointMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MultiDOFJointTrajPointMsg);
UROS2MultiDOFJointTrajPointMsg::~UROS2MultiDOFJointTrajPointMsg() {}
// ********** End Class UROS2MultiDOFJointTrajPointMsg *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMultiDOFJointTrajPoint::StaticStruct, Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics::NewStructOps, TEXT("ROSMultiDOFJointTrajPoint"), &Z_Registration_Info_UScriptStruct_FROSMultiDOFJointTrajPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMultiDOFJointTrajPoint), 1907675364U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg, UROS2MultiDOFJointTrajPointMsg::StaticClass, TEXT("UROS2MultiDOFJointTrajPointMsg"), &Z_Registration_Info_UClass_UROS2MultiDOFJointTrajPointMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MultiDOFJointTrajPointMsg), 1082824499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h__Script_rclUE_2594283521(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
