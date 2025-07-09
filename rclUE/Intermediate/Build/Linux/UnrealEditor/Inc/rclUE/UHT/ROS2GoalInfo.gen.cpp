// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2GoalInfo.h"
#include "rclUE/Public/Msgs/ROS2Time.h"
#include "rclUE/Public/Msgs/ROS2UUID.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GoalInfo() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GoalInfoMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GoalInfoMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGoalInfo();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTime();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSUUID();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGoalInfo ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGoalInfo;
class UScriptStruct* FROSGoalInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGoalInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGoalInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGoalInfo, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGoalInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGoalInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGoalInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalId_MetaData[] = {
		{ "Category", "ROSGoalInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamp_MetaData[] = {
		{ "Category", "ROSGoalInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGoalInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGoalInfo_Statics::NewProp_GoalId = { "GoalId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalInfo, GoalId), Z_Construct_UScriptStruct_FROSUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalId_MetaData), NewProp_GoalId_MetaData) }; // 720255440
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGoalInfo_Statics::NewProp_Stamp = { "Stamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalInfo, Stamp), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamp_MetaData), NewProp_Stamp_MetaData) }; // 3189130280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGoalInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalInfo_Statics::NewProp_GoalId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalInfo_Statics::NewProp_Stamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGoalInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGoalInfo",
	Z_Construct_UScriptStruct_FROSGoalInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalInfo_Statics::PropPointers),
	sizeof(FROSGoalInfo),
	alignof(FROSGoalInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGoalInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGoalInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGoalInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGoalInfo.InnerSingleton, Z_Construct_UScriptStruct_FROSGoalInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGoalInfo.InnerSingleton;
}
// ********** End ScriptStruct FROSGoalInfo ********************************************************

// ********** Begin Class UROS2GoalInfoMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics
{
	struct ROS2GoalInfoMsg_eventGetMsg_Parms
	{
		FROSGoalInfo Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalInfoMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSGoalInfo, METADATA_PARAMS(0, nullptr) }; // 3781129582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalInfoMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::ROS2GoalInfoMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::ROS2GoalInfoMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalInfoMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSGoalInfo,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2GoalInfoMsg Function GetMsg *******************************************

// ********** Begin Class UROS2GoalInfoMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics
{
	struct ROS2GoalInfoMsg_eventSetMsg_Parms
	{
		FROSGoalInfo Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalInfoMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSGoalInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3781129582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalInfoMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::ROS2GoalInfoMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::ROS2GoalInfoMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalInfoMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSGoalInfo,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2GoalInfoMsg Function SetMsg *******************************************

// ********** Begin Class UROS2GoalInfoMsg *********************************************************
void UROS2GoalInfoMsg::StaticRegisterNativesUROS2GoalInfoMsg()
{
	UClass* Class = UROS2GoalInfoMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2GoalInfoMsg::execGetMsg },
		{ "SetMsg", &UROS2GoalInfoMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GoalInfoMsg;
UClass* UROS2GoalInfoMsg::GetPrivateStaticClass()
{
	using TClass = UROS2GoalInfoMsg;
	if (!Z_Registration_Info_UClass_UROS2GoalInfoMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GoalInfoMsg"),
			Z_Registration_Info_UClass_UROS2GoalInfoMsg.InnerSingleton,
			StaticRegisterNativesUROS2GoalInfoMsg,
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
	return Z_Registration_Info_UClass_UROS2GoalInfoMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GoalInfoMsg_NoRegister()
{
	return UROS2GoalInfoMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GoalInfoMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2GoalInfo.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GoalInfoMsg_GetMsg, "GetMsg" }, // 475999073
		{ &Z_Construct_UFunction_UROS2GoalInfoMsg_SetMsg, "SetMsg" }, // 2641887079
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GoalInfoMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GoalInfoMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GoalInfoMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GoalInfoMsg_Statics::ClassParams = {
	&UROS2GoalInfoMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GoalInfoMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GoalInfoMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GoalInfoMsg()
{
	if (!Z_Registration_Info_UClass_UROS2GoalInfoMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GoalInfoMsg.OuterSingleton, Z_Construct_UClass_UROS2GoalInfoMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GoalInfoMsg.OuterSingleton;
}
UROS2GoalInfoMsg::UROS2GoalInfoMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GoalInfoMsg);
UROS2GoalInfoMsg::~UROS2GoalInfoMsg() {}
// ********** End Class UROS2GoalInfoMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGoalInfo::StaticStruct, Z_Construct_UScriptStruct_FROSGoalInfo_Statics::NewStructOps, TEXT("ROSGoalInfo"), &Z_Registration_Info_UScriptStruct_FROSGoalInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGoalInfo), 3781129582U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GoalInfoMsg, UROS2GoalInfoMsg::StaticClass, TEXT("UROS2GoalInfoMsg"), &Z_Registration_Info_UClass_UROS2GoalInfoMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GoalInfoMsg), 869796410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h__Script_rclUE_4230692555(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
