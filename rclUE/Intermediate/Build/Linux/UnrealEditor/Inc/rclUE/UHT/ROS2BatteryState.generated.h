// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2BatteryState.h"

#ifdef RCLUE_ROS2BatteryState_generated_h
#error "ROS2BatteryState.generated.h already included, missing '#pragma once' in ROS2BatteryState.h"
#endif
#define RCLUE_ROS2BatteryState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSBatteryState;

// ********** Begin ScriptStruct FROSBatteryState **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSBatteryState_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSBatteryState;
// ********** End ScriptStruct FROSBatteryState ****************************************************

// ********** Begin Class UROS2BatteryStateMsg *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_TECHNOLOGY_LIMN); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_TECHNOLOGY_NICD); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_TECHNOLOGY_LIFE); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_TECHNOLOGY_LIPO); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_TECHNOLOGY_LION); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_TECHNOLOGY_NIMH); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_COLD); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_DEAD); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_OVERHEAT); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_GOOD); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_HEALTH_UNKNOWN); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_STATUS_FULL); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_STATUS_NOT_CHARGING); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_STATUS_DISCHARGING); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_STATUS_CHARGING); \
	DECLARE_FUNCTION(execCONST_POWER_SUPPLY_STATUS_UNKNOWN); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2BatteryStateMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2BatteryStateMsg(); \
	friend struct Z_Construct_UClass_UROS2BatteryStateMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2BatteryStateMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2BatteryStateMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2BatteryStateMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2BatteryStateMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2BatteryStateMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2BatteryStateMsg(UROS2BatteryStateMsg&&) = delete; \
	UROS2BatteryStateMsg(const UROS2BatteryStateMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2BatteryStateMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2BatteryStateMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2BatteryStateMsg) \
	NO_API virtual ~UROS2BatteryStateMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_191_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_194_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2BatteryStateMsg;

// ********** End Class UROS2BatteryStateMsg *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2BatteryState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
