// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Pose2D.h"

#ifdef RCLUE_ROS2Pose2D_generated_h
#error "ROS2Pose2D.generated.h already included, missing '#pragma once' in ROS2Pose2D.h"
#endif
#define RCLUE_ROS2Pose2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPose2D;

// ********** Begin ScriptStruct FROSPose2D ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPose2D_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPose2D;
// ********** End ScriptStruct FROSPose2D **********************************************************

// ********** Begin Class UROS2Pose2DMsg ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2Pose2DMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Pose2DMsg(); \
	friend struct Z_Construct_UClass_UROS2Pose2DMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Pose2DMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Pose2DMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Pose2DMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2Pose2DMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Pose2DMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Pose2DMsg(UROS2Pose2DMsg&&) = delete; \
	UROS2Pose2DMsg(const UROS2Pose2DMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Pose2DMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Pose2DMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2Pose2DMsg) \
	NO_API virtual ~UROS2Pose2DMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_59_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_62_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Pose2DMsg;

// ********** End Class UROS2Pose2DMsg *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
