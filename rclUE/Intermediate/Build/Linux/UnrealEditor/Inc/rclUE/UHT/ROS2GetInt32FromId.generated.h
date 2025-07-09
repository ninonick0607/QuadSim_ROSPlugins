// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2GetInt32FromId.h"

#ifdef RCLUE_ROS2GetInt32FromId_generated_h
#error "ROS2GetInt32FromId.generated.h already included, missing '#pragma once' in ROS2GetInt32FromId.h"
#endif
#define RCLUE_ROS2GetInt32FromId_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGetInt32FromIdReq;
struct FROSGetInt32FromIdRes;

// ********** Begin ScriptStruct FROSGetInt32FromIdReq *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetInt32FromIdReq;
// ********** End ScriptStruct FROSGetInt32FromIdReq ***********************************************

// ********** Begin ScriptStruct FROSGetInt32FromIdRes *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetInt32FromIdRes;
// ********** End ScriptStruct FROSGetInt32FromIdRes ***********************************************

// ********** Begin Class UROS2GetInt32FromIdSrv ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2GetInt32FromIdSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GetInt32FromIdSrv(); \
	friend struct Z_Construct_UClass_UROS2GetInt32FromIdSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GetInt32FromIdSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GetInt32FromIdSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GetInt32FromIdSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2GetInt32FromIdSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GetInt32FromIdSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GetInt32FromIdSrv(UROS2GetInt32FromIdSrv&&) = delete; \
	UROS2GetInt32FromIdSrv(const UROS2GetInt32FromIdSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GetInt32FromIdSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GetInt32FromIdSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GetInt32FromIdSrv) \
	NO_API virtual ~UROS2GetInt32FromIdSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_84_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_87_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GetInt32FromIdSrv;

// ********** End Class UROS2GetInt32FromIdSrv *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
