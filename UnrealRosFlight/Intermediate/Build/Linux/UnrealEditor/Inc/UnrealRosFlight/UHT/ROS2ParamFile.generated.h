// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2ParamFile.h"

#ifdef UNREALROSFLIGHT_ROS2ParamFile_generated_h
#error "ROS2ParamFile.generated.h already included, missing '#pragma once' in ROS2ParamFile.h"
#endif
#define UNREALROSFLIGHT_ROS2ParamFile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSParamFileReq;
struct FROSParamFileRes;

// ********** Begin ScriptStruct FROSParamFileReq **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSParamFileReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSParamFileReq;
// ********** End ScriptStruct FROSParamFileReq ****************************************************

// ********** Begin ScriptStruct FROSParamFileRes **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSParamFileRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSParamFileRes;
// ********** End ScriptStruct FROSParamFileRes ****************************************************

// ********** Begin Class UROS2ParamFileSrv ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamFileSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ParamFileSrv(); \
	friend struct Z_Construct_UClass_UROS2ParamFileSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamFileSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ParamFileSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2ParamFileSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2ParamFileSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ParamFileSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ParamFileSrv(UROS2ParamFileSrv&&) = delete; \
	UROS2ParamFileSrv(const UROS2ParamFileSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ParamFileSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ParamFileSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ParamFileSrv) \
	NO_API virtual ~UROS2ParamFileSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_90_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_93_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ParamFileSrv;

// ********** End Class UROS2ParamFileSrv **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
