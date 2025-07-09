// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2IMPose.h"

#ifdef RCLUE_ROS2IMPose_generated_h
#error "ROS2IMPose.generated.h already included, missing '#pragma once' in ROS2IMPose.h"
#endif
#define RCLUE_ROS2IMPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSIMPose;

// ********** Begin ScriptStruct FROSIMPose ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSIMPose_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSIMPose;
// ********** End ScriptStruct FROSIMPose **********************************************************

// ********** Begin Class UROS2IMPoseMsg ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2IMPoseMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2IMPoseMsg(); \
	friend struct Z_Construct_UClass_UROS2IMPoseMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2IMPoseMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2IMPoseMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2IMPoseMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2IMPoseMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2IMPoseMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2IMPoseMsg(UROS2IMPoseMsg&&) = delete; \
	UROS2IMPoseMsg(const UROS2IMPoseMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2IMPoseMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2IMPoseMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2IMPoseMsg) \
	NO_API virtual ~UROS2IMPoseMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_61_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_64_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2IMPoseMsg;

// ********** End Class UROS2IMPoseMsg *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
