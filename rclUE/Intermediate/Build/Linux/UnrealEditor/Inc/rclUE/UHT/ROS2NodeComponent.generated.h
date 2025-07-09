// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROS2NodeComponent.h"

#ifdef RCLUE_ROS2NodeComponent_generated_h
#error "ROS2NodeComponent.generated.h already included, missing '#pragma once' in ROS2NodeComponent.h"
#endif
#define RCLUE_ROS2NodeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UROS2ActionClient;
class UROS2ActionServer;
class UROS2GenericAction;
class UROS2GenericMsg;
class UROS2GenericSrv;
class UROS2NodeComponent;
class UROS2Publisher;
class UROS2ServiceClient;
class UROS2ServiceServer;
class UROS2Subscriber;
enum class UROS2QoS : uint8;

// ********** Begin Delegate FActionCallback *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_38_DELEGATE \
RCLUE_API void FActionCallback_DelegateWrapper(const FScriptDelegate& ActionCallback, UROS2GenericAction* InAction);


// ********** End Delegate FActionCallback *********************************************************

// ********** Begin Delegate FSimpleCallback *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_39_DELEGATE \
RCLUE_API void FSimpleCallback_DelegateWrapper(const FScriptDelegate& SimpleCallback);


// ********** End Delegate FSimpleCallback *********************************************************

// ********** Begin Delegate FSubscriptionCallback *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_42_DELEGATE \
RCLUE_API void FSubscriptionCallback_DelegateWrapper(const FScriptDelegate& SubscriptionCallback, const UROS2GenericMsg* InMessage);


// ********** End Delegate FSubscriptionCallback ***************************************************

// ********** Begin Delegate FTopicCallback ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_43_DELEGATE \
RCLUE_API void FTopicCallback_DelegateWrapper(const FScriptDelegate& TopicCallback, UROS2GenericMsg* InTopicMessage);


// ********** End Delegate FTopicCallback **********************************************************

// ********** Begin Delegate FServiceCallback ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_44_DELEGATE \
RCLUE_API void FServiceCallback_DelegateWrapper(const FScriptDelegate& ServiceCallback, UROS2GenericSrv* InService);


// ********** End Delegate FServiceCallback ********************************************************

// ********** Begin Class UROS2NodeComponent *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_392_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInvalidateWaitSet); \
	DECLARE_FUNCTION(execHandleActionServers); \
	DECLARE_FUNCTION(execHandleActionClients); \
	DECLARE_FUNCTION(execHandleServiceClients); \
	DECLARE_FUNCTION(execHandleServiceServers); \
	DECLARE_FUNCTION(execHandleSubscriptions); \
	DECLARE_FUNCTION(execSpinSome); \
	DECLARE_FUNCTION(execAddActionServer); \
	DECLARE_FUNCTION(execAddActionClient); \
	DECLARE_FUNCTION(execCreateServiceServer); \
	DECLARE_FUNCTION(execAddServiceServer); \
	DECLARE_FUNCTION(execCreateServiceClient); \
	DECLARE_FUNCTION(execAddServiceClient); \
	DECLARE_FUNCTION(execCreateSubscriber); \
	DECLARE_FUNCTION(execAddSubscription); \
	DECLARE_FUNCTION(execCreatePublisher); \
	DECLARE_FUNCTION(execCreatePublisherWithClass); \
	DECLARE_FUNCTION(execCreateLoopPublisher); \
	DECLARE_FUNCTION(execCreateLoopPublisherWithClass); \
	DECLARE_FUNCTION(execAddPublisher); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execCreateNewNode);


RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_392_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2NodeComponent(); \
	friend struct Z_Construct_UClass_UROS2NodeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2NodeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2NodeComponent_NoRegister) \
	DECLARE_SERIALIZER(UROS2NodeComponent)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_392_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2NodeComponent(UROS2NodeComponent&&) = delete; \
	UROS2NodeComponent(const UROS2NodeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2NodeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2NodeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UROS2NodeComponent) \
	NO_API virtual ~UROS2NodeComponent();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_389_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_392_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_392_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_392_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h_392_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2NodeComponent;

// ********** End Class UROS2NodeComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
