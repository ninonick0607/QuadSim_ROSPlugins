// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2PolygonStamped.h"

#ifdef RCLUE_ROS2PolygonStamped_generated_h
#error "ROS2PolygonStamped.generated.h already included, missing '#pragma once' in ROS2PolygonStamped.h"
#endif
#define RCLUE_ROS2PolygonStamped_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPolygonStamped;

// ********** Begin ScriptStruct FROSPolygonStamped ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPolygonStamped_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPolygonStamped;
// ********** End ScriptStruct FROSPolygonStamped **************************************************

// ********** Begin Class UROS2PolygonStampedMsg ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2PolygonStampedMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PolygonStampedMsg(); \
	friend struct Z_Construct_UClass_UROS2PolygonStampedMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PolygonStampedMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PolygonStampedMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PolygonStampedMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PolygonStampedMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PolygonStampedMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PolygonStampedMsg(UROS2PolygonStampedMsg&&) = delete; \
	UROS2PolygonStampedMsg(const UROS2PolygonStampedMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PolygonStampedMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PolygonStampedMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PolygonStampedMsg) \
	NO_API virtual ~UROS2PolygonStampedMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_54_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_57_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PolygonStampedMsg;

// ********** End Class UROS2PolygonStampedMsg *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
