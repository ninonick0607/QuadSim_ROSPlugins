// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2GoalStatus.h"

#ifdef RCLUE_ROS2GoalStatus_generated_h
#error "ROS2GoalStatus.generated.h already included, missing '#pragma once' in ROS2GoalStatus.h"
#endif
#define RCLUE_ROS2GoalStatus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGoalStatus;

// ********** Begin ScriptStruct FROSGoalStatus ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGoalStatus_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGoalStatus;
// ********** End ScriptStruct FROSGoalStatus ******************************************************

// ********** Begin Class UROS2GoalStatusMsg *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_LOST); \
	DECLARE_FUNCTION(execCONST_RECALLED); \
	DECLARE_FUNCTION(execCONST_RECALLING); \
	DECLARE_FUNCTION(execCONST_PREEMPTING); \
	DECLARE_FUNCTION(execCONST_REJECTED); \
	DECLARE_FUNCTION(execCONST_ABORTED); \
	DECLARE_FUNCTION(execCONST_SUCCEEDED); \
	DECLARE_FUNCTION(execCONST_PREEMPTED); \
	DECLARE_FUNCTION(execCONST_ACTIVE); \
	DECLARE_FUNCTION(execCONST_PENDING); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2GoalStatusMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GoalStatusMsg(); \
	friend struct Z_Construct_UClass_UROS2GoalStatusMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GoalStatusMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GoalStatusMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GoalStatusMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2GoalStatusMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GoalStatusMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GoalStatusMsg(UROS2GoalStatusMsg&&) = delete; \
	UROS2GoalStatusMsg(const UROS2GoalStatusMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GoalStatusMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GoalStatusMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GoalStatusMsg) \
	NO_API virtual ~UROS2GoalStatusMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_71_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_74_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GoalStatusMsg;

// ********** End Class UROS2GoalStatusMsg *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
