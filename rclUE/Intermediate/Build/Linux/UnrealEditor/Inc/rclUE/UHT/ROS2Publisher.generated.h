// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROS2Publisher.h"

#ifdef RCLUE_ROS2Publisher_generated_h
#error "ROS2Publisher.generated.h already included, missing '#pragma once' in ROS2Publisher.h"
#endif
#define RCLUE_ROS2Publisher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UROS2GenericMsg;
class UROS2Publisher;
enum class UROS2QoS : uint8;

// ********** Begin Class UROS2Publisher ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDelegates); \
	DECLARE_FUNCTION(execSetDefaultDelegates); \
	DECLARE_FUNCTION(execUpdateMessage); \
	DECLARE_FUNCTION(execStartPublishTimer); \
	DECLARE_FUNCTION(execStopPublishTimer); \
	DECLARE_FUNCTION(execPublish); \
	DECLARE_FUNCTION(execUpdateAndPublish); \
	DECLARE_FUNCTION(execCreatePublisher); \
	DECLARE_FUNCTION(execCreatePublisherWithClass); \
	DECLARE_FUNCTION(execCreateLoopPublisher); \
	DECLARE_FUNCTION(execCreateLoopPublisherWithClass);


RCLUE_API UClass* Z_Construct_UClass_UROS2Publisher_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Publisher(); \
	friend struct Z_Construct_UClass_UROS2Publisher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Publisher_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Publisher, UROS2Topic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Publisher_NoRegister) \
	DECLARE_SERIALIZER(UROS2Publisher)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Publisher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Publisher(UROS2Publisher&&) = delete; \
	UROS2Publisher(const UROS2Publisher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Publisher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Publisher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2Publisher) \
	NO_API virtual ~UROS2Publisher();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_25_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_28_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Publisher;

// ********** End Class UROS2Publisher *************************************************************

// ********** Begin Class UROS2PublisherComponent **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetParams); \
	DECLARE_FUNCTION(execDefaultCreatePublisher);


RCLUE_API UClass* Z_Construct_UClass_UROS2PublisherComponent_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PublisherComponent(); \
	friend struct Z_Construct_UClass_UROS2PublisherComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PublisherComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PublisherComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PublisherComponent_NoRegister) \
	DECLARE_SERIALIZER(UROS2PublisherComponent)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_219_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PublisherComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PublisherComponent(UROS2PublisherComponent&&) = delete; \
	UROS2PublisherComponent(const UROS2PublisherComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PublisherComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PublisherComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PublisherComponent) \
	NO_API virtual ~UROS2PublisherComponent();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_216_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_219_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PublisherComponent;

// ********** End Class UROS2PublisherComponent ****************************************************

// ********** Begin Class UROS2CustomPublisherComponent ********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_291_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDefaultCreatePublisher);


RCLUE_API UClass* Z_Construct_UClass_UROS2CustomPublisherComponent_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_291_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2CustomPublisherComponent(); \
	friend struct Z_Construct_UClass_UROS2CustomPublisherComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2CustomPublisherComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2CustomPublisherComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2CustomPublisherComponent_NoRegister) \
	DECLARE_SERIALIZER(UROS2CustomPublisherComponent)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_291_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2CustomPublisherComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2CustomPublisherComponent(UROS2CustomPublisherComponent&&) = delete; \
	UROS2CustomPublisherComponent(const UROS2CustomPublisherComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2CustomPublisherComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2CustomPublisherComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2CustomPublisherComponent) \
	NO_API virtual ~UROS2CustomPublisherComponent();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_288_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_291_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_291_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_291_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h_291_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2CustomPublisherComponent;

// ********** End Class UROS2CustomPublisherComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
