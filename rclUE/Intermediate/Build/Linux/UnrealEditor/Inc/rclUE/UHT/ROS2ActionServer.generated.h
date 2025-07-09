// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROS2ActionServer.h"

#ifdef RCLUE_ROS2ActionServer_generated_h
#error "ROS2ActionServer.generated.h already included, missing '#pragma once' in ROS2ActionServer.h"
#endif
#define RCLUE_ROS2ActionServer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UROS2ActionServer ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDelegates); \
	DECLARE_FUNCTION(execSendResultResponse); \
	DECLARE_FUNCTION(execSendFeedback); \
	DECLARE_FUNCTION(execSendGoalResponse); \
	DECLARE_FUNCTION(execProcessAndSendCancelResponse);


RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServer_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ActionServer(); \
	friend struct Z_Construct_UClass_UROS2ActionServer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServer_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ActionServer, UROS2Action, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ActionServer_NoRegister) \
	DECLARE_SERIALIZER(UROS2ActionServer)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ActionServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ActionServer(UROS2ActionServer&&) = delete; \
	UROS2ActionServer(const UROS2ActionServer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ActionServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ActionServer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ActionServer) \
	NO_API virtual ~UROS2ActionServer();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_26_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_29_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ActionServer;

// ********** End Class UROS2ActionServer **********************************************************

// ********** Begin Class UROS2ActionServerComponent ***********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDefaultCreateActionServer);


RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServerComponent_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ActionServerComponent(); \
	friend struct Z_Construct_UClass_UROS2ActionServerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ActionServerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ActionServerComponent_NoRegister) \
	DECLARE_SERIALIZER(UROS2ActionServerComponent)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ActionServerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ActionServerComponent(UROS2ActionServerComponent&&) = delete; \
	UROS2ActionServerComponent(const UROS2ActionServerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ActionServerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ActionServerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ActionServerComponent) \
	NO_API virtual ~UROS2ActionServerComponent();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_122_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_125_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ActionServerComponent;

// ********** End Class UROS2ActionServerComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
