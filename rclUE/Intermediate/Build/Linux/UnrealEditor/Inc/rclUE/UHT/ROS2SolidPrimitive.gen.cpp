// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2SolidPrimitive.h"
#include "rclUE/Public/Msgs/ROS2Polygon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SolidPrimitive() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2SolidPrimitiveMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2SolidPrimitiveMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPolygon();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSolidPrimitive();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSolidPrimitive ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSolidPrimitive;
class UScriptStruct* FROSSolidPrimitive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSolidPrimitive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSolidPrimitive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSolidPrimitive, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSolidPrimitive"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSolidPrimitive.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ROSSolidPrimitive" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "Category", "ROSSolidPrimitive" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[] = {
		{ "Category", "ROSSolidPrimitive" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Dimensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSolidPrimitive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSolidPrimitive, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewProp_Dimensions_Inner = { "Dimensions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSolidPrimitive, Dimensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSolidPrimitive, Polygon), Z_Construct_UScriptStruct_FROSPolygon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Polygon_MetaData), NewProp_Polygon_MetaData) }; // 2627027150
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewProp_Dimensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewProp_Dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewProp_Polygon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSolidPrimitive",
	Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::PropPointers),
	sizeof(FROSSolidPrimitive),
	alignof(FROSSolidPrimitive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSolidPrimitive()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSolidPrimitive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSolidPrimitive.InnerSingleton, Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSolidPrimitive.InnerSingleton;
}
// ********** End ScriptStruct FROSSolidPrimitive **************************************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_BOX ********************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_BOX_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_BOX_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_BOX", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::ROS2SolidPrimitiveMsg_eventCONST_BOX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::ROS2SolidPrimitiveMsg_eventCONST_BOX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_BOX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_BOX();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_BOX **********************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_BOX_X ******************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_BOX_X_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_BOX_X_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_BOX_X", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::ROS2SolidPrimitiveMsg_eventCONST_BOX_X_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::ROS2SolidPrimitiveMsg_eventCONST_BOX_X_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_BOX_X)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_BOX_X();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_BOX_X ********************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_BOX_Y ******************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_BOX_Y_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_BOX_Y_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_BOX_Y", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::ROS2SolidPrimitiveMsg_eventCONST_BOX_Y_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::ROS2SolidPrimitiveMsg_eventCONST_BOX_Y_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_BOX_Y)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_BOX_Y();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_BOX_Y ********************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_BOX_Z ******************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_BOX_Z_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_BOX_Z_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_BOX_Z", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::ROS2SolidPrimitiveMsg_eventCONST_BOX_Z_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::ROS2SolidPrimitiveMsg_eventCONST_BOX_Z_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_BOX_Z)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_BOX_Z();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_BOX_Z ********************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_CONE *******************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_CONE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_CONE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_CONE", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::ROS2SolidPrimitiveMsg_eventCONST_CONE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::ROS2SolidPrimitiveMsg_eventCONST_CONE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_CONE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_CONE();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_CONE *********************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_CONE_HEIGHT ************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_CONE_HEIGHT_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_CONE_HEIGHT_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_CONE_HEIGHT", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::ROS2SolidPrimitiveMsg_eventCONST_CONE_HEIGHT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::ROS2SolidPrimitiveMsg_eventCONST_CONE_HEIGHT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_CONE_HEIGHT)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_CONE_HEIGHT();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_CONE_HEIGHT **************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_CONE_RADIUS ************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_CONE_RADIUS_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_CONE_RADIUS_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_CONE_RADIUS", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::ROS2SolidPrimitiveMsg_eventCONST_CONE_RADIUS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::ROS2SolidPrimitiveMsg_eventCONST_CONE_RADIUS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_CONE_RADIUS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_CONE_RADIUS();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_CONE_RADIUS **************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_CYLINDER ***************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_CYLINDER", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_CYLINDER)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_CYLINDER();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_CYLINDER *****************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_CYLINDER_HEIGHT ********************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_HEIGHT_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_HEIGHT_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_CYLINDER_HEIGHT", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_HEIGHT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_HEIGHT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_CYLINDER_HEIGHT)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_CYLINDER_HEIGHT();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_CYLINDER_HEIGHT **********************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_CYLINDER_RADIUS ********************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_RADIUS_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_RADIUS_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_CYLINDER_RADIUS", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_RADIUS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::ROS2SolidPrimitiveMsg_eventCONST_CYLINDER_RADIUS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_CYLINDER_RADIUS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_CYLINDER_RADIUS();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_CYLINDER_RADIUS **********************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_PRISM ******************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_PRISM_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_PRISM_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_PRISM", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::ROS2SolidPrimitiveMsg_eventCONST_PRISM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::ROS2SolidPrimitiveMsg_eventCONST_PRISM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_PRISM)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_PRISM();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_PRISM ********************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_PRISM_HEIGHT ***********************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_PRISM_HEIGHT_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_PRISM_HEIGHT_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_PRISM_HEIGHT", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::ROS2SolidPrimitiveMsg_eventCONST_PRISM_HEIGHT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::ROS2SolidPrimitiveMsg_eventCONST_PRISM_HEIGHT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_PRISM_HEIGHT)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_PRISM_HEIGHT();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_PRISM_HEIGHT *************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_SPHERE *****************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_SPHERE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_SPHERE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_SPHERE", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::ROS2SolidPrimitiveMsg_eventCONST_SPHERE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::ROS2SolidPrimitiveMsg_eventCONST_SPHERE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_SPHERE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_SPHERE();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_SPHERE *******************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function CONST_SPHERE_RADIUS **********************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics
{
	struct ROS2SolidPrimitiveMsg_eventCONST_SPHERE_RADIUS_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventCONST_SPHERE_RADIUS_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "CONST_SPHERE_RADIUS", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::ROS2SolidPrimitiveMsg_eventCONST_SPHERE_RADIUS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::ROS2SolidPrimitiveMsg_eventCONST_SPHERE_RADIUS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execCONST_SPHERE_RADIUS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2SolidPrimitiveMsg::CONST_SPHERE_RADIUS();
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function CONST_SPHERE_RADIUS ************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function GetMsg ***********************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics
{
	struct ROS2SolidPrimitiveMsg_eventGetMsg_Parms
	{
		FROSSolidPrimitive Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSSolidPrimitive, METADATA_PARAMS(0, nullptr) }; // 676803442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::ROS2SolidPrimitiveMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::ROS2SolidPrimitiveMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSSolidPrimitive,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function GetMsg *************************************

// ********** Begin Class UROS2SolidPrimitiveMsg Function SetMsg ***********************************
struct Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics
{
	struct ROS2SolidPrimitiveMsg_eventSetMsg_Parms
	{
		FROSSolidPrimitive Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SolidPrimitiveMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSSolidPrimitive, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 676803442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SolidPrimitiveMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::ROS2SolidPrimitiveMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::ROS2SolidPrimitiveMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SolidPrimitiveMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSSolidPrimitive,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2SolidPrimitiveMsg Function SetMsg *************************************

// ********** Begin Class UROS2SolidPrimitiveMsg ***************************************************
void UROS2SolidPrimitiveMsg::StaticRegisterNativesUROS2SolidPrimitiveMsg()
{
	UClass* Class = UROS2SolidPrimitiveMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_BOX", &UROS2SolidPrimitiveMsg::execCONST_BOX },
		{ "CONST_BOX_X", &UROS2SolidPrimitiveMsg::execCONST_BOX_X },
		{ "CONST_BOX_Y", &UROS2SolidPrimitiveMsg::execCONST_BOX_Y },
		{ "CONST_BOX_Z", &UROS2SolidPrimitiveMsg::execCONST_BOX_Z },
		{ "CONST_CONE", &UROS2SolidPrimitiveMsg::execCONST_CONE },
		{ "CONST_CONE_HEIGHT", &UROS2SolidPrimitiveMsg::execCONST_CONE_HEIGHT },
		{ "CONST_CONE_RADIUS", &UROS2SolidPrimitiveMsg::execCONST_CONE_RADIUS },
		{ "CONST_CYLINDER", &UROS2SolidPrimitiveMsg::execCONST_CYLINDER },
		{ "CONST_CYLINDER_HEIGHT", &UROS2SolidPrimitiveMsg::execCONST_CYLINDER_HEIGHT },
		{ "CONST_CYLINDER_RADIUS", &UROS2SolidPrimitiveMsg::execCONST_CYLINDER_RADIUS },
		{ "CONST_PRISM", &UROS2SolidPrimitiveMsg::execCONST_PRISM },
		{ "CONST_PRISM_HEIGHT", &UROS2SolidPrimitiveMsg::execCONST_PRISM_HEIGHT },
		{ "CONST_SPHERE", &UROS2SolidPrimitiveMsg::execCONST_SPHERE },
		{ "CONST_SPHERE_RADIUS", &UROS2SolidPrimitiveMsg::execCONST_SPHERE_RADIUS },
		{ "GetMsg", &UROS2SolidPrimitiveMsg::execGetMsg },
		{ "SetMsg", &UROS2SolidPrimitiveMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SolidPrimitiveMsg;
UClass* UROS2SolidPrimitiveMsg::GetPrivateStaticClass()
{
	using TClass = UROS2SolidPrimitiveMsg;
	if (!Z_Registration_Info_UClass_UROS2SolidPrimitiveMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SolidPrimitiveMsg"),
			Z_Registration_Info_UClass_UROS2SolidPrimitiveMsg.InnerSingleton,
			StaticRegisterNativesUROS2SolidPrimitiveMsg,
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
	return Z_Registration_Info_UClass_UROS2SolidPrimitiveMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SolidPrimitiveMsg_NoRegister()
{
	return UROS2SolidPrimitiveMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SolidPrimitiveMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2SolidPrimitive.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2SolidPrimitive.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX, "CONST_BOX" }, // 3205940853
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_X, "CONST_BOX_X" }, // 4221001760
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Y, "CONST_BOX_Y" }, // 986224391
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_BOX_Z, "CONST_BOX_Z" }, // 2046519249
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE, "CONST_CONE" }, // 2005900030
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_HEIGHT, "CONST_CONE_HEIGHT" }, // 2441477928
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CONE_RADIUS, "CONST_CONE_RADIUS" }, // 3600018656
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER, "CONST_CYLINDER" }, // 1383949238
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_HEIGHT, "CONST_CYLINDER_HEIGHT" }, // 2112514782
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_CYLINDER_RADIUS, "CONST_CYLINDER_RADIUS" }, // 303724408
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM, "CONST_PRISM" }, // 2909114623
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_PRISM_HEIGHT, "CONST_PRISM_HEIGHT" }, // 1561674539
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE, "CONST_SPHERE" }, // 970866475
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_CONST_SPHERE_RADIUS, "CONST_SPHERE_RADIUS" }, // 97437293
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_GetMsg, "GetMsg" }, // 1887731758
		{ &Z_Construct_UFunction_UROS2SolidPrimitiveMsg_SetMsg, "SetMsg" }, // 2100811137
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SolidPrimitiveMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SolidPrimitiveMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SolidPrimitiveMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SolidPrimitiveMsg_Statics::ClassParams = {
	&UROS2SolidPrimitiveMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SolidPrimitiveMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SolidPrimitiveMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SolidPrimitiveMsg()
{
	if (!Z_Registration_Info_UClass_UROS2SolidPrimitiveMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SolidPrimitiveMsg.OuterSingleton, Z_Construct_UClass_UROS2SolidPrimitiveMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SolidPrimitiveMsg.OuterSingleton;
}
UROS2SolidPrimitiveMsg::UROS2SolidPrimitiveMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SolidPrimitiveMsg);
UROS2SolidPrimitiveMsg::~UROS2SolidPrimitiveMsg() {}
// ********** End Class UROS2SolidPrimitiveMsg *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSolidPrimitive::StaticStruct, Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics::NewStructOps, TEXT("ROSSolidPrimitive"), &Z_Registration_Info_UScriptStruct_FROSSolidPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSolidPrimitive), 676803442U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SolidPrimitiveMsg, UROS2SolidPrimitiveMsg::StaticClass, TEXT("UROS2SolidPrimitiveMsg"), &Z_Registration_Info_UClass_UROS2SolidPrimitiveMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SolidPrimitiveMsg), 1659260436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h__Script_rclUE_472945371(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
