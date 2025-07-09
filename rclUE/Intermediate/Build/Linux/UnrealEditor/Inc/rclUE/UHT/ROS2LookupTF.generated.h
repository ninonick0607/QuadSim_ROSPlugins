// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/ROS2LookupTF.h"

#ifdef RCLUE_ROS2LookupTF_generated_h
#error "ROS2LookupTF.generated.h already included, missing '#pragma once' in ROS2LookupTF.h"
#endif
#define RCLUE_ROS2LookupTF_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSLookupTFFB;
struct FROSLookupTFGRReq;
struct FROSLookupTFGRRes;
struct FROSLookupTFSGReq;
struct FROSLookupTFSGRes;

// ********** Begin ScriptStruct FROSLookupTFSGReq *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLookupTFSGReq;
// ********** End ScriptStruct FROSLookupTFSGReq ***************************************************

// ********** Begin ScriptStruct FROSLookupTFSGRes *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLookupTFSGRes;
// ********** End ScriptStruct FROSLookupTFSGRes ***************************************************

// ********** Begin ScriptStruct FROSLookupTFGRReq *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLookupTFGRReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLookupTFGRReq;
// ********** End ScriptStruct FROSLookupTFGRReq ***************************************************

// ********** Begin ScriptStruct FROSLookupTFGRRes *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLookupTFGRRes;
// ********** End ScriptStruct FROSLookupTFGRRes ***************************************************

// ********** Begin ScriptStruct FROSLookupTFFB ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSLookupTFFB_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSLookupTFFB;
// ********** End ScriptStruct FROSLookupTFFB ******************************************************

// ********** Begin Class UROS2LookupTFAction ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGoalIdToFeedback); \
	DECLARE_FUNCTION(execGetFeedback); \
	DECLARE_FUNCTION(execSetFeedback); \
	DECLARE_FUNCTION(execGetResultResponse); \
	DECLARE_FUNCTION(execSetResultResponse); \
	DECLARE_FUNCTION(execGetResultRequest); \
	DECLARE_FUNCTION(execSetResultRequest); \
	DECLARE_FUNCTION(execGetGoalResponse); \
	DECLARE_FUNCTION(execSetGoalResponse); \
	DECLARE_FUNCTION(execGetGoalRequest); \
	DECLARE_FUNCTION(execSetGoalRequest);


RCLUE_API UClass* Z_Construct_UClass_UROS2LookupTFAction_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2LookupTFAction(); \
	friend struct Z_Construct_UClass_UROS2LookupTFAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2LookupTFAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2LookupTFAction, UROS2GenericAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2LookupTFAction_NoRegister) \
	DECLARE_SERIALIZER(UROS2LookupTFAction)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2LookupTFAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2LookupTFAction(UROS2LookupTFAction&&) = delete; \
	UROS2LookupTFAction(const UROS2LookupTFAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2LookupTFAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2LookupTFAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2LookupTFAction) \
	NO_API virtual ~UROS2LookupTFAction();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_227_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_230_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2LookupTFAction;

// ********** End Class UROS2LookupTFAction ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
