// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2GoalID.h"
#include "rclUE/Public/Msgs/ROS2Time.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GoalID() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GoalIDMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GoalIDMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGoalID();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTime();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGoalID ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGoalID;
class UScriptStruct* FROSGoalID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGoalID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGoalID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGoalID, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGoalID"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGoalID.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGoalID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamp_MetaData[] = {
		{ "Category", "ROSGoalID" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ROSGoalID" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGoalID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGoalID_Statics::NewProp_Stamp = { "Stamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalID, Stamp), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamp_MetaData), NewProp_Stamp_MetaData) }; // 3189130280
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSGoalID_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalID, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGoalID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalID_Statics::NewProp_Stamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalID_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGoalID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGoalID",
	Z_Construct_UScriptStruct_FROSGoalID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalID_Statics::PropPointers),
	sizeof(FROSGoalID),
	alignof(FROSGoalID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGoalID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGoalID()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGoalID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGoalID.InnerSingleton, Z_Construct_UScriptStruct_FROSGoalID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGoalID.InnerSingleton;
}
// ********** End ScriptStruct FROSGoalID **********************************************************

// ********** Begin Class UROS2GoalIDMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics
{
	struct ROS2GoalIDMsg_eventGetMsg_Parms
	{
		FROSGoalID Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalIDMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSGoalID, METADATA_PARAMS(0, nullptr) }; // 1299629594
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalIDMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::ROS2GoalIDMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::ROS2GoalIDMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalIDMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSGoalID,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2GoalIDMsg Function GetMsg *********************************************

// ********** Begin Class UROS2GoalIDMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics
{
	struct ROS2GoalIDMsg_eventSetMsg_Parms
	{
		FROSGoalID Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalIDMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSGoalID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1299629594
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalIDMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::ROS2GoalIDMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::ROS2GoalIDMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalIDMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSGoalID,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2GoalIDMsg Function SetMsg *********************************************

// ********** Begin Class UROS2GoalIDMsg ***********************************************************
void UROS2GoalIDMsg::StaticRegisterNativesUROS2GoalIDMsg()
{
	UClass* Class = UROS2GoalIDMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2GoalIDMsg::execGetMsg },
		{ "SetMsg", &UROS2GoalIDMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GoalIDMsg;
UClass* UROS2GoalIDMsg::GetPrivateStaticClass()
{
	using TClass = UROS2GoalIDMsg;
	if (!Z_Registration_Info_UClass_UROS2GoalIDMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GoalIDMsg"),
			Z_Registration_Info_UClass_UROS2GoalIDMsg.InnerSingleton,
			StaticRegisterNativesUROS2GoalIDMsg,
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
	return Z_Registration_Info_UClass_UROS2GoalIDMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GoalIDMsg_NoRegister()
{
	return UROS2GoalIDMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GoalIDMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2GoalID.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalID.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GoalIDMsg_GetMsg, "GetMsg" }, // 246636986
		{ &Z_Construct_UFunction_UROS2GoalIDMsg_SetMsg, "SetMsg" }, // 744829596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GoalIDMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GoalIDMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GoalIDMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GoalIDMsg_Statics::ClassParams = {
	&UROS2GoalIDMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GoalIDMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GoalIDMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GoalIDMsg()
{
	if (!Z_Registration_Info_UClass_UROS2GoalIDMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GoalIDMsg.OuterSingleton, Z_Construct_UClass_UROS2GoalIDMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GoalIDMsg.OuterSingleton;
}
UROS2GoalIDMsg::UROS2GoalIDMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GoalIDMsg);
UROS2GoalIDMsg::~UROS2GoalIDMsg() {}
// ********** End Class UROS2GoalIDMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalID_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGoalID::StaticStruct, Z_Construct_UScriptStruct_FROSGoalID_Statics::NewStructOps, TEXT("ROSGoalID"), &Z_Registration_Info_UScriptStruct_FROSGoalID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGoalID), 1299629594U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GoalIDMsg, UROS2GoalIDMsg::StaticClass, TEXT("UROS2GoalIDMsg"), &Z_Registration_Info_UClass_UROS2GoalIDMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GoalIDMsg), 477846064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalID_h__Script_rclUE_3409908134(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalID_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalID_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalID_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalID_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
