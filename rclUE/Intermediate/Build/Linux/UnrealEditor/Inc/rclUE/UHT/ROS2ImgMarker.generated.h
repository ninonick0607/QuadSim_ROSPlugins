// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2ImgMarker.h"

#ifdef RCLUE_ROS2ImgMarker_generated_h
#error "ROS2ImgMarker.generated.h already included, missing '#pragma once' in ROS2ImgMarker.h"
#endif
#define RCLUE_ROS2ImgMarker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSImgMarker;

// ********** Begin ScriptStruct FROSImgMarker *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSImgMarker_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSImgMarker;
// ********** End ScriptStruct FROSImgMarker *******************************************************

// ********** Begin Class UROS2ImgMarkerMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_REMOVE); \
	DECLARE_FUNCTION(execCONST_ADD); \
	DECLARE_FUNCTION(execCONST_POINTS); \
	DECLARE_FUNCTION(execCONST_POLYGON); \
	DECLARE_FUNCTION(execCONST_LINE_LIST); \
	DECLARE_FUNCTION(execCONST_LINE_STRIP); \
	DECLARE_FUNCTION(execCONST_CIRCLE); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2ImgMarkerMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ImgMarkerMsg(); \
	friend struct Z_Construct_UClass_UROS2ImgMarkerMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ImgMarkerMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ImgMarkerMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ImgMarkerMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2ImgMarkerMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ImgMarkerMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ImgMarkerMsg(UROS2ImgMarkerMsg&&) = delete; \
	UROS2ImgMarkerMsg(const UROS2ImgMarkerMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ImgMarkerMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ImgMarkerMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ImgMarkerMsg) \
	NO_API virtual ~UROS2ImgMarkerMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_160_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_163_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ImgMarkerMsg;

// ********** End Class UROS2ImgMarkerMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
