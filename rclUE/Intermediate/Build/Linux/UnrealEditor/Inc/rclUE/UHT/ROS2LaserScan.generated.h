// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2LaserScan.h"

#ifdef RCLUE_ROS2LaserScan_generated_h
#error "ROS2LaserScan.generated.h already included, missing '#pragma once' in ROS2LaserScan.h"
#endif
#define RCLUE_ROS2LaserScan_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSLaserScan;

// ********** Begin ScriptStruct FROSLaserScan *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLaserScan_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLaserScan;
// ********** End ScriptStruct FROSLaserScan *******************************************************

// ********** Begin Class UROS2LaserScanMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2LaserScanMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2LaserScanMsg(); \
	friend struct Z_Construct_UClass_UROS2LaserScanMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2LaserScanMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2LaserScanMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2LaserScanMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2LaserScanMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2LaserScanMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2LaserScanMsg(UROS2LaserScanMsg&&) = delete; \
	UROS2LaserScanMsg(const UROS2LaserScanMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2LaserScanMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2LaserScanMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2LaserScanMsg) \
	NO_API virtual ~UROS2LaserScanMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_126_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_129_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2LaserScanMsg;

// ********** End Class UROS2LaserScanMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserScan_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
