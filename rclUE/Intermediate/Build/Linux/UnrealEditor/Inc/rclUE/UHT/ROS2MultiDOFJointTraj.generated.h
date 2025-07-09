// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MultiDOFJointTraj.h"

#ifdef RCLUE_ROS2MultiDOFJointTraj_generated_h
#error "ROS2MultiDOFJointTraj.generated.h already included, missing '#pragma once' in ROS2MultiDOFJointTraj.h"
#endif
#define RCLUE_ROS2MultiDOFJointTraj_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMultiDOFJointTraj;

// ********** Begin ScriptStruct FROSMultiDOFJointTraj *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMultiDOFJointTraj_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMultiDOFJointTraj;
// ********** End ScriptStruct FROSMultiDOFJointTraj ***********************************************

// ********** Begin Class UROS2MultiDOFJointTrajMsg ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointTrajMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MultiDOFJointTrajMsg(); \
	friend struct Z_Construct_UClass_UROS2MultiDOFJointTrajMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointTrajMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MultiDOFJointTrajMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MultiDOFJointTrajMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MultiDOFJointTrajMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MultiDOFJointTrajMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MultiDOFJointTrajMsg(UROS2MultiDOFJointTrajMsg&&) = delete; \
	UROS2MultiDOFJointTrajMsg(const UROS2MultiDOFJointTrajMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MultiDOFJointTrajMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MultiDOFJointTrajMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MultiDOFJointTrajMsg) \
	NO_API virtual ~UROS2MultiDOFJointTrajMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_82_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_85_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MultiDOFJointTrajMsg;

// ********** End Class UROS2MultiDOFJointTrajMsg **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTraj_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
