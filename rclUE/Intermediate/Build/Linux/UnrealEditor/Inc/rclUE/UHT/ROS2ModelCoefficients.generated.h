// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2ModelCoefficients.h"

#ifdef RCLUE_ROS2ModelCoefficients_generated_h
#error "ROS2ModelCoefficients.generated.h already included, missing '#pragma once' in ROS2ModelCoefficients.h"
#endif
#define RCLUE_ROS2ModelCoefficients_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSModelCoefficients;

// ********** Begin ScriptStruct FROSModelCoefficients *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSModelCoefficients_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSModelCoefficients;
// ********** End ScriptStruct FROSModelCoefficients ***********************************************

// ********** Begin Class UROS2ModelCoefficientsMsg ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2ModelCoefficientsMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ModelCoefficientsMsg(); \
	friend struct Z_Construct_UClass_UROS2ModelCoefficientsMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ModelCoefficientsMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ModelCoefficientsMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ModelCoefficientsMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2ModelCoefficientsMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ModelCoefficientsMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ModelCoefficientsMsg(UROS2ModelCoefficientsMsg&&) = delete; \
	UROS2ModelCoefficientsMsg(const UROS2ModelCoefficientsMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ModelCoefficientsMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ModelCoefficientsMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ModelCoefficientsMsg) \
	NO_API virtual ~UROS2ModelCoefficientsMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_62_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_65_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ModelCoefficientsMsg;

// ********** End Class UROS2ModelCoefficientsMsg **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ModelCoefficients_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
