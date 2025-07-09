// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controllers/ROS2Controller.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Controller() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Publisher_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Subscriber_NoRegister();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_AROS2Controller();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_AROS2Controller_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AROS2Controller Function GetCurrentGoalPosition **************************
struct Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics
{
	struct ROS2Controller_eventGetCurrentGoalPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ROS2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Accessors for UI\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accessors for UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventGetCurrentGoalPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "GetCurrentGoalPosition", Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::ROS2Controller_eventGetCurrentGoalPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::ROS2Controller_eventGetCurrentGoalPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execGetCurrentGoalPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCurrentGoalPosition();
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function GetCurrentGoalPosition ****************************

// ********** Begin Class AROS2Controller Function GetDroneID **************************************
struct Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics
{
	struct ROS2Controller_eventGetDroneID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventGetDroneID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "GetDroneID", Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::ROS2Controller_eventGetDroneID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::ROS2Controller_eventGetDroneID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_GetDroneID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_GetDroneID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execGetDroneID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDroneID();
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function GetDroneID ****************************************

// ********** Begin Class AROS2Controller Function HandleAttitudeEuler *****************************
struct Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics
{
	struct ROS2Controller_eventHandleAttitudeEuler_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles incoming PoseStamped goal\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles incoming PoseStamped goal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventHandleAttitudeEuler_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "HandleAttitudeEuler", Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::ROS2Controller_eventHandleAttitudeEuler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::ROS2Controller_eventHandleAttitudeEuler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execHandleAttitudeEuler)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAttitudeEuler(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function HandleAttitudeEuler *******************************

// ********** Begin Class AROS2Controller Function HandleGoalPose **********************************
struct Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics
{
	struct ROS2Controller_eventHandleGoalPose_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventHandleGoalPose_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "HandleGoalPose", Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::ROS2Controller_eventHandleGoalPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::ROS2Controller_eventHandleGoalPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_HandleGoalPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_HandleGoalPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execHandleGoalPose)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGoalPose(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function HandleGoalPose ************************************

// ********** Begin Class AROS2Controller Function HandleHoverCommand ******************************
struct Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics
{
	struct ROS2Controller_eventHandleHoverCommand_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventHandleHoverCommand_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "HandleHoverCommand", Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::ROS2Controller_eventHandleHoverCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::ROS2Controller_eventHandleHoverCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_HandleHoverCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_HandleHoverCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execHandleHoverCommand)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHoverCommand(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function HandleHoverCommand ********************************

// ********** Begin Class AROS2Controller Function HandleImuData ***********************************
struct Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics
{
	struct ROS2Controller_eventHandleImuData_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventHandleImuData_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "HandleImuData", Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::ROS2Controller_eventHandleImuData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::ROS2Controller_eventHandleImuData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_HandleImuData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_HandleImuData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execHandleImuData)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImuData(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function HandleImuData *************************************

// ********** Begin Class AROS2Controller Function HandleObstacleMessage ***************************
struct Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics
{
	struct ROS2Controller_eventHandleObstacleMessage_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ROS Subscription Handlers ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ROS Subscription Handlers ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventHandleObstacleMessage_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "HandleObstacleMessage", Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::ROS2Controller_eventHandleObstacleMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::ROS2Controller_eventHandleObstacleMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execHandleObstacleMessage)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleObstacleMessage(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function HandleObstacleMessage *****************************

// ********** Begin Class AROS2Controller Function HandleResetCommand ******************************
struct Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics
{
	struct ROS2Controller_eventHandleResetCommand_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventHandleResetCommand_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "HandleResetCommand", Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::ROS2Controller_eventHandleResetCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::ROS2Controller_eventHandleResetCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_HandleResetCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_HandleResetCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execHandleResetCommand)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResetCommand(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function HandleResetCommand ********************************

// ********** Begin Class AROS2Controller Function HandleVelocityCommand ***************************
struct Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics
{
	struct ROS2Controller_eventHandleVelocityCommand_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventHandleVelocityCommand_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "HandleVelocityCommand", Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::ROS2Controller_eventHandleVelocityCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::ROS2Controller_eventHandleVelocityCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execHandleVelocityCommand)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleVelocityCommand(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function HandleVelocityCommand *****************************

// ********** Begin Class AROS2Controller Function UpdateCollisionMessage **************************
struct Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics
{
	struct ROS2Controller_eventUpdateCollisionMessage_Parms
	{
		UROS2GenericMsg* InMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Note: Image publishing might be handled differently now\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Note: Image publishing might be handled differently now" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventUpdateCollisionMessage_Parms, InMessage), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "UpdateCollisionMessage", Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::ROS2Controller_eventUpdateCollisionMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::ROS2Controller_eventUpdateCollisionMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execUpdateCollisionMessage)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCollisionMessage(Z_Param_InMessage);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function UpdateCollisionMessage ****************************

// ********** Begin Class AROS2Controller Function UpdateGoalPositionMessage ***********************
struct Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics
{
	struct ROS2Controller_eventUpdateGoalPositionMessage_Parms
	{
		UROS2GenericMsg* InMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventUpdateGoalPositionMessage_Parms, InMessage), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "UpdateGoalPositionMessage", Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::ROS2Controller_eventUpdateGoalPositionMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::ROS2Controller_eventUpdateGoalPositionMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execUpdateGoalPositionMessage)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGoalPositionMessage(Z_Param_InMessage);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function UpdateGoalPositionMessage *************************

// ********** Begin Class AROS2Controller Function UpdateImageMessage ******************************
struct Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics
{
	struct ROS2Controller_eventUpdateImageMessage_Parms
	{
		UROS2GenericMsg* InMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventUpdateImageMessage_Parms, InMessage), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "UpdateImageMessage", Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::ROS2Controller_eventUpdateImageMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::ROS2Controller_eventUpdateImageMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_UpdateImageMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_UpdateImageMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execUpdateImageMessage)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateImageMessage(Z_Param_InMessage);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function UpdateImageMessage ********************************

// ********** Begin Class AROS2Controller Function UpdateOdometryMessage ***************************
struct Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics
{
	struct ROS2Controller_eventUpdateOdometryMessage_Parms
	{
		UROS2GenericMsg* InMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ROS Update Callbacks (for Loop Publishers) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ROS Update Callbacks (for Loop Publishers) ---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventUpdateOdometryMessage_Parms, InMessage), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "UpdateOdometryMessage", Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::ROS2Controller_eventUpdateOdometryMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::ROS2Controller_eventUpdateOdometryMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execUpdateOdometryMessage)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateOdometryMessage(Z_Param_InMessage);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function UpdateOdometryMessage *****************************

// ********** Begin Class AROS2Controller Function UpdateTFMessage *********************************
struct Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics
{
	struct ROS2Controller_eventUpdateTFMessage_Parms
	{
		UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Controller_eventUpdateTFMessage_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Controller, nullptr, "UpdateTFMessage", Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::ROS2Controller_eventUpdateTFMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::ROS2Controller_eventUpdateTFMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Controller_UpdateTFMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Controller_UpdateTFMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Controller::execUpdateTFMessage)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTFMessage(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class AROS2Controller Function UpdateTFMessage ***********************************

// ********** Begin Class AROS2Controller **********************************************************
void AROS2Controller::StaticRegisterNativesAROS2Controller()
{
	UClass* Class = AROS2Controller::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentGoalPosition", &AROS2Controller::execGetCurrentGoalPosition },
		{ "GetDroneID", &AROS2Controller::execGetDroneID },
		{ "HandleAttitudeEuler", &AROS2Controller::execHandleAttitudeEuler },
		{ "HandleGoalPose", &AROS2Controller::execHandleGoalPose },
		{ "HandleHoverCommand", &AROS2Controller::execHandleHoverCommand },
		{ "HandleImuData", &AROS2Controller::execHandleImuData },
		{ "HandleObstacleMessage", &AROS2Controller::execHandleObstacleMessage },
		{ "HandleResetCommand", &AROS2Controller::execHandleResetCommand },
		{ "HandleVelocityCommand", &AROS2Controller::execHandleVelocityCommand },
		{ "UpdateCollisionMessage", &AROS2Controller::execUpdateCollisionMessage },
		{ "UpdateGoalPositionMessage", &AROS2Controller::execUpdateGoalPositionMessage },
		{ "UpdateImageMessage", &AROS2Controller::execUpdateImageMessage },
		{ "UpdateOdometryMessage", &AROS2Controller::execUpdateOdometryMessage },
		{ "UpdateTFMessage", &AROS2Controller::execUpdateTFMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AROS2Controller;
UClass* AROS2Controller::GetPrivateStaticClass()
{
	using TClass = AROS2Controller;
	if (!Z_Registration_Info_UClass_AROS2Controller.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Controller"),
			Z_Registration_Info_UClass_AROS2Controller.InnerSingleton,
			StaticRegisterNativesAROS2Controller,
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
	return Z_Registration_Info_UClass_AROS2Controller.InnerSingleton;
}
UClass* Z_Construct_UClass_AROS2Controller_NoRegister()
{
	return AROS2Controller::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AROS2Controller_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Controllers/ROS2Controller.h" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "Category", "ROS2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ROS2 Node Configuration ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ROS2 Node Configuration ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OdometryTopicName_MetaData[] = {
		{ "Category", "ROS2|Publishers|Odometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Publisher Topics & Config ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Publisher Topics & Config ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OdometryFrequencyHz_MetaData[] = {
		{ "Category", "ROS2|Publishers|Odometry" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTopicName_MetaData[] = {
		{ "Category", "ROS2|Publishers|Position" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionFrequencyHz_MetaData[] = {
		{ "Category", "ROS2|Publishers|Position" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maybe remove if unused?\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maybe remove if unused?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionGoalTopicName_MetaData[] = {
		{ "Category", "ROS2|Publishers|Goal" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalFrequenzyHz_MetaData[] = {
		{ "Category", "ROS2|Publishers|Goal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Publishes internal goal\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Publishes internal goal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTopicName_MetaData[] = {
		{ "Category", "ROS2|Publishers|Collision" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TFTopicName_MetaData[] = {
		{ "Category", "ROS2|Publishers|TF" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TFFrequencyHz_MetaData[] = {
		{ "Category", "ROS2|Publishers|TF" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageTopicName_MetaData[] = {
		{ "Category", "ROS2|Publishers|Image" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageFrequencyHz_MetaData[] = {
		{ "Category", "ROS2|Publishers|Image" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageResolution_MetaData[] = {
		{ "Category", "ROS2|Publishers|Image" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleTopicName_MetaData[] = {
		{ "Category", "ROS2|Subscribers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Subscriber Topics ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Subscriber Topics ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CmdVelTopicName_MetaData[] = {
		{ "Category", "ROS2|Subscribers" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetTopicName_MetaData[] = {
		{ "Category", "ROS2|Subscribers" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverTopicName_MetaData[] = {
		{ "Category", "ROS2|Subscribers" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttitudeEulerTopicName_MetaData[] = {
		{ "Category", "ROS2|Subscribers" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImuTopicName_MetaData[] = {
		{ "Category", "ROS2|Subscribers" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalPoseTopicName_MetaData[] = {
		{ "Category", "ROS2|Subscribers" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[] = {
		{ "Category", "Image Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Image Capture Component ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Image Capture Component ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ROS2 Components (Internal) ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ROS2 Components (Internal) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OdometryPublisher_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPublisher_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagePublisher_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TfPublisher_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Publishes internal goal\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Publishes internal goal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleSubscriber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CmdVelSubscriber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetSubscriber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverSubscriber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImuSubscriber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleManagerInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Internal State ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Internal State ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controllers/ROS2Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OdometryTopicName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OdometryFrequencyHz;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PositionTopicName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionFrequencyHz;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PositionGoalTopicName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GoalFrequenzyHz;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CollisionTopicName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TFTopicName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TFFrequencyHz;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageTopicName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImageFrequencyHz;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageResolution;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObstacleTopicName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CmdVelTopicName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResetTopicName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoverTopicName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttitudeEulerTopicName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImuTopicName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GoalPoseTopicName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OdometryPublisher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionPublisher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImagePublisher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TfPublisher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObstacleSubscriber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CmdVelSubscriber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetSubscriber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverSubscriber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImuSubscriber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObstacleManagerInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AROS2Controller_GetCurrentGoalPosition, "GetCurrentGoalPosition" }, // 3010231579
		{ &Z_Construct_UFunction_AROS2Controller_GetDroneID, "GetDroneID" }, // 3937940234
		{ &Z_Construct_UFunction_AROS2Controller_HandleAttitudeEuler, "HandleAttitudeEuler" }, // 2919329801
		{ &Z_Construct_UFunction_AROS2Controller_HandleGoalPose, "HandleGoalPose" }, // 1674535482
		{ &Z_Construct_UFunction_AROS2Controller_HandleHoverCommand, "HandleHoverCommand" }, // 1134984268
		{ &Z_Construct_UFunction_AROS2Controller_HandleImuData, "HandleImuData" }, // 3843243536
		{ &Z_Construct_UFunction_AROS2Controller_HandleObstacleMessage, "HandleObstacleMessage" }, // 73420278
		{ &Z_Construct_UFunction_AROS2Controller_HandleResetCommand, "HandleResetCommand" }, // 1895062996
		{ &Z_Construct_UFunction_AROS2Controller_HandleVelocityCommand, "HandleVelocityCommand" }, // 2484296611
		{ &Z_Construct_UFunction_AROS2Controller_UpdateCollisionMessage, "UpdateCollisionMessage" }, // 1550559308
		{ &Z_Construct_UFunction_AROS2Controller_UpdateGoalPositionMessage, "UpdateGoalPositionMessage" }, // 3620926942
		{ &Z_Construct_UFunction_AROS2Controller_UpdateImageMessage, "UpdateImageMessage" }, // 1527513691
		{ &Z_Construct_UFunction_AROS2Controller_UpdateOdometryMessage, "UpdateOdometryMessage" }, // 601871796
		{ &Z_Construct_UFunction_AROS2Controller_UpdateTFMessage, "UpdateTFMessage" }, // 1814378395
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AROS2Controller>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_OdometryTopicName = { "OdometryTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, OdometryTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OdometryTopicName_MetaData), NewProp_OdometryTopicName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_OdometryFrequencyHz = { "OdometryFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, OdometryFrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OdometryFrequencyHz_MetaData), NewProp_OdometryFrequencyHz_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_PositionTopicName = { "PositionTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, PositionTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTopicName_MetaData), NewProp_PositionTopicName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_PositionFrequencyHz = { "PositionFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, PositionFrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionFrequencyHz_MetaData), NewProp_PositionFrequencyHz_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_PositionGoalTopicName = { "PositionGoalTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, PositionGoalTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionGoalTopicName_MetaData), NewProp_PositionGoalTopicName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_GoalFrequenzyHz = { "GoalFrequenzyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, GoalFrequenzyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalFrequenzyHz_MetaData), NewProp_GoalFrequenzyHz_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_CollisionTopicName = { "CollisionTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, CollisionTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTopicName_MetaData), NewProp_CollisionTopicName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_TFTopicName = { "TFTopicName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, TFTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TFTopicName_MetaData), NewProp_TFTopicName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_TFFrequencyHz = { "TFFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, TFFrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TFFrequencyHz_MetaData), NewProp_TFFrequencyHz_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImageTopicName = { "ImageTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ImageTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageTopicName_MetaData), NewProp_ImageTopicName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImageFrequencyHz = { "ImageFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ImageFrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageFrequencyHz_MetaData), NewProp_ImageFrequencyHz_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImageResolution = { "ImageResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ImageResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageResolution_MetaData), NewProp_ImageResolution_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ObstacleTopicName = { "ObstacleTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ObstacleTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleTopicName_MetaData), NewProp_ObstacleTopicName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_CmdVelTopicName = { "CmdVelTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, CmdVelTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CmdVelTopicName_MetaData), NewProp_CmdVelTopicName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ResetTopicName = { "ResetTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ResetTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetTopicName_MetaData), NewProp_ResetTopicName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_HoverTopicName = { "HoverTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, HoverTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverTopicName_MetaData), NewProp_HoverTopicName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_AttitudeEulerTopicName = { "AttitudeEulerTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, AttitudeEulerTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeEulerTopicName_MetaData), NewProp_AttitudeEulerTopicName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImuTopicName = { "ImuTopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ImuTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImuTopicName_MetaData), NewProp_ImuTopicName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_GoalPoseTopicName = { "GoalPoseTopicName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, GoalPoseTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalPoseTopicName_MetaData), NewProp_GoalPoseTopicName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCapture_MetaData), NewProp_SceneCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, Node), Z_Construct_UClass_UROS2NodeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_OdometryPublisher = { "OdometryPublisher", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, OdometryPublisher), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OdometryPublisher_MetaData), NewProp_OdometryPublisher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_CollisionPublisher = { "CollisionPublisher", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, CollisionPublisher), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionPublisher_MetaData), NewProp_CollisionPublisher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImagePublisher = { "ImagePublisher", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ImagePublisher), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagePublisher_MetaData), NewProp_ImagePublisher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_GoalPosition = { "GoalPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, GoalPosition), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalPosition_MetaData), NewProp_GoalPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_TfPublisher = { "TfPublisher", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, TfPublisher), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TfPublisher_MetaData), NewProp_TfPublisher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ObstacleSubscriber = { "ObstacleSubscriber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ObstacleSubscriber), Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleSubscriber_MetaData), NewProp_ObstacleSubscriber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_CmdVelSubscriber = { "CmdVelSubscriber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, CmdVelSubscriber), Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CmdVelSubscriber_MetaData), NewProp_CmdVelSubscriber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ResetSubscriber = { "ResetSubscriber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ResetSubscriber), Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetSubscriber_MetaData), NewProp_ResetSubscriber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_HoverSubscriber = { "HoverSubscriber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, HoverSubscriber), Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverSubscriber_MetaData), NewProp_HoverSubscriber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImuSubscriber = { "ImuSubscriber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ImuSubscriber), Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImuSubscriber_MetaData), NewProp_ImuSubscriber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_ObstacleManagerInstance = { "ObstacleManagerInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, ObstacleManagerInstance), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleManagerInstance_MetaData), NewProp_ObstacleManagerInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_RenderTargets_Inner = { "RenderTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AROS2Controller_Statics::NewProp_RenderTargets = { "RenderTargets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Controller, RenderTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargets_MetaData), NewProp_RenderTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AROS2Controller_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_OdometryTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_OdometryFrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_PositionTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_PositionFrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_PositionGoalTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_GoalFrequenzyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_CollisionTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_TFTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_TFFrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImageTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImageFrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImageResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ObstacleTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_CmdVelTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ResetTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_HoverTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_AttitudeEulerTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImuTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_GoalPoseTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_SceneCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_OdometryPublisher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_CollisionPublisher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImagePublisher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_GoalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_TfPublisher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ObstacleSubscriber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_CmdVelSubscriber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ResetSubscriber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_HoverSubscriber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ImuSubscriber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_ObstacleManagerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_RenderTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Controller_Statics::NewProp_RenderTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AROS2Controller_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AROS2Controller_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AROS2Controller_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AROS2Controller_Statics::ClassParams = {
	&AROS2Controller::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AROS2Controller_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AROS2Controller_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AROS2Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_AROS2Controller_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AROS2Controller()
{
	if (!Z_Registration_Info_UClass_AROS2Controller.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AROS2Controller.OuterSingleton, Z_Construct_UClass_AROS2Controller_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AROS2Controller.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AROS2Controller);
AROS2Controller::~AROS2Controller() {}
// ********** End Class AROS2Controller ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h__Script_UnrealRosFlight_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AROS2Controller, AROS2Controller::StaticClass, TEXT("AROS2Controller"), &Z_Registration_Info_UClass_AROS2Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AROS2Controller), 1739754454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h__Script_UnrealRosFlight_1200696903(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h__Script_UnrealRosFlight_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
