// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2PointCloud2.h"

#ifdef RCLUE_ROS2PointCloud2_generated_h
#error "ROS2PointCloud2.generated.h already included, missing '#pragma once' in ROS2PointCloud2.h"
#endif
#define RCLUE_ROS2PointCloud2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPointCloud2;

// ********** Begin ScriptStruct FROSPointCloud2 ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPointCloud2_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPointCloud2;
// ********** End ScriptStruct FROSPointCloud2 *****************************************************

// ********** Begin Class UROS2PointCloud2Msg ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2PointCloud2Msg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PointCloud2Msg(); \
	friend struct Z_Construct_UClass_UROS2PointCloud2Msg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PointCloud2Msg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PointCloud2Msg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PointCloud2Msg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PointCloud2Msg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PointCloud2Msg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PointCloud2Msg(UROS2PointCloud2Msg&&) = delete; \
	UROS2PointCloud2Msg(const UROS2PointCloud2Msg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PointCloud2Msg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PointCloud2Msg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PointCloud2Msg) \
	NO_API virtual ~UROS2PointCloud2Msg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_123_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_126_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PointCloud2Msg;

// ********** End Class UROS2PointCloud2Msg ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
