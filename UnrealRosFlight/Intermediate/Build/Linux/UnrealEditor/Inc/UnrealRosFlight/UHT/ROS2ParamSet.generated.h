// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2ParamSet.h"

#ifdef UNREALROSFLIGHT_ROS2ParamSet_generated_h
#error "ROS2ParamSet.generated.h already included, missing '#pragma once' in ROS2ParamSet.h"
#endif
#define UNREALROSFLIGHT_ROS2ParamSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSParamSetReq;
struct FROSParamSetRes;

// ********** Begin ScriptStruct FROSParamSetReq ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSParamSetReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSParamSetReq;
// ********** End ScriptStruct FROSParamSetReq *****************************************************

// ********** Begin ScriptStruct FROSParamSetRes ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSParamSetRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSParamSetRes;
// ********** End ScriptStruct FROSParamSetRes *****************************************************

// ********** Begin Class UROS2ParamSetSrv *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamSetSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ParamSetSrv(); \
	friend struct Z_Construct_UClass_UROS2ParamSetSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamSetSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ParamSetSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2ParamSetSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2ParamSetSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ParamSetSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ParamSetSrv(UROS2ParamSetSrv&&) = delete; \
	UROS2ParamSetSrv(const UROS2ParamSetSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ParamSetSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ParamSetSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ParamSetSrv) \
	NO_API virtual ~UROS2ParamSetSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_97_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_100_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ParamSetSrv;

// ********** End Class UROS2ParamSetSrv ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
