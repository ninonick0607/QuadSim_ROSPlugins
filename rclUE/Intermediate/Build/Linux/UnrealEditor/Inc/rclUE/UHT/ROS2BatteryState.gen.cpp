// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2BatteryState.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2BatteryState() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2BatteryStateMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2BatteryStateMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSBatteryState();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSBatteryState **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSBatteryState;
class UScriptStruct* FROSBatteryState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSBatteryState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSBatteryState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSBatteryState, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSBatteryState"));
	}
	return Z_Registration_Info_UScriptStruct_FROSBatteryState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSBatteryState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voltage_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charge_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesignCapacity_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Percentage_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerSupplyStatus_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerSupplyHealth_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerSupplyTechnology_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPresent_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellVoltage_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellTemperature_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[] = {
		{ "Category", "ROSBatteryState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Voltage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Charge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Capacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesignCapacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PowerSupplyStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PowerSupplyHealth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PowerSupplyTechnology;
	static void NewProp_bPresent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPresent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellVoltage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CellVoltage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellTemperature_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CellTemperature;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SerialNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSBatteryState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Voltage = { "Voltage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, Voltage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voltage_MetaData), NewProp_Voltage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Charge = { "Charge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, Charge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charge_MetaData), NewProp_Charge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, Capacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capacity_MetaData), NewProp_Capacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_DesignCapacity = { "DesignCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, DesignCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesignCapacity_MetaData), NewProp_DesignCapacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, Percentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Percentage_MetaData), NewProp_Percentage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_PowerSupplyStatus = { "PowerSupplyStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, PowerSupplyStatus), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerSupplyStatus_MetaData), NewProp_PowerSupplyStatus_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_PowerSupplyHealth = { "PowerSupplyHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, PowerSupplyHealth), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerSupplyHealth_MetaData), NewProp_PowerSupplyHealth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_PowerSupplyTechnology = { "PowerSupplyTechnology", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, PowerSupplyTechnology), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerSupplyTechnology_MetaData), NewProp_PowerSupplyTechnology_MetaData) };
void Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_bPresent_SetBit(void* Obj)
{
	((FROSBatteryState*)Obj)->bPresent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_bPresent = { "bPresent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSBatteryState), &Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_bPresent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPresent_MetaData), NewProp_bPresent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_CellVoltage_Inner = { "CellVoltage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_CellVoltage = { "CellVoltage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, CellVoltage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellVoltage_MetaData), NewProp_CellVoltage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_CellTemperature_Inner = { "CellTemperature", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_CellTemperature = { "CellTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, CellTemperature), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellTemperature_MetaData), NewProp_CellTemperature_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryState, SerialNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerialNumber_MetaData), NewProp_SerialNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSBatteryState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Voltage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Charge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Capacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_DesignCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Percentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_PowerSupplyStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_PowerSupplyHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_PowerSupplyTechnology,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_bPresent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_CellVoltage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_CellVoltage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_CellTemperature_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_CellTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewProp_SerialNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBatteryState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSBatteryState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSBatteryState",
	Z_Construct_UScriptStruct_FROSBatteryState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBatteryState_Statics::PropPointers),
	sizeof(FROSBatteryState),
	alignof(FROSBatteryState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBatteryState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSBatteryState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSBatteryState()
{
	if (!Z_Registration_Info_UScriptStruct_FROSBatteryState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSBatteryState.InnerSingleton, Z_Construct_UScriptStruct_FROSBatteryState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSBatteryState.InnerSingleton;
}
// ********** End ScriptStruct FROSBatteryState ****************************************************

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_COLD *************
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_COLD_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_COLD_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_COLD", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_COLD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_COLD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_COLD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_COLD();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_COLD ***************

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_DEAD *************
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_DEAD_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_DEAD_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_DEAD", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_DEAD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_DEAD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_DEAD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_DEAD();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_DEAD ***************

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_GOOD *************
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_GOOD_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_GOOD_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_GOOD", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_GOOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_GOOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_GOOD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_GOOD();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_GOOD ***************

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_OVERHEAT *********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_OVERHEAT_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_OVERHEAT_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_OVERHEAT", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_OVERHEAT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_OVERHEAT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_OVERHEAT)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_OVERHEAT();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_OVERHEAT ***********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE ******
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE ********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE 
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE 

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_UNKNOWN **********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_UNKNOWN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_UNKNOWN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_UNKNOWN", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_UNKNOWN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_UNKNOWN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_UNKNOWN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_UNKNOWN();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_UNKNOWN ************

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE ***
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE *****

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE 
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE 

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_CHARGING *********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_CHARGING_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_CHARGING_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_STATUS_CHARGING", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_CHARGING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_CHARGING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_CHARGING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_STATUS_CHARGING();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_CHARGING ***********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_DISCHARGING ******
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_DISCHARGING_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_DISCHARGING_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_STATUS_DISCHARGING", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_DISCHARGING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_DISCHARGING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_DISCHARGING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_STATUS_DISCHARGING();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_DISCHARGING ********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_FULL *************
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_FULL_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_FULL_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_STATUS_FULL", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_FULL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_FULL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_FULL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_STATUS_FULL();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_FULL ***************

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_NOT_CHARGING *****
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_STATUS_NOT_CHARGING", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_NOT_CHARGING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_STATUS_NOT_CHARGING();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_NOT_CHARGING *******

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_UNKNOWN **********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_UNKNOWN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_UNKNOWN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_STATUS_UNKNOWN", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_UNKNOWN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_STATUS_UNKNOWN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_UNKNOWN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_STATUS_UNKNOWN();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_STATUS_UNKNOWN ************

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_LIFE *********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_TECHNOLOGY_LIFE", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_LIFE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_TECHNOLOGY_LIFE();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_LIFE ***********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_LIMN *********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_TECHNOLOGY_LIMN", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_LIMN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_TECHNOLOGY_LIMN();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_LIMN ***********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_LION *********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LION_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LION_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_TECHNOLOGY_LION", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LION_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LION_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_LION)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_TECHNOLOGY_LION();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_LION ***********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_LIPO *********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_TECHNOLOGY_LIPO", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_LIPO)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_TECHNOLOGY_LIPO();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_LIPO ***********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_NICD *********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_NICD_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_NICD_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_TECHNOLOGY_NICD", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_NICD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_NICD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_NICD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_TECHNOLOGY_NICD();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_NICD ***********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_NIMH *********
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_TECHNOLOGY_NIMH", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_NIMH)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_TECHNOLOGY_NIMH();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_NIMH ***********

// ********** Begin Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN ******
struct Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics
{
	struct ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN", Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::ROS2BatteryStateMsg_eventCONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2BatteryStateMsg::CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN();
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN ********

// ********** Begin Class UROS2BatteryStateMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics
{
	struct ROS2BatteryStateMsg_eventGetMsg_Parms
	{
		FROSBatteryState Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSBatteryState, METADATA_PARAMS(0, nullptr) }; // 1962577014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::ROS2BatteryStateMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::ROS2BatteryStateMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSBatteryState,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function GetMsg ***************************************

// ********** Begin Class UROS2BatteryStateMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics
{
	struct ROS2BatteryStateMsg_eventSetMsg_Parms
	{
		FROSBatteryState Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStateMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSBatteryState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1962577014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStateMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::ROS2BatteryStateMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::ROS2BatteryStateMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStateMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSBatteryState,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStateMsg Function SetMsg ***************************************

// ********** Begin Class UROS2BatteryStateMsg *****************************************************
void UROS2BatteryStateMsg::StaticRegisterNativesUROS2BatteryStateMsg()
{
	UClass* Class = UROS2BatteryStateMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_POWER_SUPPLY_HEALTH_COLD", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_COLD },
		{ "CONST_POWER_SUPPLY_HEALTH_DEAD", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_DEAD },
		{ "CONST_POWER_SUPPLY_HEALTH_GOOD", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_GOOD },
		{ "CONST_POWER_SUPPLY_HEALTH_OVERHEAT", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_OVERHEAT },
		{ "CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE },
		{ "CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE },
		{ "CONST_POWER_SUPPLY_HEALTH_UNKNOWN", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_UNKNOWN },
		{ "CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE },
		{ "CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE },
		{ "CONST_POWER_SUPPLY_STATUS_CHARGING", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_CHARGING },
		{ "CONST_POWER_SUPPLY_STATUS_DISCHARGING", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_DISCHARGING },
		{ "CONST_POWER_SUPPLY_STATUS_FULL", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_FULL },
		{ "CONST_POWER_SUPPLY_STATUS_NOT_CHARGING", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_NOT_CHARGING },
		{ "CONST_POWER_SUPPLY_STATUS_UNKNOWN", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_STATUS_UNKNOWN },
		{ "CONST_POWER_SUPPLY_TECHNOLOGY_LIFE", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_LIFE },
		{ "CONST_POWER_SUPPLY_TECHNOLOGY_LIMN", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_LIMN },
		{ "CONST_POWER_SUPPLY_TECHNOLOGY_LION", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_LION },
		{ "CONST_POWER_SUPPLY_TECHNOLOGY_LIPO", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_LIPO },
		{ "CONST_POWER_SUPPLY_TECHNOLOGY_NICD", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_NICD },
		{ "CONST_POWER_SUPPLY_TECHNOLOGY_NIMH", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_NIMH },
		{ "CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN", &UROS2BatteryStateMsg::execCONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN },
		{ "GetMsg", &UROS2BatteryStateMsg::execGetMsg },
		{ "SetMsg", &UROS2BatteryStateMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2BatteryStateMsg;
UClass* UROS2BatteryStateMsg::GetPrivateStaticClass()
{
	using TClass = UROS2BatteryStateMsg;
	if (!Z_Registration_Info_UClass_UROS2BatteryStateMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2BatteryStateMsg"),
			Z_Registration_Info_UClass_UROS2BatteryStateMsg.InnerSingleton,
			StaticRegisterNativesUROS2BatteryStateMsg,
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
	return Z_Registration_Info_UClass_UROS2BatteryStateMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2BatteryStateMsg_NoRegister()
{
	return UROS2BatteryStateMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2BatteryStateMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2BatteryState.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_COLD, "CONST_POWER_SUPPLY_HEALTH_COLD" }, // 2010733422
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_DEAD, "CONST_POWER_SUPPLY_HEALTH_DEAD" }, // 356949969
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_GOOD, "CONST_POWER_SUPPLY_HEALTH_GOOD" }, // 3616282846
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERHEAT, "CONST_POWER_SUPPLY_HEALTH_OVERHEAT" }, // 2592166490
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE, "CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE" }, // 3350681267
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE, "CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE" }, // 227604819
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNKNOWN, "CONST_POWER_SUPPLY_HEALTH_UNKNOWN" }, // 3536028902
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE, "CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE" }, // 3704631115
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE, "CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE" }, // 3595299134
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_CHARGING, "CONST_POWER_SUPPLY_STATUS_CHARGING" }, // 2057421147
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_DISCHARGING, "CONST_POWER_SUPPLY_STATUS_DISCHARGING" }, // 963836110
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_FULL, "CONST_POWER_SUPPLY_STATUS_FULL" }, // 3614916889
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_NOT_CHARGING, "CONST_POWER_SUPPLY_STATUS_NOT_CHARGING" }, // 3402275840
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_STATUS_UNKNOWN, "CONST_POWER_SUPPLY_STATUS_UNKNOWN" }, // 979042001
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIFE, "CONST_POWER_SUPPLY_TECHNOLOGY_LIFE" }, // 2306244218
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIMN, "CONST_POWER_SUPPLY_TECHNOLOGY_LIMN" }, // 3790835703
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LION, "CONST_POWER_SUPPLY_TECHNOLOGY_LION" }, // 92962324
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_LIPO, "CONST_POWER_SUPPLY_TECHNOLOGY_LIPO" }, // 187171710
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NICD, "CONST_POWER_SUPPLY_TECHNOLOGY_NICD" }, // 2895350571
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_NIMH, "CONST_POWER_SUPPLY_TECHNOLOGY_NIMH" }, // 3316834335
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN, "CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN" }, // 3085495173
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_GetMsg, "GetMsg" }, // 2553557615
		{ &Z_Construct_UFunction_UROS2BatteryStateMsg_SetMsg, "SetMsg" }, // 2327535778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2BatteryStateMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2BatteryStateMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2BatteryStateMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2BatteryStateMsg_Statics::ClassParams = {
	&UROS2BatteryStateMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2BatteryStateMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2BatteryStateMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2BatteryStateMsg()
{
	if (!Z_Registration_Info_UClass_UROS2BatteryStateMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2BatteryStateMsg.OuterSingleton, Z_Construct_UClass_UROS2BatteryStateMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2BatteryStateMsg.OuterSingleton;
}
UROS2BatteryStateMsg::UROS2BatteryStateMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2BatteryStateMsg);
UROS2BatteryStateMsg::~UROS2BatteryStateMsg() {}
// ********** End Class UROS2BatteryStateMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSBatteryState::StaticStruct, Z_Construct_UScriptStruct_FROSBatteryState_Statics::NewStructOps, TEXT("ROSBatteryState"), &Z_Registration_Info_UScriptStruct_FROSBatteryState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSBatteryState), 1962577014U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2BatteryStateMsg, UROS2BatteryStateMsg::StaticClass, TEXT("UROS2BatteryStateMsg"), &Z_Registration_Info_UClass_UROS2BatteryStateMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2BatteryStateMsg), 2631763329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h__Script_rclUE_3962546870(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
