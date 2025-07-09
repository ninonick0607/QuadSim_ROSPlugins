// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2StdSrvEmpty.h"

#ifdef RCLUE_ROS2StdSrvEmpty_generated_h
#error "ROS2StdSrvEmpty.generated.h already included, missing '#pragma once' in ROS2StdSrvEmpty.h"
#endif
#define RCLUE_ROS2StdSrvEmpty_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSStdSrvEmptyReq;
struct FROSStdSrvEmptyRes;

// ********** Begin ScriptStruct FROSStdSrvEmptyReq ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSStdSrvEmptyReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSStdSrvEmptyReq;
// ********** End ScriptStruct FROSStdSrvEmptyReq **************************************************

// ********** Begin ScriptStruct FROSStdSrvEmptyRes ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSStdSrvEmptyRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSStdSrvEmptyRes;
// ********** End ScriptStruct FROSStdSrvEmptyRes **************************************************

// ********** Begin Class UROS2StdSrvEmptySrv ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvEmptySrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2StdSrvEmptySrv(); \
	friend struct Z_Construct_UClass_UROS2StdSrvEmptySrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvEmptySrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2StdSrvEmptySrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2StdSrvEmptySrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2StdSrvEmptySrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2StdSrvEmptySrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2StdSrvEmptySrv(UROS2StdSrvEmptySrv&&) = delete; \
	UROS2StdSrvEmptySrv(const UROS2StdSrvEmptySrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2StdSrvEmptySrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2StdSrvEmptySrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2StdSrvEmptySrv) \
	NO_API virtual ~UROS2StdSrvEmptySrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_60_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_63_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2StdSrvEmptySrv;

// ********** End Class UROS2StdSrvEmptySrv ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
