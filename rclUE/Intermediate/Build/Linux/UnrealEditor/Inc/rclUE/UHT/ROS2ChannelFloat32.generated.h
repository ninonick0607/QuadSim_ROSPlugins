// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2ChannelFloat32.h"

#ifdef RCLUE_ROS2ChannelFloat32_generated_h
#error "ROS2ChannelFloat32.generated.h already included, missing '#pragma once' in ROS2ChannelFloat32.h"
#endif
#define RCLUE_ROS2ChannelFloat32_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSChannelFloat32;

// ********** Begin ScriptStruct FROSChannelFloat32 ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSChannelFloat32_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSChannelFloat32;
// ********** End ScriptStruct FROSChannelFloat32 **************************************************

// ********** Begin Class UROS2ChannelFloat32Msg ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2ChannelFloat32Msg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ChannelFloat32Msg(); \
	friend struct Z_Construct_UClass_UROS2ChannelFloat32Msg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ChannelFloat32Msg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ChannelFloat32Msg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ChannelFloat32Msg_NoRegister) \
	DECLARE_SERIALIZER(UROS2ChannelFloat32Msg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ChannelFloat32Msg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ChannelFloat32Msg(UROS2ChannelFloat32Msg&&) = delete; \
	UROS2ChannelFloat32Msg(const UROS2ChannelFloat32Msg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ChannelFloat32Msg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ChannelFloat32Msg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ChannelFloat32Msg) \
	NO_API virtual ~UROS2ChannelFloat32Msg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_61_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_64_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ChannelFloat32Msg;

// ********** End Class UROS2ChannelFloat32Msg *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ChannelFloat32_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
