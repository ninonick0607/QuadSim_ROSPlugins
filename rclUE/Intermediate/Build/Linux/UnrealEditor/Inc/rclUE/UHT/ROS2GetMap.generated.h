// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2GetMap.h"

#ifdef RCLUE_ROS2GetMap_generated_h
#error "ROS2GetMap.generated.h already included, missing '#pragma once' in ROS2GetMap.h"
#endif
#define RCLUE_ROS2GetMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGetMapReq;
struct FROSGetMapRes;

// ********** Begin ScriptStruct FROSGetMapReq *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetMapReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetMapReq;
// ********** End ScriptStruct FROSGetMapReq *******************************************************

// ********** Begin ScriptStruct FROSGetMapRes *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetMapRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetMapRes;
// ********** End ScriptStruct FROSGetMapRes *******************************************************

// ********** Begin Class UROS2GetMapSrv ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2GetMapSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GetMapSrv(); \
	friend struct Z_Construct_UClass_UROS2GetMapSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GetMapSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GetMapSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GetMapSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2GetMapSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GetMapSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GetMapSrv(UROS2GetMapSrv&&) = delete; \
	UROS2GetMapSrv(const UROS2GetMapSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GetMapSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GetMapSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GetMapSrv) \
	NO_API virtual ~UROS2GetMapSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_67_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_70_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GetMapSrv;

// ********** End Class UROS2GetMapSrv *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
