// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2AccCov.h"
#include "rclUE/Public/Msgs/ROS2Acc.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2AccCov() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2AccCovMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2AccCovMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAcc();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAccCov();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAccCov ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAccCov;
class UScriptStruct* FROSAccCov::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAccCov.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAccCov.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAccCov, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAccCov"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAccCov.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAccCov_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accel_MetaData[] = {
		{ "Category", "ROSAccCov" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Covariance_MetaData[] = {
		{ "Category", "ROSAccCov" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccCov.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Accel;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Covariance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Covariance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAccCov>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAccCov_Statics::NewProp_Accel = { "Accel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAccCov, Accel), Z_Construct_UScriptStruct_FROSAcc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accel_MetaData), NewProp_Accel_MetaData) }; // 404115498
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSAccCov_Statics::NewProp_Covariance_Inner = { "Covariance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSAccCov_Statics::NewProp_Covariance = { "Covariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAccCov, Covariance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Covariance_MetaData), NewProp_Covariance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAccCov_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAccCov_Statics::NewProp_Accel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAccCov_Statics::NewProp_Covariance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAccCov_Statics::NewProp_Covariance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAccCov_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAccCov_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAccCov",
	Z_Construct_UScriptStruct_FROSAccCov_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAccCov_Statics::PropPointers),
	sizeof(FROSAccCov),
	alignof(FROSAccCov),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAccCov_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAccCov_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAccCov()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAccCov.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAccCov.InnerSingleton, Z_Construct_UScriptStruct_FROSAccCov_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAccCov.InnerSingleton;
}
// ********** End ScriptStruct FROSAccCov **********************************************************

// ********** Begin Class UROS2AccCovMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics
{
	struct ROS2AccCovMsg_eventGetMsg_Parms
	{
		FROSAccCov Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccCov.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AccCovMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSAccCov, METADATA_PARAMS(0, nullptr) }; // 3412583379
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AccCovMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::ROS2AccCovMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::ROS2AccCovMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AccCovMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AccCovMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AccCovMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSAccCov,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2AccCovMsg Function GetMsg *********************************************

// ********** Begin Class UROS2AccCovMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics
{
	struct ROS2AccCovMsg_eventSetMsg_Parms
	{
		FROSAccCov Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AccCovMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSAccCov, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3412583379
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AccCovMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::ROS2AccCovMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::ROS2AccCovMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AccCovMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AccCovMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AccCovMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSAccCov,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2AccCovMsg Function SetMsg *********************************************

// ********** Begin Class UROS2AccCovMsg ***********************************************************
void UROS2AccCovMsg::StaticRegisterNativesUROS2AccCovMsg()
{
	UClass* Class = UROS2AccCovMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2AccCovMsg::execGetMsg },
		{ "SetMsg", &UROS2AccCovMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AccCovMsg;
UClass* UROS2AccCovMsg::GetPrivateStaticClass()
{
	using TClass = UROS2AccCovMsg;
	if (!Z_Registration_Info_UClass_UROS2AccCovMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AccCovMsg"),
			Z_Registration_Info_UClass_UROS2AccCovMsg.InnerSingleton,
			StaticRegisterNativesUROS2AccCovMsg,
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
	return Z_Registration_Info_UClass_UROS2AccCovMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AccCovMsg_NoRegister()
{
	return UROS2AccCovMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AccCovMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2AccCov.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccCov.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AccCovMsg_GetMsg, "GetMsg" }, // 1528774914
		{ &Z_Construct_UFunction_UROS2AccCovMsg_SetMsg, "SetMsg" }, // 2099431604
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AccCovMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AccCovMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AccCovMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AccCovMsg_Statics::ClassParams = {
	&UROS2AccCovMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AccCovMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AccCovMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AccCovMsg()
{
	if (!Z_Registration_Info_UClass_UROS2AccCovMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AccCovMsg.OuterSingleton, Z_Construct_UClass_UROS2AccCovMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AccCovMsg.OuterSingleton;
}
UROS2AccCovMsg::UROS2AccCovMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AccCovMsg);
UROS2AccCovMsg::~UROS2AccCovMsg() {}
// ********** End Class UROS2AccCovMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCov_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAccCov::StaticStruct, Z_Construct_UScriptStruct_FROSAccCov_Statics::NewStructOps, TEXT("ROSAccCov"), &Z_Registration_Info_UScriptStruct_FROSAccCov, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAccCov), 3412583379U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AccCovMsg, UROS2AccCovMsg::StaticClass, TEXT("UROS2AccCovMsg"), &Z_Registration_Info_UClass_UROS2AccCovMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AccCovMsg), 560544346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCov_h__Script_rclUE_2941911165(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCov_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCov_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCov_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCov_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
