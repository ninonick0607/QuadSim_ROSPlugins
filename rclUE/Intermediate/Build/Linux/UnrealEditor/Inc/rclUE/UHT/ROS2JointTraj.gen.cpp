// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2JointTraj.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2JointTrajPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2JointTraj() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2JointTrajMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2JointTrajMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSJointTraj();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSJointTrajPoint();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSJointTraj *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSJointTraj;
class UScriptStruct* FROSJointTraj::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSJointTraj.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSJointTraj.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSJointTraj, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSJointTraj"));
	}
	return Z_Registration_Info_UScriptStruct_FROSJointTraj.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSJointTraj_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTraj.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSJointTraj" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTraj.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointNames_MetaData[] = {
		{ "Category", "ROSJointTraj" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTraj.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "ROSJointTraj" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTraj.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JointNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSJointTraj>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJointTraj, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_JointNames_Inner = { "JointNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_JointNames = { "JointNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJointTraj, JointNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointNames_MetaData), NewProp_JointNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSJointTrajPoint, METADATA_PARAMS(0, nullptr) }; // 3756569243
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJointTraj, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 3756569243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSJointTraj_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_JointNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_JointNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJointTraj_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSJointTraj_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSJointTraj",
	Z_Construct_UScriptStruct_FROSJointTraj_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJointTraj_Statics::PropPointers),
	sizeof(FROSJointTraj),
	alignof(FROSJointTraj),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJointTraj_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSJointTraj_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSJointTraj()
{
	if (!Z_Registration_Info_UScriptStruct_FROSJointTraj.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSJointTraj.InnerSingleton, Z_Construct_UScriptStruct_FROSJointTraj_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSJointTraj.InnerSingleton;
}
// ********** End ScriptStruct FROSJointTraj *******************************************************

// ********** Begin Class UROS2JointTrajMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics
{
	struct ROS2JointTrajMsg_eventGetMsg_Parms
	{
		FROSJointTraj Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTraj.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JointTrajMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSJointTraj, METADATA_PARAMS(0, nullptr) }; // 4113764225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JointTrajMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::ROS2JointTrajMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::ROS2JointTrajMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JointTrajMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSJointTraj,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2JointTrajMsg Function GetMsg ******************************************

// ********** Begin Class UROS2JointTrajMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics
{
	struct ROS2JointTrajMsg_eventSetMsg_Parms
	{
		FROSJointTraj Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTraj.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JointTrajMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSJointTraj, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 4113764225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JointTrajMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::ROS2JointTrajMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::ROS2JointTrajMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JointTrajMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSJointTraj,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2JointTrajMsg Function SetMsg ******************************************

// ********** Begin Class UROS2JointTrajMsg ********************************************************
void UROS2JointTrajMsg::StaticRegisterNativesUROS2JointTrajMsg()
{
	UClass* Class = UROS2JointTrajMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2JointTrajMsg::execGetMsg },
		{ "SetMsg", &UROS2JointTrajMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2JointTrajMsg;
UClass* UROS2JointTrajMsg::GetPrivateStaticClass()
{
	using TClass = UROS2JointTrajMsg;
	if (!Z_Registration_Info_UClass_UROS2JointTrajMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2JointTrajMsg"),
			Z_Registration_Info_UClass_UROS2JointTrajMsg.InnerSingleton,
			StaticRegisterNativesUROS2JointTrajMsg,
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
	return Z_Registration_Info_UClass_UROS2JointTrajMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2JointTrajMsg_NoRegister()
{
	return UROS2JointTrajMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2JointTrajMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2JointTraj.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JointTraj.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2JointTrajMsg_GetMsg, "GetMsg" }, // 2855746003
		{ &Z_Construct_UFunction_UROS2JointTrajMsg_SetMsg, "SetMsg" }, // 4226894218
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2JointTrajMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2JointTrajMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2JointTrajMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2JointTrajMsg_Statics::ClassParams = {
	&UROS2JointTrajMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2JointTrajMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2JointTrajMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2JointTrajMsg()
{
	if (!Z_Registration_Info_UClass_UROS2JointTrajMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2JointTrajMsg.OuterSingleton, Z_Construct_UClass_UROS2JointTrajMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2JointTrajMsg.OuterSingleton;
}
UROS2JointTrajMsg::UROS2JointTrajMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2JointTrajMsg);
UROS2JointTrajMsg::~UROS2JointTrajMsg() {}
// ********** End Class UROS2JointTrajMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSJointTraj::StaticStruct, Z_Construct_UScriptStruct_FROSJointTraj_Statics::NewStructOps, TEXT("ROSJointTraj"), &Z_Registration_Info_UScriptStruct_FROSJointTraj, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSJointTraj), 4113764225U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2JointTrajMsg, UROS2JointTrajMsg::StaticClass, TEXT("UROS2JointTrajMsg"), &Z_Registration_Info_UClass_UROS2JointTrajMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2JointTrajMsg), 4162962558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h__Script_rclUE_1522812044(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
