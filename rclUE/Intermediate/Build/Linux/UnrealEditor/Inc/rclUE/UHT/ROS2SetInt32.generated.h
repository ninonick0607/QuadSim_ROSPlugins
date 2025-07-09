// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SetInt32.h"

#ifdef RCLUE_ROS2SetInt32_generated_h
#error "ROS2SetInt32.generated.h already included, missing '#pragma once' in ROS2SetInt32.h"
#endif
#define RCLUE_ROS2SetInt32_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSetInt32Req;
struct FROSSetInt32Res;

// ********** Begin ScriptStruct FROSSetInt32Req ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetInt32Req_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetInt32Req;
// ********** End ScriptStruct FROSSetInt32Req *****************************************************

// ********** Begin ScriptStruct FROSSetInt32Res ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetInt32Res_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetInt32Res;
// ********** End ScriptStruct FROSSetInt32Res *****************************************************

// ********** Begin Class UROS2SetInt32Srv *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2SetInt32Srv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SetInt32Srv(); \
	friend struct Z_Construct_UClass_UROS2SetInt32Srv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SetInt32Srv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SetInt32Srv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SetInt32Srv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SetInt32Srv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SetInt32Srv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SetInt32Srv(UROS2SetInt32Srv&&) = delete; \
	UROS2SetInt32Srv(const UROS2SetInt32Srv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SetInt32Srv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SetInt32Srv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SetInt32Srv) \
	NO_API virtual ~UROS2SetInt32Srv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_77_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_80_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SetInt32Srv;

// ********** End Class UROS2SetInt32Srv ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
