// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MultiDOFJointState.h"

#ifdef RCLUE_ROS2MultiDOFJointState_generated_h
#error "ROS2MultiDOFJointState.generated.h already included, missing '#pragma once' in ROS2MultiDOFJointState.h"
#endif
#define RCLUE_ROS2MultiDOFJointState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMultiDOFJointState;

// ********** Begin ScriptStruct FROSMultiDOFJointState ********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMultiDOFJointState;
// ********** End ScriptStruct FROSMultiDOFJointState **********************************************

// ********** Begin Class UROS2MultiDOFJointStateMsg ***********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointStateMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MultiDOFJointStateMsg(); \
	friend struct Z_Construct_UClass_UROS2MultiDOFJointStateMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointStateMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MultiDOFJointStateMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MultiDOFJointStateMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MultiDOFJointStateMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MultiDOFJointStateMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MultiDOFJointStateMsg(UROS2MultiDOFJointStateMsg&&) = delete; \
	UROS2MultiDOFJointStateMsg(const UROS2MultiDOFJointStateMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MultiDOFJointStateMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MultiDOFJointStateMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MultiDOFJointStateMsg) \
	NO_API virtual ~UROS2MultiDOFJointStateMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_115_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_118_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MultiDOFJointStateMsg;

// ********** End Class UROS2MultiDOFJointStateMsg *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
