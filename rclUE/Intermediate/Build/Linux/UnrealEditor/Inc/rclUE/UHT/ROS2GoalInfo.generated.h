// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2GoalInfo.h"

#ifdef RCLUE_ROS2GoalInfo_generated_h
#error "ROS2GoalInfo.generated.h already included, missing '#pragma once' in ROS2GoalInfo.h"
#endif
#define RCLUE_ROS2GoalInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGoalInfo;

// ********** Begin ScriptStruct FROSGoalInfo ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGoalInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGoalInfo;
// ********** End ScriptStruct FROSGoalInfo ********************************************************

// ********** Begin Class UROS2GoalInfoMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2GoalInfoMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GoalInfoMsg(); \
	friend struct Z_Construct_UClass_UROS2GoalInfoMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GoalInfoMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GoalInfoMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GoalInfoMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2GoalInfoMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GoalInfoMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GoalInfoMsg(UROS2GoalInfoMsg&&) = delete; \
	UROS2GoalInfoMsg(const UROS2GoalInfoMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GoalInfoMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GoalInfoMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GoalInfoMsg) \
	NO_API virtual ~UROS2GoalInfoMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_54_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_57_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GoalInfoMsg;

// ********** End Class UROS2GoalInfoMsg ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
