// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2JoyFeedbackArray.h"

#ifdef RCLUE_ROS2JoyFeedbackArray_generated_h
#error "ROS2JoyFeedbackArray.generated.h already included, missing '#pragma once' in ROS2JoyFeedbackArray.h"
#endif
#define RCLUE_ROS2JoyFeedbackArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSJoyFeedbackArray;

// ********** Begin ScriptStruct FROSJoyFeedbackArray **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSJoyFeedbackArray_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSJoyFeedbackArray;
// ********** End ScriptStruct FROSJoyFeedbackArray ************************************************

// ********** Begin Class UROS2JoyFeedbackArrayMsg *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2JoyFeedbackArrayMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2JoyFeedbackArrayMsg(); \
	friend struct Z_Construct_UClass_UROS2JoyFeedbackArrayMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2JoyFeedbackArrayMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2JoyFeedbackArrayMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2JoyFeedbackArrayMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2JoyFeedbackArrayMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2JoyFeedbackArrayMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2JoyFeedbackArrayMsg(UROS2JoyFeedbackArrayMsg&&) = delete; \
	UROS2JoyFeedbackArrayMsg(const UROS2JoyFeedbackArrayMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2JoyFeedbackArrayMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2JoyFeedbackArrayMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2JoyFeedbackArrayMsg) \
	NO_API virtual ~UROS2JoyFeedbackArrayMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_57_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_60_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2JoyFeedbackArrayMsg;

// ********** End Class UROS2JoyFeedbackArrayMsg ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedbackArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
