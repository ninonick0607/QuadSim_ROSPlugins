// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2HitResult.h"

#ifdef RCLUE_ROS2HitResult_generated_h
#error "ROS2HitResult.generated.h already included, missing '#pragma once' in ROS2HitResult.h"
#endif
#define RCLUE_ROS2HitResult_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSHitResult;

// ********** Begin ScriptStruct FROSHitResult *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSHitResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSHitResult;
// ********** End ScriptStruct FROSHitResult *******************************************************

// ********** Begin Class UROS2HitResultMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2HitResultMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2HitResultMsg(); \
	friend struct Z_Construct_UClass_UROS2HitResultMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2HitResultMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2HitResultMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2HitResultMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2HitResultMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2HitResultMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2HitResultMsg(UROS2HitResultMsg&&) = delete; \
	UROS2HitResultMsg(const UROS2HitResultMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2HitResultMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2HitResultMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2HitResultMsg) \
	NO_API virtual ~UROS2HitResultMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_178_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_181_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2HitResultMsg;

// ********** End Class UROS2HitResultMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
