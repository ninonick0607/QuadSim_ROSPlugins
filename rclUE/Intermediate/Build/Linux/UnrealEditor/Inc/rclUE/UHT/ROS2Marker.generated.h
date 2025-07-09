// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Marker.h"

#ifdef RCLUE_ROS2Marker_generated_h
#error "ROS2Marker.generated.h already included, missing '#pragma once' in ROS2Marker.h"
#endif
#define RCLUE_ROS2Marker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMarker;

// ********** Begin ScriptStruct FROSMarker ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMarker_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMarker;
// ********** End ScriptStruct FROSMarker **********************************************************

// ********** Begin Class UROS2MarkerMsg ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_DELETEALL); \
	DECLARE_FUNCTION(execCONST_DELETE); \
	DECLARE_FUNCTION(execCONST_MODIFY); \
	DECLARE_FUNCTION(execCONST_ADD); \
	DECLARE_FUNCTION(execCONST_TRIANGLE_LIST); \
	DECLARE_FUNCTION(execCONST_MESH_RESOURCE); \
	DECLARE_FUNCTION(execCONST_TEXT_VIEW_FACING); \
	DECLARE_FUNCTION(execCONST_POINTS); \
	DECLARE_FUNCTION(execCONST_SPHERE_LIST); \
	DECLARE_FUNCTION(execCONST_CUBE_LIST); \
	DECLARE_FUNCTION(execCONST_LINE_LIST); \
	DECLARE_FUNCTION(execCONST_LINE_STRIP); \
	DECLARE_FUNCTION(execCONST_CYLINDER); \
	DECLARE_FUNCTION(execCONST_SPHERE); \
	DECLARE_FUNCTION(execCONST_CUBE); \
	DECLARE_FUNCTION(execCONST_ARROW); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MarkerMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MarkerMsg(); \
	friend struct Z_Construct_UClass_UROS2MarkerMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MarkerMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MarkerMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MarkerMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MarkerMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MarkerMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MarkerMsg(UROS2MarkerMsg&&) = delete; \
	UROS2MarkerMsg(const UROS2MarkerMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MarkerMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MarkerMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MarkerMsg) \
	NO_API virtual ~UROS2MarkerMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_225_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_228_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h_228_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MarkerMsg;

// ********** End Class UROS2MarkerMsg *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
