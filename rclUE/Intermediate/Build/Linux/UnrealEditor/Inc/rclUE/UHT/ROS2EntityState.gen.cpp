// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2EntityState.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"
#include "rclUE/Public/Msgs/ROS2Twist.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2EntityState() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2EntityStateMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2EntityStateMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSEntityState();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwist();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSEntityState ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSEntityState;
class UScriptStruct* FROSEntityState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSEntityState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSEntityState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSEntityState, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSEntityState"));
	}
	return Z_Registration_Info_UScriptStruct_FROSEntityState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSEntityState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2EntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSEntityState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2EntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSEntityState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2EntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "ROSEntityState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2EntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrame_MetaData[] = {
		{ "Category", "ROSEntityState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2EntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferenceFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSEntityState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSEntityState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSEntityState, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSEntityState_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSEntityState, Pose), Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3353158120
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSEntityState_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSEntityState, Twist), Z_Construct_UScriptStruct_FROSTwist, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) }; // 3641426361
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSEntityState_Statics::NewProp_ReferenceFrame = { "ReferenceFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSEntityState, ReferenceFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceFrame_MetaData), NewProp_ReferenceFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSEntityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSEntityState_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSEntityState_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSEntityState_Statics::NewProp_Twist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSEntityState_Statics::NewProp_ReferenceFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSEntityState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSEntityState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSEntityState",
	Z_Construct_UScriptStruct_FROSEntityState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSEntityState_Statics::PropPointers),
	sizeof(FROSEntityState),
	alignof(FROSEntityState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSEntityState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSEntityState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSEntityState()
{
	if (!Z_Registration_Info_UScriptStruct_FROSEntityState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSEntityState.InnerSingleton, Z_Construct_UScriptStruct_FROSEntityState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSEntityState.InnerSingleton;
}
// ********** End ScriptStruct FROSEntityState *****************************************************

// ********** Begin Class UROS2EntityStateMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics
{
	struct ROS2EntityStateMsg_eventGetMsg_Parms
	{
		FROSEntityState Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2EntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2EntityStateMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSEntityState, METADATA_PARAMS(0, nullptr) }; // 2945648753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2EntityStateMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::ROS2EntityStateMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::ROS2EntityStateMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2EntityStateMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSEntityState,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2EntityStateMsg Function GetMsg ****************************************

// ********** Begin Class UROS2EntityStateMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics
{
	struct ROS2EntityStateMsg_eventSetMsg_Parms
	{
		FROSEntityState Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2EntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2EntityStateMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSEntityState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2945648753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2EntityStateMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::ROS2EntityStateMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::ROS2EntityStateMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2EntityStateMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSEntityState,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2EntityStateMsg Function SetMsg ****************************************

// ********** Begin Class UROS2EntityStateMsg ******************************************************
void UROS2EntityStateMsg::StaticRegisterNativesUROS2EntityStateMsg()
{
	UClass* Class = UROS2EntityStateMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2EntityStateMsg::execGetMsg },
		{ "SetMsg", &UROS2EntityStateMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2EntityStateMsg;
UClass* UROS2EntityStateMsg::GetPrivateStaticClass()
{
	using TClass = UROS2EntityStateMsg;
	if (!Z_Registration_Info_UClass_UROS2EntityStateMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2EntityStateMsg"),
			Z_Registration_Info_UClass_UROS2EntityStateMsg.InnerSingleton,
			StaticRegisterNativesUROS2EntityStateMsg,
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
	return Z_Registration_Info_UClass_UROS2EntityStateMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2EntityStateMsg_NoRegister()
{
	return UROS2EntityStateMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2EntityStateMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2EntityState.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2EntityState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2EntityStateMsg_GetMsg, "GetMsg" }, // 116011379
		{ &Z_Construct_UFunction_UROS2EntityStateMsg_SetMsg, "SetMsg" }, // 2290943064
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2EntityStateMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2EntityStateMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2EntityStateMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2EntityStateMsg_Statics::ClassParams = {
	&UROS2EntityStateMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2EntityStateMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2EntityStateMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2EntityStateMsg()
{
	if (!Z_Registration_Info_UClass_UROS2EntityStateMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2EntityStateMsg.OuterSingleton, Z_Construct_UClass_UROS2EntityStateMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2EntityStateMsg.OuterSingleton;
}
UROS2EntityStateMsg::UROS2EntityStateMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2EntityStateMsg);
UROS2EntityStateMsg::~UROS2EntityStateMsg() {}
// ********** End Class UROS2EntityStateMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSEntityState::StaticStruct, Z_Construct_UScriptStruct_FROSEntityState_Statics::NewStructOps, TEXT("ROSEntityState"), &Z_Registration_Info_UScriptStruct_FROSEntityState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSEntityState), 2945648753U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2EntityStateMsg, UROS2EntityStateMsg::StaticClass, TEXT("UROS2EntityStateMsg"), &Z_Registration_Info_UClass_UROS2EntityStateMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2EntityStateMsg), 1923540604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h__Script_rclUE_1789613695(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
