// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MultiEchoLaserScan.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2LaserEcho.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MultiEchoLaserScan() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MultiEchoLaserScanMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLaserEcho();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMultiEchoLaserScan();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMultiEchoLaserScan ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMultiEchoLaserScan;
class UScriptStruct* FROSMultiEchoLaserScan::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMultiEchoLaserScan.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMultiEchoLaserScan.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMultiEchoLaserScan, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMultiEchoLaserScan"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMultiEchoLaserScan.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleMin_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleMax_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleIncrement_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeIncrement_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanTime_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensities_MetaData[] = {
		{ "Category", "ROSMultiEchoLaserScan" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleIncrement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeIncrement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ranges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ranges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intensities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Intensities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMultiEchoLaserScan>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_AngleMin = { "AngleMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, AngleMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleMin_MetaData), NewProp_AngleMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_AngleMax = { "AngleMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, AngleMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleMax_MetaData), NewProp_AngleMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_AngleIncrement = { "AngleIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, AngleIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleIncrement_MetaData), NewProp_AngleIncrement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_TimeIncrement = { "TimeIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, TimeIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeIncrement_MetaData), NewProp_TimeIncrement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_ScanTime = { "ScanTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, ScanTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanTime_MetaData), NewProp_ScanTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, RangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMin_MetaData), NewProp_RangeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, RangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMax_MetaData), NewProp_RangeMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Ranges_Inner = { "Ranges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSLaserEcho, METADATA_PARAMS(0, nullptr) }; // 103261659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Ranges = { "Ranges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, Ranges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ranges_MetaData), NewProp_Ranges_MetaData) }; // 103261659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Intensities_Inner = { "Intensities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSLaserEcho, METADATA_PARAMS(0, nullptr) }; // 103261659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Intensities = { "Intensities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiEchoLaserScan, Intensities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensities_MetaData), NewProp_Intensities_MetaData) }; // 103261659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_AngleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_AngleMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_AngleIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_TimeIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_ScanTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_RangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_RangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Ranges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Ranges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Intensities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewProp_Intensities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMultiEchoLaserScan",
	Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::PropPointers),
	sizeof(FROSMultiEchoLaserScan),
	alignof(FROSMultiEchoLaserScan),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMultiEchoLaserScan()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMultiEchoLaserScan.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMultiEchoLaserScan.InnerSingleton, Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMultiEchoLaserScan.InnerSingleton;
}
// ********** End ScriptStruct FROSMultiEchoLaserScan **********************************************

// ********** Begin Class UROS2MultiEchoLaserScanMsg Function GetMsg *******************************
struct Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics
{
	struct ROS2MultiEchoLaserScanMsg_eventGetMsg_Parms
	{
		FROSMultiEchoLaserScan Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MultiEchoLaserScanMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMultiEchoLaserScan, METADATA_PARAMS(0, nullptr) }; // 1934461822
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MultiEchoLaserScanMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::ROS2MultiEchoLaserScanMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::ROS2MultiEchoLaserScanMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MultiEchoLaserScanMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMultiEchoLaserScan,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MultiEchoLaserScanMsg Function GetMsg *********************************

// ********** Begin Class UROS2MultiEchoLaserScanMsg Function SetMsg *******************************
struct Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics
{
	struct ROS2MultiEchoLaserScanMsg_eventSetMsg_Parms
	{
		FROSMultiEchoLaserScan Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MultiEchoLaserScanMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMultiEchoLaserScan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1934461822
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MultiEchoLaserScanMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::ROS2MultiEchoLaserScanMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::ROS2MultiEchoLaserScanMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MultiEchoLaserScanMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMultiEchoLaserScan,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MultiEchoLaserScanMsg Function SetMsg *********************************

// ********** Begin Class UROS2MultiEchoLaserScanMsg ***********************************************
void UROS2MultiEchoLaserScanMsg::StaticRegisterNativesUROS2MultiEchoLaserScanMsg()
{
	UClass* Class = UROS2MultiEchoLaserScanMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2MultiEchoLaserScanMsg::execGetMsg },
		{ "SetMsg", &UROS2MultiEchoLaserScanMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MultiEchoLaserScanMsg;
UClass* UROS2MultiEchoLaserScanMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MultiEchoLaserScanMsg;
	if (!Z_Registration_Info_UClass_UROS2MultiEchoLaserScanMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MultiEchoLaserScanMsg"),
			Z_Registration_Info_UClass_UROS2MultiEchoLaserScanMsg.InnerSingleton,
			StaticRegisterNativesUROS2MultiEchoLaserScanMsg,
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
	return Z_Registration_Info_UClass_UROS2MultiEchoLaserScanMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_NoRegister()
{
	return UROS2MultiEchoLaserScanMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MultiEchoLaserScan.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiEchoLaserScan.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_GetMsg, "GetMsg" }, // 2818775091
		{ &Z_Construct_UFunction_UROS2MultiEchoLaserScanMsg_SetMsg, "SetMsg" }, // 942664373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MultiEchoLaserScanMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_Statics::ClassParams = {
	&UROS2MultiEchoLaserScanMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MultiEchoLaserScanMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MultiEchoLaserScanMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MultiEchoLaserScanMsg.OuterSingleton, Z_Construct_UClass_UROS2MultiEchoLaserScanMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MultiEchoLaserScanMsg.OuterSingleton;
}
UROS2MultiEchoLaserScanMsg::UROS2MultiEchoLaserScanMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MultiEchoLaserScanMsg);
UROS2MultiEchoLaserScanMsg::~UROS2MultiEchoLaserScanMsg() {}
// ********** End Class UROS2MultiEchoLaserScanMsg *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiEchoLaserScan_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMultiEchoLaserScan::StaticStruct, Z_Construct_UScriptStruct_FROSMultiEchoLaserScan_Statics::NewStructOps, TEXT("ROSMultiEchoLaserScan"), &Z_Registration_Info_UScriptStruct_FROSMultiEchoLaserScan, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMultiEchoLaserScan), 1934461822U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MultiEchoLaserScanMsg, UROS2MultiEchoLaserScanMsg::StaticClass, TEXT("UROS2MultiEchoLaserScanMsg"), &Z_Registration_Info_UClass_UROS2MultiEchoLaserScanMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MultiEchoLaserScanMsg), 1802774338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiEchoLaserScan_h__Script_rclUE_2759321536(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiEchoLaserScan_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiEchoLaserScan_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiEchoLaserScan_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiEchoLaserScan_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
