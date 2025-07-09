// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2ParamGet.h"

#ifdef UNREALROSFLIGHT_ROS2ParamGet_generated_h
#error "ROS2ParamGet.generated.h already included, missing '#pragma once' in ROS2ParamGet.h"
#endif
#define UNREALROSFLIGHT_ROS2ParamGet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSParamGetReq;
struct FROSParamGetRes;

// ********** Begin ScriptStruct FROSParamGetReq ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSParamGetReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSParamGetReq;
// ********** End ScriptStruct FROSParamGetReq *****************************************************

// ********** Begin ScriptStruct FROSParamGetRes ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSParamGetRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSParamGetRes;
// ********** End ScriptStruct FROSParamGetRes *****************************************************

// ********** Begin Class UROS2ParamGetSrv *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamGetSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ParamGetSrv(); \
	friend struct Z_Construct_UClass_UROS2ParamGetSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamGetSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ParamGetSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2ParamGetSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2ParamGetSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ParamGetSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ParamGetSrv(UROS2ParamGetSrv&&) = delete; \
	UROS2ParamGetSrv(const UROS2ParamGetSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ParamGetSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ParamGetSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ParamGetSrv) \
	NO_API virtual ~UROS2ParamGetSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_97_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_100_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ParamGetSrv;

// ********** End Class UROS2ParamGetSrv ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
