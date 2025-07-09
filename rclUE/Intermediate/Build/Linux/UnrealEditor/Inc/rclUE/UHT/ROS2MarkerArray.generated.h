// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MarkerArray.h"

#ifdef RCLUE_ROS2MarkerArray_generated_h
#error "ROS2MarkerArray.generated.h already included, missing '#pragma once' in ROS2MarkerArray.h"
#endif
#define RCLUE_ROS2MarkerArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMarkerArray;

// ********** Begin ScriptStruct FROSMarkerArray ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMarkerArray_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMarkerArray;
// ********** End ScriptStruct FROSMarkerArray *****************************************************

// ********** Begin Class UROS2MarkerArrayMsg ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MarkerArrayMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MarkerArrayMsg(); \
	friend struct Z_Construct_UClass_UROS2MarkerArrayMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MarkerArrayMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MarkerArrayMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MarkerArrayMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MarkerArrayMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MarkerArrayMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MarkerArrayMsg(UROS2MarkerArrayMsg&&) = delete; \
	UROS2MarkerArrayMsg(const UROS2MarkerArrayMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MarkerArrayMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MarkerArrayMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MarkerArrayMsg) \
	NO_API virtual ~UROS2MarkerArrayMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_57_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_60_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MarkerArrayMsg;

// ********** End Class UROS2MarkerArrayMsg ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
