// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SetBool.h"

#ifdef RCLUE_ROS2SetBool_generated_h
#error "ROS2SetBool.generated.h already included, missing '#pragma once' in ROS2SetBool.h"
#endif
#define RCLUE_ROS2SetBool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSetBoolReq;
struct FROSSetBoolRes;

// ********** Begin ScriptStruct FROSSetBoolReq ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetBoolReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetBoolReq;
// ********** End ScriptStruct FROSSetBoolReq ******************************************************

// ********** Begin ScriptStruct FROSSetBoolRes ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetBoolRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetBoolRes;
// ********** End ScriptStruct FROSSetBoolRes ******************************************************

// ********** Begin Class UROS2SetBoolSrv **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2SetBoolSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SetBoolSrv(); \
	friend struct Z_Construct_UClass_UROS2SetBoolSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SetBoolSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SetBoolSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SetBoolSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SetBoolSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SetBoolSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SetBoolSrv(UROS2SetBoolSrv&&) = delete; \
	UROS2SetBoolSrv(const UROS2SetBoolSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SetBoolSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SetBoolSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SetBoolSrv) \
	NO_API virtual ~UROS2SetBoolSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_77_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_80_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SetBoolSrv;

// ********** End Class UROS2SetBoolSrv ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
