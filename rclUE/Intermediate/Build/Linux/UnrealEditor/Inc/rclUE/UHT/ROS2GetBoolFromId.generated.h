// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2GetBoolFromId.h"

#ifdef RCLUE_ROS2GetBoolFromId_generated_h
#error "ROS2GetBoolFromId.generated.h already included, missing '#pragma once' in ROS2GetBoolFromId.h"
#endif
#define RCLUE_ROS2GetBoolFromId_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGetBoolFromIdReq;
struct FROSGetBoolFromIdRes;

// ********** Begin ScriptStruct FROSGetBoolFromIdReq **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetBoolFromIdReq;
// ********** End ScriptStruct FROSGetBoolFromIdReq ************************************************

// ********** Begin ScriptStruct FROSGetBoolFromIdRes **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetBoolFromIdRes;
// ********** End ScriptStruct FROSGetBoolFromIdRes ************************************************

// ********** Begin Class UROS2GetBoolFromIdSrv ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2GetBoolFromIdSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GetBoolFromIdSrv(); \
	friend struct Z_Construct_UClass_UROS2GetBoolFromIdSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GetBoolFromIdSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GetBoolFromIdSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GetBoolFromIdSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2GetBoolFromIdSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GetBoolFromIdSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GetBoolFromIdSrv(UROS2GetBoolFromIdSrv&&) = delete; \
	UROS2GetBoolFromIdSrv(const UROS2GetBoolFromIdSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GetBoolFromIdSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GetBoolFromIdSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GetBoolFromIdSrv) \
	NO_API virtual ~UROS2GetBoolFromIdSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_84_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_87_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GetBoolFromIdSrv;

// ********** End Class UROS2GetBoolFromIdSrv ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
