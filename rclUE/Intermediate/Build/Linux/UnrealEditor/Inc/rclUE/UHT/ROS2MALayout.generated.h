// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MALayout.h"

#ifdef RCLUE_ROS2MALayout_generated_h
#error "ROS2MALayout.generated.h already included, missing '#pragma once' in ROS2MALayout.h"
#endif
#define RCLUE_ROS2MALayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMALayout;

// ********** Begin ScriptStruct FROSMALayout ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMALayout_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMALayout;
// ********** End ScriptStruct FROSMALayout ********************************************************

// ********** Begin Class UROS2MALayoutMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MALayoutMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MALayoutMsg(); \
	friend struct Z_Construct_UClass_UROS2MALayoutMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MALayoutMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MALayoutMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MALayoutMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MALayoutMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MALayoutMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MALayoutMsg(UROS2MALayoutMsg&&) = delete; \
	UROS2MALayoutMsg(const UROS2MALayoutMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MALayoutMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MALayoutMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MALayoutMsg) \
	NO_API virtual ~UROS2MALayoutMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_64_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_67_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MALayoutMsg;

// ********** End Class UROS2MALayoutMsg ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
