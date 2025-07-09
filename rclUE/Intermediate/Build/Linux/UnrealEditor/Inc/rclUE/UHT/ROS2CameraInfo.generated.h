// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2CameraInfo.h"

#ifdef RCLUE_ROS2CameraInfo_generated_h
#error "ROS2CameraInfo.generated.h already included, missing '#pragma once' in ROS2CameraInfo.h"
#endif
#define RCLUE_ROS2CameraInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSCameraInfo;

// ********** Begin ScriptStruct FROSCameraInfo ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSCameraInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSCameraInfo;
// ********** End ScriptStruct FROSCameraInfo ******************************************************

// ********** Begin Class UROS2CameraInfoMsg *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2CameraInfoMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2CameraInfoMsg(); \
	friend struct Z_Construct_UClass_UROS2CameraInfoMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2CameraInfoMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2CameraInfoMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2CameraInfoMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2CameraInfoMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2CameraInfoMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2CameraInfoMsg(UROS2CameraInfoMsg&&) = delete; \
	UROS2CameraInfoMsg(const UROS2CameraInfoMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2CameraInfoMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2CameraInfoMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2CameraInfoMsg) \
	NO_API virtual ~UROS2CameraInfoMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_131_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_134_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2CameraInfoMsg;

// ********** End Class UROS2CameraInfoMsg *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
