// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2SimState.h"
#include "rclUE/Public/Msgs/ROS2Acc.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"
#include "rclUE/Public/Msgs/ROS2Twist.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SimState() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAcc();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwist();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2SimStateMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2SimStateMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSSimState();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSimState ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSimState;
class UScriptStruct* FROSSimState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSimState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSimState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSimState, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSSimState"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSimState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSimState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SimState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSSimState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SimState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSSimState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SimState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "ROSSimState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SimState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "ROSSimState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SimState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSimState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSimState_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSimState, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSimState_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSimState, Pose), Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3353158120
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSimState_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSimState, Twist), Z_Construct_UScriptStruct_FROSTwist, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) }; // 3641426361
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSimState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSimState, Acceleration), Z_Construct_UScriptStruct_FROSAcc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) }; // 404115498
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSimState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSimState_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSimState_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSimState_Statics::NewProp_Twist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSimState_Statics::NewProp_Acceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSimState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSimState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSSimState",
	Z_Construct_UScriptStruct_FROSSimState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSimState_Statics::PropPointers),
	sizeof(FROSSimState),
	alignof(FROSSimState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSimState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSimState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSimState()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSimState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSimState.InnerSingleton, Z_Construct_UScriptStruct_FROSSimState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSimState.InnerSingleton;
}
// ********** End ScriptStruct FROSSimState ********************************************************

// ********** Begin Class UROS2SimStateMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics
{
	struct ROS2SimStateMsg_eventGetMsg_Parms
	{
		FROSSimState Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SimState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SimStateMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSSimState, METADATA_PARAMS(0, nullptr) }; // 2846641338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SimStateMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::ROS2SimStateMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::ROS2SimStateMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SimStateMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SimStateMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SimStateMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSSimState,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2SimStateMsg Function GetMsg *******************************************

// ********** Begin Class UROS2SimStateMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics
{
	struct ROS2SimStateMsg_eventSetMsg_Parms
	{
		FROSSimState Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SimState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SimStateMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSSimState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2846641338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SimStateMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::ROS2SimStateMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::ROS2SimStateMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SimStateMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SimStateMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SimStateMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSSimState,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2SimStateMsg Function SetMsg *******************************************

// ********** Begin Class UROS2SimStateMsg *********************************************************
void UROS2SimStateMsg::StaticRegisterNativesUROS2SimStateMsg()
{
	UClass* Class = UROS2SimStateMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2SimStateMsg::execGetMsg },
		{ "SetMsg", &UROS2SimStateMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SimStateMsg;
UClass* UROS2SimStateMsg::GetPrivateStaticClass()
{
	using TClass = UROS2SimStateMsg;
	if (!Z_Registration_Info_UClass_UROS2SimStateMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SimStateMsg"),
			Z_Registration_Info_UClass_UROS2SimStateMsg.InnerSingleton,
			StaticRegisterNativesUROS2SimStateMsg,
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
	return Z_Registration_Info_UClass_UROS2SimStateMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SimStateMsg_NoRegister()
{
	return UROS2SimStateMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SimStateMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2SimState.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SimState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SimStateMsg_GetMsg, "GetMsg" }, // 1827600540
		{ &Z_Construct_UFunction_UROS2SimStateMsg_SetMsg, "SetMsg" }, // 1115772296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SimStateMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SimStateMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SimStateMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SimStateMsg_Statics::ClassParams = {
	&UROS2SimStateMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SimStateMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SimStateMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SimStateMsg()
{
	if (!Z_Registration_Info_UClass_UROS2SimStateMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SimStateMsg.OuterSingleton, Z_Construct_UClass_UROS2SimStateMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SimStateMsg.OuterSingleton;
}
UROS2SimStateMsg::UROS2SimStateMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SimStateMsg);
UROS2SimStateMsg::~UROS2SimStateMsg() {}
// ********** End Class UROS2SimStateMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2SimState_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSimState::StaticStruct, Z_Construct_UScriptStruct_FROSSimState_Statics::NewStructOps, TEXT("ROSSimState"), &Z_Registration_Info_UScriptStruct_FROSSimState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSimState), 2846641338U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SimStateMsg, UROS2SimStateMsg::StaticClass, TEXT("UROS2SimStateMsg"), &Z_Registration_Info_UClass_UROS2SimStateMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SimStateMsg), 525112420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2SimState_h__Script_UnrealRosFlight_3021508465(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2SimState_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2SimState_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2SimState_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2SimState_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
