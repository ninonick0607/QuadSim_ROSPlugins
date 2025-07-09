// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Vec3Stamped.h"

#ifdef RCLUE_ROS2Vec3Stamped_generated_h
#error "ROS2Vec3Stamped.generated.h already included, missing '#pragma once' in ROS2Vec3Stamped.h"
#endif
#define RCLUE_ROS2Vec3Stamped_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSVec3Stamped;

// ********** Begin ScriptStruct FROSVec3Stamped ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSVec3Stamped_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSVec3Stamped;
// ********** End ScriptStruct FROSVec3Stamped *****************************************************

// ********** Begin Class UROS2Vec3StampedMsg ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2Vec3StampedMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Vec3StampedMsg(); \
	friend struct Z_Construct_UClass_UROS2Vec3StampedMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Vec3StampedMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Vec3StampedMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Vec3StampedMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2Vec3StampedMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Vec3StampedMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Vec3StampedMsg(UROS2Vec3StampedMsg&&) = delete; \
	UROS2Vec3StampedMsg(const UROS2Vec3StampedMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Vec3StampedMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Vec3StampedMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2Vec3StampedMsg) \
	NO_API virtual ~UROS2Vec3StampedMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_53_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_56_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Vec3StampedMsg;

// ********** End Class UROS2Vec3StampedMsg ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
