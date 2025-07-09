// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROS2Subsystem.h"

#ifdef RCLUE_ROS2Subsystem_generated_h
#error "ROS2Subsystem.generated.h already included, missing '#pragma once' in ROS2Subsystem.h"
#endif
#define RCLUE_ROS2Subsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UROS2Support;

// ********** Begin Class UROS2Subsystem ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSupport);


RCLUE_API UClass* Z_Construct_UClass_UROS2Subsystem_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Subsystem(); \
	friend struct Z_Construct_UClass_UROS2Subsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Subsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Subsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Subsystem_NoRegister) \
	DECLARE_SERIALIZER(UROS2Subsystem)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Subsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Subsystem(UROS2Subsystem&&) = delete; \
	UROS2Subsystem(const UROS2Subsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Subsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Subsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UROS2Subsystem) \
	NO_API virtual ~UROS2Subsystem();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h_26_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Subsystem;

// ********** End Class UROS2Subsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
