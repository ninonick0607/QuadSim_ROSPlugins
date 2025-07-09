// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2CancelGoal.h"

#ifdef RCLUE_ROS2CancelGoal_generated_h
#error "ROS2CancelGoal.generated.h already included, missing '#pragma once' in ROS2CancelGoal.h"
#endif
#define RCLUE_ROS2CancelGoal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSCancelGoalReq;
struct FROSCancelGoalRes;

// ********** Begin ScriptStruct FROSCancelGoalReq *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSCancelGoalReq;
// ********** End ScriptStruct FROSCancelGoalReq ***************************************************

// ********** Begin ScriptStruct FROSCancelGoalRes *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSCancelGoalRes;
// ********** End ScriptStruct FROSCancelGoalRes ***************************************************

// ********** Begin Class UROS2CancelGoalSrv *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2CancelGoalSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2CancelGoalSrv(); \
	friend struct Z_Construct_UClass_UROS2CancelGoalSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2CancelGoalSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2CancelGoalSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2CancelGoalSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2CancelGoalSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2CancelGoalSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2CancelGoalSrv(UROS2CancelGoalSrv&&) = delete; \
	UROS2CancelGoalSrv(const UROS2CancelGoalSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2CancelGoalSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2CancelGoalSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2CancelGoalSrv) \
	NO_API virtual ~UROS2CancelGoalSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_94_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_97_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2CancelGoalSrv;

// ********** End Class UROS2CancelGoalSrv *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
