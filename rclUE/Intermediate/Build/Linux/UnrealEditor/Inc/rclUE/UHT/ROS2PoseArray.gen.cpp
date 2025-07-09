// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PoseArray.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PoseArray() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PoseArrayMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PoseArrayMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoseArray();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPoseArray *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPoseArray;
class UScriptStruct* FROSPoseArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPoseArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPoseArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPoseArray, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPoseArray"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPoseArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPoseArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPoseArray" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[] = {
		{ "Category", "ROSPoseArray" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPoseArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPoseArray_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoseArray, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPoseArray_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(0, nullptr) }; // 3353158120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPoseArray_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoseArray, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Poses_MetaData), NewProp_Poses_MetaData) }; // 3353158120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPoseArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoseArray_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoseArray_Statics::NewProp_Poses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoseArray_Statics::NewProp_Poses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPoseArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPoseArray",
	Z_Construct_UScriptStruct_FROSPoseArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseArray_Statics::PropPointers),
	sizeof(FROSPoseArray),
	alignof(FROSPoseArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPoseArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPoseArray()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPoseArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPoseArray.InnerSingleton, Z_Construct_UScriptStruct_FROSPoseArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPoseArray.InnerSingleton;
}
// ********** End ScriptStruct FROSPoseArray *******************************************************

// ********** Begin Class UROS2PoseArrayMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics
{
	struct ROS2PoseArrayMsg_eventGetMsg_Parms
	{
		FROSPoseArray Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PoseArrayMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPoseArray, METADATA_PARAMS(0, nullptr) }; // 3470354650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PoseArrayMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::ROS2PoseArrayMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::ROS2PoseArrayMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PoseArrayMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPoseArray,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PoseArrayMsg Function GetMsg ******************************************

// ********** Begin Class UROS2PoseArrayMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics
{
	struct ROS2PoseArrayMsg_eventSetMsg_Parms
	{
		FROSPoseArray Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PoseArrayMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPoseArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3470354650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PoseArrayMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::ROS2PoseArrayMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::ROS2PoseArrayMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PoseArrayMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPoseArray,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PoseArrayMsg Function SetMsg ******************************************

// ********** Begin Class UROS2PoseArrayMsg ********************************************************
void UROS2PoseArrayMsg::StaticRegisterNativesUROS2PoseArrayMsg()
{
	UClass* Class = UROS2PoseArrayMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PoseArrayMsg::execGetMsg },
		{ "SetMsg", &UROS2PoseArrayMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PoseArrayMsg;
UClass* UROS2PoseArrayMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PoseArrayMsg;
	if (!Z_Registration_Info_UClass_UROS2PoseArrayMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PoseArrayMsg"),
			Z_Registration_Info_UClass_UROS2PoseArrayMsg.InnerSingleton,
			StaticRegisterNativesUROS2PoseArrayMsg,
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
	return Z_Registration_Info_UClass_UROS2PoseArrayMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PoseArrayMsg_NoRegister()
{
	return UROS2PoseArrayMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PoseArrayMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PoseArray.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseArray.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PoseArrayMsg_GetMsg, "GetMsg" }, // 3082441447
		{ &Z_Construct_UFunction_UROS2PoseArrayMsg_SetMsg, "SetMsg" }, // 944412897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PoseArrayMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PoseArrayMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PoseArrayMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PoseArrayMsg_Statics::ClassParams = {
	&UROS2PoseArrayMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PoseArrayMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PoseArrayMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PoseArrayMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PoseArrayMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PoseArrayMsg.OuterSingleton, Z_Construct_UClass_UROS2PoseArrayMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PoseArrayMsg.OuterSingleton;
}
UROS2PoseArrayMsg::UROS2PoseArrayMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PoseArrayMsg);
UROS2PoseArrayMsg::~UROS2PoseArrayMsg() {}
// ********** End Class UROS2PoseArrayMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPoseArray::StaticStruct, Z_Construct_UScriptStruct_FROSPoseArray_Statics::NewStructOps, TEXT("ROSPoseArray"), &Z_Registration_Info_UScriptStruct_FROSPoseArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPoseArray), 3470354650U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PoseArrayMsg, UROS2PoseArrayMsg::StaticClass, TEXT("UROS2PoseArrayMsg"), &Z_Registration_Info_UClass_UROS2PoseArrayMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PoseArrayMsg), 1287884085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h__Script_rclUE_2710452840(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
