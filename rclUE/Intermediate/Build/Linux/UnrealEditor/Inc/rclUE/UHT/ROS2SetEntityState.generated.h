// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SetEntityState.h"

#ifdef RCLUE_ROS2SetEntityState_generated_h
#error "ROS2SetEntityState.generated.h already included, missing '#pragma once' in ROS2SetEntityState.h"
#endif
#define RCLUE_ROS2SetEntityState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSetEntityStateReq;
struct FROSSetEntityStateRes;

// ********** Begin ScriptStruct FROSSetEntityStateReq *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetEntityStateReq;
// ********** End ScriptStruct FROSSetEntityStateReq ***********************************************

// ********** Begin ScriptStruct FROSSetEntityStateRes *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetEntityStateRes;
// ********** End ScriptStruct FROSSetEntityStateRes ***********************************************

// ********** Begin Class UROS2SetEntityStateSrv ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2SetEntityStateSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SetEntityStateSrv(); \
	friend struct Z_Construct_UClass_UROS2SetEntityStateSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SetEntityStateSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SetEntityStateSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SetEntityStateSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SetEntityStateSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SetEntityStateSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SetEntityStateSrv(UROS2SetEntityStateSrv&&) = delete; \
	UROS2SetEntityStateSrv(const UROS2SetEntityStateSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SetEntityStateSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SetEntityStateSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SetEntityStateSrv) \
	NO_API virtual ~UROS2SetEntityStateSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_71_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_74_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SetEntityStateSrv;

// ********** End Class UROS2SetEntityStateSrv *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
