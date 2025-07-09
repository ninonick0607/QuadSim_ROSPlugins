// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MenuEntry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MenuEntry() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MenuEntryMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MenuEntryMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMenuEntry();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMenuEntry *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMenuEntry;
class UScriptStruct* FROSMenuEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMenuEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMenuEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMenuEntry, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMenuEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMenuEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMenuEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ROSMenuEntry" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentId_MetaData[] = {
		{ "Category", "ROSMenuEntry" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "ROSMenuEntry" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "Category", "ROSMenuEntry" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandType_MetaData[] = {
		{ "Category", "ROSMenuEntry" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ParentId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommandType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMenuEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMenuEntry, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_ParentId = { "ParentId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMenuEntry, ParentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentId_MetaData), NewProp_ParentId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMenuEntry, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMenuEntry, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_CommandType = { "CommandType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMenuEntry, CommandType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandType_MetaData), NewProp_CommandType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMenuEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_ParentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewProp_CommandType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMenuEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMenuEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMenuEntry",
	Z_Construct_UScriptStruct_FROSMenuEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMenuEntry_Statics::PropPointers),
	sizeof(FROSMenuEntry),
	alignof(FROSMenuEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMenuEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMenuEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMenuEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMenuEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMenuEntry.InnerSingleton, Z_Construct_UScriptStruct_FROSMenuEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMenuEntry.InnerSingleton;
}
// ********** End ScriptStruct FROSMenuEntry *******************************************************

// ********** Begin Class UROS2MenuEntryMsg Function CONST_FEEDBACK ********************************
struct Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics
{
	struct ROS2MenuEntryMsg_eventCONST_FEEDBACK_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MenuEntryMsg_eventCONST_FEEDBACK_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MenuEntryMsg, nullptr, "CONST_FEEDBACK", Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::ROS2MenuEntryMsg_eventCONST_FEEDBACK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::ROS2MenuEntryMsg_eventCONST_FEEDBACK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MenuEntryMsg::execCONST_FEEDBACK)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2MenuEntryMsg::CONST_FEEDBACK();
	P_NATIVE_END;
}
// ********** End Class UROS2MenuEntryMsg Function CONST_FEEDBACK **********************************

// ********** Begin Class UROS2MenuEntryMsg Function CONST_ROSLAUNCH *******************************
struct Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics
{
	struct ROS2MenuEntryMsg_eventCONST_ROSLAUNCH_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MenuEntryMsg_eventCONST_ROSLAUNCH_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MenuEntryMsg, nullptr, "CONST_ROSLAUNCH", Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::ROS2MenuEntryMsg_eventCONST_ROSLAUNCH_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::ROS2MenuEntryMsg_eventCONST_ROSLAUNCH_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MenuEntryMsg::execCONST_ROSLAUNCH)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2MenuEntryMsg::CONST_ROSLAUNCH();
	P_NATIVE_END;
}
// ********** End Class UROS2MenuEntryMsg Function CONST_ROSLAUNCH *********************************

// ********** Begin Class UROS2MenuEntryMsg Function CONST_ROSRUN **********************************
struct Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics
{
	struct ROS2MenuEntryMsg_eventCONST_ROSRUN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MenuEntryMsg_eventCONST_ROSRUN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MenuEntryMsg, nullptr, "CONST_ROSRUN", Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::ROS2MenuEntryMsg_eventCONST_ROSRUN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::ROS2MenuEntryMsg_eventCONST_ROSRUN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MenuEntryMsg::execCONST_ROSRUN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2MenuEntryMsg::CONST_ROSRUN();
	P_NATIVE_END;
}
// ********** End Class UROS2MenuEntryMsg Function CONST_ROSRUN ************************************

// ********** Begin Class UROS2MenuEntryMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics
{
	struct ROS2MenuEntryMsg_eventGetMsg_Parms
	{
		FROSMenuEntry Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MenuEntryMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMenuEntry, METADATA_PARAMS(0, nullptr) }; // 2082908073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MenuEntryMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::ROS2MenuEntryMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::ROS2MenuEntryMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MenuEntryMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMenuEntry,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MenuEntryMsg Function GetMsg ******************************************

// ********** Begin Class UROS2MenuEntryMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics
{
	struct ROS2MenuEntryMsg_eventSetMsg_Parms
	{
		FROSMenuEntry Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MenuEntryMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMenuEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2082908073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MenuEntryMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::ROS2MenuEntryMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::ROS2MenuEntryMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MenuEntryMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMenuEntry,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MenuEntryMsg Function SetMsg ******************************************

// ********** Begin Class UROS2MenuEntryMsg ********************************************************
void UROS2MenuEntryMsg::StaticRegisterNativesUROS2MenuEntryMsg()
{
	UClass* Class = UROS2MenuEntryMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_FEEDBACK", &UROS2MenuEntryMsg::execCONST_FEEDBACK },
		{ "CONST_ROSLAUNCH", &UROS2MenuEntryMsg::execCONST_ROSLAUNCH },
		{ "CONST_ROSRUN", &UROS2MenuEntryMsg::execCONST_ROSRUN },
		{ "GetMsg", &UROS2MenuEntryMsg::execGetMsg },
		{ "SetMsg", &UROS2MenuEntryMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MenuEntryMsg;
UClass* UROS2MenuEntryMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MenuEntryMsg;
	if (!Z_Registration_Info_UClass_UROS2MenuEntryMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MenuEntryMsg"),
			Z_Registration_Info_UClass_UROS2MenuEntryMsg.InnerSingleton,
			StaticRegisterNativesUROS2MenuEntryMsg,
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
	return Z_Registration_Info_UClass_UROS2MenuEntryMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MenuEntryMsg_NoRegister()
{
	return UROS2MenuEntryMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MenuEntryMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MenuEntry.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MenuEntry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_FEEDBACK, "CONST_FEEDBACK" }, // 2478519198
		{ &Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSLAUNCH, "CONST_ROSLAUNCH" }, // 2416957927
		{ &Z_Construct_UFunction_UROS2MenuEntryMsg_CONST_ROSRUN, "CONST_ROSRUN" }, // 4167235652
		{ &Z_Construct_UFunction_UROS2MenuEntryMsg_GetMsg, "GetMsg" }, // 3974603604
		{ &Z_Construct_UFunction_UROS2MenuEntryMsg_SetMsg, "SetMsg" }, // 855368784
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MenuEntryMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MenuEntryMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MenuEntryMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MenuEntryMsg_Statics::ClassParams = {
	&UROS2MenuEntryMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MenuEntryMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MenuEntryMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MenuEntryMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MenuEntryMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MenuEntryMsg.OuterSingleton, Z_Construct_UClass_UROS2MenuEntryMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MenuEntryMsg.OuterSingleton;
}
UROS2MenuEntryMsg::UROS2MenuEntryMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MenuEntryMsg);
UROS2MenuEntryMsg::~UROS2MenuEntryMsg() {}
// ********** End Class UROS2MenuEntryMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMenuEntry::StaticStruct, Z_Construct_UScriptStruct_FROSMenuEntry_Statics::NewStructOps, TEXT("ROSMenuEntry"), &Z_Registration_Info_UScriptStruct_FROSMenuEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMenuEntry), 2082908073U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MenuEntryMsg, UROS2MenuEntryMsg::StaticClass, TEXT("UROS2MenuEntryMsg"), &Z_Registration_Info_UClass_UROS2MenuEntryMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MenuEntryMsg), 169658331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h__Script_rclUE_3735870227(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
