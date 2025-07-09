// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Pose.h"

#ifdef RCLUE_ROS2Pose_generated_h
#error "ROS2Pose.generated.h already included, missing '#pragma once' in ROS2Pose.h"
#endif
#define RCLUE_ROS2Pose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPose;

// ********** Begin ScriptStruct FROSPose **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPose_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPose;
// ********** End ScriptStruct FROSPose ************************************************************

// ********** Begin Class UROS2PoseMsg *************************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2PoseMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PoseMsg(); \
	friend struct Z_Construct_UClass_UROS2PoseMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PoseMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PoseMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PoseMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PoseMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PoseMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PoseMsg(UROS2PoseMsg&&) = delete; \
	UROS2PoseMsg(const UROS2PoseMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PoseMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PoseMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PoseMsg) \
	NO_API virtual ~UROS2PoseMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_52_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_55_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PoseMsg;

// ********** End Class UROS2PoseMsg ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
