// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2IMFeedback.h"

#ifdef RCLUE_ROS2IMFeedback_generated_h
#error "ROS2IMFeedback.generated.h already included, missing '#pragma once' in ROS2IMFeedback.h"
#endif
#define RCLUE_ROS2IMFeedback_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSIMFeedback;

// ********** Begin ScriptStruct FROSIMFeedback ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSIMFeedback_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSIMFeedback;
// ********** End ScriptStruct FROSIMFeedback ******************************************************

// ********** Begin Class UROS2IMFeedbackMsg *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_MOUSE_UP); \
	DECLARE_FUNCTION(execCONST_MOUSE_DOWN); \
	DECLARE_FUNCTION(execCONST_BUTTON_CLICK); \
	DECLARE_FUNCTION(execCONST_MENU_SELECT); \
	DECLARE_FUNCTION(execCONST_POSE_UPDATE); \
	DECLARE_FUNCTION(execCONST_KEEP_ALIVE); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2IMFeedbackMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2IMFeedbackMsg(); \
	friend struct Z_Construct_UClass_UROS2IMFeedbackMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2IMFeedbackMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2IMFeedbackMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2IMFeedbackMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2IMFeedbackMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2IMFeedbackMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2IMFeedbackMsg(UROS2IMFeedbackMsg&&) = delete; \
	UROS2IMFeedbackMsg(const UROS2IMFeedbackMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2IMFeedbackMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2IMFeedbackMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2IMFeedbackMsg) \
	NO_API virtual ~UROS2IMFeedbackMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_110_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_113_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2IMFeedbackMsg;

// ********** End Class UROS2IMFeedbackMsg *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMFeedback_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
