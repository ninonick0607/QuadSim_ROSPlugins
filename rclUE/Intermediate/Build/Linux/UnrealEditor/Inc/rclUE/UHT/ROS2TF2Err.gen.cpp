// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2TF2Err.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2TF2Err() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TF2ErrMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TF2ErrMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTF2Err();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTF2Err ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTF2Err;
class UScriptStruct* FROSTF2Err::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTF2Err.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTF2Err.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTF2Err, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTF2Err"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTF2Err.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTF2Err_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "Category", "ROSTF2Err" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorString_MetaData[] = {
		{ "Category", "ROSTF2Err" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTF2Err>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSTF2Err_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTF2Err, Error), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSTF2Err_Statics::NewProp_ErrorString = { "ErrorString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTF2Err, ErrorString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorString_MetaData), NewProp_ErrorString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTF2Err_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTF2Err_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTF2Err_Statics::NewProp_ErrorString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTF2Err_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTF2Err_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTF2Err",
	Z_Construct_UScriptStruct_FROSTF2Err_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTF2Err_Statics::PropPointers),
	sizeof(FROSTF2Err),
	alignof(FROSTF2Err),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTF2Err_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTF2Err_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTF2Err()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTF2Err.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTF2Err.InnerSingleton, Z_Construct_UScriptStruct_FROSTF2Err_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTF2Err.InnerSingleton;
}
// ********** End ScriptStruct FROSTF2Err **********************************************************

// ********** Begin Class UROS2TF2ErrMsg Function CONST_CONNECTIVITY_ERROR *************************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics
{
	struct ROS2TF2ErrMsg_eventCONST_CONNECTIVITY_ERROR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventCONST_CONNECTIVITY_ERROR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "CONST_CONNECTIVITY_ERROR", Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_CONNECTIVITY_ERROR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_CONNECTIVITY_ERROR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execCONST_CONNECTIVITY_ERROR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2TF2ErrMsg::CONST_CONNECTIVITY_ERROR();
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function CONST_CONNECTIVITY_ERROR ***************************

// ********** Begin Class UROS2TF2ErrMsg Function CONST_EXTRAPOLATION_ERROR ************************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics
{
	struct ROS2TF2ErrMsg_eventCONST_EXTRAPOLATION_ERROR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventCONST_EXTRAPOLATION_ERROR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "CONST_EXTRAPOLATION_ERROR", Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_EXTRAPOLATION_ERROR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_EXTRAPOLATION_ERROR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execCONST_EXTRAPOLATION_ERROR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2TF2ErrMsg::CONST_EXTRAPOLATION_ERROR();
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function CONST_EXTRAPOLATION_ERROR **************************

// ********** Begin Class UROS2TF2ErrMsg Function CONST_INVALID_ARGUMENT_ERROR *********************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics
{
	struct ROS2TF2ErrMsg_eventCONST_INVALID_ARGUMENT_ERROR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventCONST_INVALID_ARGUMENT_ERROR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "CONST_INVALID_ARGUMENT_ERROR", Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_INVALID_ARGUMENT_ERROR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_INVALID_ARGUMENT_ERROR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execCONST_INVALID_ARGUMENT_ERROR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2TF2ErrMsg::CONST_INVALID_ARGUMENT_ERROR();
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function CONST_INVALID_ARGUMENT_ERROR ***********************

// ********** Begin Class UROS2TF2ErrMsg Function CONST_LOOKUP_ERROR *******************************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics
{
	struct ROS2TF2ErrMsg_eventCONST_LOOKUP_ERROR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventCONST_LOOKUP_ERROR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "CONST_LOOKUP_ERROR", Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_LOOKUP_ERROR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_LOOKUP_ERROR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execCONST_LOOKUP_ERROR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2TF2ErrMsg::CONST_LOOKUP_ERROR();
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function CONST_LOOKUP_ERROR *********************************

// ********** Begin Class UROS2TF2ErrMsg Function CONST_NO_ERROR ***********************************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics
{
	struct ROS2TF2ErrMsg_eventCONST_NO_ERROR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventCONST_NO_ERROR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "CONST_NO_ERROR", Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_NO_ERROR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_NO_ERROR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execCONST_NO_ERROR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2TF2ErrMsg::CONST_NO_ERROR();
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function CONST_NO_ERROR *************************************

// ********** Begin Class UROS2TF2ErrMsg Function CONST_TIMEOUT_ERROR ******************************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics
{
	struct ROS2TF2ErrMsg_eventCONST_TIMEOUT_ERROR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventCONST_TIMEOUT_ERROR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "CONST_TIMEOUT_ERROR", Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_TIMEOUT_ERROR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_TIMEOUT_ERROR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execCONST_TIMEOUT_ERROR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2TF2ErrMsg::CONST_TIMEOUT_ERROR();
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function CONST_TIMEOUT_ERROR ********************************

// ********** Begin Class UROS2TF2ErrMsg Function CONST_TRANSFORM_ERROR ****************************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics
{
	struct ROS2TF2ErrMsg_eventCONST_TRANSFORM_ERROR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventCONST_TRANSFORM_ERROR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "CONST_TRANSFORM_ERROR", Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_TRANSFORM_ERROR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::ROS2TF2ErrMsg_eventCONST_TRANSFORM_ERROR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execCONST_TRANSFORM_ERROR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2TF2ErrMsg::CONST_TRANSFORM_ERROR();
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function CONST_TRANSFORM_ERROR ******************************

// ********** Begin Class UROS2TF2ErrMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics
{
	struct ROS2TF2ErrMsg_eventGetMsg_Parms
	{
		FROSTF2Err Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTF2Err, METADATA_PARAMS(0, nullptr) }; // 422028527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::ROS2TF2ErrMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::ROS2TF2ErrMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTF2Err,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function GetMsg *********************************************

// ********** Begin Class UROS2TF2ErrMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics
{
	struct ROS2TF2ErrMsg_eventSetMsg_Parms
	{
		FROSTF2Err Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TF2ErrMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTF2Err, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 422028527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TF2ErrMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::ROS2TF2ErrMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::ROS2TF2ErrMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TF2ErrMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTF2Err,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TF2ErrMsg Function SetMsg *********************************************

// ********** Begin Class UROS2TF2ErrMsg ***********************************************************
void UROS2TF2ErrMsg::StaticRegisterNativesUROS2TF2ErrMsg()
{
	UClass* Class = UROS2TF2ErrMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_CONNECTIVITY_ERROR", &UROS2TF2ErrMsg::execCONST_CONNECTIVITY_ERROR },
		{ "CONST_EXTRAPOLATION_ERROR", &UROS2TF2ErrMsg::execCONST_EXTRAPOLATION_ERROR },
		{ "CONST_INVALID_ARGUMENT_ERROR", &UROS2TF2ErrMsg::execCONST_INVALID_ARGUMENT_ERROR },
		{ "CONST_LOOKUP_ERROR", &UROS2TF2ErrMsg::execCONST_LOOKUP_ERROR },
		{ "CONST_NO_ERROR", &UROS2TF2ErrMsg::execCONST_NO_ERROR },
		{ "CONST_TIMEOUT_ERROR", &UROS2TF2ErrMsg::execCONST_TIMEOUT_ERROR },
		{ "CONST_TRANSFORM_ERROR", &UROS2TF2ErrMsg::execCONST_TRANSFORM_ERROR },
		{ "GetMsg", &UROS2TF2ErrMsg::execGetMsg },
		{ "SetMsg", &UROS2TF2ErrMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TF2ErrMsg;
UClass* UROS2TF2ErrMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TF2ErrMsg;
	if (!Z_Registration_Info_UClass_UROS2TF2ErrMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TF2ErrMsg"),
			Z_Registration_Info_UClass_UROS2TF2ErrMsg.InnerSingleton,
			StaticRegisterNativesUROS2TF2ErrMsg,
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
	return Z_Registration_Info_UClass_UROS2TF2ErrMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TF2ErrMsg_NoRegister()
{
	return UROS2TF2ErrMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TF2ErrMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2TF2Err.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TF2Err.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_CONNECTIVITY_ERROR, "CONST_CONNECTIVITY_ERROR" }, // 1817441873
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_EXTRAPOLATION_ERROR, "CONST_EXTRAPOLATION_ERROR" }, // 1269612552
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_INVALID_ARGUMENT_ERROR, "CONST_INVALID_ARGUMENT_ERROR" }, // 8353774
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_LOOKUP_ERROR, "CONST_LOOKUP_ERROR" }, // 3299588562
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_NO_ERROR, "CONST_NO_ERROR" }, // 3483816919
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TIMEOUT_ERROR, "CONST_TIMEOUT_ERROR" }, // 3909978909
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_CONST_TRANSFORM_ERROR, "CONST_TRANSFORM_ERROR" }, // 2097060703
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_GetMsg, "GetMsg" }, // 908023439
		{ &Z_Construct_UFunction_UROS2TF2ErrMsg_SetMsg, "SetMsg" }, // 2953572554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TF2ErrMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TF2ErrMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TF2ErrMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TF2ErrMsg_Statics::ClassParams = {
	&UROS2TF2ErrMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TF2ErrMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TF2ErrMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TF2ErrMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TF2ErrMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TF2ErrMsg.OuterSingleton, Z_Construct_UClass_UROS2TF2ErrMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TF2ErrMsg.OuterSingleton;
}
UROS2TF2ErrMsg::UROS2TF2ErrMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TF2ErrMsg);
UROS2TF2ErrMsg::~UROS2TF2ErrMsg() {}
// ********** End Class UROS2TF2ErrMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTF2Err::StaticStruct, Z_Construct_UScriptStruct_FROSTF2Err_Statics::NewStructOps, TEXT("ROSTF2Err"), &Z_Registration_Info_UScriptStruct_FROSTF2Err, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTF2Err), 422028527U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TF2ErrMsg, UROS2TF2ErrMsg::StaticClass, TEXT("UROS2TF2ErrMsg"), &Z_Registration_Info_UClass_UROS2TF2ErrMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TF2ErrMsg), 2976180229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h__Script_rclUE_8117439(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
