// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2TFMsg.h"

#ifdef RCLUE_ROS2TFMsg_generated_h
#error "ROS2TFMsg.generated.h already included, missing '#pragma once' in ROS2TFMsg.h"
#endif
#define RCLUE_ROS2TFMsg_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSTFMsg;

// ********** Begin ScriptStruct FROSTFMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSTFMsg_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSTFMsg;
// ********** End ScriptStruct FROSTFMsg ***********************************************************

// ********** Begin Class UROS2TFMsgMsg ************************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2TFMsgMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2TFMsgMsg(); \
	friend struct Z_Construct_UClass_UROS2TFMsgMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2TFMsgMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2TFMsgMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2TFMsgMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2TFMsgMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2TFMsgMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2TFMsgMsg(UROS2TFMsgMsg&&) = delete; \
	UROS2TFMsgMsg(const UROS2TFMsgMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2TFMsgMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2TFMsgMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2TFMsgMsg) \
	NO_API virtual ~UROS2TFMsgMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_57_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_60_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2TFMsgMsg;

// ********** End Class UROS2TFMsgMsg **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
