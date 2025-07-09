// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2Command.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Command() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2CommandMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2CommandMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSCommand();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSCommand *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSCommand;
class UScriptStruct* FROSCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSCommand, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSCommand"));
	}
	return Z_Registration_Info_UScriptStruct_FROSCommand.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ignore_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Qx_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Qy_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Qz_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fx_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fy_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fz_MetaData[] = {
		{ "Category", "ROSCommand" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ignore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Qx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Qy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Qz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Mode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Ignore = { "Ignore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Ignore), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ignore_MetaData), NewProp_Ignore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Qx = { "Qx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Qx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Qx_MetaData), NewProp_Qx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Qy = { "Qy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Qy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Qy_MetaData), NewProp_Qy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Qz = { "Qz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Qz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Qz_MetaData), NewProp_Qz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Fx = { "Fx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Fx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fx_MetaData), NewProp_Fx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Fy = { "Fy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Fy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fy_MetaData), NewProp_Fy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Fz = { "Fz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCommand, Fz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fz_MetaData), NewProp_Fz_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Ignore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Qx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Qy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Qz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Fx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Fy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCommand_Statics::NewProp_Fz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSCommand",
	Z_Construct_UScriptStruct_FROSCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCommand_Statics::PropPointers),
	sizeof(FROSCommand),
	alignof(FROSCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSCommand()
{
	if (!Z_Registration_Info_UScriptStruct_FROSCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSCommand.InnerSingleton, Z_Construct_UScriptStruct_FROSCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSCommand.InnerSingleton;
}
// ********** End ScriptStruct FROSCommand *********************************************************

// ********** Begin Class UROS2CommandMsg Function CONST_IGNORE_FX *********************************
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics
{
	struct ROS2CommandMsg_eventCONST_IGNORE_FX_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_IGNORE_FX_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_IGNORE_FX", Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::ROS2CommandMsg_eventCONST_IGNORE_FX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::ROS2CommandMsg_eventCONST_IGNORE_FX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_IGNORE_FX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_IGNORE_FX();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_IGNORE_FX ***********************************

// ********** Begin Class UROS2CommandMsg Function CONST_IGNORE_FY *********************************
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics
{
	struct ROS2CommandMsg_eventCONST_IGNORE_FY_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_IGNORE_FY_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_IGNORE_FY", Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::ROS2CommandMsg_eventCONST_IGNORE_FY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::ROS2CommandMsg_eventCONST_IGNORE_FY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_IGNORE_FY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_IGNORE_FY();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_IGNORE_FY ***********************************

// ********** Begin Class UROS2CommandMsg Function CONST_IGNORE_FZ *********************************
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics
{
	struct ROS2CommandMsg_eventCONST_IGNORE_FZ_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_IGNORE_FZ_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_IGNORE_FZ", Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::ROS2CommandMsg_eventCONST_IGNORE_FZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::ROS2CommandMsg_eventCONST_IGNORE_FZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_IGNORE_FZ)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_IGNORE_FZ();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_IGNORE_FZ ***********************************

// ********** Begin Class UROS2CommandMsg Function CONST_IGNORE_NONE *******************************
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics
{
	struct ROS2CommandMsg_eventCONST_IGNORE_NONE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_IGNORE_NONE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_IGNORE_NONE", Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::ROS2CommandMsg_eventCONST_IGNORE_NONE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::ROS2CommandMsg_eventCONST_IGNORE_NONE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_IGNORE_NONE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_IGNORE_NONE();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_IGNORE_NONE *********************************

// ********** Begin Class UROS2CommandMsg Function CONST_IGNORE_QX *********************************
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics
{
	struct ROS2CommandMsg_eventCONST_IGNORE_QX_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_IGNORE_QX_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_IGNORE_QX", Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::ROS2CommandMsg_eventCONST_IGNORE_QX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::ROS2CommandMsg_eventCONST_IGNORE_QX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_IGNORE_QX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_IGNORE_QX();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_IGNORE_QX ***********************************

// ********** Begin Class UROS2CommandMsg Function CONST_IGNORE_QY *********************************
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics
{
	struct ROS2CommandMsg_eventCONST_IGNORE_QY_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_IGNORE_QY_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_IGNORE_QY", Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::ROS2CommandMsg_eventCONST_IGNORE_QY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::ROS2CommandMsg_eventCONST_IGNORE_QY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_IGNORE_QY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_IGNORE_QY();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_IGNORE_QY ***********************************

// ********** Begin Class UROS2CommandMsg Function CONST_IGNORE_QZ *********************************
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics
{
	struct ROS2CommandMsg_eventCONST_IGNORE_QZ_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_IGNORE_QZ_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_IGNORE_QZ", Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::ROS2CommandMsg_eventCONST_IGNORE_QZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::ROS2CommandMsg_eventCONST_IGNORE_QZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_IGNORE_QZ)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_IGNORE_QZ();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_IGNORE_QZ ***********************************

// ********** Begin Class UROS2CommandMsg Function CONST_MODE_PASS_THROUGH *************************
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics
{
	struct ROS2CommandMsg_eventCONST_MODE_PASS_THROUGH_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_MODE_PASS_THROUGH_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_MODE_PASS_THROUGH", Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::ROS2CommandMsg_eventCONST_MODE_PASS_THROUGH_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::ROS2CommandMsg_eventCONST_MODE_PASS_THROUGH_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_MODE_PASS_THROUGH)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_MODE_PASS_THROUGH();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_MODE_PASS_THROUGH ***************************

// ********** Begin Class UROS2CommandMsg Function CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE **********
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics
{
	struct ROS2CommandMsg_eventCONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE", Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::ROS2CommandMsg_eventCONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::ROS2CommandMsg_eventCONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE ************

// ********** Begin Class UROS2CommandMsg Function CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE **
struct Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics
{
	struct ROS2CommandMsg_eventCONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventCONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE", Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::ROS2CommandMsg_eventCONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::ROS2CommandMsg_eventCONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execCONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2CommandMsg::CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE();
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE ****

// ********** Begin Class UROS2CommandMsg Function GetMsg ******************************************
struct Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics
{
	struct ROS2CommandMsg_eventGetMsg_Parms
	{
		FROSCommand Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSCommand, METADATA_PARAMS(0, nullptr) }; // 973733777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::ROS2CommandMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::ROS2CommandMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSCommand,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function GetMsg ********************************************

// ********** Begin Class UROS2CommandMsg Function SetMsg ******************************************
struct Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics
{
	struct ROS2CommandMsg_eventSetMsg_Parms
	{
		FROSCommand Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CommandMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSCommand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 973733777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CommandMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::ROS2CommandMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::ROS2CommandMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CommandMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CommandMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CommandMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSCommand,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2CommandMsg Function SetMsg ********************************************

// ********** Begin Class UROS2CommandMsg **********************************************************
void UROS2CommandMsg::StaticRegisterNativesUROS2CommandMsg()
{
	UClass* Class = UROS2CommandMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_IGNORE_FX", &UROS2CommandMsg::execCONST_IGNORE_FX },
		{ "CONST_IGNORE_FY", &UROS2CommandMsg::execCONST_IGNORE_FY },
		{ "CONST_IGNORE_FZ", &UROS2CommandMsg::execCONST_IGNORE_FZ },
		{ "CONST_IGNORE_NONE", &UROS2CommandMsg::execCONST_IGNORE_NONE },
		{ "CONST_IGNORE_QX", &UROS2CommandMsg::execCONST_IGNORE_QX },
		{ "CONST_IGNORE_QY", &UROS2CommandMsg::execCONST_IGNORE_QY },
		{ "CONST_IGNORE_QZ", &UROS2CommandMsg::execCONST_IGNORE_QZ },
		{ "CONST_MODE_PASS_THROUGH", &UROS2CommandMsg::execCONST_MODE_PASS_THROUGH },
		{ "CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE", &UROS2CommandMsg::execCONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE },
		{ "CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE", &UROS2CommandMsg::execCONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE },
		{ "GetMsg", &UROS2CommandMsg::execGetMsg },
		{ "SetMsg", &UROS2CommandMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2CommandMsg;
UClass* UROS2CommandMsg::GetPrivateStaticClass()
{
	using TClass = UROS2CommandMsg;
	if (!Z_Registration_Info_UClass_UROS2CommandMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2CommandMsg"),
			Z_Registration_Info_UClass_UROS2CommandMsg.InnerSingleton,
			StaticRegisterNativesUROS2CommandMsg,
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
	return Z_Registration_Info_UClass_UROS2CommandMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2CommandMsg_NoRegister()
{
	return UROS2CommandMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2CommandMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Command.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Command.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FX, "CONST_IGNORE_FX" }, // 3300536355
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FY, "CONST_IGNORE_FY" }, // 1306299292
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_FZ, "CONST_IGNORE_FZ" }, // 1263618033
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_NONE, "CONST_IGNORE_NONE" }, // 16982045
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QX, "CONST_IGNORE_QX" }, // 893365462
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QY, "CONST_IGNORE_QY" }, // 1456413038
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_IGNORE_QZ, "CONST_IGNORE_QZ" }, // 788538320
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_PASS_THROUGH, "CONST_MODE_PASS_THROUGH" }, // 2009315128
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE, "CONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE" }, // 1670244284
		{ &Z_Construct_UFunction_UROS2CommandMsg_CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE, "CONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE" }, // 2815652695
		{ &Z_Construct_UFunction_UROS2CommandMsg_GetMsg, "GetMsg" }, // 120307345
		{ &Z_Construct_UFunction_UROS2CommandMsg_SetMsg, "SetMsg" }, // 210214009
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2CommandMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2CommandMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CommandMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2CommandMsg_Statics::ClassParams = {
	&UROS2CommandMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CommandMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2CommandMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2CommandMsg()
{
	if (!Z_Registration_Info_UClass_UROS2CommandMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2CommandMsg.OuterSingleton, Z_Construct_UClass_UROS2CommandMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2CommandMsg.OuterSingleton;
}
UROS2CommandMsg::UROS2CommandMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2CommandMsg);
UROS2CommandMsg::~UROS2CommandMsg() {}
// ********** End Class UROS2CommandMsg ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSCommand::StaticStruct, Z_Construct_UScriptStruct_FROSCommand_Statics::NewStructOps, TEXT("ROSCommand"), &Z_Registration_Info_UScriptStruct_FROSCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSCommand), 973733777U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2CommandMsg, UROS2CommandMsg::StaticClass, TEXT("UROS2CommandMsg"), &Z_Registration_Info_UClass_UROS2CommandMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2CommandMsg), 2340687809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h__Script_UnrealRosFlight_132182963(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
