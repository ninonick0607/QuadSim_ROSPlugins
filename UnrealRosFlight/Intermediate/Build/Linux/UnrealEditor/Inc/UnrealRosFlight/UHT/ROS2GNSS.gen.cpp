// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2GNSS.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GNSS() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2GNSSMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2GNSSMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSGNSS();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGNSS **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGNSS;
class UScriptStruct* FROSGNSS::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGNSS.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGNSS.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGNSS, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSGNSS"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGNSS.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGNSS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixType_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSat_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lat_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lon_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAccuracy_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAccuracy_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelN_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelE_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelD_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedAccuracy_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GnssUnixSeconds_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GnssUnixNanos_MetaData[] = {
		{ "Category", "ROSGNSS" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FixType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumSat;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Lat;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Lon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalAccuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalAccuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelN;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelE;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedAccuracy;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_GnssUnixSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GnssUnixNanos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGNSS>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_FixType = { "FixType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, FixType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixType_MetaData), NewProp_FixType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_NumSat = { "NumSat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, NumSat), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSat_MetaData), NewProp_NumSat_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_Lat = { "Lat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, Lat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lat_MetaData), NewProp_Lat_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_Lon = { "Lon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, Lon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lon_MetaData), NewProp_Lon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, Alt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alt_MetaData), NewProp_Alt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_HorizontalAccuracy = { "HorizontalAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, HorizontalAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAccuracy_MetaData), NewProp_HorizontalAccuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_VerticalAccuracy = { "VerticalAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, VerticalAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAccuracy_MetaData), NewProp_VerticalAccuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_VelN = { "VelN", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, VelN), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelN_MetaData), NewProp_VelN_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_VelE = { "VelE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, VelE), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelE_MetaData), NewProp_VelE_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_VelD = { "VelD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, VelD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelD_MetaData), NewProp_VelD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_SpeedAccuracy = { "SpeedAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, SpeedAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedAccuracy_MetaData), NewProp_SpeedAccuracy_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_GnssUnixSeconds = { "GnssUnixSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, GnssUnixSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GnssUnixSeconds_MetaData), NewProp_GnssUnixSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_GnssUnixNanos = { "GnssUnixNanos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGNSS, GnssUnixNanos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GnssUnixNanos_MetaData), NewProp_GnssUnixNanos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGNSS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_FixType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_NumSat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_Lat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_Lon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_Alt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_HorizontalAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_VerticalAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_VelN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_VelE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_VelD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_SpeedAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_GnssUnixSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGNSS_Statics::NewProp_GnssUnixNanos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGNSS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGNSS_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSGNSS",
	Z_Construct_UScriptStruct_FROSGNSS_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGNSS_Statics::PropPointers),
	sizeof(FROSGNSS),
	alignof(FROSGNSS),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGNSS_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGNSS_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGNSS()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGNSS.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGNSS.InnerSingleton, Z_Construct_UScriptStruct_FROSGNSS_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGNSS.InnerSingleton;
}
// ********** End ScriptStruct FROSGNSS ************************************************************

// ********** Begin Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_2D_FIX *************************
struct Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics
{
	struct ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_2D_FIX_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_2D_FIX_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GNSSMsg, nullptr, "CONST_GNSS_FIX_TYPE_2D_FIX", Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_2D_FIX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_2D_FIX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_2D_FIX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GNSSMsg::CONST_GNSS_FIX_TYPE_2D_FIX();
	P_NATIVE_END;
}
// ********** End Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_2D_FIX ***************************

// ********** Begin Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_3D_FIX *************************
struct Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics
{
	struct ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_3D_FIX_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_3D_FIX_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GNSSMsg, nullptr, "CONST_GNSS_FIX_TYPE_3D_FIX", Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_3D_FIX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_3D_FIX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_3D_FIX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GNSSMsg::CONST_GNSS_FIX_TYPE_3D_FIX();
	P_NATIVE_END;
}
// ********** End Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_3D_FIX ***************************

// ********** Begin Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY ************
struct Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics
{
	struct ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GNSSMsg, nullptr, "CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY", Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GNSSMsg::CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY();
	P_NATIVE_END;
}
// ********** End Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY **************

// ********** Begin Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING *******
struct Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics
{
	struct ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GNSSMsg, nullptr, "CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING", Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GNSSMsg::CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING();
	P_NATIVE_END;
}
// ********** End Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING *********

// ********** Begin Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_NO_FIX *************************
struct Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics
{
	struct ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_NO_FIX_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_NO_FIX_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GNSSMsg, nullptr, "CONST_GNSS_FIX_TYPE_NO_FIX", Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_NO_FIX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_NO_FIX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_NO_FIX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GNSSMsg::CONST_GNSS_FIX_TYPE_NO_FIX();
	P_NATIVE_END;
}
// ********** End Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_NO_FIX ***************************

// ********** Begin Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY ******************
struct Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics
{
	struct ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GNSSMsg, nullptr, "CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY", Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::ROS2GNSSMsg_eventCONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_TIME_FIX_ONLY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GNSSMsg::CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY();
	P_NATIVE_END;
}
// ********** End Class UROS2GNSSMsg Function CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY ********************

// ********** Begin Class UROS2GNSSMsg Function GetMsg *********************************************
struct Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics
{
	struct ROS2GNSSMsg_eventGetMsg_Parms
	{
		FROSGNSS Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GNSSMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSGNSS, METADATA_PARAMS(0, nullptr) }; // 4208646808
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GNSSMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::ROS2GNSSMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::ROS2GNSSMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GNSSMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GNSSMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GNSSMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSGNSS,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2GNSSMsg Function GetMsg ***********************************************

// ********** Begin Class UROS2GNSSMsg Function SetMsg *********************************************
struct Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics
{
	struct ROS2GNSSMsg_eventSetMsg_Parms
	{
		FROSGNSS Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GNSSMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSGNSS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 4208646808
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GNSSMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::ROS2GNSSMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::ROS2GNSSMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GNSSMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GNSSMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GNSSMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSGNSS,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2GNSSMsg Function SetMsg ***********************************************

// ********** Begin Class UROS2GNSSMsg *************************************************************
void UROS2GNSSMsg::StaticRegisterNativesUROS2GNSSMsg()
{
	UClass* Class = UROS2GNSSMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_GNSS_FIX_TYPE_2D_FIX", &UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_2D_FIX },
		{ "CONST_GNSS_FIX_TYPE_3D_FIX", &UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_3D_FIX },
		{ "CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY", &UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY },
		{ "CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING", &UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING },
		{ "CONST_GNSS_FIX_TYPE_NO_FIX", &UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_NO_FIX },
		{ "CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY", &UROS2GNSSMsg::execCONST_GNSS_FIX_TYPE_TIME_FIX_ONLY },
		{ "GetMsg", &UROS2GNSSMsg::execGetMsg },
		{ "SetMsg", &UROS2GNSSMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GNSSMsg;
UClass* UROS2GNSSMsg::GetPrivateStaticClass()
{
	using TClass = UROS2GNSSMsg;
	if (!Z_Registration_Info_UClass_UROS2GNSSMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GNSSMsg"),
			Z_Registration_Info_UClass_UROS2GNSSMsg.InnerSingleton,
			StaticRegisterNativesUROS2GNSSMsg,
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
	return Z_Registration_Info_UClass_UROS2GNSSMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GNSSMsg_NoRegister()
{
	return UROS2GNSSMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GNSSMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2GNSS.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GNSS.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_2D_FIX, "CONST_GNSS_FIX_TYPE_2D_FIX" }, // 1678089769
		{ &Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_3D_FIX, "CONST_GNSS_FIX_TYPE_3D_FIX" }, // 467356304
		{ &Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY, "CONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY" }, // 1609177198
		{ &Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING, "CONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING" }, // 504401020
		{ &Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_NO_FIX, "CONST_GNSS_FIX_TYPE_NO_FIX" }, // 2908400894
		{ &Z_Construct_UFunction_UROS2GNSSMsg_CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY, "CONST_GNSS_FIX_TYPE_TIME_FIX_ONLY" }, // 1926254593
		{ &Z_Construct_UFunction_UROS2GNSSMsg_GetMsg, "GetMsg" }, // 408529292
		{ &Z_Construct_UFunction_UROS2GNSSMsg_SetMsg, "SetMsg" }, // 4110570096
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GNSSMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GNSSMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GNSSMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GNSSMsg_Statics::ClassParams = {
	&UROS2GNSSMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GNSSMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GNSSMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GNSSMsg()
{
	if (!Z_Registration_Info_UClass_UROS2GNSSMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GNSSMsg.OuterSingleton, Z_Construct_UClass_UROS2GNSSMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GNSSMsg.OuterSingleton;
}
UROS2GNSSMsg::UROS2GNSSMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GNSSMsg);
UROS2GNSSMsg::~UROS2GNSSMsg() {}
// ********** End Class UROS2GNSSMsg ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGNSS::StaticStruct, Z_Construct_UScriptStruct_FROSGNSS_Statics::NewStructOps, TEXT("ROSGNSS"), &Z_Registration_Info_UScriptStruct_FROSGNSS, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGNSS), 4208646808U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GNSSMsg, UROS2GNSSMsg::StaticClass, TEXT("UROS2GNSSMsg"), &Z_Registration_Info_UClass_UROS2GNSSMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GNSSMsg), 3716000350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h__Script_UnrealRosFlight_448279315(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
