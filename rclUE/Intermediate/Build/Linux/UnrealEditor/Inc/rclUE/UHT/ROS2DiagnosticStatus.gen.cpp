// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2DiagnosticStatus.h"
#include "rclUE/Public/Msgs/ROS2KeyValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2DiagnosticStatus() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2DiagnosticStatusMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2DiagnosticStatusMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDiagnosticStatus();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSKeyValue();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSDiagnosticStatus **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSDiagnosticStatus;
class UScriptStruct* FROSDiagnosticStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDiagnosticStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSDiagnosticStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSDiagnosticStatus, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSDiagnosticStatus"));
	}
	return Z_Registration_Info_UScriptStruct_FROSDiagnosticStatus.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "ROSDiagnosticStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSDiagnosticStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "ROSDiagnosticStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardwareId_MetaData[] = {
		{ "Category", "ROSDiagnosticStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "ROSDiagnosticStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Level;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HardwareId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSDiagnosticStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDiagnosticStatus, Level), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDiagnosticStatus, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDiagnosticStatus, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_HardwareId = { "HardwareId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDiagnosticStatus, HardwareId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardwareId_MetaData), NewProp_HardwareId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSKeyValue, METADATA_PARAMS(0, nullptr) }; // 3430551668
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDiagnosticStatus, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3430551668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_HardwareId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSDiagnosticStatus",
	Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::PropPointers),
	sizeof(FROSDiagnosticStatus),
	alignof(FROSDiagnosticStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSDiagnosticStatus()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDiagnosticStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSDiagnosticStatus.InnerSingleton, Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSDiagnosticStatus.InnerSingleton;
}
// ********** End ScriptStruct FROSDiagnosticStatus ************************************************

// ********** Begin Class UROS2DiagnosticStatusMsg Function CONST_ERROR ****************************
struct Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics
{
	struct ROS2DiagnosticStatusMsg_eventCONST_ERROR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DiagnosticStatusMsg_eventCONST_ERROR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DiagnosticStatusMsg, nullptr, "CONST_ERROR", Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::ROS2DiagnosticStatusMsg_eventCONST_ERROR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::ROS2DiagnosticStatusMsg_eventCONST_ERROR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DiagnosticStatusMsg::execCONST_ERROR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2DiagnosticStatusMsg::CONST_ERROR();
	P_NATIVE_END;
}
// ********** End Class UROS2DiagnosticStatusMsg Function CONST_ERROR ******************************

// ********** Begin Class UROS2DiagnosticStatusMsg Function CONST_OK *******************************
struct Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics
{
	struct ROS2DiagnosticStatusMsg_eventCONST_OK_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DiagnosticStatusMsg_eventCONST_OK_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DiagnosticStatusMsg, nullptr, "CONST_OK", Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::ROS2DiagnosticStatusMsg_eventCONST_OK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::ROS2DiagnosticStatusMsg_eventCONST_OK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DiagnosticStatusMsg::execCONST_OK)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2DiagnosticStatusMsg::CONST_OK();
	P_NATIVE_END;
}
// ********** End Class UROS2DiagnosticStatusMsg Function CONST_OK *********************************

// ********** Begin Class UROS2DiagnosticStatusMsg Function CONST_STALE ****************************
struct Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics
{
	struct ROS2DiagnosticStatusMsg_eventCONST_STALE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DiagnosticStatusMsg_eventCONST_STALE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DiagnosticStatusMsg, nullptr, "CONST_STALE", Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::ROS2DiagnosticStatusMsg_eventCONST_STALE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::ROS2DiagnosticStatusMsg_eventCONST_STALE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DiagnosticStatusMsg::execCONST_STALE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2DiagnosticStatusMsg::CONST_STALE();
	P_NATIVE_END;
}
// ********** End Class UROS2DiagnosticStatusMsg Function CONST_STALE ******************************

// ********** Begin Class UROS2DiagnosticStatusMsg Function CONST_WARN *****************************
struct Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics
{
	struct ROS2DiagnosticStatusMsg_eventCONST_WARN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DiagnosticStatusMsg_eventCONST_WARN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DiagnosticStatusMsg, nullptr, "CONST_WARN", Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::ROS2DiagnosticStatusMsg_eventCONST_WARN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::ROS2DiagnosticStatusMsg_eventCONST_WARN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DiagnosticStatusMsg::execCONST_WARN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2DiagnosticStatusMsg::CONST_WARN();
	P_NATIVE_END;
}
// ********** End Class UROS2DiagnosticStatusMsg Function CONST_WARN *******************************

// ********** Begin Class UROS2DiagnosticStatusMsg Function GetMsg *********************************
struct Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics
{
	struct ROS2DiagnosticStatusMsg_eventGetMsg_Parms
	{
		FROSDiagnosticStatus Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DiagnosticStatusMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSDiagnosticStatus, METADATA_PARAMS(0, nullptr) }; // 2497086417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DiagnosticStatusMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::ROS2DiagnosticStatusMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::ROS2DiagnosticStatusMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DiagnosticStatusMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSDiagnosticStatus,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2DiagnosticStatusMsg Function GetMsg ***********************************

// ********** Begin Class UROS2DiagnosticStatusMsg Function SetMsg *********************************
struct Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics
{
	struct ROS2DiagnosticStatusMsg_eventSetMsg_Parms
	{
		FROSDiagnosticStatus Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DiagnosticStatusMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSDiagnosticStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2497086417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DiagnosticStatusMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::ROS2DiagnosticStatusMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::ROS2DiagnosticStatusMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DiagnosticStatusMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSDiagnosticStatus,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2DiagnosticStatusMsg Function SetMsg ***********************************

// ********** Begin Class UROS2DiagnosticStatusMsg *************************************************
void UROS2DiagnosticStatusMsg::StaticRegisterNativesUROS2DiagnosticStatusMsg()
{
	UClass* Class = UROS2DiagnosticStatusMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_ERROR", &UROS2DiagnosticStatusMsg::execCONST_ERROR },
		{ "CONST_OK", &UROS2DiagnosticStatusMsg::execCONST_OK },
		{ "CONST_STALE", &UROS2DiagnosticStatusMsg::execCONST_STALE },
		{ "CONST_WARN", &UROS2DiagnosticStatusMsg::execCONST_WARN },
		{ "GetMsg", &UROS2DiagnosticStatusMsg::execGetMsg },
		{ "SetMsg", &UROS2DiagnosticStatusMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2DiagnosticStatusMsg;
UClass* UROS2DiagnosticStatusMsg::GetPrivateStaticClass()
{
	using TClass = UROS2DiagnosticStatusMsg;
	if (!Z_Registration_Info_UClass_UROS2DiagnosticStatusMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2DiagnosticStatusMsg"),
			Z_Registration_Info_UClass_UROS2DiagnosticStatusMsg.InnerSingleton,
			StaticRegisterNativesUROS2DiagnosticStatusMsg,
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
	return Z_Registration_Info_UClass_UROS2DiagnosticStatusMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2DiagnosticStatusMsg_NoRegister()
{
	return UROS2DiagnosticStatusMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2DiagnosticStatusMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2DiagnosticStatus.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticStatus.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_ERROR, "CONST_ERROR" }, // 1334274442
		{ &Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_OK, "CONST_OK" }, // 3394578597
		{ &Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_STALE, "CONST_STALE" }, // 1660741391
		{ &Z_Construct_UFunction_UROS2DiagnosticStatusMsg_CONST_WARN, "CONST_WARN" }, // 2354105070
		{ &Z_Construct_UFunction_UROS2DiagnosticStatusMsg_GetMsg, "GetMsg" }, // 4182947849
		{ &Z_Construct_UFunction_UROS2DiagnosticStatusMsg_SetMsg, "SetMsg" }, // 3703800552
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2DiagnosticStatusMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2DiagnosticStatusMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DiagnosticStatusMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2DiagnosticStatusMsg_Statics::ClassParams = {
	&UROS2DiagnosticStatusMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DiagnosticStatusMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2DiagnosticStatusMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2DiagnosticStatusMsg()
{
	if (!Z_Registration_Info_UClass_UROS2DiagnosticStatusMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2DiagnosticStatusMsg.OuterSingleton, Z_Construct_UClass_UROS2DiagnosticStatusMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2DiagnosticStatusMsg.OuterSingleton;
}
UROS2DiagnosticStatusMsg::UROS2DiagnosticStatusMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2DiagnosticStatusMsg);
UROS2DiagnosticStatusMsg::~UROS2DiagnosticStatusMsg() {}
// ********** End Class UROS2DiagnosticStatusMsg ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSDiagnosticStatus::StaticStruct, Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics::NewStructOps, TEXT("ROSDiagnosticStatus"), &Z_Registration_Info_UScriptStruct_FROSDiagnosticStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSDiagnosticStatus), 2497086417U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2DiagnosticStatusMsg, UROS2DiagnosticStatusMsg::StaticClass, TEXT("UROS2DiagnosticStatusMsg"), &Z_Registration_Info_UClass_UROS2DiagnosticStatusMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2DiagnosticStatusMsg), 2497685428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h__Script_rclUE_152666592(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
