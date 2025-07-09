// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2JoyFeedback.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2JoyFeedback() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2JoyFeedbackMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2JoyFeedbackMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSJoyFeedback();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSJoyFeedback ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSJoyFeedback;
class UScriptStruct* FROSJoyFeedback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSJoyFeedback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSJoyFeedback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSJoyFeedback, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSJoyFeedback"));
	}
	return Z_Registration_Info_UScriptStruct_FROSJoyFeedback.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSJoyFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ROSJoyFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ROSJoyFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "ROSJoyFeedback" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Id;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSJoyFeedback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJoyFeedback, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJoyFeedback, Id), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJoyFeedback, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSJoyFeedback",
	Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::PropPointers),
	sizeof(FROSJoyFeedback),
	alignof(FROSJoyFeedback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSJoyFeedback()
{
	if (!Z_Registration_Info_UScriptStruct_FROSJoyFeedback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSJoyFeedback.InnerSingleton, Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSJoyFeedback.InnerSingleton;
}
// ********** End ScriptStruct FROSJoyFeedback *****************************************************

// ********** Begin Class UROS2JoyFeedbackMsg Function CONST_TYPE_BUZZER ***************************
struct Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics
{
	struct ROS2JoyFeedbackMsg_eventCONST_TYPE_BUZZER_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JoyFeedbackMsg_eventCONST_TYPE_BUZZER_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JoyFeedbackMsg, nullptr, "CONST_TYPE_BUZZER", Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::ROS2JoyFeedbackMsg_eventCONST_TYPE_BUZZER_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::ROS2JoyFeedbackMsg_eventCONST_TYPE_BUZZER_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JoyFeedbackMsg::execCONST_TYPE_BUZZER)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2JoyFeedbackMsg::CONST_TYPE_BUZZER();
	P_NATIVE_END;
}
// ********** End Class UROS2JoyFeedbackMsg Function CONST_TYPE_BUZZER *****************************

// ********** Begin Class UROS2JoyFeedbackMsg Function CONST_TYPE_LED ******************************
struct Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics
{
	struct ROS2JoyFeedbackMsg_eventCONST_TYPE_LED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JoyFeedbackMsg_eventCONST_TYPE_LED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JoyFeedbackMsg, nullptr, "CONST_TYPE_LED", Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::ROS2JoyFeedbackMsg_eventCONST_TYPE_LED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::ROS2JoyFeedbackMsg_eventCONST_TYPE_LED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JoyFeedbackMsg::execCONST_TYPE_LED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2JoyFeedbackMsg::CONST_TYPE_LED();
	P_NATIVE_END;
}
// ********** End Class UROS2JoyFeedbackMsg Function CONST_TYPE_LED ********************************

// ********** Begin Class UROS2JoyFeedbackMsg Function CONST_TYPE_RUMBLE ***************************
struct Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics
{
	struct ROS2JoyFeedbackMsg_eventCONST_TYPE_RUMBLE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JoyFeedbackMsg_eventCONST_TYPE_RUMBLE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JoyFeedbackMsg, nullptr, "CONST_TYPE_RUMBLE", Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::ROS2JoyFeedbackMsg_eventCONST_TYPE_RUMBLE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::ROS2JoyFeedbackMsg_eventCONST_TYPE_RUMBLE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JoyFeedbackMsg::execCONST_TYPE_RUMBLE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2JoyFeedbackMsg::CONST_TYPE_RUMBLE();
	P_NATIVE_END;
}
// ********** End Class UROS2JoyFeedbackMsg Function CONST_TYPE_RUMBLE *****************************

// ********** Begin Class UROS2JoyFeedbackMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics
{
	struct ROS2JoyFeedbackMsg_eventGetMsg_Parms
	{
		FROSJoyFeedback Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JoyFeedbackMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSJoyFeedback, METADATA_PARAMS(0, nullptr) }; // 2831881968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JoyFeedbackMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::ROS2JoyFeedbackMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::ROS2JoyFeedbackMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JoyFeedbackMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSJoyFeedback,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2JoyFeedbackMsg Function GetMsg ****************************************

// ********** Begin Class UROS2JoyFeedbackMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics
{
	struct ROS2JoyFeedbackMsg_eventSetMsg_Parms
	{
		FROSJoyFeedback Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JoyFeedbackMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSJoyFeedback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2831881968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JoyFeedbackMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::ROS2JoyFeedbackMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::ROS2JoyFeedbackMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JoyFeedbackMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSJoyFeedback,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2JoyFeedbackMsg Function SetMsg ****************************************

// ********** Begin Class UROS2JoyFeedbackMsg ******************************************************
void UROS2JoyFeedbackMsg::StaticRegisterNativesUROS2JoyFeedbackMsg()
{
	UClass* Class = UROS2JoyFeedbackMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_TYPE_BUZZER", &UROS2JoyFeedbackMsg::execCONST_TYPE_BUZZER },
		{ "CONST_TYPE_LED", &UROS2JoyFeedbackMsg::execCONST_TYPE_LED },
		{ "CONST_TYPE_RUMBLE", &UROS2JoyFeedbackMsg::execCONST_TYPE_RUMBLE },
		{ "GetMsg", &UROS2JoyFeedbackMsg::execGetMsg },
		{ "SetMsg", &UROS2JoyFeedbackMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2JoyFeedbackMsg;
UClass* UROS2JoyFeedbackMsg::GetPrivateStaticClass()
{
	using TClass = UROS2JoyFeedbackMsg;
	if (!Z_Registration_Info_UClass_UROS2JoyFeedbackMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2JoyFeedbackMsg"),
			Z_Registration_Info_UClass_UROS2JoyFeedbackMsg.InnerSingleton,
			StaticRegisterNativesUROS2JoyFeedbackMsg,
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
	return Z_Registration_Info_UClass_UROS2JoyFeedbackMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2JoyFeedbackMsg_NoRegister()
{
	return UROS2JoyFeedbackMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2JoyFeedbackMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2JoyFeedback.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2JoyFeedback.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_BUZZER, "CONST_TYPE_BUZZER" }, // 611520167
		{ &Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_LED, "CONST_TYPE_LED" }, // 3988579154
		{ &Z_Construct_UFunction_UROS2JoyFeedbackMsg_CONST_TYPE_RUMBLE, "CONST_TYPE_RUMBLE" }, // 2589933564
		{ &Z_Construct_UFunction_UROS2JoyFeedbackMsg_GetMsg, "GetMsg" }, // 3509082857
		{ &Z_Construct_UFunction_UROS2JoyFeedbackMsg_SetMsg, "SetMsg" }, // 1349391673
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2JoyFeedbackMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2JoyFeedbackMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2JoyFeedbackMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2JoyFeedbackMsg_Statics::ClassParams = {
	&UROS2JoyFeedbackMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2JoyFeedbackMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2JoyFeedbackMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2JoyFeedbackMsg()
{
	if (!Z_Registration_Info_UClass_UROS2JoyFeedbackMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2JoyFeedbackMsg.OuterSingleton, Z_Construct_UClass_UROS2JoyFeedbackMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2JoyFeedbackMsg.OuterSingleton;
}
UROS2JoyFeedbackMsg::UROS2JoyFeedbackMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2JoyFeedbackMsg);
UROS2JoyFeedbackMsg::~UROS2JoyFeedbackMsg() {}
// ********** End Class UROS2JoyFeedbackMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSJoyFeedback::StaticStruct, Z_Construct_UScriptStruct_FROSJoyFeedback_Statics::NewStructOps, TEXT("ROSJoyFeedback"), &Z_Registration_Info_UScriptStruct_FROSJoyFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSJoyFeedback), 2831881968U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2JoyFeedbackMsg, UROS2JoyFeedbackMsg::StaticClass, TEXT("UROS2JoyFeedbackMsg"), &Z_Registration_Info_UClass_UROS2JoyFeedbackMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2JoyFeedbackMsg), 1188726856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h__Script_rclUE_2037912940(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
