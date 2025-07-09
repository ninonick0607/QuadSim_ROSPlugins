// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2JointTraj.h"

#ifdef RCLUE_ROS2JointTraj_generated_h
#error "ROS2JointTraj.generated.h already included, missing '#pragma once' in ROS2JointTraj.h"
#endif
#define RCLUE_ROS2JointTraj_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSJointTraj;

// ********** Begin ScriptStruct FROSJointTraj *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSJointTraj_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSJointTraj;
// ********** End ScriptStruct FROSJointTraj *******************************************************

// ********** Begin Class UROS2JointTrajMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2JointTrajMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2JointTrajMsg(); \
	friend struct Z_Construct_UClass_UROS2JointTrajMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2JointTrajMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2JointTrajMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2JointTrajMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2JointTrajMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2JointTrajMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2JointTrajMsg(UROS2JointTrajMsg&&) = delete; \
	UROS2JointTrajMsg(const UROS2JointTrajMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2JointTrajMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2JointTrajMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2JointTrajMsg) \
	NO_API virtual ~UROS2JointTrajMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_82_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_85_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2JointTrajMsg;

// ********** End Class UROS2JointTrajMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTraj_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
