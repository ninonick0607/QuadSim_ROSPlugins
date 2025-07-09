// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2JointTrajPoint.h"

#ifdef RCLUE_ROS2JointTrajPoint_generated_h
#error "ROS2JointTrajPoint.generated.h already included, missing '#pragma once' in ROS2JointTrajPoint.h"
#endif
#define RCLUE_ROS2JointTrajPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSJointTrajPoint;

// ********** Begin ScriptStruct FROSJointTrajPoint ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSJointTrajPoint_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSJointTrajPoint;
// ********** End ScriptStruct FROSJointTrajPoint **************************************************

// ********** Begin Class UROS2JointTrajPointMsg ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2JointTrajPointMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2JointTrajPointMsg(); \
	friend struct Z_Construct_UClass_UROS2JointTrajPointMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2JointTrajPointMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2JointTrajPointMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2JointTrajPointMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2JointTrajPointMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2JointTrajPointMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2JointTrajPointMsg(UROS2JointTrajPointMsg&&) = delete; \
	UROS2JointTrajPointMsg(const UROS2JointTrajPointMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2JointTrajPointMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2JointTrajPointMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2JointTrajPointMsg) \
	NO_API virtual ~UROS2JointTrajPointMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_108_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_111_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2JointTrajPointMsg;

// ********** End Class UROS2JointTrajPointMsg *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JointTrajPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
