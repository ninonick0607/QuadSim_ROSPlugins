// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2NavSatFix.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2NavSatStatus.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2NavSatFix() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2NavSatFixMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2NavSatFixMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSNavSatFix();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSNavSatStatus();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSNavSatFix *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSNavSatFix;
class UScriptStruct* FROSNavSatFix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSNavSatFix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSNavSatFix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSNavSatFix, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSNavSatFix"));
	}
	return Z_Registration_Info_UScriptStruct_FROSNavSatFix.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSNavSatFix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSNavSatFix" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "ROSNavSatFix" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[] = {
		{ "Category", "ROSNavSatFix" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[] = {
		{ "Category", "ROSNavSatFix" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[] = {
		{ "Category", "ROSNavSatFix" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionCovariance_MetaData[] = {
		{ "Category", "ROSNavSatFix" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionCovarianceType_MetaData[] = {
		{ "Category", "ROSNavSatFix" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Altitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PositionCovariance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionCovariance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionCovarianceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSNavSatFix>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatFix, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatFix, Status), Z_Construct_UScriptStruct_FROSNavSatStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 3235383617
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatFix, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Latitude_MetaData), NewProp_Latitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatFix, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Longitude_MetaData), NewProp_Longitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatFix, Altitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Altitude_MetaData), NewProp_Altitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_PositionCovariance_Inner = { "PositionCovariance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_PositionCovariance = { "PositionCovariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatFix, PositionCovariance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionCovariance_MetaData), NewProp_PositionCovariance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_PositionCovarianceType = { "PositionCovarianceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatFix, PositionCovarianceType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionCovarianceType_MetaData), NewProp_PositionCovarianceType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSNavSatFix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Latitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Longitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_Altitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_PositionCovariance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_PositionCovariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewProp_PositionCovarianceType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSNavSatFix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSNavSatFix_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSNavSatFix",
	Z_Construct_UScriptStruct_FROSNavSatFix_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSNavSatFix_Statics::PropPointers),
	sizeof(FROSNavSatFix),
	alignof(FROSNavSatFix),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSNavSatFix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSNavSatFix_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSNavSatFix()
{
	if (!Z_Registration_Info_UScriptStruct_FROSNavSatFix.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSNavSatFix.InnerSingleton, Z_Construct_UScriptStruct_FROSNavSatFix_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSNavSatFix.InnerSingleton;
}
// ********** End ScriptStruct FROSNavSatFix *******************************************************

// ********** Begin Class UROS2NavSatFixMsg Function CONST_COVARIANCE_TYPE_APPROXIMATED ************
struct Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics
{
	struct ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_APPROXIMATED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_APPROXIMATED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NavSatFixMsg, nullptr, "CONST_COVARIANCE_TYPE_APPROXIMATED", Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_APPROXIMATED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_APPROXIMATED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NavSatFixMsg::execCONST_COVARIANCE_TYPE_APPROXIMATED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2NavSatFixMsg::CONST_COVARIANCE_TYPE_APPROXIMATED();
	P_NATIVE_END;
}
// ********** End Class UROS2NavSatFixMsg Function CONST_COVARIANCE_TYPE_APPROXIMATED **************

// ********** Begin Class UROS2NavSatFixMsg Function CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN **********
struct Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics
{
	struct ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NavSatFixMsg, nullptr, "CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN", Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NavSatFixMsg::execCONST_COVARIANCE_TYPE_DIAGONAL_KNOWN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2NavSatFixMsg::CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN();
	P_NATIVE_END;
}
// ********** End Class UROS2NavSatFixMsg Function CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN ************

// ********** Begin Class UROS2NavSatFixMsg Function CONST_COVARIANCE_TYPE_KNOWN *******************
struct Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics
{
	struct ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_KNOWN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_KNOWN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NavSatFixMsg, nullptr, "CONST_COVARIANCE_TYPE_KNOWN", Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_KNOWN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_KNOWN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NavSatFixMsg::execCONST_COVARIANCE_TYPE_KNOWN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2NavSatFixMsg::CONST_COVARIANCE_TYPE_KNOWN();
	P_NATIVE_END;
}
// ********** End Class UROS2NavSatFixMsg Function CONST_COVARIANCE_TYPE_KNOWN *********************

// ********** Begin Class UROS2NavSatFixMsg Function CONST_COVARIANCE_TYPE_UNKNOWN *****************
struct Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics
{
	struct ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_UNKNOWN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_UNKNOWN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NavSatFixMsg, nullptr, "CONST_COVARIANCE_TYPE_UNKNOWN", Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_UNKNOWN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::ROS2NavSatFixMsg_eventCONST_COVARIANCE_TYPE_UNKNOWN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NavSatFixMsg::execCONST_COVARIANCE_TYPE_UNKNOWN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2NavSatFixMsg::CONST_COVARIANCE_TYPE_UNKNOWN();
	P_NATIVE_END;
}
// ********** End Class UROS2NavSatFixMsg Function CONST_COVARIANCE_TYPE_UNKNOWN *******************

// ********** Begin Class UROS2NavSatFixMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics
{
	struct ROS2NavSatFixMsg_eventGetMsg_Parms
	{
		FROSNavSatFix Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NavSatFixMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSNavSatFix, METADATA_PARAMS(0, nullptr) }; // 4260519937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NavSatFixMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::ROS2NavSatFixMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::ROS2NavSatFixMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NavSatFixMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSNavSatFix,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2NavSatFixMsg Function GetMsg ******************************************

// ********** Begin Class UROS2NavSatFixMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics
{
	struct ROS2NavSatFixMsg_eventSetMsg_Parms
	{
		FROSNavSatFix Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NavSatFixMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSNavSatFix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 4260519937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NavSatFixMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::ROS2NavSatFixMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::ROS2NavSatFixMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NavSatFixMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSNavSatFix,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2NavSatFixMsg Function SetMsg ******************************************

// ********** Begin Class UROS2NavSatFixMsg ********************************************************
void UROS2NavSatFixMsg::StaticRegisterNativesUROS2NavSatFixMsg()
{
	UClass* Class = UROS2NavSatFixMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_COVARIANCE_TYPE_APPROXIMATED", &UROS2NavSatFixMsg::execCONST_COVARIANCE_TYPE_APPROXIMATED },
		{ "CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN", &UROS2NavSatFixMsg::execCONST_COVARIANCE_TYPE_DIAGONAL_KNOWN },
		{ "CONST_COVARIANCE_TYPE_KNOWN", &UROS2NavSatFixMsg::execCONST_COVARIANCE_TYPE_KNOWN },
		{ "CONST_COVARIANCE_TYPE_UNKNOWN", &UROS2NavSatFixMsg::execCONST_COVARIANCE_TYPE_UNKNOWN },
		{ "GetMsg", &UROS2NavSatFixMsg::execGetMsg },
		{ "SetMsg", &UROS2NavSatFixMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2NavSatFixMsg;
UClass* UROS2NavSatFixMsg::GetPrivateStaticClass()
{
	using TClass = UROS2NavSatFixMsg;
	if (!Z_Registration_Info_UClass_UROS2NavSatFixMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2NavSatFixMsg"),
			Z_Registration_Info_UClass_UROS2NavSatFixMsg.InnerSingleton,
			StaticRegisterNativesUROS2NavSatFixMsg,
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
	return Z_Registration_Info_UClass_UROS2NavSatFixMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2NavSatFixMsg_NoRegister()
{
	return UROS2NavSatFixMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2NavSatFixMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2NavSatFix.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatFix.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_APPROXIMATED, "CONST_COVARIANCE_TYPE_APPROXIMATED" }, // 680989946
		{ &Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN, "CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN" }, // 3908184733
		{ &Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_KNOWN, "CONST_COVARIANCE_TYPE_KNOWN" }, // 1079633798
		{ &Z_Construct_UFunction_UROS2NavSatFixMsg_CONST_COVARIANCE_TYPE_UNKNOWN, "CONST_COVARIANCE_TYPE_UNKNOWN" }, // 128173975
		{ &Z_Construct_UFunction_UROS2NavSatFixMsg_GetMsg, "GetMsg" }, // 3481543911
		{ &Z_Construct_UFunction_UROS2NavSatFixMsg_SetMsg, "SetMsg" }, // 1399056639
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2NavSatFixMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2NavSatFixMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2NavSatFixMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2NavSatFixMsg_Statics::ClassParams = {
	&UROS2NavSatFixMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2NavSatFixMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2NavSatFixMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2NavSatFixMsg()
{
	if (!Z_Registration_Info_UClass_UROS2NavSatFixMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2NavSatFixMsg.OuterSingleton, Z_Construct_UClass_UROS2NavSatFixMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2NavSatFixMsg.OuterSingleton;
}
UROS2NavSatFixMsg::UROS2NavSatFixMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2NavSatFixMsg);
UROS2NavSatFixMsg::~UROS2NavSatFixMsg() {}
// ********** End Class UROS2NavSatFixMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatFix_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSNavSatFix::StaticStruct, Z_Construct_UScriptStruct_FROSNavSatFix_Statics::NewStructOps, TEXT("ROSNavSatFix"), &Z_Registration_Info_UScriptStruct_FROSNavSatFix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSNavSatFix), 4260519937U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2NavSatFixMsg, UROS2NavSatFixMsg::StaticClass, TEXT("UROS2NavSatFixMsg"), &Z_Registration_Info_UClass_UROS2NavSatFixMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2NavSatFixMsg), 1648741423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatFix_h__Script_rclUE_2559931840(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatFix_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatFix_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatFix_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatFix_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
