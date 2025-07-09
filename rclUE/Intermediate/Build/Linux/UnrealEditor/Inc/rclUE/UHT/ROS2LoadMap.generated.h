// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2LoadMap.h"

#ifdef RCLUE_ROS2LoadMap_generated_h
#error "ROS2LoadMap.generated.h already included, missing '#pragma once' in ROS2LoadMap.h"
#endif
#define RCLUE_ROS2LoadMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSLoadMapReq;
struct FROSLoadMapRes;

// ********** Begin ScriptStruct FROSLoadMapReq ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLoadMapReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLoadMapReq;
// ********** End ScriptStruct FROSLoadMapReq ******************************************************

// ********** Begin ScriptStruct FROSLoadMapRes ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLoadMapRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLoadMapRes;
// ********** End ScriptStruct FROSLoadMapRes ******************************************************

// ********** Begin Class UROS2LoadMapSrv **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_RESULT_UNDEFINED_FAILURE); \
	DECLARE_FUNCTION(execCONST_RESULT_INVALID_MAP_METADATA); \
	DECLARE_FUNCTION(execCONST_RESULT_INVALID_MAP_DATA); \
	DECLARE_FUNCTION(execCONST_RESULT_MAP_DOES_NOT_EXIST); \
	DECLARE_FUNCTION(execCONST_RESULT_SUCCESS); \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2LoadMapSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2LoadMapSrv(); \
	friend struct Z_Construct_UClass_UROS2LoadMapSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2LoadMapSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2LoadMapSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2LoadMapSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2LoadMapSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2LoadMapSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2LoadMapSrv(UROS2LoadMapSrv&&) = delete; \
	UROS2LoadMapSrv(const UROS2LoadMapSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2LoadMapSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2LoadMapSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2LoadMapSrv) \
	NO_API virtual ~UROS2LoadMapSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_85_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_88_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2LoadMapSrv;

// ********** End Class UROS2LoadMapSrv ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2LoadMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
