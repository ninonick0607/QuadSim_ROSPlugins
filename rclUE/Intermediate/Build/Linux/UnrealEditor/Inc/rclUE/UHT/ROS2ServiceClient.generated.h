// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROS2ServiceClient.h"

#ifdef RCLUE_ROS2ServiceClient_generated_h
#error "ROS2ServiceClient.generated.h already included, missing '#pragma once' in ROS2ServiceClient.h"
#endif
#define RCLUE_ROS2ServiceClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UROS2ServiceClient *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDelegates); \
	DECLARE_FUNCTION(execIsServiceReady); \
	DECLARE_FUNCTION(execSendRequest);


RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClient_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ServiceClient(); \
	friend struct Z_Construct_UClass_UROS2ServiceClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ServiceClient, UROS2Service, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ServiceClient_NoRegister) \
	DECLARE_SERIALIZER(UROS2ServiceClient)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ServiceClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ServiceClient(UROS2ServiceClient&&) = delete; \
	UROS2ServiceClient(const UROS2ServiceClient&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ServiceClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ServiceClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ServiceClient) \
	NO_API virtual ~UROS2ServiceClient();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_29_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_32_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ServiceClient;

// ********** End Class UROS2ServiceClient *********************************************************

// ********** Begin Class UROS2ServiceClientComponent **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDefaultCreateServiceClient);


RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClientComponent_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2ServiceClientComponent(); \
	friend struct Z_Construct_UClass_UROS2ServiceClientComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClientComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2ServiceClientComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2ServiceClientComponent_NoRegister) \
	DECLARE_SERIALIZER(UROS2ServiceClientComponent)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2ServiceClientComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2ServiceClientComponent(UROS2ServiceClientComponent&&) = delete; \
	UROS2ServiceClientComponent(const UROS2ServiceClientComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2ServiceClientComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2ServiceClientComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2ServiceClientComponent) \
	NO_API virtual ~UROS2ServiceClientComponent();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_140_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_143_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2ServiceClientComponent;

// ********** End Class UROS2ServiceClientComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
