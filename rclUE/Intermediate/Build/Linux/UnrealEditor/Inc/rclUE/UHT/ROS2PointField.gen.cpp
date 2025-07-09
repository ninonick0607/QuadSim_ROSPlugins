// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PointField.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PointField() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointFieldMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointFieldMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPointField();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPointField ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPointField;
class UScriptStruct* FROSPointField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPointField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPointField, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPointField"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPointField.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPointField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSPointField" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "ROSPointField" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Datatype_MetaData[] = {
		{ "Category", "ROSPointField" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "ROSPointField" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Datatype;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPointField>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSPointField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointField, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSPointField_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointField, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSPointField_Statics::NewProp_Datatype = { "Datatype", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointField, Datatype), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Datatype_MetaData), NewProp_Datatype_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSPointField_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointField, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPointField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointField_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointField_Statics::NewProp_Datatype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointField_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPointField_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPointField",
	Z_Construct_UScriptStruct_FROSPointField_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointField_Statics::PropPointers),
	sizeof(FROSPointField),
	alignof(FROSPointField),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPointField_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPointField()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointField.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPointField.InnerSingleton, Z_Construct_UScriptStruct_FROSPointField_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPointField.InnerSingleton;
}
// ********** End ScriptStruct FROSPointField ******************************************************

// ********** Begin Class UROS2PointFieldMsg Function CONST_FLOAT32 ********************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics
{
	struct ROS2PointFieldMsg_eventCONST_FLOAT32_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventCONST_FLOAT32_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "CONST_FLOAT32", Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::ROS2PointFieldMsg_eventCONST_FLOAT32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::ROS2PointFieldMsg_eventCONST_FLOAT32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execCONST_FLOAT32)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2PointFieldMsg::CONST_FLOAT32();
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function CONST_FLOAT32 **********************************

// ********** Begin Class UROS2PointFieldMsg Function CONST_FLOAT64 ********************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics
{
	struct ROS2PointFieldMsg_eventCONST_FLOAT64_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventCONST_FLOAT64_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "CONST_FLOAT64", Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::ROS2PointFieldMsg_eventCONST_FLOAT64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::ROS2PointFieldMsg_eventCONST_FLOAT64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execCONST_FLOAT64)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2PointFieldMsg::CONST_FLOAT64();
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function CONST_FLOAT64 **********************************

// ********** Begin Class UROS2PointFieldMsg Function CONST_INT16 **********************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics
{
	struct ROS2PointFieldMsg_eventCONST_INT16_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventCONST_INT16_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "CONST_INT16", Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::ROS2PointFieldMsg_eventCONST_INT16_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::ROS2PointFieldMsg_eventCONST_INT16_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execCONST_INT16)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2PointFieldMsg::CONST_INT16();
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function CONST_INT16 ************************************

// ********** Begin Class UROS2PointFieldMsg Function CONST_INT32 **********************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics
{
	struct ROS2PointFieldMsg_eventCONST_INT32_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventCONST_INT32_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "CONST_INT32", Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::ROS2PointFieldMsg_eventCONST_INT32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::ROS2PointFieldMsg_eventCONST_INT32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execCONST_INT32)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2PointFieldMsg::CONST_INT32();
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function CONST_INT32 ************************************

// ********** Begin Class UROS2PointFieldMsg Function CONST_INT8 ***********************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics
{
	struct ROS2PointFieldMsg_eventCONST_INT8_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventCONST_INT8_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "CONST_INT8", Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::ROS2PointFieldMsg_eventCONST_INT8_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::ROS2PointFieldMsg_eventCONST_INT8_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execCONST_INT8)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2PointFieldMsg::CONST_INT8();
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function CONST_INT8 *************************************

// ********** Begin Class UROS2PointFieldMsg Function CONST_UINT16 *********************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics
{
	struct ROS2PointFieldMsg_eventCONST_UINT16_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventCONST_UINT16_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "CONST_UINT16", Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::ROS2PointFieldMsg_eventCONST_UINT16_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::ROS2PointFieldMsg_eventCONST_UINT16_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execCONST_UINT16)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2PointFieldMsg::CONST_UINT16();
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function CONST_UINT16 ***********************************

// ********** Begin Class UROS2PointFieldMsg Function CONST_UINT32 *********************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics
{
	struct ROS2PointFieldMsg_eventCONST_UINT32_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventCONST_UINT32_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "CONST_UINT32", Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::ROS2PointFieldMsg_eventCONST_UINT32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::ROS2PointFieldMsg_eventCONST_UINT32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execCONST_UINT32)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2PointFieldMsg::CONST_UINT32();
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function CONST_UINT32 ***********************************

// ********** Begin Class UROS2PointFieldMsg Function CONST_UINT8 **********************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics
{
	struct ROS2PointFieldMsg_eventCONST_UINT8_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventCONST_UINT8_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "CONST_UINT8", Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::ROS2PointFieldMsg_eventCONST_UINT8_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::ROS2PointFieldMsg_eventCONST_UINT8_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execCONST_UINT8)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2PointFieldMsg::CONST_UINT8();
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function CONST_UINT8 ************************************

// ********** Begin Class UROS2PointFieldMsg Function GetMsg ***************************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics
{
	struct ROS2PointFieldMsg_eventGetMsg_Parms
	{
		FROSPointField Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPointField, METADATA_PARAMS(0, nullptr) }; // 3070453670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::ROS2PointFieldMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::ROS2PointFieldMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPointField,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function GetMsg *****************************************

// ********** Begin Class UROS2PointFieldMsg Function SetMsg ***************************************
struct Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics
{
	struct ROS2PointFieldMsg_eventSetMsg_Parms
	{
		FROSPointField Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointFieldMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPointField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3070453670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointFieldMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::ROS2PointFieldMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::ROS2PointFieldMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointFieldMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPointField,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PointFieldMsg Function SetMsg *****************************************

// ********** Begin Class UROS2PointFieldMsg *******************************************************
void UROS2PointFieldMsg::StaticRegisterNativesUROS2PointFieldMsg()
{
	UClass* Class = UROS2PointFieldMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_FLOAT32", &UROS2PointFieldMsg::execCONST_FLOAT32 },
		{ "CONST_FLOAT64", &UROS2PointFieldMsg::execCONST_FLOAT64 },
		{ "CONST_INT16", &UROS2PointFieldMsg::execCONST_INT16 },
		{ "CONST_INT32", &UROS2PointFieldMsg::execCONST_INT32 },
		{ "CONST_INT8", &UROS2PointFieldMsg::execCONST_INT8 },
		{ "CONST_UINT16", &UROS2PointFieldMsg::execCONST_UINT16 },
		{ "CONST_UINT32", &UROS2PointFieldMsg::execCONST_UINT32 },
		{ "CONST_UINT8", &UROS2PointFieldMsg::execCONST_UINT8 },
		{ "GetMsg", &UROS2PointFieldMsg::execGetMsg },
		{ "SetMsg", &UROS2PointFieldMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PointFieldMsg;
UClass* UROS2PointFieldMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PointFieldMsg;
	if (!Z_Registration_Info_UClass_UROS2PointFieldMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PointFieldMsg"),
			Z_Registration_Info_UClass_UROS2PointFieldMsg.InnerSingleton,
			StaticRegisterNativesUROS2PointFieldMsg,
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
	return Z_Registration_Info_UClass_UROS2PointFieldMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PointFieldMsg_NoRegister()
{
	return UROS2PointFieldMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PointFieldMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PointField.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointField.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT32, "CONST_FLOAT32" }, // 722049256
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_CONST_FLOAT64, "CONST_FLOAT64" }, // 3100785191
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT16, "CONST_INT16" }, // 3355900017
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT32, "CONST_INT32" }, // 3142332780
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_CONST_INT8, "CONST_INT8" }, // 3969452083
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT16, "CONST_UINT16" }, // 4107021893
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT32, "CONST_UINT32" }, // 2806435436
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_CONST_UINT8, "CONST_UINT8" }, // 2131156309
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_GetMsg, "GetMsg" }, // 333802835
		{ &Z_Construct_UFunction_UROS2PointFieldMsg_SetMsg, "SetMsg" }, // 223833836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PointFieldMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PointFieldMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointFieldMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PointFieldMsg_Statics::ClassParams = {
	&UROS2PointFieldMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointFieldMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PointFieldMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PointFieldMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PointFieldMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PointFieldMsg.OuterSingleton, Z_Construct_UClass_UROS2PointFieldMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PointFieldMsg.OuterSingleton;
}
UROS2PointFieldMsg::UROS2PointFieldMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PointFieldMsg);
UROS2PointFieldMsg::~UROS2PointFieldMsg() {}
// ********** End Class UROS2PointFieldMsg *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPointField::StaticStruct, Z_Construct_UScriptStruct_FROSPointField_Statics::NewStructOps, TEXT("ROSPointField"), &Z_Registration_Info_UScriptStruct_FROSPointField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPointField), 3070453670U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PointFieldMsg, UROS2PointFieldMsg::StaticClass, TEXT("UROS2PointFieldMsg"), &Z_Registration_Info_UClass_UROS2PointFieldMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PointFieldMsg), 422140503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h__Script_rclUE_4244588259(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
