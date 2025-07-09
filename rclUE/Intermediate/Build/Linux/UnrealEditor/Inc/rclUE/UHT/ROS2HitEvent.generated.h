// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2HitEvent.h"

#ifdef RCLUE_ROS2HitEvent_generated_h
#error "ROS2HitEvent.generated.h already included, missing '#pragma once' in ROS2HitEvent.h"
#endif
#define RCLUE_ROS2HitEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSHitEvent;

// ********** Begin ScriptStruct FROSHitEvent ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSHitEvent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSHitEvent;
// ********** End ScriptStruct FROSHitEvent ********************************************************

// ********** Begin Class UROS2HitEventMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2HitEventMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2HitEventMsg(); \
	friend struct Z_Construct_UClass_UROS2HitEventMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2HitEventMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2HitEventMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2HitEventMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2HitEventMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2HitEventMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2HitEventMsg(UROS2HitEventMsg&&) = delete; \
	UROS2HitEventMsg(const UROS2HitEventMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2HitEventMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2HitEventMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2HitEventMsg) \
	NO_API virtual ~UROS2HitEventMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_74_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_77_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2HitEventMsg;

// ********** End Class UROS2HitEventMsg ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
