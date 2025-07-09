// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2PointField.h"

#ifdef RCLUE_ROS2PointField_generated_h
#error "ROS2PointField.generated.h already included, missing '#pragma once' in ROS2PointField.h"
#endif
#define RCLUE_ROS2PointField_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPointField;

// ********** Begin ScriptStruct FROSPointField ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPointField_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPointField;
// ********** End ScriptStruct FROSPointField ******************************************************

// ********** Begin Class UROS2PointFieldMsg *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_FLOAT64); \
	DECLARE_FUNCTION(execCONST_FLOAT32); \
	DECLARE_FUNCTION(execCONST_UINT32); \
	DECLARE_FUNCTION(execCONST_INT32); \
	DECLARE_FUNCTION(execCONST_UINT16); \
	DECLARE_FUNCTION(execCONST_INT16); \
	DECLARE_FUNCTION(execCONST_UINT8); \
	DECLARE_FUNCTION(execCONST_INT8); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2PointFieldMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PointFieldMsg(); \
	friend struct Z_Construct_UClass_UROS2PointFieldMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PointFieldMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PointFieldMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PointFieldMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PointFieldMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PointFieldMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PointFieldMsg(UROS2PointFieldMsg&&) = delete; \
	UROS2PointFieldMsg(const UROS2PointFieldMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PointFieldMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PointFieldMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PointFieldMsg) \
	NO_API virtual ~UROS2PointFieldMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_75_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_78_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PointFieldMsg;

// ********** End Class UROS2PointFieldMsg *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointField_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
