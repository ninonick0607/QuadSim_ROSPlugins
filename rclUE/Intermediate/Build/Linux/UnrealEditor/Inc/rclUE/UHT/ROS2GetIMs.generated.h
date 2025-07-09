// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2GetIMs.h"

#ifdef RCLUE_ROS2GetIMs_generated_h
#error "ROS2GetIMs.generated.h already included, missing '#pragma once' in ROS2GetIMs.h"
#endif
#define RCLUE_ROS2GetIMs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGetIMsReq;
struct FROSGetIMsRes;

// ********** Begin ScriptStruct FROSGetIMsReq *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetIMsReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetIMsReq;
// ********** End ScriptStruct FROSGetIMsReq *******************************************************

// ********** Begin ScriptStruct FROSGetIMsRes *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetIMsRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetIMsRes;
// ********** End ScriptStruct FROSGetIMsRes *******************************************************

// ********** Begin Class UROS2GetIMsSrv ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2GetIMsSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GetIMsSrv(); \
	friend struct Z_Construct_UClass_UROS2GetIMsSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GetIMsSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GetIMsSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GetIMsSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2GetIMsSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GetIMsSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GetIMsSrv(UROS2GetIMsSrv&&) = delete; \
	UROS2GetIMsSrv(const UROS2GetIMsSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GetIMsSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GetIMsSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GetIMsSrv) \
	NO_API virtual ~UROS2GetIMsSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_85_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_88_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GetIMsSrv;

// ********** End Class UROS2GetIMsSrv *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
