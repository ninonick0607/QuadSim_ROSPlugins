// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Imu.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Imu() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2ImuMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2ImuMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSImu();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSImu ***********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSImu;
class UScriptStruct* FROSImu::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSImu.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSImu.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSImu, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSImu"));
	}
	return Z_Registration_Info_UScriptStruct_FROSImu.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSImu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSImu" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "ROSImu" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationCovariance_MetaData[] = {
		{ "Category", "ROSImu" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "ROSImu" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityCovariance_MetaData[] = {
		{ "Category", "ROSImu" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearAcceleration_MetaData[] = {
		{ "Category", "ROSImu" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearAccelerationCovariance_MetaData[] = {
		{ "Category", "ROSImu" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OrientationCovariance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrientationCovariance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularVelocityCovariance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AngularVelocityCovariance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAcceleration;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearAccelerationCovariance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinearAccelerationCovariance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSImu>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImu, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImu, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_OrientationCovariance_Inner = { "OrientationCovariance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_OrientationCovariance = { "OrientationCovariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImu, OrientationCovariance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationCovariance_MetaData), NewProp_OrientationCovariance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImu, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_AngularVelocityCovariance_Inner = { "AngularVelocityCovariance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_AngularVelocityCovariance = { "AngularVelocityCovariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImu, AngularVelocityCovariance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocityCovariance_MetaData), NewProp_AngularVelocityCovariance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_LinearAcceleration = { "LinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImu, LinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearAcceleration_MetaData), NewProp_LinearAcceleration_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_LinearAccelerationCovariance_Inner = { "LinearAccelerationCovariance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_LinearAccelerationCovariance = { "LinearAccelerationCovariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImu, LinearAccelerationCovariance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearAccelerationCovariance_MetaData), NewProp_LinearAccelerationCovariance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSImu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_OrientationCovariance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_OrientationCovariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_AngularVelocityCovariance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_AngularVelocityCovariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_LinearAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_LinearAccelerationCovariance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImu_Statics::NewProp_LinearAccelerationCovariance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSImu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSImu_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSImu",
	Z_Construct_UScriptStruct_FROSImu_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSImu_Statics::PropPointers),
	sizeof(FROSImu),
	alignof(FROSImu),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSImu_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSImu_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSImu()
{
	if (!Z_Registration_Info_UScriptStruct_FROSImu.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSImu.InnerSingleton, Z_Construct_UScriptStruct_FROSImu_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSImu.InnerSingleton;
}
// ********** End ScriptStruct FROSImu *************************************************************

// ********** Begin Class UROS2ImuMsg Function GetMsg **********************************************
struct Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics
{
	struct ROS2ImuMsg_eventGetMsg_Parms
	{
		FROSImu Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImuMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSImu, METADATA_PARAMS(0, nullptr) }; // 3246247096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImuMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::ROS2ImuMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::ROS2ImuMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImuMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImuMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImuMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSImu,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2ImuMsg Function GetMsg ************************************************

// ********** Begin Class UROS2ImuMsg Function SetMsg **********************************************
struct Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics
{
	struct ROS2ImuMsg_eventSetMsg_Parms
	{
		FROSImu Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImuMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSImu, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3246247096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImuMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::ROS2ImuMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::ROS2ImuMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImuMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImuMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImuMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSImu,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2ImuMsg Function SetMsg ************************************************

// ********** Begin Class UROS2ImuMsg **************************************************************
void UROS2ImuMsg::StaticRegisterNativesUROS2ImuMsg()
{
	UClass* Class = UROS2ImuMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2ImuMsg::execGetMsg },
		{ "SetMsg", &UROS2ImuMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ImuMsg;
UClass* UROS2ImuMsg::GetPrivateStaticClass()
{
	using TClass = UROS2ImuMsg;
	if (!Z_Registration_Info_UClass_UROS2ImuMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ImuMsg"),
			Z_Registration_Info_UClass_UROS2ImuMsg.InnerSingleton,
			StaticRegisterNativesUROS2ImuMsg,
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
	return Z_Registration_Info_UClass_UROS2ImuMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ImuMsg_NoRegister()
{
	return UROS2ImuMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ImuMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Imu.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Imu.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ImuMsg_GetMsg, "GetMsg" }, // 1769821274
		{ &Z_Construct_UFunction_UROS2ImuMsg_SetMsg, "SetMsg" }, // 484181409
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ImuMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ImuMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ImuMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ImuMsg_Statics::ClassParams = {
	&UROS2ImuMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ImuMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ImuMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ImuMsg()
{
	if (!Z_Registration_Info_UClass_UROS2ImuMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ImuMsg.OuterSingleton, Z_Construct_UClass_UROS2ImuMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ImuMsg.OuterSingleton;
}
UROS2ImuMsg::UROS2ImuMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ImuMsg);
UROS2ImuMsg::~UROS2ImuMsg() {}
// ********** End Class UROS2ImuMsg ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Imu_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSImu::StaticStruct, Z_Construct_UScriptStruct_FROSImu_Statics::NewStructOps, TEXT("ROSImu"), &Z_Registration_Info_UScriptStruct_FROSImu, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSImu), 3246247096U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ImuMsg, UROS2ImuMsg::StaticClass, TEXT("UROS2ImuMsg"), &Z_Registration_Info_UClass_UROS2ImuMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ImuMsg), 1537536697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Imu_h__Script_rclUE_2965929335(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Imu_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Imu_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Imu_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Imu_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
