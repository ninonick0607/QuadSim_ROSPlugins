// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2Trigger.h"

#ifdef RCLUE_ROS2Trigger_generated_h
#error "ROS2Trigger.generated.h already included, missing '#pragma once' in ROS2Trigger.h"
#endif
#define RCLUE_ROS2Trigger_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSTriggerReq;
struct FROSTriggerRes;

// ********** Begin ScriptStruct FROSTriggerReq ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSTriggerReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSTriggerReq;
// ********** End ScriptStruct FROSTriggerReq ******************************************************

// ********** Begin ScriptStruct FROSTriggerRes ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSTriggerRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSTriggerRes;
// ********** End ScriptStruct FROSTriggerRes ******************************************************

// ********** Begin Class UROS2TriggerSrv **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2TriggerSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2TriggerSrv(); \
	friend struct Z_Construct_UClass_UROS2TriggerSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2TriggerSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2TriggerSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2TriggerSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2TriggerSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2TriggerSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2TriggerSrv(UROS2TriggerSrv&&) = delete; \
	UROS2TriggerSrv(const UROS2TriggerSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2TriggerSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2TriggerSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2TriggerSrv) \
	NO_API virtual ~UROS2TriggerSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_72_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_75_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2TriggerSrv;

// ********** End Class UROS2TriggerSrv ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
