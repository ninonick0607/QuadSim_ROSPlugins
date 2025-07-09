// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SpawnWorld.h"

#ifdef RCLUE_ROS2SpawnWorld_generated_h
#error "ROS2SpawnWorld.generated.h already included, missing '#pragma once' in ROS2SpawnWorld.h"
#endif
#define RCLUE_ROS2SpawnWorld_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSpawnWorldReq;
struct FROSSpawnWorldRes;

// ********** Begin ScriptStruct FROSSpawnWorldReq *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSpawnWorldReq;
// ********** End ScriptStruct FROSSpawnWorldReq ***************************************************

// ********** Begin ScriptStruct FROSSpawnWorldRes *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSpawnWorldRes;
// ********** End ScriptStruct FROSSpawnWorldRes ***************************************************

// ********** Begin Class UROS2SpawnWorldSrv *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnWorldSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SpawnWorldSrv(); \
	friend struct Z_Construct_UClass_UROS2SpawnWorldSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnWorldSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SpawnWorldSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SpawnWorldSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SpawnWorldSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SpawnWorldSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SpawnWorldSrv(UROS2SpawnWorldSrv&&) = delete; \
	UROS2SpawnWorldSrv(const UROS2SpawnWorldSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SpawnWorldSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SpawnWorldSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SpawnWorldSrv) \
	NO_API virtual ~UROS2SpawnWorldSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_99_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_102_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SpawnWorldSrv;

// ********** End Class UROS2SpawnWorldSrv *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
