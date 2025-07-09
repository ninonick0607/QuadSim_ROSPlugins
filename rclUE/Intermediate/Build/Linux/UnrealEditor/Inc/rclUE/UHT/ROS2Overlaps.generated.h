// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Overlaps.h"

#ifdef RCLUE_ROS2Overlaps_generated_h
#error "ROS2Overlaps.generated.h already included, missing '#pragma once' in ROS2Overlaps.h"
#endif
#define RCLUE_ROS2Overlaps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSOverlaps;

// ********** Begin ScriptStruct FROSOverlaps ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSOverlaps_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSOverlaps;
// ********** End ScriptStruct FROSOverlaps ********************************************************

// ********** Begin Class UROS2OverlapsMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2OverlapsMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2OverlapsMsg(); \
	friend struct Z_Construct_UClass_UROS2OverlapsMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2OverlapsMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2OverlapsMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2OverlapsMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2OverlapsMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2OverlapsMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2OverlapsMsg(UROS2OverlapsMsg&&) = delete; \
	UROS2OverlapsMsg(const UROS2OverlapsMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2OverlapsMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2OverlapsMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2OverlapsMsg) \
	NO_API virtual ~UROS2OverlapsMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_74_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_77_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2OverlapsMsg;

// ********** End Class UROS2OverlapsMsg ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
