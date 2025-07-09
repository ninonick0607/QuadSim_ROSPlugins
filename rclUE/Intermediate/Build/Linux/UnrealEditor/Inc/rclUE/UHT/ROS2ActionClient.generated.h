// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROS2ActionClient.h"

#ifdef RCLUE_ROS2ActionClient_generated_h
#error "ROS2ActionClient.generated.h already included, missing '#pragma once' in ROS2ActionClient.h"
#endif
#define RCLUE_ROS2ActionClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UROS2ActionClient ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDelegates); \
	DECLARE_FUNCTION(execSendCancelRequest); \
	DECLARE_FUNCTION(execSendResultRequest); \
	DECLARE_FUNCTION(execSendGoal);


RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClient_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ActionClient(); \
	friend struct Z_Construct_UClass_UROS2ActionClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ActionClient, UROS2Action, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ActionClient_NoRegister) \
	DECLARE_SERIALIZER(UROS2ActionClient)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ActionClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ActionClient(UROS2ActionClient&&) = delete; \
	UROS2ActionClient(const UROS2ActionClient&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ActionClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ActionClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ActionClient) \
	NO_API virtual ~UROS2ActionClient();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_25_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_28_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ActionClient;

// ********** End Class UROS2ActionClient **********************************************************

// ********** Begin Class UROS2ActionClientComponent ***********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDefaultCreateActionClient);


RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClientComponent_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ActionClientComponent(); \
	friend struct Z_Construct_UClass_UROS2ActionClientComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClientComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ActionClientComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ActionClientComponent_NoRegister) \
	DECLARE_SERIALIZER(UROS2ActionClientComponent)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ActionClientComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ActionClientComponent(UROS2ActionClientComponent&&) = delete; \
	UROS2ActionClientComponent(const UROS2ActionClientComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ActionClientComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ActionClientComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ActionClientComponent) \
	NO_API virtual ~UROS2ActionClientComponent();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_151_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_154_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ActionClientComponent;

// ********** End Class UROS2ActionClientComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
