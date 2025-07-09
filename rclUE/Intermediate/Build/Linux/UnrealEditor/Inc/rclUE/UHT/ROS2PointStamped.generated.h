// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2PointStamped.h"

#ifdef RCLUE_ROS2PointStamped_generated_h
#error "ROS2PointStamped.generated.h already included, missing '#pragma once' in ROS2PointStamped.h"
#endif
#define RCLUE_ROS2PointStamped_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPointStamped;

// ********** Begin ScriptStruct FROSPointStamped **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPointStamped_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPointStamped;
// ********** End ScriptStruct FROSPointStamped ****************************************************

// ********** Begin Class UROS2PointStampedMsg *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2PointStampedMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PointStampedMsg(); \
	friend struct Z_Construct_UClass_UROS2PointStampedMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PointStampedMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PointStampedMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PointStampedMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PointStampedMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PointStampedMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PointStampedMsg(UROS2PointStampedMsg&&) = delete; \
	UROS2PointStampedMsg(const UROS2PointStampedMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PointStampedMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PointStampedMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PointStampedMsg) \
	NO_API virtual ~UROS2PointStampedMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_53_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_56_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PointStampedMsg;

// ********** End Class UROS2PointStampedMsg *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
