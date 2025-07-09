// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MultiDOFJointTrajPoint.h"

#ifdef RCLUE_ROS2MultiDOFJointTrajPoint_generated_h
#error "ROS2MultiDOFJointTrajPoint.generated.h already included, missing '#pragma once' in ROS2MultiDOFJointTrajPoint.h"
#endif
#define RCLUE_ROS2MultiDOFJointTrajPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMultiDOFJointTrajPoint;

// ********** Begin ScriptStruct FROSMultiDOFJointTrajPoint ****************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMultiDOFJointTrajPoint_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMultiDOFJointTrajPoint;
// ********** End ScriptStruct FROSMultiDOFJointTrajPoint ******************************************

// ********** Begin Class UROS2MultiDOFJointTrajPointMsg *******************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MultiDOFJointTrajPointMsg(); \
	friend struct Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MultiDOFJointTrajPointMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MultiDOFJointTrajPointMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MultiDOFJointTrajPointMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MultiDOFJointTrajPointMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MultiDOFJointTrajPointMsg(UROS2MultiDOFJointTrajPointMsg&&) = delete; \
	UROS2MultiDOFJointTrajPointMsg(const UROS2MultiDOFJointTrajPointMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MultiDOFJointTrajPointMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MultiDOFJointTrajPointMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MultiDOFJointTrajPointMsg) \
	NO_API virtual ~UROS2MultiDOFJointTrajPointMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_98_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_101_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MultiDOFJointTrajPointMsg;

// ********** End Class UROS2MultiDOFJointTrajPointMsg *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointTrajPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
