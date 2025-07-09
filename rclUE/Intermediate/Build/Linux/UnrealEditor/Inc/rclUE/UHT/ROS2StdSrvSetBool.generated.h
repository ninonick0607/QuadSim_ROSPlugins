// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2StdSrvSetBool.h"

#ifdef RCLUE_ROS2StdSrvSetBool_generated_h
#error "ROS2StdSrvSetBool.generated.h already included, missing '#pragma once' in ROS2StdSrvSetBool.h"
#endif
#define RCLUE_ROS2StdSrvSetBool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSStdSrvSetBoolReq;
struct FROSStdSrvSetBoolRes;

// ********** Begin ScriptStruct FROSStdSrvSetBoolReq **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSStdSrvSetBoolReq;
// ********** End ScriptStruct FROSStdSrvSetBoolReq ************************************************

// ********** Begin ScriptStruct FROSStdSrvSetBoolRes **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSStdSrvSetBoolRes;
// ********** End ScriptStruct FROSStdSrvSetBoolRes ************************************************

// ********** Begin Class UROS2StdSrvSetBoolSrv ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvSetBoolSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2StdSrvSetBoolSrv(); \
	friend struct Z_Construct_UClass_UROS2StdSrvSetBoolSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvSetBoolSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2StdSrvSetBoolSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2StdSrvSetBoolSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2StdSrvSetBoolSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2StdSrvSetBoolSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2StdSrvSetBoolSrv(UROS2StdSrvSetBoolSrv&&) = delete; \
	UROS2StdSrvSetBoolSrv(const UROS2StdSrvSetBoolSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2StdSrvSetBoolSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2StdSrvSetBoolSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2StdSrvSetBoolSrv) \
	NO_API virtual ~UROS2StdSrvSetBoolSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_77_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_80_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2StdSrvSetBoolSrv;

// ********** End Class UROS2StdSrvSetBoolSrv ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
