// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MapMetaData.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"
#include "rclUE/Public/Msgs/ROS2Time.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MapMetaData() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MapMetaDataMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MapMetaDataMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMapMetaData();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTime();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMapMetaData ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMapMetaData;
class UScriptStruct* FROSMapMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMapMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMapMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMapMetaData, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMapMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMapMetaData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMapMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapLoadTime_MetaData[] = {
		{ "Category", "ROSMapMetaData" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "ROSMapMetaData" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "ROSMapMetaData" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "ROSMapMetaData" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "ROSMapMetaData" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapLoadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMapMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_MapLoadTime = { "MapLoadTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMapMetaData, MapLoadTime), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapLoadTime_MetaData), NewProp_MapLoadTime_MetaData) }; // 3189130280
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMapMetaData, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMapMetaData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMapMetaData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMapMetaData, Origin), Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) }; // 3353158120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMapMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_MapLoadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewProp_Origin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMapMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMapMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMapMetaData",
	Z_Construct_UScriptStruct_FROSMapMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMapMetaData_Statics::PropPointers),
	sizeof(FROSMapMetaData),
	alignof(FROSMapMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMapMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMapMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMapMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMapMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMapMetaData.InnerSingleton, Z_Construct_UScriptStruct_FROSMapMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMapMetaData.InnerSingleton;
}
// ********** End ScriptStruct FROSMapMetaData *****************************************************

// ********** Begin Class UROS2MapMetaDataMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics
{
	struct ROS2MapMetaDataMsg_eventGetMsg_Parms
	{
		FROSMapMetaData Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MapMetaDataMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMapMetaData, METADATA_PARAMS(0, nullptr) }; // 2135100871
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MapMetaDataMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::ROS2MapMetaDataMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::ROS2MapMetaDataMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MapMetaDataMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMapMetaData,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MapMetaDataMsg Function GetMsg ****************************************

// ********** Begin Class UROS2MapMetaDataMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics
{
	struct ROS2MapMetaDataMsg_eventSetMsg_Parms
	{
		FROSMapMetaData Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MapMetaDataMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMapMetaData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2135100871
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MapMetaDataMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::ROS2MapMetaDataMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::ROS2MapMetaDataMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MapMetaDataMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMapMetaData,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MapMetaDataMsg Function SetMsg ****************************************

// ********** Begin Class UROS2MapMetaDataMsg ******************************************************
void UROS2MapMetaDataMsg::StaticRegisterNativesUROS2MapMetaDataMsg()
{
	UClass* Class = UROS2MapMetaDataMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2MapMetaDataMsg::execGetMsg },
		{ "SetMsg", &UROS2MapMetaDataMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MapMetaDataMsg;
UClass* UROS2MapMetaDataMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MapMetaDataMsg;
	if (!Z_Registration_Info_UClass_UROS2MapMetaDataMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MapMetaDataMsg"),
			Z_Registration_Info_UClass_UROS2MapMetaDataMsg.InnerSingleton,
			StaticRegisterNativesUROS2MapMetaDataMsg,
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
	return Z_Registration_Info_UClass_UROS2MapMetaDataMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MapMetaDataMsg_NoRegister()
{
	return UROS2MapMetaDataMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MapMetaDataMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MapMetaData.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MapMetaData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MapMetaDataMsg_GetMsg, "GetMsg" }, // 1668398980
		{ &Z_Construct_UFunction_UROS2MapMetaDataMsg_SetMsg, "SetMsg" }, // 3873850832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MapMetaDataMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MapMetaDataMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MapMetaDataMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MapMetaDataMsg_Statics::ClassParams = {
	&UROS2MapMetaDataMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MapMetaDataMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MapMetaDataMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MapMetaDataMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MapMetaDataMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MapMetaDataMsg.OuterSingleton, Z_Construct_UClass_UROS2MapMetaDataMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MapMetaDataMsg.OuterSingleton;
}
UROS2MapMetaDataMsg::UROS2MapMetaDataMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MapMetaDataMsg);
UROS2MapMetaDataMsg::~UROS2MapMetaDataMsg() {}
// ********** End Class UROS2MapMetaDataMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMapMetaData::StaticStruct, Z_Construct_UScriptStruct_FROSMapMetaData_Statics::NewStructOps, TEXT("ROSMapMetaData"), &Z_Registration_Info_UScriptStruct_FROSMapMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMapMetaData), 2135100871U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MapMetaDataMsg, UROS2MapMetaDataMsg::StaticClass, TEXT("UROS2MapMetaDataMsg"), &Z_Registration_Info_UClass_UROS2MapMetaDataMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MapMetaDataMsg), 2261660973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h__Script_rclUE_3555778488(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
