// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SelfTest.h"

#ifdef RCLUE_ROS2SelfTest_generated_h
#error "ROS2SelfTest.generated.h already included, missing '#pragma once' in ROS2SelfTest.h"
#endif
#define RCLUE_ROS2SelfTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSelfTestReq;
struct FROSSelfTestRes;

// ********** Begin ScriptStruct FROSSelfTestReq ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSelfTestReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSelfTestReq;
// ********** End ScriptStruct FROSSelfTestReq *****************************************************

// ********** Begin ScriptStruct FROSSelfTestRes ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSelfTestRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSelfTestRes;
// ********** End ScriptStruct FROSSelfTestRes *****************************************************

// ********** Begin Class UROS2SelfTestSrv *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2SelfTestSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SelfTestSrv(); \
	friend struct Z_Construct_UClass_UROS2SelfTestSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SelfTestSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SelfTestSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SelfTestSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SelfTestSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SelfTestSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SelfTestSrv(UROS2SelfTestSrv&&) = delete; \
	UROS2SelfTestSrv(const UROS2SelfTestSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SelfTestSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SelfTestSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SelfTestSrv) \
	NO_API virtual ~UROS2SelfTestSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_92_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_95_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SelfTestSrv;

// ********** End Class UROS2SelfTestSrv ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
