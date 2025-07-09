// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2GetEntityState.h"

#ifdef RCLUE_ROS2GetEntityState_generated_h
#error "ROS2GetEntityState.generated.h already included, missing '#pragma once' in ROS2GetEntityState.h"
#endif
#define RCLUE_ROS2GetEntityState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGetEntityStateReq;
struct FROSGetEntityStateRes;

// ********** Begin ScriptStruct FROSGetEntityStateReq *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetEntityStateReq;
// ********** End ScriptStruct FROSGetEntityStateReq ***********************************************

// ********** Begin ScriptStruct FROSGetEntityStateRes *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGetEntityStateRes;
// ********** End ScriptStruct FROSGetEntityStateRes ***********************************************

// ********** Begin Class UROS2GetEntityStateSrv ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2GetEntityStateSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GetEntityStateSrv(); \
	friend struct Z_Construct_UClass_UROS2GetEntityStateSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GetEntityStateSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GetEntityStateSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GetEntityStateSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2GetEntityStateSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GetEntityStateSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GetEntityStateSrv(UROS2GetEntityStateSrv&&) = delete; \
	UROS2GetEntityStateSrv(const UROS2GetEntityStateSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GetEntityStateSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GetEntityStateSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GetEntityStateSrv) \
	NO_API virtual ~UROS2GetEntityStateSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_86_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_89_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GetEntityStateSrv;

// ********** End Class UROS2GetEntityStateSrv *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
