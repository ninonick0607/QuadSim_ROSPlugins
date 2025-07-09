// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/ROS2Controller.h"

#ifdef UNREALROSFLIGHT_ROS2Controller_generated_h
#error "ROS2Controller.generated.h already included, missing '#pragma once' in ROS2Controller.h"
#endif
#define UNREALROSFLIGHT_ROS2Controller_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UROS2GenericMsg;

// ********** Begin Class AROS2Controller **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleImuData); \
	DECLARE_FUNCTION(execHandleAttitudeEuler); \
	DECLARE_FUNCTION(execHandleGoalPose); \
	DECLARE_FUNCTION(execHandleHoverCommand); \
	DECLARE_FUNCTION(execHandleResetCommand); \
	DECLARE_FUNCTION(execHandleVelocityCommand); \
	DECLARE_FUNCTION(execHandleObstacleMessage); \
	DECLARE_FUNCTION(execUpdateTFMessage); \
	DECLARE_FUNCTION(execUpdateCollisionMessage); \
	DECLARE_FUNCTION(execUpdateImageMessage); \
	DECLARE_FUNCTION(execUpdateGoalPositionMessage); \
	DECLARE_FUNCTION(execUpdateOdometryMessage); \
	DECLARE_FUNCTION(execGetDroneID); \
	DECLARE_FUNCTION(execGetCurrentGoalPosition);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_AROS2Controller_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAROS2Controller(); \
	friend struct Z_Construct_UClass_AROS2Controller_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_AROS2Controller_NoRegister(); \
public: \
	DECLARE_CLASS2(AROS2Controller, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_AROS2Controller_NoRegister) \
	DECLARE_SERIALIZER(AROS2Controller)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AROS2Controller(AROS2Controller&&) = delete; \
	AROS2Controller(const AROS2Controller&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AROS2Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AROS2Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AROS2Controller) \
	NO_API virtual ~AROS2Controller();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h_36_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h_39_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AROS2Controller;

// ********** End Class AROS2Controller ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Controllers_ROS2Controller_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
