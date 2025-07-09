// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/ROS2GenericAction.h"

#ifdef RCLUE_ROS2GenericAction_generated_h
#error "ROS2GenericAction.generated.h already included, missing '#pragma once' in ROS2GenericAction.h"
#endif
#define RCLUE_ROS2GenericAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UROS2GenericAction *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCancelResponseReturnCode); \
	DECLARE_FUNCTION(execActionFeedbackToString); \
	DECLARE_FUNCTION(execActionResultToString); \
	DECLARE_FUNCTION(execActionGoalToString); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GenericAction(); \
	friend struct Z_Construct_UClass_UROS2GenericAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GenericAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GenericAction_NoRegister) \
	DECLARE_SERIALIZER(UROS2GenericAction)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GenericAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GenericAction(UROS2GenericAction&&) = delete; \
	UROS2GenericAction(const UROS2GenericAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GenericAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GenericAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GenericAction) \
	NO_API virtual ~UROS2GenericAction();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h_21_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h_24_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GenericAction;

// ********** End Class UROS2GenericAction *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
