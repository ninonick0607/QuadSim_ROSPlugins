// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2AccCovStamped.h"

#ifdef RCLUE_ROS2AccCovStamped_generated_h
#error "ROS2AccCovStamped.generated.h already included, missing '#pragma once' in ROS2AccCovStamped.h"
#endif
#define RCLUE_ROS2AccCovStamped_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSAccCovStamped;

// ********** Begin ScriptStruct FROSAccCovStamped *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSAccCovStamped_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSAccCovStamped;
// ********** End ScriptStruct FROSAccCovStamped ***************************************************

// ********** Begin Class UROS2AccCovStampedMsg ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2AccCovStampedMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2AccCovStampedMsg(); \
	friend struct Z_Construct_UClass_UROS2AccCovStampedMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2AccCovStampedMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2AccCovStampedMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2AccCovStampedMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2AccCovStampedMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2AccCovStampedMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2AccCovStampedMsg(UROS2AccCovStampedMsg&&) = delete; \
	UROS2AccCovStampedMsg(const UROS2AccCovStampedMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2AccCovStampedMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2AccCovStampedMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2AccCovStampedMsg) \
	NO_API virtual ~UROS2AccCovStampedMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_54_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_57_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2AccCovStampedMsg;

// ********** End Class UROS2AccCovStampedMsg ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccCovStamped_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
