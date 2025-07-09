// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2PoseArray.h"

#ifdef RCLUE_ROS2PoseArray_generated_h
#error "ROS2PoseArray.generated.h already included, missing '#pragma once' in ROS2PoseArray.h"
#endif
#define RCLUE_ROS2PoseArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPoseArray;

// ********** Begin ScriptStruct FROSPoseArray *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPoseArray_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPoseArray;
// ********** End ScriptStruct FROSPoseArray *******************************************************

// ********** Begin Class UROS2PoseArrayMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2PoseArrayMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PoseArrayMsg(); \
	friend struct Z_Construct_UClass_UROS2PoseArrayMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PoseArrayMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PoseArrayMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PoseArrayMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PoseArrayMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PoseArrayMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PoseArrayMsg(UROS2PoseArrayMsg&&) = delete; \
	UROS2PoseArrayMsg(const UROS2PoseArrayMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PoseArrayMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PoseArrayMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PoseArrayMsg) \
	NO_API virtual ~UROS2PoseArrayMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_63_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_66_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PoseArrayMsg;

// ********** End Class UROS2PoseArrayMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
