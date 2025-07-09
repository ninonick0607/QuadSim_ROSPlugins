// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2GoalStatus.h"
#include "rclUE/Public/Msgs/ROS2GoalID.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GoalStatus() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GoalStatusMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GoalStatusMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGoalID();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGoalStatus();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGoalStatus ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGoalStatus;
class UScriptStruct* FROSGoalStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGoalStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGoalStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGoalStatus, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGoalStatus"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGoalStatus.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGoalStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalId_MetaData[] = {
		{ "Category", "ROSGoalStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "ROSGoalStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "ROSGoalStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGoalStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGoalStatus_Statics::NewProp_GoalId = { "GoalId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalStatus, GoalId), Z_Construct_UScriptStruct_FROSGoalID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalId_MetaData), NewProp_GoalId_MetaData) }; // 1299629594
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSGoalStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalStatus, Status), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSGoalStatus_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalStatus, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGoalStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalStatus_Statics::NewProp_GoalId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalStatus_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalStatus_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGoalStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGoalStatus",
	Z_Construct_UScriptStruct_FROSGoalStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalStatus_Statics::PropPointers),
	sizeof(FROSGoalStatus),
	alignof(FROSGoalStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGoalStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGoalStatus()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGoalStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGoalStatus.InnerSingleton, Z_Construct_UScriptStruct_FROSGoalStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGoalStatus.InnerSingleton;
}
// ********** End ScriptStruct FROSGoalStatus ******************************************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_ABORTED ********************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_ABORTED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_ABORTED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_ABORTED", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::ROS2GoalStatusMsg_eventCONST_ABORTED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::ROS2GoalStatusMsg_eventCONST_ABORTED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_ABORTED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_ABORTED();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_ABORTED **********************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_ACTIVE *********************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_ACTIVE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_ACTIVE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_ACTIVE", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::ROS2GoalStatusMsg_eventCONST_ACTIVE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::ROS2GoalStatusMsg_eventCONST_ACTIVE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_ACTIVE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_ACTIVE();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_ACTIVE ***********************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_LOST ***********************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_LOST_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_LOST_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_LOST", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::ROS2GoalStatusMsg_eventCONST_LOST_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::ROS2GoalStatusMsg_eventCONST_LOST_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_LOST)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_LOST();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_LOST *************************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_PENDING ********************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_PENDING_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_PENDING_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_PENDING", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::ROS2GoalStatusMsg_eventCONST_PENDING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::ROS2GoalStatusMsg_eventCONST_PENDING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_PENDING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_PENDING();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_PENDING **********************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_PREEMPTED ******************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_PREEMPTED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_PREEMPTED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_PREEMPTED", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::ROS2GoalStatusMsg_eventCONST_PREEMPTED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::ROS2GoalStatusMsg_eventCONST_PREEMPTED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_PREEMPTED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_PREEMPTED();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_PREEMPTED ********************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_PREEMPTING *****************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_PREEMPTING_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_PREEMPTING_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_PREEMPTING", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::ROS2GoalStatusMsg_eventCONST_PREEMPTING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::ROS2GoalStatusMsg_eventCONST_PREEMPTING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_PREEMPTING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_PREEMPTING();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_PREEMPTING *******************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_RECALLED *******************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_RECALLED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_RECALLED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_RECALLED", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::ROS2GoalStatusMsg_eventCONST_RECALLED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::ROS2GoalStatusMsg_eventCONST_RECALLED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_RECALLED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_RECALLED();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_RECALLED *********************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_RECALLING ******************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_RECALLING_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_RECALLING_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_RECALLING", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::ROS2GoalStatusMsg_eventCONST_RECALLING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::ROS2GoalStatusMsg_eventCONST_RECALLING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_RECALLING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_RECALLING();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_RECALLING ********************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_REJECTED *******************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_REJECTED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_REJECTED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_REJECTED", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::ROS2GoalStatusMsg_eventCONST_REJECTED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::ROS2GoalStatusMsg_eventCONST_REJECTED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_REJECTED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_REJECTED();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_REJECTED *********************************

// ********** Begin Class UROS2GoalStatusMsg Function CONST_SUCCEEDED ******************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics
{
	struct ROS2GoalStatusMsg_eventCONST_SUCCEEDED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventCONST_SUCCEEDED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "CONST_SUCCEEDED", Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::ROS2GoalStatusMsg_eventCONST_SUCCEEDED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::ROS2GoalStatusMsg_eventCONST_SUCCEEDED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execCONST_SUCCEEDED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2GoalStatusMsg::CONST_SUCCEEDED();
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function CONST_SUCCEEDED ********************************

// ********** Begin Class UROS2GoalStatusMsg Function GetMsg ***************************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics
{
	struct ROS2GoalStatusMsg_eventGetMsg_Parms
	{
		FROSGoalStatus Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSGoalStatus, METADATA_PARAMS(0, nullptr) }; // 2996246580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::ROS2GoalStatusMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::ROS2GoalStatusMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSGoalStatus,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function GetMsg *****************************************

// ********** Begin Class UROS2GoalStatusMsg Function SetMsg ***************************************
struct Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics
{
	struct ROS2GoalStatusMsg_eventSetMsg_Parms
	{
		FROSGoalStatus Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSGoalStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2996246580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::ROS2GoalStatusMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::ROS2GoalStatusMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSGoalStatus,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusMsg Function SetMsg *****************************************

// ********** Begin Class UROS2GoalStatusMsg *******************************************************
void UROS2GoalStatusMsg::StaticRegisterNativesUROS2GoalStatusMsg()
{
	UClass* Class = UROS2GoalStatusMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_ABORTED", &UROS2GoalStatusMsg::execCONST_ABORTED },
		{ "CONST_ACTIVE", &UROS2GoalStatusMsg::execCONST_ACTIVE },
		{ "CONST_LOST", &UROS2GoalStatusMsg::execCONST_LOST },
		{ "CONST_PENDING", &UROS2GoalStatusMsg::execCONST_PENDING },
		{ "CONST_PREEMPTED", &UROS2GoalStatusMsg::execCONST_PREEMPTED },
		{ "CONST_PREEMPTING", &UROS2GoalStatusMsg::execCONST_PREEMPTING },
		{ "CONST_RECALLED", &UROS2GoalStatusMsg::execCONST_RECALLED },
		{ "CONST_RECALLING", &UROS2GoalStatusMsg::execCONST_RECALLING },
		{ "CONST_REJECTED", &UROS2GoalStatusMsg::execCONST_REJECTED },
		{ "CONST_SUCCEEDED", &UROS2GoalStatusMsg::execCONST_SUCCEEDED },
		{ "GetMsg", &UROS2GoalStatusMsg::execGetMsg },
		{ "SetMsg", &UROS2GoalStatusMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GoalStatusMsg;
UClass* UROS2GoalStatusMsg::GetPrivateStaticClass()
{
	using TClass = UROS2GoalStatusMsg;
	if (!Z_Registration_Info_UClass_UROS2GoalStatusMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GoalStatusMsg"),
			Z_Registration_Info_UClass_UROS2GoalStatusMsg.InnerSingleton,
			StaticRegisterNativesUROS2GoalStatusMsg,
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
	return Z_Registration_Info_UClass_UROS2GoalStatusMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GoalStatusMsg_NoRegister()
{
	return UROS2GoalStatusMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GoalStatusMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2GoalStatus.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatus.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ABORTED, "CONST_ABORTED" }, // 4007552930
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_ACTIVE, "CONST_ACTIVE" }, // 1453921565
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_LOST, "CONST_LOST" }, // 2247819528
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PENDING, "CONST_PENDING" }, // 2493981438
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTED, "CONST_PREEMPTED" }, // 4261423403
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_PREEMPTING, "CONST_PREEMPTING" }, // 187723364
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLED, "CONST_RECALLED" }, // 3422504003
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_RECALLING, "CONST_RECALLING" }, // 3739754707
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_REJECTED, "CONST_REJECTED" }, // 3929517349
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_CONST_SUCCEEDED, "CONST_SUCCEEDED" }, // 2964604029
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_GetMsg, "GetMsg" }, // 598505957
		{ &Z_Construct_UFunction_UROS2GoalStatusMsg_SetMsg, "SetMsg" }, // 748386915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GoalStatusMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GoalStatusMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GoalStatusMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GoalStatusMsg_Statics::ClassParams = {
	&UROS2GoalStatusMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GoalStatusMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GoalStatusMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GoalStatusMsg()
{
	if (!Z_Registration_Info_UClass_UROS2GoalStatusMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GoalStatusMsg.OuterSingleton, Z_Construct_UClass_UROS2GoalStatusMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GoalStatusMsg.OuterSingleton;
}
UROS2GoalStatusMsg::UROS2GoalStatusMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GoalStatusMsg);
UROS2GoalStatusMsg::~UROS2GoalStatusMsg() {}
// ********** End Class UROS2GoalStatusMsg *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGoalStatus::StaticStruct, Z_Construct_UScriptStruct_FROSGoalStatus_Statics::NewStructOps, TEXT("ROSGoalStatus"), &Z_Registration_Info_UScriptStruct_FROSGoalStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGoalStatus), 2996246580U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GoalStatusMsg, UROS2GoalStatusMsg::StaticClass, TEXT("UROS2GoalStatusMsg"), &Z_Registration_Info_UClass_UROS2GoalStatusMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GoalStatusMsg), 498876390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h__Script_rclUE_3803780667(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
