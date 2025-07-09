// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2AddTwoInts.h"

#ifdef RCLUE_ROS2AddTwoInts_generated_h
#error "ROS2AddTwoInts.generated.h already included, missing '#pragma once' in ROS2AddTwoInts.h"
#endif
#define RCLUE_ROS2AddTwoInts_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSAddTwoIntsReq;
struct FROSAddTwoIntsRes;

// ********** Begin ScriptStruct FROSAddTwoIntsReq *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSAddTwoIntsReq;
// ********** End ScriptStruct FROSAddTwoIntsReq ***************************************************

// ********** Begin ScriptStruct FROSAddTwoIntsRes *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSAddTwoIntsRes;
// ********** End ScriptStruct FROSAddTwoIntsRes ***************************************************

// ********** Begin Class UROS2AddTwoIntsSrv *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2AddTwoIntsSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2AddTwoIntsSrv(); \
	friend struct Z_Construct_UClass_UROS2AddTwoIntsSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2AddTwoIntsSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2AddTwoIntsSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2AddTwoIntsSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2AddTwoIntsSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2AddTwoIntsSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2AddTwoIntsSrv(UROS2AddTwoIntsSrv&&) = delete; \
	UROS2AddTwoIntsSrv(const UROS2AddTwoIntsSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2AddTwoIntsSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2AddTwoIntsSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2AddTwoIntsSrv) \
	NO_API virtual ~UROS2AddTwoIntsSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_77_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_80_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2AddTwoIntsSrv;

// ********** End Class UROS2AddTwoIntsSrv *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
