// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2LaserEcho.h"

#ifdef RCLUE_ROS2LaserEcho_generated_h
#error "ROS2LaserEcho.generated.h already included, missing '#pragma once' in ROS2LaserEcho.h"
#endif
#define RCLUE_ROS2LaserEcho_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSLaserEcho;

// ********** Begin ScriptStruct FROSLaserEcho *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLaserEcho_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLaserEcho;
// ********** End ScriptStruct FROSLaserEcho *******************************************************

// ********** Begin Class UROS2LaserEchoMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2LaserEchoMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2LaserEchoMsg(); \
	friend struct Z_Construct_UClass_UROS2LaserEchoMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2LaserEchoMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2LaserEchoMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2LaserEchoMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2LaserEchoMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2LaserEchoMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2LaserEchoMsg(UROS2LaserEchoMsg&&) = delete; \
	UROS2LaserEchoMsg(const UROS2LaserEchoMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2LaserEchoMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2LaserEchoMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2LaserEchoMsg) \
	NO_API virtual ~UROS2LaserEchoMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_54_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_57_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2LaserEchoMsg;

// ********** End Class UROS2LaserEchoMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
