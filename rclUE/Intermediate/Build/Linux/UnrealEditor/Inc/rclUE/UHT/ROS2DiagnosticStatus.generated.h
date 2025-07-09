// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2DiagnosticStatus.h"

#ifdef RCLUE_ROS2DiagnosticStatus_generated_h
#error "ROS2DiagnosticStatus.generated.h already included, missing '#pragma once' in ROS2DiagnosticStatus.h"
#endif
#define RCLUE_ROS2DiagnosticStatus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSDiagnosticStatus;

// ********** Begin ScriptStruct FROSDiagnosticStatus **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSDiagnosticStatus_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSDiagnosticStatus;
// ********** End ScriptStruct FROSDiagnosticStatus ************************************************

// ********** Begin Class UROS2DiagnosticStatusMsg *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_STALE); \
	DECLARE_FUNCTION(execCONST_ERROR); \
	DECLARE_FUNCTION(execCONST_WARN); \
	DECLARE_FUNCTION(execCONST_OK); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2DiagnosticStatusMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2DiagnosticStatusMsg(); \
	friend struct Z_Construct_UClass_UROS2DiagnosticStatusMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2DiagnosticStatusMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2DiagnosticStatusMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2DiagnosticStatusMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2DiagnosticStatusMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2DiagnosticStatusMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2DiagnosticStatusMsg(UROS2DiagnosticStatusMsg&&) = delete; \
	UROS2DiagnosticStatusMsg(const UROS2DiagnosticStatusMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2DiagnosticStatusMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2DiagnosticStatusMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2DiagnosticStatusMsg) \
	NO_API virtual ~UROS2DiagnosticStatusMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_90_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_93_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2DiagnosticStatusMsg;

// ********** End Class UROS2DiagnosticStatusMsg ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticStatus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
