// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2RelativeHumidity.h"

#ifdef RCLUE_ROS2RelativeHumidity_generated_h
#error "ROS2RelativeHumidity.generated.h already included, missing '#pragma once' in ROS2RelativeHumidity.h"
#endif
#define RCLUE_ROS2RelativeHumidity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSRelativeHumidity;

// ********** Begin ScriptStruct FROSRelativeHumidity **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSRelativeHumidity;
// ********** End ScriptStruct FROSRelativeHumidity ************************************************

// ********** Begin Class UROS2RelativeHumidityMsg *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2RelativeHumidityMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2RelativeHumidityMsg(); \
	friend struct Z_Construct_UClass_UROS2RelativeHumidityMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2RelativeHumidityMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2RelativeHumidityMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2RelativeHumidityMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2RelativeHumidityMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2RelativeHumidityMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2RelativeHumidityMsg(UROS2RelativeHumidityMsg&&) = delete; \
	UROS2RelativeHumidityMsg(const UROS2RelativeHumidityMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2RelativeHumidityMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2RelativeHumidityMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2RelativeHumidityMsg) \
	NO_API virtual ~UROS2RelativeHumidityMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_60_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_63_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2RelativeHumidityMsg;

// ********** End Class UROS2RelativeHumidityMsg ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
