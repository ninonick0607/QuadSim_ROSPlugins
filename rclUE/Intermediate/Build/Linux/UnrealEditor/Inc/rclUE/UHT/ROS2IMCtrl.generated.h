// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2IMCtrl.h"

#ifdef RCLUE_ROS2IMCtrl_generated_h
#error "ROS2IMCtrl.generated.h already included, missing '#pragma once' in ROS2IMCtrl.h"
#endif
#define RCLUE_ROS2IMCtrl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSIMCtrl;

// ********** Begin ScriptStruct FROSIMCtrl ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSIMCtrl_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSIMCtrl;
// ********** End ScriptStruct FROSIMCtrl **********************************************************

// ********** Begin Class UROS2IMCtrlMsg ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_MOVE_ROTATE_3D); \
	DECLARE_FUNCTION(execCONST_ROTATE_3D); \
	DECLARE_FUNCTION(execCONST_MOVE_3D); \
	DECLARE_FUNCTION(execCONST_MOVE_ROTATE); \
	DECLARE_FUNCTION(execCONST_ROTATE_AXIS); \
	DECLARE_FUNCTION(execCONST_MOVE_PLANE); \
	DECLARE_FUNCTION(execCONST_MOVE_AXIS); \
	DECLARE_FUNCTION(execCONST_BUTTON); \
	DECLARE_FUNCTION(execCONST_MENU); \
	DECLARE_FUNCTION(execCONST_NONE); \
	DECLARE_FUNCTION(execCONST_VIEW_FACING); \
	DECLARE_FUNCTION(execCONST_FIXED); \
	DECLARE_FUNCTION(execCONST_INHERIT); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2IMCtrlMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2IMCtrlMsg(); \
	friend struct Z_Construct_UClass_UROS2IMCtrlMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2IMCtrlMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2IMCtrlMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2IMCtrlMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2IMCtrlMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2IMCtrlMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2IMCtrlMsg(UROS2IMCtrlMsg&&) = delete; \
	UROS2IMCtrlMsg(const UROS2IMCtrlMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2IMCtrlMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2IMCtrlMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2IMCtrlMsg) \
	NO_API virtual ~UROS2IMCtrlMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_120_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_123_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2IMCtrlMsg;

// ********** End Class UROS2IMCtrlMsg *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
