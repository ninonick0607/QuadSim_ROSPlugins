// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Odom.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2PoseCov.h"
#include "rclUE/Public/Msgs/ROS2TwistCov.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Odom() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OdomMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OdomMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOdom();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoseCov();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwistCov();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSOdom **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSOdom;
class UScriptStruct* FROSOdom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOdom.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSOdom.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSOdom, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSOdom"));
	}
	return Z_Registration_Info_UScriptStruct_FROSOdom.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSOdom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Odom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSOdom" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Odom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildFrameId_MetaData[] = {
		{ "Category", "ROSOdom" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Odom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSOdom" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Odom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "ROSOdom" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Odom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChildFrameId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSOdom>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSOdom_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOdom, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSOdom_Statics::NewProp_ChildFrameId = { "ChildFrameId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOdom, ChildFrameId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildFrameId_MetaData), NewProp_ChildFrameId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSOdom_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOdom, Pose), Z_Construct_UScriptStruct_FROSPoseCov, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 60953764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSOdom_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOdom, Twist), Z_Construct_UScriptStruct_FROSTwistCov, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) }; // 2843877648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSOdom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOdom_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOdom_Statics::NewProp_ChildFrameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOdom_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOdom_Statics::NewProp_Twist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOdom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSOdom_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSOdom",
	Z_Construct_UScriptStruct_FROSOdom_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOdom_Statics::PropPointers),
	sizeof(FROSOdom),
	alignof(FROSOdom),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOdom_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSOdom_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSOdom()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOdom.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSOdom.InnerSingleton, Z_Construct_UScriptStruct_FROSOdom_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSOdom.InnerSingleton;
}
// ********** End ScriptStruct FROSOdom ************************************************************

// ********** Begin Class UROS2OdomMsg Function GetMsg *********************************************
struct Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics
{
	struct ROS2OdomMsg_eventGetMsg_Parms
	{
		FROSOdom Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Odom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OdomMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSOdom, METADATA_PARAMS(0, nullptr) }; // 2419543431
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OdomMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::ROS2OdomMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::ROS2OdomMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OdomMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OdomMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OdomMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSOdom,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2OdomMsg Function GetMsg ***********************************************

// ********** Begin Class UROS2OdomMsg Function SetMsg *********************************************
struct Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics
{
	struct ROS2OdomMsg_eventSetMsg_Parms
	{
		FROSOdom Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Odom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OdomMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSOdom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2419543431
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OdomMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::ROS2OdomMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::ROS2OdomMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OdomMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OdomMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OdomMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSOdom,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2OdomMsg Function SetMsg ***********************************************

// ********** Begin Class UROS2OdomMsg *************************************************************
void UROS2OdomMsg::StaticRegisterNativesUROS2OdomMsg()
{
	UClass* Class = UROS2OdomMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2OdomMsg::execGetMsg },
		{ "SetMsg", &UROS2OdomMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2OdomMsg;
UClass* UROS2OdomMsg::GetPrivateStaticClass()
{
	using TClass = UROS2OdomMsg;
	if (!Z_Registration_Info_UClass_UROS2OdomMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2OdomMsg"),
			Z_Registration_Info_UClass_UROS2OdomMsg.InnerSingleton,
			StaticRegisterNativesUROS2OdomMsg,
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
	return Z_Registration_Info_UClass_UROS2OdomMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2OdomMsg_NoRegister()
{
	return UROS2OdomMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2OdomMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Odom.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Odom.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2OdomMsg_GetMsg, "GetMsg" }, // 126581237
		{ &Z_Construct_UFunction_UROS2OdomMsg_SetMsg, "SetMsg" }, // 336770496
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2OdomMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2OdomMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OdomMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2OdomMsg_Statics::ClassParams = {
	&UROS2OdomMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OdomMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2OdomMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2OdomMsg()
{
	if (!Z_Registration_Info_UClass_UROS2OdomMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2OdomMsg.OuterSingleton, Z_Construct_UClass_UROS2OdomMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2OdomMsg.OuterSingleton;
}
UROS2OdomMsg::UROS2OdomMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2OdomMsg);
UROS2OdomMsg::~UROS2OdomMsg() {}
// ********** End Class UROS2OdomMsg ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Odom_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSOdom::StaticStruct, Z_Construct_UScriptStruct_FROSOdom_Statics::NewStructOps, TEXT("ROSOdom"), &Z_Registration_Info_UScriptStruct_FROSOdom, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSOdom), 2419543431U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2OdomMsg, UROS2OdomMsg::StaticClass, TEXT("UROS2OdomMsg"), &Z_Registration_Info_UClass_UROS2OdomMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2OdomMsg), 1104430528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Odom_h__Script_rclUE_1332734760(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Odom_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Odom_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Odom_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Odom_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
