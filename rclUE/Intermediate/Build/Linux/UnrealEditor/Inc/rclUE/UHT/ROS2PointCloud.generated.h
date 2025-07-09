// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2PointCloud.h"

#ifdef RCLUE_ROS2PointCloud_generated_h
#error "ROS2PointCloud.generated.h already included, missing '#pragma once' in ROS2PointCloud.h"
#endif
#define RCLUE_ROS2PointCloud_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPointCloud;

// ********** Begin ScriptStruct FROSPointCloud ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPointCloud_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPointCloud;
// ********** End ScriptStruct FROSPointCloud ******************************************************

// ********** Begin Class UROS2PointCloudMsg *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2PointCloudMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PointCloudMsg(); \
	friend struct Z_Construct_UClass_UROS2PointCloudMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PointCloudMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PointCloudMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PointCloudMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PointCloudMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PointCloudMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PointCloudMsg(UROS2PointCloudMsg&&) = delete; \
	UROS2PointCloudMsg(const UROS2PointCloudMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PointCloudMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PointCloudMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PointCloudMsg) \
	NO_API virtual ~UROS2PointCloudMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_83_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_86_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PointCloudMsg;

// ********** End Class UROS2PointCloudMsg *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
