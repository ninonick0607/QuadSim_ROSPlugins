// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SpawnEntity.h"

#ifdef RCLUE_ROS2SpawnEntity_generated_h
#error "ROS2SpawnEntity.generated.h already included, missing '#pragma once' in ROS2SpawnEntity.h"
#endif
#define RCLUE_ROS2SpawnEntity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSpawnEntityReq;
struct FROSSpawnEntityRes;

// ********** Begin ScriptStruct FROSSpawnEntityReq ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSpawnEntityReq;
// ********** End ScriptStruct FROSSpawnEntityReq **************************************************

// ********** Begin ScriptStruct FROSSpawnEntityRes ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSpawnEntityRes;
// ********** End ScriptStruct FROSSpawnEntityRes **************************************************

// ********** Begin Class UROS2SpawnEntitySrv ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnEntitySrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SpawnEntitySrv(); \
	friend struct Z_Construct_UClass_UROS2SpawnEntitySrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnEntitySrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SpawnEntitySrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SpawnEntitySrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SpawnEntitySrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SpawnEntitySrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SpawnEntitySrv(UROS2SpawnEntitySrv&&) = delete; \
	UROS2SpawnEntitySrv(const UROS2SpawnEntitySrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SpawnEntitySrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SpawnEntitySrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SpawnEntitySrv) \
	NO_API virtual ~UROS2SpawnEntitySrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_115_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_118_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SpawnEntitySrv;

// ********** End Class UROS2SpawnEntitySrv ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
