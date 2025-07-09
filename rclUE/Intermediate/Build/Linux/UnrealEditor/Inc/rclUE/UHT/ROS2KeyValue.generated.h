// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2KeyValue.h"

#ifdef RCLUE_ROS2KeyValue_generated_h
#error "ROS2KeyValue.generated.h already included, missing '#pragma once' in ROS2KeyValue.h"
#endif
#define RCLUE_ROS2KeyValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSKeyValue;

// ********** Begin ScriptStruct FROSKeyValue ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSKeyValue_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSKeyValue;
// ********** End ScriptStruct FROSKeyValue ********************************************************

// ********** Begin Class UROS2KeyValueMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2KeyValueMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2KeyValueMsg(); \
	friend struct Z_Construct_UClass_UROS2KeyValueMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2KeyValueMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2KeyValueMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2KeyValueMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2KeyValueMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2KeyValueMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2KeyValueMsg(UROS2KeyValueMsg&&) = delete; \
	UROS2KeyValueMsg(const UROS2KeyValueMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2KeyValueMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2KeyValueMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2KeyValueMsg) \
	NO_API virtual ~UROS2KeyValueMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_52_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_55_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2KeyValueMsg;

// ********** End Class UROS2KeyValueMsg ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
