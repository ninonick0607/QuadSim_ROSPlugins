// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2TF2Err.h"

#ifdef RCLUE_ROS2TF2Err_generated_h
#error "ROS2TF2Err.generated.h already included, missing '#pragma once' in ROS2TF2Err.h"
#endif
#define RCLUE_ROS2TF2Err_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSTF2Err;

// ********** Begin ScriptStruct FROSTF2Err ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSTF2Err_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSTF2Err;
// ********** End ScriptStruct FROSTF2Err **********************************************************

// ********** Begin Class UROS2TF2ErrMsg ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_TRANSFORM_ERROR); \
	DECLARE_FUNCTION(execCONST_TIMEOUT_ERROR); \
	DECLARE_FUNCTION(execCONST_INVALID_ARGUMENT_ERROR); \
	DECLARE_FUNCTION(execCONST_EXTRAPOLATION_ERROR); \
	DECLARE_FUNCTION(execCONST_CONNECTIVITY_ERROR); \
	DECLARE_FUNCTION(execCONST_LOOKUP_ERROR); \
	DECLARE_FUNCTION(execCONST_NO_ERROR); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2TF2ErrMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2TF2ErrMsg(); \
	friend struct Z_Construct_UClass_UROS2TF2ErrMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2TF2ErrMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2TF2ErrMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2TF2ErrMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2TF2ErrMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2TF2ErrMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2TF2ErrMsg(UROS2TF2ErrMsg&&) = delete; \
	UROS2TF2ErrMsg(const UROS2TF2ErrMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2TF2ErrMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2TF2ErrMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2TF2ErrMsg) \
	NO_API virtual ~UROS2TF2ErrMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_60_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_63_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2TF2ErrMsg;

// ********** End Class UROS2TF2ErrMsg *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TF2Err_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
