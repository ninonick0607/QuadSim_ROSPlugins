// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Float64MA.h"

#ifdef RCLUE_ROS2Float64MA_generated_h
#error "ROS2Float64MA.generated.h already included, missing '#pragma once' in ROS2Float64MA.h"
#endif
#define RCLUE_ROS2Float64MA_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSFloat64MA;

// ********** Begin ScriptStruct FROSFloat64MA *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFloat64MA_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFloat64MA;
// ********** End ScriptStruct FROSFloat64MA *******************************************************

// ********** Begin Class UROS2Float64MAMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2Float64MAMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Float64MAMsg(); \
	friend struct Z_Construct_UClass_UROS2Float64MAMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Float64MAMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Float64MAMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Float64MAMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2Float64MAMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Float64MAMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Float64MAMsg(UROS2Float64MAMsg&&) = delete; \
	UROS2Float64MAMsg(const UROS2Float64MAMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Float64MAMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Float64MAMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2Float64MAMsg) \
	NO_API virtual ~UROS2Float64MAMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_62_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_65_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Float64MAMsg;

// ********** End Class UROS2Float64MAMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float64MA_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
