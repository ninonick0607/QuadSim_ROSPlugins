// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2StdSrvTrigger.h"

#ifdef RCLUE_ROS2StdSrvTrigger_generated_h
#error "ROS2StdSrvTrigger.generated.h already included, missing '#pragma once' in ROS2StdSrvTrigger.h"
#endif
#define RCLUE_ROS2StdSrvTrigger_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSStdSrvTriggerReq;
struct FROSStdSrvTriggerRes;

// ********** Begin ScriptStruct FROSStdSrvTriggerReq **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSStdSrvTriggerReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSStdSrvTriggerReq;
// ********** End ScriptStruct FROSStdSrvTriggerReq ************************************************

// ********** Begin ScriptStruct FROSStdSrvTriggerRes **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSStdSrvTriggerRes;
// ********** End ScriptStruct FROSStdSrvTriggerRes ************************************************

// ********** Begin Class UROS2StdSrvTriggerSrv ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvTriggerSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2StdSrvTriggerSrv(); \
	friend struct Z_Construct_UClass_UROS2StdSrvTriggerSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvTriggerSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2StdSrvTriggerSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2StdSrvTriggerSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2StdSrvTriggerSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2StdSrvTriggerSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2StdSrvTriggerSrv(UROS2StdSrvTriggerSrv&&) = delete; \
	UROS2StdSrvTriggerSrv(const UROS2StdSrvTriggerSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2StdSrvTriggerSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2StdSrvTriggerSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2StdSrvTriggerSrv) \
	NO_API virtual ~UROS2StdSrvTriggerSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_72_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_75_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2StdSrvTriggerSrv;

// ********** End Class UROS2StdSrvTriggerSrv ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
