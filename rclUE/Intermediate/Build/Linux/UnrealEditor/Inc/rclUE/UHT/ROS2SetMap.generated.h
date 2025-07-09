// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SetMap.h"

#ifdef RCLUE_ROS2SetMap_generated_h
#error "ROS2SetMap.generated.h already included, missing '#pragma once' in ROS2SetMap.h"
#endif
#define RCLUE_ROS2SetMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSetMapReq;
struct FROSSetMapRes;

// ********** Begin ScriptStruct FROSSetMapReq *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetMapReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetMapReq;
// ********** End ScriptStruct FROSSetMapReq *******************************************************

// ********** Begin ScriptStruct FROSSetMapRes *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetMapRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetMapRes;
// ********** End ScriptStruct FROSSetMapRes *******************************************************

// ********** Begin Class UROS2SetMapSrv ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2SetMapSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SetMapSrv(); \
	friend struct Z_Construct_UClass_UROS2SetMapSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SetMapSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SetMapSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SetMapSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SetMapSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SetMapSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SetMapSrv(UROS2SetMapSrv&&) = delete; \
	UROS2SetMapSrv(const UROS2SetMapSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SetMapSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SetMapSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SetMapSrv) \
	NO_API virtual ~UROS2SetMapSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_79_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_82_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SetMapSrv;

// ********** End Class UROS2SetMapSrv *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
