// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PoseCov.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PoseCov() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PoseCovMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PoseCovMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoseCov();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPoseCov *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPoseCov;
class UScriptStruct* FROSPoseCov::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPoseCov.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPoseCov.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPoseCov, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPoseCov"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPoseCov.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPoseCov_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSPoseCov" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Covariance_MetaData[] = {
		{ "Category", "ROSPoseCov" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCov.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Covariance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Covariance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPoseCov>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPoseCov_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoseCov, Pose), Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3353158120
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSPoseCov_Statics::NewProp_Covariance_Inner = { "Covariance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPoseCov_Statics::NewProp_Covariance = { "Covariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoseCov, Covariance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Covariance_MetaData), NewProp_Covariance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPoseCov_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoseCov_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoseCov_Statics::NewProp_Covariance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoseCov_Statics::NewProp_Covariance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseCov_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPoseCov_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPoseCov",
	Z_Construct_UScriptStruct_FROSPoseCov_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseCov_Statics::PropPointers),
	sizeof(FROSPoseCov),
	alignof(FROSPoseCov),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseCov_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPoseCov_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPoseCov()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPoseCov.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPoseCov.InnerSingleton, Z_Construct_UScriptStruct_FROSPoseCov_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPoseCov.InnerSingleton;
}
// ********** End ScriptStruct FROSPoseCov *********************************************************

// ********** Begin Class UROS2PoseCovMsg Function GetMsg ******************************************
struct Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics
{
	struct ROS2PoseCovMsg_eventGetMsg_Parms
	{
		FROSPoseCov Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCov.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PoseCovMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPoseCov, METADATA_PARAMS(0, nullptr) }; // 60953764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PoseCovMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::ROS2PoseCovMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::ROS2PoseCovMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PoseCovMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPoseCov,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PoseCovMsg Function GetMsg ********************************************

// ********** Begin Class UROS2PoseCovMsg Function SetMsg ******************************************
struct Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics
{
	struct ROS2PoseCovMsg_eventSetMsg_Parms
	{
		FROSPoseCov Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PoseCovMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPoseCov, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 60953764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PoseCovMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::ROS2PoseCovMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::ROS2PoseCovMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PoseCovMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPoseCov,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PoseCovMsg Function SetMsg ********************************************

// ********** Begin Class UROS2PoseCovMsg **********************************************************
void UROS2PoseCovMsg::StaticRegisterNativesUROS2PoseCovMsg()
{
	UClass* Class = UROS2PoseCovMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PoseCovMsg::execGetMsg },
		{ "SetMsg", &UROS2PoseCovMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PoseCovMsg;
UClass* UROS2PoseCovMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PoseCovMsg;
	if (!Z_Registration_Info_UClass_UROS2PoseCovMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PoseCovMsg"),
			Z_Registration_Info_UClass_UROS2PoseCovMsg.InnerSingleton,
			StaticRegisterNativesUROS2PoseCovMsg,
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
	return Z_Registration_Info_UClass_UROS2PoseCovMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PoseCovMsg_NoRegister()
{
	return UROS2PoseCovMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PoseCovMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PoseCov.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCov.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PoseCovMsg_GetMsg, "GetMsg" }, // 3481309256
		{ &Z_Construct_UFunction_UROS2PoseCovMsg_SetMsg, "SetMsg" }, // 2147279271
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PoseCovMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PoseCovMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PoseCovMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PoseCovMsg_Statics::ClassParams = {
	&UROS2PoseCovMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PoseCovMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PoseCovMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PoseCovMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PoseCovMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PoseCovMsg.OuterSingleton, Z_Construct_UClass_UROS2PoseCovMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PoseCovMsg.OuterSingleton;
}
UROS2PoseCovMsg::UROS2PoseCovMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PoseCovMsg);
UROS2PoseCovMsg::~UROS2PoseCovMsg() {}
// ********** End Class UROS2PoseCovMsg ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCov_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPoseCov::StaticStruct, Z_Construct_UScriptStruct_FROSPoseCov_Statics::NewStructOps, TEXT("ROSPoseCov"), &Z_Registration_Info_UScriptStruct_FROSPoseCov, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPoseCov), 60953764U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PoseCovMsg, UROS2PoseCovMsg::StaticClass, TEXT("UROS2PoseCovMsg"), &Z_Registration_Info_UClass_UROS2PoseCovMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PoseCovMsg), 1519616599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCov_h__Script_rclUE_4276124569(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCov_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCov_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCov_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCov_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
