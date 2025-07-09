// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2TwistCov.h"
#include "rclUE/Public/Msgs/ROS2Twist.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2TwistCov() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TwistCovMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TwistCovMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwist();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwistCov();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTwistCov ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTwistCov;
class UScriptStruct* FROSTwistCov::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTwistCov.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTwistCov.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTwistCov, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTwistCov"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTwistCov.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTwistCov_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "ROSTwistCov" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Covariance_MetaData[] = {
		{ "Category", "ROSTwistCov" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCov.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Covariance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Covariance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTwistCov>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTwistCov_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTwistCov, Twist), Z_Construct_UScriptStruct_FROSTwist, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) }; // 3641426361
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSTwistCov_Statics::NewProp_Covariance_Inner = { "Covariance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSTwistCov_Statics::NewProp_Covariance = { "Covariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTwistCov, Covariance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Covariance_MetaData), NewProp_Covariance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTwistCov_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTwistCov_Statics::NewProp_Twist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTwistCov_Statics::NewProp_Covariance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTwistCov_Statics::NewProp_Covariance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistCov_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTwistCov_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTwistCov",
	Z_Construct_UScriptStruct_FROSTwistCov_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistCov_Statics::PropPointers),
	sizeof(FROSTwistCov),
	alignof(FROSTwistCov),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistCov_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTwistCov_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTwistCov()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTwistCov.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTwistCov.InnerSingleton, Z_Construct_UScriptStruct_FROSTwistCov_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTwistCov.InnerSingleton;
}
// ********** End ScriptStruct FROSTwistCov ********************************************************

// ********** Begin Class UROS2TwistCovMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics
{
	struct ROS2TwistCovMsg_eventGetMsg_Parms
	{
		FROSTwistCov Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCov.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TwistCovMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTwistCov, METADATA_PARAMS(0, nullptr) }; // 2843877648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TwistCovMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::ROS2TwistCovMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::ROS2TwistCovMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TwistCovMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTwistCov,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TwistCovMsg Function GetMsg *******************************************

// ********** Begin Class UROS2TwistCovMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics
{
	struct ROS2TwistCovMsg_eventSetMsg_Parms
	{
		FROSTwistCov Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCov.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TwistCovMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTwistCov, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2843877648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TwistCovMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::ROS2TwistCovMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::ROS2TwistCovMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TwistCovMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTwistCov,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TwistCovMsg Function SetMsg *******************************************

// ********** Begin Class UROS2TwistCovMsg *********************************************************
void UROS2TwistCovMsg::StaticRegisterNativesUROS2TwistCovMsg()
{
	UClass* Class = UROS2TwistCovMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2TwistCovMsg::execGetMsg },
		{ "SetMsg", &UROS2TwistCovMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TwistCovMsg;
UClass* UROS2TwistCovMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TwistCovMsg;
	if (!Z_Registration_Info_UClass_UROS2TwistCovMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TwistCovMsg"),
			Z_Registration_Info_UClass_UROS2TwistCovMsg.InnerSingleton,
			StaticRegisterNativesUROS2TwistCovMsg,
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
	return Z_Registration_Info_UClass_UROS2TwistCovMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TwistCovMsg_NoRegister()
{
	return UROS2TwistCovMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TwistCovMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2TwistCov.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCov.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TwistCovMsg_GetMsg, "GetMsg" }, // 3005545329
		{ &Z_Construct_UFunction_UROS2TwistCovMsg_SetMsg, "SetMsg" }, // 2161908375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TwistCovMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TwistCovMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TwistCovMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TwistCovMsg_Statics::ClassParams = {
	&UROS2TwistCovMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TwistCovMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TwistCovMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TwistCovMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TwistCovMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TwistCovMsg.OuterSingleton, Z_Construct_UClass_UROS2TwistCovMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TwistCovMsg.OuterSingleton;
}
UROS2TwistCovMsg::UROS2TwistCovMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TwistCovMsg);
UROS2TwistCovMsg::~UROS2TwistCovMsg() {}
// ********** End Class UROS2TwistCovMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTwistCov::StaticStruct, Z_Construct_UScriptStruct_FROSTwistCov_Statics::NewStructOps, TEXT("ROSTwistCov"), &Z_Registration_Info_UScriptStruct_FROSTwistCov, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTwistCov), 2843877648U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TwistCovMsg, UROS2TwistCovMsg::StaticClass, TEXT("UROS2TwistCovMsg"), &Z_Registration_Info_UClass_UROS2TwistCovMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TwistCovMsg), 327417770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h__Script_rclUE_3370752165(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
