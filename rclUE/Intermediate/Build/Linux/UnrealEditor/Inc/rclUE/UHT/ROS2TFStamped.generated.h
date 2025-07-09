// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2TFStamped.h"

#ifdef RCLUE_ROS2TFStamped_generated_h
#error "ROS2TFStamped.generated.h already included, missing '#pragma once' in ROS2TFStamped.h"
#endif
#define RCLUE_ROS2TFStamped_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSTFStamped;

// ********** Begin ScriptStruct FROSTFStamped *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSTFStamped_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSTFStamped;
// ********** End ScriptStruct FROSTFStamped *******************************************************

// ********** Begin Class UROS2TFStampedMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2TFStampedMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2TFStampedMsg(); \
	friend struct Z_Construct_UClass_UROS2TFStampedMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2TFStampedMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2TFStampedMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2TFStampedMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2TFStampedMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2TFStampedMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2TFStampedMsg(UROS2TFStampedMsg&&) = delete; \
	UROS2TFStampedMsg(const UROS2TFStampedMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2TFStampedMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2TFStampedMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2TFStampedMsg) \
	NO_API virtual ~UROS2TFStampedMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_60_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_63_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2TFStampedMsg;

// ********** End Class UROS2TFStampedMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
