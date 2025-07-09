// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Inertia.h"

#ifdef RCLUE_ROS2Inertia_generated_h
#error "ROS2Inertia.generated.h already included, missing '#pragma once' in ROS2Inertia.h"
#endif
#define RCLUE_ROS2Inertia_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSInertia;

// ********** Begin ScriptStruct FROSInertia *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSInertia_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSInertia;
// ********** End ScriptStruct FROSInertia *********************************************************

// ********** Begin Class UROS2InertiaMsg **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2InertiaMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2InertiaMsg(); \
	friend struct Z_Construct_UClass_UROS2InertiaMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2InertiaMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2InertiaMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2InertiaMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2InertiaMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2InertiaMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2InertiaMsg(UROS2InertiaMsg&&) = delete; \
	UROS2InertiaMsg(const UROS2InertiaMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2InertiaMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2InertiaMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2InertiaMsg) \
	NO_API virtual ~UROS2InertiaMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_94_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_97_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2InertiaMsg;

// ********** End Class UROS2InertiaMsg ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
