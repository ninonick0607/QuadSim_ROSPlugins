// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2GoalStatusArray.h"

#ifdef RCLUE_ROS2GoalStatusArray_generated_h
#error "ROS2GoalStatusArray.generated.h already included, missing '#pragma once' in ROS2GoalStatusArray.h"
#endif
#define RCLUE_ROS2GoalStatusArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGoalStatusArray;

// ********** Begin ScriptStruct FROSGoalStatusArray ***********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGoalStatusArray;
// ********** End ScriptStruct FROSGoalStatusArray *************************************************

// ********** Begin Class UROS2GoalStatusArrayMsg **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2GoalStatusArrayMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GoalStatusArrayMsg(); \
	friend struct Z_Construct_UClass_UROS2GoalStatusArrayMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GoalStatusArrayMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GoalStatusArrayMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GoalStatusArrayMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2GoalStatusArrayMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GoalStatusArrayMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GoalStatusArrayMsg(UROS2GoalStatusArrayMsg&&) = delete; \
	UROS2GoalStatusArrayMsg(const UROS2GoalStatusArrayMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GoalStatusArrayMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GoalStatusArrayMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GoalStatusArrayMsg) \
	NO_API virtual ~UROS2GoalStatusArrayMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_65_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_68_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GoalStatusArrayMsg;

// ********** End Class UROS2GoalStatusArrayMsg ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
