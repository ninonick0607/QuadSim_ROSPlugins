// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SpawnEntities.h"

#ifdef RCLUE_ROS2SpawnEntities_generated_h
#error "ROS2SpawnEntities.generated.h already included, missing '#pragma once' in ROS2SpawnEntities.h"
#endif
#define RCLUE_ROS2SpawnEntities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSpawnEntitiesReq;
struct FROSSpawnEntitiesRes;

// ********** Begin ScriptStruct FROSSpawnEntitiesReq **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSpawnEntitiesReq;
// ********** End ScriptStruct FROSSpawnEntitiesReq ************************************************

// ********** Begin ScriptStruct FROSSpawnEntitiesRes **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSpawnEntitiesRes;
// ********** End ScriptStruct FROSSpawnEntitiesRes ************************************************

// ********** Begin Class UROS2SpawnEntitiesSrv ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnEntitiesSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SpawnEntitiesSrv(); \
	friend struct Z_Construct_UClass_UROS2SpawnEntitiesSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnEntitiesSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SpawnEntitiesSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SpawnEntitiesSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SpawnEntitiesSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SpawnEntitiesSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SpawnEntitiesSrv(UROS2SpawnEntitiesSrv&&) = delete; \
	UROS2SpawnEntitiesSrv(const UROS2SpawnEntitiesSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SpawnEntitiesSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SpawnEntitiesSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SpawnEntitiesSrv) \
	NO_API virtual ~UROS2SpawnEntitiesSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_135_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_138_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SpawnEntitiesSrv;

// ********** End Class UROS2SpawnEntitiesSrv ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
