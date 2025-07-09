// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2UInt8.h"

#ifdef RCLUE_ROS2UInt8_generated_h
#error "ROS2UInt8.generated.h already included, missing '#pragma once' in ROS2UInt8.h"
#endif
#define RCLUE_ROS2UInt8_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSUInt8;

// ********** Begin ScriptStruct FROSUInt8 *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSUInt8_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSUInt8;
// ********** End ScriptStruct FROSUInt8 ***********************************************************

// ********** Begin Class UROS2UInt8Msg ************************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2UInt8Msg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2UInt8Msg(); \
	friend struct Z_Construct_UClass_UROS2UInt8Msg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2UInt8Msg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2UInt8Msg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2UInt8Msg_NoRegister) \
	DECLARE_SERIALIZER(UROS2UInt8Msg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2UInt8Msg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2UInt8Msg(UROS2UInt8Msg&&) = delete; \
	UROS2UInt8Msg(const UROS2UInt8Msg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2UInt8Msg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2UInt8Msg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2UInt8Msg) \
	NO_API virtual ~UROS2UInt8Msg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_45_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_48_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2UInt8Msg;

// ********** End Class UROS2UInt8Msg **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
