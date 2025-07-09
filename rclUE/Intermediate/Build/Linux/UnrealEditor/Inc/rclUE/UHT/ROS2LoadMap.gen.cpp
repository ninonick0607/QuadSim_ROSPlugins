// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2LoadMap.h"
#include "rclUE/Public/Msgs/ROS2OccupancyGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2LoadMap() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2LoadMapSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2LoadMapSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLoadMapReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLoadMapRes();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOccupancyGrid();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSLoadMapReq ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSLoadMapReq;
class UScriptStruct* FROSLoadMapReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLoadMapReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSLoadMapReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSLoadMapReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSLoadMapReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSLoadMapReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSLoadMapReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapUrl_MetaData[] = {
		{ "Category", "ROSLoadMapReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSLoadMapReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::NewProp_MapUrl = { "MapUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLoadMapReq, MapUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapUrl_MetaData), NewProp_MapUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::NewProp_MapUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSLoadMapReq",
	Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::PropPointers),
	sizeof(FROSLoadMapReq),
	alignof(FROSLoadMapReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSLoadMapReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLoadMapReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSLoadMapReq.InnerSingleton, Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSLoadMapReq.InnerSingleton;
}
// ********** End ScriptStruct FROSLoadMapReq ******************************************************

// ********** Begin ScriptStruct FROSLoadMapRes ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSLoadMapRes;
class UScriptStruct* FROSLoadMapRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLoadMapRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSLoadMapRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSLoadMapRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSLoadMapRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSLoadMapRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSLoadMapRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "Category", "ROSLoadMapRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "ROSLoadMapRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSLoadMapRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLoadMapRes, Map), Z_Construct_UScriptStruct_FROSOccupancyGrid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) }; // 3165919373
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLoadMapRes, Result), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSLoadMapRes",
	Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::PropPointers),
	sizeof(FROSLoadMapRes),
	alignof(FROSLoadMapRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSLoadMapRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLoadMapRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSLoadMapRes.InnerSingleton, Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSLoadMapRes.InnerSingleton;
}
// ********** End ScriptStruct FROSLoadMapRes ******************************************************

// ********** Begin Class UROS2LoadMapSrv Function CONST_RESULT_INVALID_MAP_DATA *******************
struct Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics
{
	struct ROS2LoadMapSrv_eventCONST_RESULT_INVALID_MAP_DATA_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventCONST_RESULT_INVALID_MAP_DATA_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "CONST_RESULT_INVALID_MAP_DATA", Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::ROS2LoadMapSrv_eventCONST_RESULT_INVALID_MAP_DATA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::ROS2LoadMapSrv_eventCONST_RESULT_INVALID_MAP_DATA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execCONST_RESULT_INVALID_MAP_DATA)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2LoadMapSrv::CONST_RESULT_INVALID_MAP_DATA();
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function CONST_RESULT_INVALID_MAP_DATA *********************

// ********** Begin Class UROS2LoadMapSrv Function CONST_RESULT_INVALID_MAP_METADATA ***************
struct Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics
{
	struct ROS2LoadMapSrv_eventCONST_RESULT_INVALID_MAP_METADATA_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventCONST_RESULT_INVALID_MAP_METADATA_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "CONST_RESULT_INVALID_MAP_METADATA", Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::ROS2LoadMapSrv_eventCONST_RESULT_INVALID_MAP_METADATA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::ROS2LoadMapSrv_eventCONST_RESULT_INVALID_MAP_METADATA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execCONST_RESULT_INVALID_MAP_METADATA)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2LoadMapSrv::CONST_RESULT_INVALID_MAP_METADATA();
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function CONST_RESULT_INVALID_MAP_METADATA *****************

// ********** Begin Class UROS2LoadMapSrv Function CONST_RESULT_MAP_DOES_NOT_EXIST *****************
struct Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics
{
	struct ROS2LoadMapSrv_eventCONST_RESULT_MAP_DOES_NOT_EXIST_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventCONST_RESULT_MAP_DOES_NOT_EXIST_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "CONST_RESULT_MAP_DOES_NOT_EXIST", Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::ROS2LoadMapSrv_eventCONST_RESULT_MAP_DOES_NOT_EXIST_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::ROS2LoadMapSrv_eventCONST_RESULT_MAP_DOES_NOT_EXIST_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execCONST_RESULT_MAP_DOES_NOT_EXIST)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2LoadMapSrv::CONST_RESULT_MAP_DOES_NOT_EXIST();
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function CONST_RESULT_MAP_DOES_NOT_EXIST *******************

// ********** Begin Class UROS2LoadMapSrv Function CONST_RESULT_SUCCESS ****************************
struct Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics
{
	struct ROS2LoadMapSrv_eventCONST_RESULT_SUCCESS_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventCONST_RESULT_SUCCESS_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "CONST_RESULT_SUCCESS", Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::ROS2LoadMapSrv_eventCONST_RESULT_SUCCESS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::ROS2LoadMapSrv_eventCONST_RESULT_SUCCESS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execCONST_RESULT_SUCCESS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2LoadMapSrv::CONST_RESULT_SUCCESS();
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function CONST_RESULT_SUCCESS ******************************

// ********** Begin Class UROS2LoadMapSrv Function CONST_RESULT_UNDEFINED_FAILURE ******************
struct Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics
{
	struct ROS2LoadMapSrv_eventCONST_RESULT_UNDEFINED_FAILURE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventCONST_RESULT_UNDEFINED_FAILURE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "CONST_RESULT_UNDEFINED_FAILURE", Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::ROS2LoadMapSrv_eventCONST_RESULT_UNDEFINED_FAILURE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::ROS2LoadMapSrv_eventCONST_RESULT_UNDEFINED_FAILURE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execCONST_RESULT_UNDEFINED_FAILURE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2LoadMapSrv::CONST_RESULT_UNDEFINED_FAILURE();
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function CONST_RESULT_UNDEFINED_FAILURE ********************

// ********** Begin Class UROS2LoadMapSrv Function Fini ********************************************
struct Z_Construct_UFunction_UROS2LoadMapSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function Fini **********************************************

// ********** Begin Class UROS2LoadMapSrv Function GetRequest **************************************
struct Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics
{
	struct ROS2LoadMapSrv_eventGetRequest_Parms
	{
		FROSLoadMapReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSLoadMapReq, METADATA_PARAMS(0, nullptr) }; // 1733577532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::ROS2LoadMapSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::ROS2LoadMapSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSLoadMapReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function GetRequest ****************************************

// ********** Begin Class UROS2LoadMapSrv Function GetResponse *************************************
struct Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics
{
	struct ROS2LoadMapSrv_eventGetResponse_Parms
	{
		FROSLoadMapRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSLoadMapRes, METADATA_PARAMS(0, nullptr) }; // 2266560466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::ROS2LoadMapSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::ROS2LoadMapSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSLoadMapRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function GetResponse ***************************************

// ********** Begin Class UROS2LoadMapSrv Function Init ********************************************
struct Z_Construct_UFunction_UROS2LoadMapSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function Init **********************************************

// ********** Begin Class UROS2LoadMapSrv Function SetRequest **************************************
struct Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics
{
	struct ROS2LoadMapSrv_eventSetRequest_Parms
	{
		FROSLoadMapReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSLoadMapReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1733577532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::ROS2LoadMapSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::ROS2LoadMapSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSLoadMapReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function SetRequest ****************************************

// ********** Begin Class UROS2LoadMapSrv Function SetResponse *************************************
struct Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics
{
	struct ROS2LoadMapSrv_eventSetResponse_Parms
	{
		FROSLoadMapRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LoadMapSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSLoadMapRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2266560466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LoadMapSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::ROS2LoadMapSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::ROS2LoadMapSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LoadMapSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSLoadMapRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2LoadMapSrv Function SetResponse ***************************************

// ********** Begin Class UROS2LoadMapSrv **********************************************************
void UROS2LoadMapSrv::StaticRegisterNativesUROS2LoadMapSrv()
{
	UClass* Class = UROS2LoadMapSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_RESULT_INVALID_MAP_DATA", &UROS2LoadMapSrv::execCONST_RESULT_INVALID_MAP_DATA },
		{ "CONST_RESULT_INVALID_MAP_METADATA", &UROS2LoadMapSrv::execCONST_RESULT_INVALID_MAP_METADATA },
		{ "CONST_RESULT_MAP_DOES_NOT_EXIST", &UROS2LoadMapSrv::execCONST_RESULT_MAP_DOES_NOT_EXIST },
		{ "CONST_RESULT_SUCCESS", &UROS2LoadMapSrv::execCONST_RESULT_SUCCESS },
		{ "CONST_RESULT_UNDEFINED_FAILURE", &UROS2LoadMapSrv::execCONST_RESULT_UNDEFINED_FAILURE },
		{ "Fini", &UROS2LoadMapSrv::execFini },
		{ "GetRequest", &UROS2LoadMapSrv::execGetRequest },
		{ "GetResponse", &UROS2LoadMapSrv::execGetResponse },
		{ "Init", &UROS2LoadMapSrv::execInit },
		{ "SetRequest", &UROS2LoadMapSrv::execSetRequest },
		{ "SetResponse", &UROS2LoadMapSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2LoadMapSrv;
UClass* UROS2LoadMapSrv::GetPrivateStaticClass()
{
	using TClass = UROS2LoadMapSrv;
	if (!Z_Registration_Info_UClass_UROS2LoadMapSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2LoadMapSrv"),
			Z_Registration_Info_UClass_UROS2LoadMapSrv.InnerSingleton,
			StaticRegisterNativesUROS2LoadMapSrv,
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
	return Z_Registration_Info_UClass_UROS2LoadMapSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2LoadMapSrv_NoRegister()
{
	return UROS2LoadMapSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2LoadMapSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2LoadMap.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2LoadMap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_DATA, "CONST_RESULT_INVALID_MAP_DATA" }, // 2873107024
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_INVALID_MAP_METADATA, "CONST_RESULT_INVALID_MAP_METADATA" }, // 1283552963
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_MAP_DOES_NOT_EXIST, "CONST_RESULT_MAP_DOES_NOT_EXIST" }, // 2575002099
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_SUCCESS, "CONST_RESULT_SUCCESS" }, // 582864723
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_CONST_RESULT_UNDEFINED_FAILURE, "CONST_RESULT_UNDEFINED_FAILURE" }, // 1208032327
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_Fini, "Fini" }, // 3666473657
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_GetRequest, "GetRequest" }, // 2543331086
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_GetResponse, "GetResponse" }, // 3877354608
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_Init, "Init" }, // 3879869484
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_SetRequest, "SetRequest" }, // 2447685702
		{ &Z_Construct_UFunction_UROS2LoadMapSrv_SetResponse, "SetResponse" }, // 3414491006
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2LoadMapSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2LoadMapSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2LoadMapSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2LoadMapSrv_Statics::ClassParams = {
	&UROS2LoadMapSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2LoadMapSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2LoadMapSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2LoadMapSrv()
{
	if (!Z_Registration_Info_UClass_UROS2LoadMapSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2LoadMapSrv.OuterSingleton, Z_Construct_UClass_UROS2LoadMapSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2LoadMapSrv.OuterSingleton;
}
UROS2LoadMapSrv::UROS2LoadMapSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2LoadMapSrv);
UROS2LoadMapSrv::~UROS2LoadMapSrv() {}
// ********** End Class UROS2LoadMapSrv ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSLoadMapReq::StaticStruct, Z_Construct_UScriptStruct_FROSLoadMapReq_Statics::NewStructOps, TEXT("ROSLoadMapReq"), &Z_Registration_Info_UScriptStruct_FROSLoadMapReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSLoadMapReq), 1733577532U) },
		{ FROSLoadMapRes::StaticStruct, Z_Construct_UScriptStruct_FROSLoadMapRes_Statics::NewStructOps, TEXT("ROSLoadMapRes"), &Z_Registration_Info_UScriptStruct_FROSLoadMapRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSLoadMapRes), 2266560466U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2LoadMapSrv, UROS2LoadMapSrv::StaticClass, TEXT("UROS2LoadMapSrv"), &Z_Registration_Info_UClass_UROS2LoadMapSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2LoadMapSrv), 2123888280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h__Script_rclUE_3343914657(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
