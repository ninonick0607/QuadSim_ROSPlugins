// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2AccStamped.h"

#ifdef RCLUE_ROS2AccStamped_generated_h
#error "ROS2AccStamped.generated.h already included, missing '#pragma once' in ROS2AccStamped.h"
#endif
#define RCLUE_ROS2AccStamped_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSAccStamped;

// ********** Begin ScriptStruct FROSAccStamped ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSAccStamped_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSAccStamped;
// ********** End ScriptStruct FROSAccStamped ******************************************************

// ********** Begin Class UROS2AccStampedMsg *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2AccStampedMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2AccStampedMsg(); \
	friend struct Z_Construct_UClass_UROS2AccStampedMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2AccStampedMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2AccStampedMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2AccStampedMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2AccStampedMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2AccStampedMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2AccStampedMsg(UROS2AccStampedMsg&&) = delete; \
	UROS2AccStampedMsg(const UROS2AccStampedMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2AccStampedMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2AccStampedMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2AccStampedMsg) \
	NO_API virtual ~UROS2AccStampedMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_54_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_57_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2AccStampedMsg;

// ********** End Class UROS2AccStampedMsg *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
