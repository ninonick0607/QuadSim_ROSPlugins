// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2IMFeedback.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2IMFeedback() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMFeedbackMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMFeedbackMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIMFeedback();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSIMFeedback ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSIMFeedback;
class UScriptStruct* FROSIMFeedback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMFeedback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSIMFeedback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSIMFeedback, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSIMFeedback"));
	}
	return Z_Registration_Info_UScriptStruct_FROSIMFeedback.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSIMFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuEntryId_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePoint_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMousePointValid_MetaData[] = {
		{ "Category", "ROSIMFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MenuEntryId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MousePoint;
	static void NewProp_bMousePointValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMousePointValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSIMFeedback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMFeedback, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMFeedback, ClientId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientId_MetaData), NewProp_ClientId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMFeedback, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMFeedback, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlName_MetaData), NewProp_ControlName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMFeedback, EventType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventType_MetaData), NewProp_EventType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMFeedback, Pose), Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3353158120
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_MenuEntryId = { "MenuEntryId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMFeedback, MenuEntryId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuEntryId_MetaData), NewProp_MenuEntryId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_MousePoint = { "MousePoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMFeedback, MousePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePoint_MetaData), NewProp_MousePoint_MetaData) };
void Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_bMousePointValid_SetBit(void* Obj)
{
	((FROSIMFeedback*)Obj)->bMousePointValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_bMousePointValid = { "bMousePointValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSIMFeedback), &Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_bMousePointValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMousePointValid_MetaData), NewProp_bMousePointValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSIMFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_ClientId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_MenuEntryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_MousePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewProp_bMousePointValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSIMFeedback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSIMFeedback",
	Z_Construct_UScriptStruct_FROSIMFeedback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMFeedback_Statics::PropPointers),
	sizeof(FROSIMFeedback),
	alignof(FROSIMFeedback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMFeedback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSIMFeedback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSIMFeedback()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMFeedback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSIMFeedback.InnerSingleton, Z_Construct_UScriptStruct_FROSIMFeedback_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSIMFeedback.InnerSingleton;
}
// ********** End ScriptStruct FROSIMFeedback ******************************************************

// ********** Begin Class UROS2IMFeedbackMsg Function CONST_BUTTON_CLICK ***************************
struct Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics
{
	struct ROS2IMFeedbackMsg_eventCONST_BUTTON_CLICK_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMFeedbackMsg_eventCONST_BUTTON_CLICK_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMFeedbackMsg, nullptr, "CONST_BUTTON_CLICK", Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::ROS2IMFeedbackMsg_eventCONST_BUTTON_CLICK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::ROS2IMFeedbackMsg_eventCONST_BUTTON_CLICK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMFeedbackMsg::execCONST_BUTTON_CLICK)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMFeedbackMsg::CONST_BUTTON_CLICK();
	P_NATIVE_END;
}
// ********** End Class UROS2IMFeedbackMsg Function CONST_BUTTON_CLICK *****************************

// ********** Begin Class UROS2IMFeedbackMsg Function CONST_KEEP_ALIVE *****************************
struct Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics
{
	struct ROS2IMFeedbackMsg_eventCONST_KEEP_ALIVE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMFeedbackMsg_eventCONST_KEEP_ALIVE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMFeedbackMsg, nullptr, "CONST_KEEP_ALIVE", Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::ROS2IMFeedbackMsg_eventCONST_KEEP_ALIVE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::ROS2IMFeedbackMsg_eventCONST_KEEP_ALIVE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMFeedbackMsg::execCONST_KEEP_ALIVE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMFeedbackMsg::CONST_KEEP_ALIVE();
	P_NATIVE_END;
}
// ********** End Class UROS2IMFeedbackMsg Function CONST_KEEP_ALIVE *******************************

// ********** Begin Class UROS2IMFeedbackMsg Function CONST_MENU_SELECT ****************************
struct Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics
{
	struct ROS2IMFeedbackMsg_eventCONST_MENU_SELECT_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMFeedbackMsg_eventCONST_MENU_SELECT_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMFeedbackMsg, nullptr, "CONST_MENU_SELECT", Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::ROS2IMFeedbackMsg_eventCONST_MENU_SELECT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::ROS2IMFeedbackMsg_eventCONST_MENU_SELECT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMFeedbackMsg::execCONST_MENU_SELECT)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMFeedbackMsg::CONST_MENU_SELECT();
	P_NATIVE_END;
}
// ********** End Class UROS2IMFeedbackMsg Function CONST_MENU_SELECT ******************************

// ********** Begin Class UROS2IMFeedbackMsg Function CONST_MOUSE_DOWN *****************************
struct Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics
{
	struct ROS2IMFeedbackMsg_eventCONST_MOUSE_DOWN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMFeedbackMsg_eventCONST_MOUSE_DOWN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMFeedbackMsg, nullptr, "CONST_MOUSE_DOWN", Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::ROS2IMFeedbackMsg_eventCONST_MOUSE_DOWN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::ROS2IMFeedbackMsg_eventCONST_MOUSE_DOWN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMFeedbackMsg::execCONST_MOUSE_DOWN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMFeedbackMsg::CONST_MOUSE_DOWN();
	P_NATIVE_END;
}
// ********** End Class UROS2IMFeedbackMsg Function CONST_MOUSE_DOWN *******************************

// ********** Begin Class UROS2IMFeedbackMsg Function CONST_MOUSE_UP *******************************
struct Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics
{
	struct ROS2IMFeedbackMsg_eventCONST_MOUSE_UP_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMFeedbackMsg_eventCONST_MOUSE_UP_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMFeedbackMsg, nullptr, "CONST_MOUSE_UP", Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::ROS2IMFeedbackMsg_eventCONST_MOUSE_UP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::ROS2IMFeedbackMsg_eventCONST_MOUSE_UP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMFeedbackMsg::execCONST_MOUSE_UP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMFeedbackMsg::CONST_MOUSE_UP();
	P_NATIVE_END;
}
// ********** End Class UROS2IMFeedbackMsg Function CONST_MOUSE_UP *********************************

// ********** Begin Class UROS2IMFeedbackMsg Function CONST_POSE_UPDATE ****************************
struct Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics
{
	struct ROS2IMFeedbackMsg_eventCONST_POSE_UPDATE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMFeedbackMsg_eventCONST_POSE_UPDATE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMFeedbackMsg, nullptr, "CONST_POSE_UPDATE", Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::ROS2IMFeedbackMsg_eventCONST_POSE_UPDATE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::ROS2IMFeedbackMsg_eventCONST_POSE_UPDATE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMFeedbackMsg::execCONST_POSE_UPDATE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMFeedbackMsg::CONST_POSE_UPDATE();
	P_NATIVE_END;
}
// ********** End Class UROS2IMFeedbackMsg Function CONST_POSE_UPDATE ******************************

// ********** Begin Class UROS2IMFeedbackMsg Function GetMsg ***************************************
struct Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics
{
	struct ROS2IMFeedbackMsg_eventGetMsg_Parms
	{
		FROSIMFeedback Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMFeedbackMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSIMFeedback, METADATA_PARAMS(0, nullptr) }; // 3129201367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMFeedbackMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::ROS2IMFeedbackMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::ROS2IMFeedbackMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMFeedbackMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSIMFeedback,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2IMFeedbackMsg Function GetMsg *****************************************

// ********** Begin Class UROS2IMFeedbackMsg Function SetMsg ***************************************
struct Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics
{
	struct ROS2IMFeedbackMsg_eventSetMsg_Parms
	{
		FROSIMFeedback Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMFeedbackMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSIMFeedback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3129201367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMFeedbackMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::ROS2IMFeedbackMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::ROS2IMFeedbackMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMFeedbackMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSIMFeedback,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2IMFeedbackMsg Function SetMsg *****************************************

// ********** Begin Class UROS2IMFeedbackMsg *******************************************************
void UROS2IMFeedbackMsg::StaticRegisterNativesUROS2IMFeedbackMsg()
{
	UClass* Class = UROS2IMFeedbackMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_BUTTON_CLICK", &UROS2IMFeedbackMsg::execCONST_BUTTON_CLICK },
		{ "CONST_KEEP_ALIVE", &UROS2IMFeedbackMsg::execCONST_KEEP_ALIVE },
		{ "CONST_MENU_SELECT", &UROS2IMFeedbackMsg::execCONST_MENU_SELECT },
		{ "CONST_MOUSE_DOWN", &UROS2IMFeedbackMsg::execCONST_MOUSE_DOWN },
		{ "CONST_MOUSE_UP", &UROS2IMFeedbackMsg::execCONST_MOUSE_UP },
		{ "CONST_POSE_UPDATE", &UROS2IMFeedbackMsg::execCONST_POSE_UPDATE },
		{ "GetMsg", &UROS2IMFeedbackMsg::execGetMsg },
		{ "SetMsg", &UROS2IMFeedbackMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2IMFeedbackMsg;
UClass* UROS2IMFeedbackMsg::GetPrivateStaticClass()
{
	using TClass = UROS2IMFeedbackMsg;
	if (!Z_Registration_Info_UClass_UROS2IMFeedbackMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2IMFeedbackMsg"),
			Z_Registration_Info_UClass_UROS2IMFeedbackMsg.InnerSingleton,
			StaticRegisterNativesUROS2IMFeedbackMsg,
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
	return Z_Registration_Info_UClass_UROS2IMFeedbackMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2IMFeedbackMsg_NoRegister()
{
	return UROS2IMFeedbackMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2IMFeedbackMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2IMFeedback.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMFeedback.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_BUTTON_CLICK, "CONST_BUTTON_CLICK" }, // 3578016810
		{ &Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_KEEP_ALIVE, "CONST_KEEP_ALIVE" }, // 2266537365
		{ &Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MENU_SELECT, "CONST_MENU_SELECT" }, // 3516358848
		{ &Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_DOWN, "CONST_MOUSE_DOWN" }, // 2224116148
		{ &Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_MOUSE_UP, "CONST_MOUSE_UP" }, // 1630037054
		{ &Z_Construct_UFunction_UROS2IMFeedbackMsg_CONST_POSE_UPDATE, "CONST_POSE_UPDATE" }, // 1869686934
		{ &Z_Construct_UFunction_UROS2IMFeedbackMsg_GetMsg, "GetMsg" }, // 4258530846
		{ &Z_Construct_UFunction_UROS2IMFeedbackMsg_SetMsg, "SetMsg" }, // 4255418915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2IMFeedbackMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2IMFeedbackMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMFeedbackMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2IMFeedbackMsg_Statics::ClassParams = {
	&UROS2IMFeedbackMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMFeedbackMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2IMFeedbackMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2IMFeedbackMsg()
{
	if (!Z_Registration_Info_UClass_UROS2IMFeedbackMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2IMFeedbackMsg.OuterSingleton, Z_Construct_UClass_UROS2IMFeedbackMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2IMFeedbackMsg.OuterSingleton;
}
UROS2IMFeedbackMsg::UROS2IMFeedbackMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2IMFeedbackMsg);
UROS2IMFeedbackMsg::~UROS2IMFeedbackMsg() {}
// ********** End Class UROS2IMFeedbackMsg *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSIMFeedback::StaticStruct, Z_Construct_UScriptStruct_FROSIMFeedback_Statics::NewStructOps, TEXT("ROSIMFeedback"), &Z_Registration_Info_UScriptStruct_FROSIMFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSIMFeedback), 3129201367U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2IMFeedbackMsg, UROS2IMFeedbackMsg::StaticClass, TEXT("UROS2IMFeedbackMsg"), &Z_Registration_Info_UClass_UROS2IMFeedbackMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2IMFeedbackMsg), 4053834412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h__Script_rclUE_1015494900(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
