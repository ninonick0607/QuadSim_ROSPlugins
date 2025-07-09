// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Point32.h"

#ifdef RCLUE_ROS2Point32_generated_h
#error "ROS2Point32.generated.h already included, missing '#pragma once' in ROS2Point32.h"
#endif
#define RCLUE_ROS2Point32_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPoint32;

// ********** Begin ScriptStruct FROSPoint32 *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPoint32_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPoint32;
// ********** End ScriptStruct FROSPoint32 *********************************************************

// ********** Begin Class UROS2Point32Msg **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2Point32Msg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Point32Msg(); \
	friend struct Z_Construct_UClass_UROS2Point32Msg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Point32Msg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Point32Msg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Point32Msg_NoRegister) \
	DECLARE_SERIALIZER(UROS2Point32Msg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Point32Msg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Point32Msg(UROS2Point32Msg&&) = delete; \
	UROS2Point32Msg(const UROS2Point32Msg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Point32Msg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Point32Msg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2Point32Msg) \
	NO_API virtual ~UROS2Point32Msg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_59_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_62_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Point32Msg;

// ********** End Class UROS2Point32Msg ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
