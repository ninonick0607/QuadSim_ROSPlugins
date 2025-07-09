// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2TwistCov.h"

#ifdef RCLUE_ROS2TwistCov_generated_h
#error "ROS2TwistCov.generated.h already included, missing '#pragma once' in ROS2TwistCov.h"
#endif
#define RCLUE_ROS2TwistCov_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSTwistCov;

// ********** Begin ScriptStruct FROSTwistCov ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSTwistCov_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSTwistCov;
// ********** End ScriptStruct FROSTwistCov ********************************************************

// ********** Begin Class UROS2TwistCovMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2TwistCovMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2TwistCovMsg(); \
	friend struct Z_Construct_UClass_UROS2TwistCovMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2TwistCovMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2TwistCovMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2TwistCovMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2TwistCovMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2TwistCovMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2TwistCovMsg(UROS2TwistCovMsg&&) = delete; \
	UROS2TwistCovMsg(const UROS2TwistCovMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2TwistCovMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2TwistCovMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2TwistCovMsg) \
	NO_API virtual ~UROS2TwistCovMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_55_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_58_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2TwistCovMsg;

// ********** End Class UROS2TwistCovMsg ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCov_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
