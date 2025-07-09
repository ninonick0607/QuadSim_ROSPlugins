// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2OverlappingObjects.h"

#ifdef RCLUE_ROS2OverlappingObjects_generated_h
#error "ROS2OverlappingObjects.generated.h already included, missing '#pragma once' in ROS2OverlappingObjects.h"
#endif
#define RCLUE_ROS2OverlappingObjects_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSOverlappingObjects;

// ********** Begin ScriptStruct FROSOverlappingObjects ********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSOverlappingObjects_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSOverlappingObjects;
// ********** End ScriptStruct FROSOverlappingObjects **********************************************

// ********** Begin Class UROS2OverlappingObjectsMsg ***********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2OverlappingObjectsMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2OverlappingObjectsMsg(); \
	friend struct Z_Construct_UClass_UROS2OverlappingObjectsMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2OverlappingObjectsMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2OverlappingObjectsMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2OverlappingObjectsMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2OverlappingObjectsMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2OverlappingObjectsMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2OverlappingObjectsMsg(UROS2OverlappingObjectsMsg&&) = delete; \
	UROS2OverlappingObjectsMsg(const UROS2OverlappingObjectsMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2OverlappingObjectsMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2OverlappingObjectsMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2OverlappingObjectsMsg) \
	NO_API virtual ~UROS2OverlappingObjectsMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_70_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_73_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2OverlappingObjectsMsg;

// ********** End Class UROS2OverlappingObjectsMsg *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OverlappingObjects_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
