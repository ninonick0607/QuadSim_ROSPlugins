// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2IMPose.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2IMPose() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMPoseMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMPoseMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIMPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSIMPose ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSIMPose;
class UScriptStruct* FROSIMPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSIMPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSIMPose, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSIMPose"));
	}
	return Z_Registration_Info_UScriptStruct_FROSIMPose.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSIMPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSIMPose" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSIMPose" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSIMPose" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSIMPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMPose_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMPose, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMPose, Pose), Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3353158120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMPose_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMPose, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSIMPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMPose_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMPose_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMPose_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSIMPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSIMPose",
	Z_Construct_UScriptStruct_FROSIMPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMPose_Statics::PropPointers),
	sizeof(FROSIMPose),
	alignof(FROSIMPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSIMPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSIMPose()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSIMPose.InnerSingleton, Z_Construct_UScriptStruct_FROSIMPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSIMPose.InnerSingleton;
}
// ********** End ScriptStruct FROSIMPose **********************************************************

// ********** Begin Class UROS2IMPoseMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics
{
	struct ROS2IMPoseMsg_eventGetMsg_Parms
	{
		FROSIMPose Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMPoseMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSIMPose, METADATA_PARAMS(0, nullptr) }; // 1259942634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMPoseMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::ROS2IMPoseMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::ROS2IMPoseMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMPoseMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSIMPose,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2IMPoseMsg Function GetMsg *********************************************

// ********** Begin Class UROS2IMPoseMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics
{
	struct ROS2IMPoseMsg_eventSetMsg_Parms
	{
		FROSIMPose Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMPoseMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSIMPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1259942634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMPoseMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::ROS2IMPoseMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::ROS2IMPoseMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMPoseMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSIMPose,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2IMPoseMsg Function SetMsg *********************************************

// ********** Begin Class UROS2IMPoseMsg ***********************************************************
void UROS2IMPoseMsg::StaticRegisterNativesUROS2IMPoseMsg()
{
	UClass* Class = UROS2IMPoseMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2IMPoseMsg::execGetMsg },
		{ "SetMsg", &UROS2IMPoseMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2IMPoseMsg;
UClass* UROS2IMPoseMsg::GetPrivateStaticClass()
{
	using TClass = UROS2IMPoseMsg;
	if (!Z_Registration_Info_UClass_UROS2IMPoseMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2IMPoseMsg"),
			Z_Registration_Info_UClass_UROS2IMPoseMsg.InnerSingleton,
			StaticRegisterNativesUROS2IMPoseMsg,
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
	return Z_Registration_Info_UClass_UROS2IMPoseMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2IMPoseMsg_NoRegister()
{
	return UROS2IMPoseMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2IMPoseMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2IMPose.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMPose.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2IMPoseMsg_GetMsg, "GetMsg" }, // 655508261
		{ &Z_Construct_UFunction_UROS2IMPoseMsg_SetMsg, "SetMsg" }, // 3134559116
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2IMPoseMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2IMPoseMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMPoseMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2IMPoseMsg_Statics::ClassParams = {
	&UROS2IMPoseMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMPoseMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2IMPoseMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2IMPoseMsg()
{
	if (!Z_Registration_Info_UClass_UROS2IMPoseMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2IMPoseMsg.OuterSingleton, Z_Construct_UClass_UROS2IMPoseMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2IMPoseMsg.OuterSingleton;
}
UROS2IMPoseMsg::UROS2IMPoseMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2IMPoseMsg);
UROS2IMPoseMsg::~UROS2IMPoseMsg() {}
// ********** End Class UROS2IMPoseMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSIMPose::StaticStruct, Z_Construct_UScriptStruct_FROSIMPose_Statics::NewStructOps, TEXT("ROSIMPose"), &Z_Registration_Info_UScriptStruct_FROSIMPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSIMPose), 1259942634U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2IMPoseMsg, UROS2IMPoseMsg::StaticClass, TEXT("UROS2IMPoseMsg"), &Z_Registration_Info_UClass_UROS2IMPoseMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2IMPoseMsg), 861382249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h__Script_rclUE_725710585(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
