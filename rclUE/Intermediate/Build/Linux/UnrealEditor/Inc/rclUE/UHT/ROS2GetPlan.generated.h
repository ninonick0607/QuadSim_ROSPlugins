// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2GetPlan.h"

#ifdef RCLUE_ROS2GetPlan_generated_h
#error "ROS2GetPlan.generated.h already included, missing '#pragma once' in ROS2GetPlan.h"
#endif
#define RCLUE_ROS2GetPlan_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGetPlanReq;
struct FROSGetPlanRes;

// ********** Begin ScriptStruct FROSGetPlanReq ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetPlanReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetPlanReq;
// ********** End ScriptStruct FROSGetPlanReq ******************************************************

// ********** Begin ScriptStruct FROSGetPlanRes ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetPlanRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetPlanRes;
// ********** End ScriptStruct FROSGetPlanRes ******************************************************

// ********** Begin Class UROS2GetPlanSrv **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2GetPlanSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GetPlanSrv(); \
	friend struct Z_Construct_UClass_UROS2GetPlanSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GetPlanSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GetPlanSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GetPlanSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2GetPlanSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GetPlanSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GetPlanSrv(UROS2GetPlanSrv&&) = delete; \
	UROS2GetPlanSrv(const UROS2GetPlanSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GetPlanSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GetPlanSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GetPlanSrv) \
	NO_API virtual ~UROS2GetPlanSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_86_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_89_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GetPlanSrv;

// ********** End Class UROS2GetPlanSrv ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
