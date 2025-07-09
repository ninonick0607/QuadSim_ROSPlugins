// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2SetSimState.h"

#ifdef UNREALROSFLIGHT_ROS2SetSimState_generated_h
#error "ROS2SetSimState.generated.h already included, missing '#pragma once' in ROS2SetSimState.h"
#endif
#define UNREALROSFLIGHT_ROS2SetSimState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSetSimStateReq;
struct FROSSetSimStateRes;

// ********** Begin ScriptStruct FROSSetSimStateReq ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetSimStateReq;
// ********** End ScriptStruct FROSSetSimStateReq **************************************************

// ********** Begin ScriptStruct FROSSetSimStateRes ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSetSimStateRes;
// ********** End ScriptStruct FROSSetSimStateRes **************************************************

// ********** Begin Class UROS2SetSimStateSrv ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2SetSimStateSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SetSimStateSrv(); \
	friend struct Z_Construct_UClass_UROS2SetSimStateSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2SetSimStateSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SetSimStateSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2SetSimStateSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2SetSimStateSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SetSimStateSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SetSimStateSrv(UROS2SetSimStateSrv&&) = delete; \
	UROS2SetSimStateSrv(const UROS2SetSimStateSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SetSimStateSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SetSimStateSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SetSimStateSrv) \
	NO_API virtual ~UROS2SetSimStateSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_98_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_101_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SetSimStateSrv;

// ********** End Class UROS2SetSimStateSrv ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
