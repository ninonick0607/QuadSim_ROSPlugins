// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2JoyFeedback.h"

#ifdef RCLUE_ROS2JoyFeedback_generated_h
#error "ROS2JoyFeedback.generated.h already included, missing '#pragma once' in ROS2JoyFeedback.h"
#endif
#define RCLUE_ROS2JoyFeedback_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSJoyFeedback;

// ********** Begin ScriptStruct FROSJoyFeedback ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSJoyFeedback_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSJoyFeedback;
// ********** End ScriptStruct FROSJoyFeedback *****************************************************

// ********** Begin Class UROS2JoyFeedbackMsg ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_TYPE_BUZZER); \
	DECLARE_FUNCTION(execCONST_TYPE_RUMBLE); \
	DECLARE_FUNCTION(execCONST_TYPE_LED); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2JoyFeedbackMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2JoyFeedbackMsg(); \
	friend struct Z_Construct_UClass_UROS2JoyFeedbackMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2JoyFeedbackMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2JoyFeedbackMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2JoyFeedbackMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2JoyFeedbackMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2JoyFeedbackMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2JoyFeedbackMsg(UROS2JoyFeedbackMsg&&) = delete; \
	UROS2JoyFeedbackMsg(const UROS2JoyFeedbackMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2JoyFeedbackMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2JoyFeedbackMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2JoyFeedbackMsg) \
	NO_API virtual ~UROS2JoyFeedbackMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_63_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_66_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2JoyFeedbackMsg;

// ********** End Class UROS2JoyFeedbackMsg ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2JoyFeedback_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
