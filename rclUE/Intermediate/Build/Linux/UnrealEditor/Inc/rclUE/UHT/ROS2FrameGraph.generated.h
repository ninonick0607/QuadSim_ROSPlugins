// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2FrameGraph.h"

#ifdef RCLUE_ROS2FrameGraph_generated_h
#error "ROS2FrameGraph.generated.h already included, missing '#pragma once' in ROS2FrameGraph.h"
#endif
#define RCLUE_ROS2FrameGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSFrameGraphReq;
struct FROSFrameGraphRes;

// ********** Begin ScriptStruct FROSFrameGraphReq *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFrameGraphReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFrameGraphReq;
// ********** End ScriptStruct FROSFrameGraphReq ***************************************************

// ********** Begin ScriptStruct FROSFrameGraphRes *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFrameGraphRes;
// ********** End ScriptStruct FROSFrameGraphRes ***************************************************

// ********** Begin Class UROS2FrameGraphSrv *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2FrameGraphSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2FrameGraphSrv(); \
	friend struct Z_Construct_UClass_UROS2FrameGraphSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2FrameGraphSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2FrameGraphSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2FrameGraphSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2FrameGraphSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2FrameGraphSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2FrameGraphSrv(UROS2FrameGraphSrv&&) = delete; \
	UROS2FrameGraphSrv(const UROS2FrameGraphSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2FrameGraphSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2FrameGraphSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2FrameGraphSrv) \
	NO_API virtual ~UROS2FrameGraphSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_65_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_68_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2FrameGraphSrv;

// ********** End Class UROS2FrameGraphSrv *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
