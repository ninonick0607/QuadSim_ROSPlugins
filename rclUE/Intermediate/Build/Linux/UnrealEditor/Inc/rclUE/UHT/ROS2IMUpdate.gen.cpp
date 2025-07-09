// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2IMUpdate.h"
#include "rclUE/Public/Msgs/ROS2IM.h"
#include "rclUE/Public/Msgs/ROS2IMPose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2IMUpdate() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMUpdateMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMUpdateMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIM();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIMPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIMUpdate();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSIMUpdate ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSIMUpdate;
class UScriptStruct* FROSIMUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSIMUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSIMUpdate, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSIMUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_FROSIMUpdate.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSIMUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerId_MetaData[] = {
		{ "Category", "ROSIMUpdate" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeqNum_MetaData[] = {
		{ "Category", "ROSIMUpdate" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ROSIMUpdate" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[] = {
		{ "Category", "ROSIMUpdate" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[] = {
		{ "Category", "ROSIMUpdate" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Erases_MetaData[] = {
		{ "Category", "ROSIMUpdate" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerId;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_SeqNum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Erases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Erases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSIMUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_ServerId = { "ServerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMUpdate, ServerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerId_MetaData), NewProp_ServerId_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_SeqNum = { "SeqNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMUpdate, SeqNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeqNum_MetaData), NewProp_SeqNum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMUpdate, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSIM, METADATA_PARAMS(0, nullptr) }; // 3626302721
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMUpdate, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Markers_MetaData), NewProp_Markers_MetaData) }; // 3626302721
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSIMPose, METADATA_PARAMS(0, nullptr) }; // 1259942634
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMUpdate, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Poses_MetaData), NewProp_Poses_MetaData) }; // 1259942634
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Erases_Inner = { "Erases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Erases = { "Erases", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMUpdate, Erases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Erases_MetaData), NewProp_Erases_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSIMUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_ServerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_SeqNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Markers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Markers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Poses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Poses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Erases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewProp_Erases,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSIMUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSIMUpdate",
	Z_Construct_UScriptStruct_FROSIMUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMUpdate_Statics::PropPointers),
	sizeof(FROSIMUpdate),
	alignof(FROSIMUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSIMUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSIMUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSIMUpdate.InnerSingleton, Z_Construct_UScriptStruct_FROSIMUpdate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSIMUpdate.InnerSingleton;
}
// ********** End ScriptStruct FROSIMUpdate ********************************************************

// ********** Begin Class UROS2IMUpdateMsg Function CONST_KEEP_ALIVE *******************************
struct Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics
{
	struct ROS2IMUpdateMsg_eventCONST_KEEP_ALIVE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMUpdateMsg_eventCONST_KEEP_ALIVE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMUpdateMsg, nullptr, "CONST_KEEP_ALIVE", Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::ROS2IMUpdateMsg_eventCONST_KEEP_ALIVE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::ROS2IMUpdateMsg_eventCONST_KEEP_ALIVE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMUpdateMsg::execCONST_KEEP_ALIVE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMUpdateMsg::CONST_KEEP_ALIVE();
	P_NATIVE_END;
}
// ********** End Class UROS2IMUpdateMsg Function CONST_KEEP_ALIVE *********************************

// ********** Begin Class UROS2IMUpdateMsg Function CONST_UPDATE ***********************************
struct Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics
{
	struct ROS2IMUpdateMsg_eventCONST_UPDATE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMUpdateMsg_eventCONST_UPDATE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMUpdateMsg, nullptr, "CONST_UPDATE", Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::ROS2IMUpdateMsg_eventCONST_UPDATE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::ROS2IMUpdateMsg_eventCONST_UPDATE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMUpdateMsg::execCONST_UPDATE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMUpdateMsg::CONST_UPDATE();
	P_NATIVE_END;
}
// ********** End Class UROS2IMUpdateMsg Function CONST_UPDATE *************************************

// ********** Begin Class UROS2IMUpdateMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics
{
	struct ROS2IMUpdateMsg_eventGetMsg_Parms
	{
		FROSIMUpdate Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMUpdateMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSIMUpdate, METADATA_PARAMS(0, nullptr) }; // 2555889284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMUpdateMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::ROS2IMUpdateMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::ROS2IMUpdateMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMUpdateMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSIMUpdate,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2IMUpdateMsg Function GetMsg *******************************************

// ********** Begin Class UROS2IMUpdateMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics
{
	struct ROS2IMUpdateMsg_eventSetMsg_Parms
	{
		FROSIMUpdate Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMUpdateMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSIMUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2555889284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMUpdateMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::ROS2IMUpdateMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::ROS2IMUpdateMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMUpdateMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSIMUpdate,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2IMUpdateMsg Function SetMsg *******************************************

// ********** Begin Class UROS2IMUpdateMsg *********************************************************
void UROS2IMUpdateMsg::StaticRegisterNativesUROS2IMUpdateMsg()
{
	UClass* Class = UROS2IMUpdateMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_KEEP_ALIVE", &UROS2IMUpdateMsg::execCONST_KEEP_ALIVE },
		{ "CONST_UPDATE", &UROS2IMUpdateMsg::execCONST_UPDATE },
		{ "GetMsg", &UROS2IMUpdateMsg::execGetMsg },
		{ "SetMsg", &UROS2IMUpdateMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2IMUpdateMsg;
UClass* UROS2IMUpdateMsg::GetPrivateStaticClass()
{
	using TClass = UROS2IMUpdateMsg;
	if (!Z_Registration_Info_UClass_UROS2IMUpdateMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2IMUpdateMsg"),
			Z_Registration_Info_UClass_UROS2IMUpdateMsg.InnerSingleton,
			StaticRegisterNativesUROS2IMUpdateMsg,
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
	return Z_Registration_Info_UClass_UROS2IMUpdateMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2IMUpdateMsg_NoRegister()
{
	return UROS2IMUpdateMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2IMUpdateMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2IMUpdate.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMUpdate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_KEEP_ALIVE, "CONST_KEEP_ALIVE" }, // 3977740051
		{ &Z_Construct_UFunction_UROS2IMUpdateMsg_CONST_UPDATE, "CONST_UPDATE" }, // 2600678054
		{ &Z_Construct_UFunction_UROS2IMUpdateMsg_GetMsg, "GetMsg" }, // 459779272
		{ &Z_Construct_UFunction_UROS2IMUpdateMsg_SetMsg, "SetMsg" }, // 1950121940
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2IMUpdateMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2IMUpdateMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMUpdateMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2IMUpdateMsg_Statics::ClassParams = {
	&UROS2IMUpdateMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMUpdateMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2IMUpdateMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2IMUpdateMsg()
{
	if (!Z_Registration_Info_UClass_UROS2IMUpdateMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2IMUpdateMsg.OuterSingleton, Z_Construct_UClass_UROS2IMUpdateMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2IMUpdateMsg.OuterSingleton;
}
UROS2IMUpdateMsg::UROS2IMUpdateMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2IMUpdateMsg);
UROS2IMUpdateMsg::~UROS2IMUpdateMsg() {}
// ********** End Class UROS2IMUpdateMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMUpdate_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSIMUpdate::StaticStruct, Z_Construct_UScriptStruct_FROSIMUpdate_Statics::NewStructOps, TEXT("ROSIMUpdate"), &Z_Registration_Info_UScriptStruct_FROSIMUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSIMUpdate), 2555889284U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2IMUpdateMsg, UROS2IMUpdateMsg::StaticClass, TEXT("UROS2IMUpdateMsg"), &Z_Registration_Info_UClass_UROS2IMUpdateMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2IMUpdateMsg), 3396136178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMUpdate_h__Script_rclUE_3813972356(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMUpdate_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMUpdate_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMUpdate_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMUpdate_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
