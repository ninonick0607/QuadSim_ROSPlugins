// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/ROS2Fibonacci.h"

#ifdef RCLUE_ROS2Fibonacci_generated_h
#error "ROS2Fibonacci.generated.h already included, missing '#pragma once' in ROS2Fibonacci.h"
#endif
#define RCLUE_ROS2Fibonacci_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSFibonacciFB;
struct FROSFibonacciGRReq;
struct FROSFibonacciGRRes;
struct FROSFibonacciSGReq;
struct FROSFibonacciSGRes;

// ********** Begin ScriptStruct FROSFibonacciSGReq ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFibonacciSGReq;
// ********** End ScriptStruct FROSFibonacciSGReq **************************************************

// ********** Begin ScriptStruct FROSFibonacciSGRes ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFibonacciSGRes;
// ********** End ScriptStruct FROSFibonacciSGRes **************************************************

// ********** Begin ScriptStruct FROSFibonacciGRReq ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFibonacciGRReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFibonacciGRReq;
// ********** End ScriptStruct FROSFibonacciGRReq **************************************************

// ********** Begin ScriptStruct FROSFibonacciGRRes ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFibonacciGRRes;
// ********** End ScriptStruct FROSFibonacciGRRes **************************************************

// ********** Begin ScriptStruct FROSFibonacciFB ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFibonacciFB_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFibonacciFB;
// ********** End ScriptStruct FROSFibonacciFB *****************************************************

// ********** Begin Class UROS2FibonacciAction *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
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


RCLUE_API UClass* Z_Construct_UClass_UROS2FibonacciAction_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2FibonacciAction(); \
	friend struct Z_Construct_UClass_UROS2FibonacciAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2FibonacciAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2FibonacciAction, UROS2GenericAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2FibonacciAction_NoRegister) \
	DECLARE_SERIALIZER(UROS2FibonacciAction)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2FibonacciAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2FibonacciAction(UROS2FibonacciAction&&) = delete; \
	UROS2FibonacciAction(const UROS2FibonacciAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2FibonacciAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2FibonacciAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2FibonacciAction) \
	NO_API virtual ~UROS2FibonacciAction();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_200_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_203_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h_203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2FibonacciAction;

// ********** End Class UROS2FibonacciAction *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
