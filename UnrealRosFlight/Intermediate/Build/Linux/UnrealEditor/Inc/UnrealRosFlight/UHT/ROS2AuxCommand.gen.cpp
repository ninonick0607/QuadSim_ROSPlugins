// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2AuxCommand.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2AuxCommand() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2AuxCommandMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2AuxCommandMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSAuxCommand();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAuxCommand ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAuxCommand;
class UScriptStruct* FROSAuxCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAuxCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAuxCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAuxCommand, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSAuxCommand"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAuxCommand.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAuxCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSAuxCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeArray_MetaData[] = {
		{ "Category", "ROSAuxCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "ROSAuxCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypeArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAuxCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAuxCommand, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_TypeArray_Inner = { "TypeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_TypeArray = { "TypeArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAuxCommand, TypeArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeArray_MetaData), NewProp_TypeArray_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAuxCommand, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAuxCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_TypeArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_TypeArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAuxCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAuxCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSAuxCommand",
	Z_Construct_UScriptStruct_FROSAuxCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAuxCommand_Statics::PropPointers),
	sizeof(FROSAuxCommand),
	alignof(FROSAuxCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAuxCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAuxCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAuxCommand()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAuxCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAuxCommand.InnerSingleton, Z_Construct_UScriptStruct_FROSAuxCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAuxCommand.InnerSingleton;
}
// ********** End ScriptStruct FROSAuxCommand ******************************************************

// ********** Begin Class UROS2AuxCommandMsg Function CONST_AUX_COMMAND_DISABLED *******************
struct Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics
{
	struct ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_DISABLED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_DISABLED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AuxCommandMsg, nullptr, "CONST_AUX_COMMAND_DISABLED", Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_DISABLED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_DISABLED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AuxCommandMsg::execCONST_AUX_COMMAND_DISABLED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2AuxCommandMsg::CONST_AUX_COMMAND_DISABLED();
	P_NATIVE_END;
}
// ********** End Class UROS2AuxCommandMsg Function CONST_AUX_COMMAND_DISABLED *********************

// ********** Begin Class UROS2AuxCommandMsg Function CONST_AUX_COMMAND_MOTOR **********************
struct Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics
{
	struct ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_MOTOR_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_MOTOR_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AuxCommandMsg, nullptr, "CONST_AUX_COMMAND_MOTOR", Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_MOTOR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_MOTOR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AuxCommandMsg::execCONST_AUX_COMMAND_MOTOR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2AuxCommandMsg::CONST_AUX_COMMAND_MOTOR();
	P_NATIVE_END;
}
// ********** End Class UROS2AuxCommandMsg Function CONST_AUX_COMMAND_MOTOR ************************

// ********** Begin Class UROS2AuxCommandMsg Function CONST_AUX_COMMAND_SERVO **********************
struct Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics
{
	struct ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_SERVO_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_SERVO_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AuxCommandMsg, nullptr, "CONST_AUX_COMMAND_SERVO", Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_SERVO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::ROS2AuxCommandMsg_eventCONST_AUX_COMMAND_SERVO_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AuxCommandMsg::execCONST_AUX_COMMAND_SERVO)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2AuxCommandMsg::CONST_AUX_COMMAND_SERVO();
	P_NATIVE_END;
}
// ********** End Class UROS2AuxCommandMsg Function CONST_AUX_COMMAND_SERVO ************************

// ********** Begin Class UROS2AuxCommandMsg Function GetMsg ***************************************
struct Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics
{
	struct ROS2AuxCommandMsg_eventGetMsg_Parms
	{
		FROSAuxCommand Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AuxCommandMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSAuxCommand, METADATA_PARAMS(0, nullptr) }; // 2530118579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AuxCommandMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::ROS2AuxCommandMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::ROS2AuxCommandMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AuxCommandMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSAuxCommand,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2AuxCommandMsg Function GetMsg *****************************************

// ********** Begin Class UROS2AuxCommandMsg Function SetMsg ***************************************
struct Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics
{
	struct ROS2AuxCommandMsg_eventSetMsg_Parms
	{
		FROSAuxCommand Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AuxCommandMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSAuxCommand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2530118579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AuxCommandMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::ROS2AuxCommandMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::ROS2AuxCommandMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AuxCommandMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSAuxCommand,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2AuxCommandMsg Function SetMsg *****************************************

// ********** Begin Class UROS2AuxCommandMsg *******************************************************
void UROS2AuxCommandMsg::StaticRegisterNativesUROS2AuxCommandMsg()
{
	UClass* Class = UROS2AuxCommandMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_AUX_COMMAND_DISABLED", &UROS2AuxCommandMsg::execCONST_AUX_COMMAND_DISABLED },
		{ "CONST_AUX_COMMAND_MOTOR", &UROS2AuxCommandMsg::execCONST_AUX_COMMAND_MOTOR },
		{ "CONST_AUX_COMMAND_SERVO", &UROS2AuxCommandMsg::execCONST_AUX_COMMAND_SERVO },
		{ "GetMsg", &UROS2AuxCommandMsg::execGetMsg },
		{ "SetMsg", &UROS2AuxCommandMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AuxCommandMsg;
UClass* UROS2AuxCommandMsg::GetPrivateStaticClass()
{
	using TClass = UROS2AuxCommandMsg;
	if (!Z_Registration_Info_UClass_UROS2AuxCommandMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AuxCommandMsg"),
			Z_Registration_Info_UClass_UROS2AuxCommandMsg.InnerSingleton,
			StaticRegisterNativesUROS2AuxCommandMsg,
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
	return Z_Registration_Info_UClass_UROS2AuxCommandMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AuxCommandMsg_NoRegister()
{
	return UROS2AuxCommandMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AuxCommandMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2AuxCommand.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AuxCommand.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_DISABLED, "CONST_AUX_COMMAND_DISABLED" }, // 4032489831
		{ &Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_MOTOR, "CONST_AUX_COMMAND_MOTOR" }, // 664947457
		{ &Z_Construct_UFunction_UROS2AuxCommandMsg_CONST_AUX_COMMAND_SERVO, "CONST_AUX_COMMAND_SERVO" }, // 3018194057
		{ &Z_Construct_UFunction_UROS2AuxCommandMsg_GetMsg, "GetMsg" }, // 3533852364
		{ &Z_Construct_UFunction_UROS2AuxCommandMsg_SetMsg, "SetMsg" }, // 558691661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AuxCommandMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AuxCommandMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AuxCommandMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AuxCommandMsg_Statics::ClassParams = {
	&UROS2AuxCommandMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AuxCommandMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AuxCommandMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AuxCommandMsg()
{
	if (!Z_Registration_Info_UClass_UROS2AuxCommandMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AuxCommandMsg.OuterSingleton, Z_Construct_UClass_UROS2AuxCommandMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AuxCommandMsg.OuterSingleton;
}
UROS2AuxCommandMsg::UROS2AuxCommandMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AuxCommandMsg);
UROS2AuxCommandMsg::~UROS2AuxCommandMsg() {}
// ********** End Class UROS2AuxCommandMsg *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAuxCommand::StaticStruct, Z_Construct_UScriptStruct_FROSAuxCommand_Statics::NewStructOps, TEXT("ROSAuxCommand"), &Z_Registration_Info_UScriptStruct_FROSAuxCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAuxCommand), 2530118579U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AuxCommandMsg, UROS2AuxCommandMsg::StaticClass, TEXT("UROS2AuxCommandMsg"), &Z_Registration_Info_UClass_UROS2AuxCommandMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AuxCommandMsg), 415129251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h__Script_UnrealRosFlight_1005076833(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
