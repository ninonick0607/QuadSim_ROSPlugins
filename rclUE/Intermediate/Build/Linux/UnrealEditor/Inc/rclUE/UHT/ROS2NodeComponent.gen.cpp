// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2NodeComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2NodeComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClient_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServer_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Publisher_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClient_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceServer_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Subscriber_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Support_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2State();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FActionCallback *******************************************************
struct Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics
{
	struct _Script_rclUE_eventActionCallback_Parms
	{
		UROS2GenericAction* InAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Action*/" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::NewProp_InAction = { "InAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_rclUE_eventActionCallback_Parms, InAction), Z_Construct_UClass_UROS2GenericAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::NewProp_InAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_rclUE, nullptr, "ActionCallback__DelegateSignature", Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::_Script_rclUE_eventActionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::_Script_rclUE_eventActionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActionCallback_DelegateWrapper(const FScriptDelegate& ActionCallback, UROS2GenericAction* InAction)
{
	struct _Script_rclUE_eventActionCallback_Parms
	{
		UROS2GenericAction* InAction;
	};
	_Script_rclUE_eventActionCallback_Parms Parms;
	Parms.InAction=InAction;
	ActionCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FActionCallback *********************************************************

// ********** Begin Delegate FSimpleCallback *******************************************************
struct Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_rclUE, nullptr, "SimpleCallback__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSimpleCallback_DelegateWrapper(const FScriptDelegate& SimpleCallback)
{
	SimpleCallback.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FSimpleCallback *********************************************************

// ********** Begin Delegate FSubscriptionCallback *************************************************
struct Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics
{
	struct _Script_rclUE_eventSubscriptionCallback_Parms
	{
		const UROS2GenericMsg* InMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! BP requires a custom-made callback thus it must be Dynamic\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! BP requires a custom-made callback thus it must be Dynamic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_rclUE_eventSubscriptionCallback_Parms, InMessage), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMessage_MetaData), NewProp_InMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_rclUE, nullptr, "SubscriptionCallback__DelegateSignature", Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::_Script_rclUE_eventSubscriptionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::_Script_rclUE_eventSubscriptionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSubscriptionCallback_DelegateWrapper(const FScriptDelegate& SubscriptionCallback, const UROS2GenericMsg* InMessage)
{
	struct _Script_rclUE_eventSubscriptionCallback_Parms
	{
		const UROS2GenericMsg* InMessage;
	};
	_Script_rclUE_eventSubscriptionCallback_Parms Parms;
	Parms.InMessage=InMessage;
	SubscriptionCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FSubscriptionCallback ***************************************************

// ********** Begin Delegate FTopicCallback ********************************************************
struct Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics
{
	struct _Script_rclUE_eventTopicCallback_Parms
	{
		UROS2GenericMsg* InTopicMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTopicMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::NewProp_InTopicMessage = { "InTopicMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_rclUE_eventTopicCallback_Parms, InTopicMessage), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::NewProp_InTopicMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_rclUE, nullptr, "TopicCallback__DelegateSignature", Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::_Script_rclUE_eventTopicCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::_Script_rclUE_eventTopicCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTopicCallback_DelegateWrapper(const FScriptDelegate& TopicCallback, UROS2GenericMsg* InTopicMessage)
{
	struct _Script_rclUE_eventTopicCallback_Parms
	{
		UROS2GenericMsg* InTopicMessage;
	};
	_Script_rclUE_eventTopicCallback_Parms Parms;
	Parms.InTopicMessage=InTopicMessage;
	TopicCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FTopicCallback **********************************************************

// ********** Begin Delegate FServiceCallback ******************************************************
struct Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics
{
	struct _Script_rclUE_eventServiceCallback_Parms
	{
		UROS2GenericSrv* InService;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Service*/" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InService;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::NewProp_InService = { "InService", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_rclUE_eventServiceCallback_Parms, InService), Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::NewProp_InService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_rclUE, nullptr, "ServiceCallback__DelegateSignature", Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::_Script_rclUE_eventServiceCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::_Script_rclUE_eventServiceCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FServiceCallback_DelegateWrapper(const FScriptDelegate& ServiceCallback, UROS2GenericSrv* InService)
{
	struct _Script_rclUE_eventServiceCallback_Parms
	{
		UROS2GenericSrv* InService;
	};
	_Script_rclUE_eventServiceCallback_Parms Parms;
	Parms.InService=InService;
	ServiceCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FServiceCallback ********************************************************

// ********** Begin Class UROS2NodeComponent Function AddActionClient ******************************
struct Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics
{
	struct ROS2NodeComponent_eventAddActionClient_Parms
	{
		UROS2ActionClient* InActionClient;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set this node to #UROS2ActionClient::OwnerNode and add to #ActionClients.\n     *\n     * @param InActionClient\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set this node to #UROS2ActionClient::OwnerNode and add to #ActionClients.\n\n@param InActionClient" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActionClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::NewProp_InActionClient = { "InActionClient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventAddActionClient_Parms, InActionClient), Z_Construct_UClass_UROS2ActionClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::NewProp_InActionClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "AddActionClient", Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::ROS2NodeComponent_eventAddActionClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::ROS2NodeComponent_eventAddActionClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_AddActionClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_AddActionClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execAddActionClient)
{
	P_GET_OBJECT(UROS2ActionClient,Z_Param_InActionClient);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActionClient(Z_Param_InActionClient);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function AddActionClient ********************************

// ********** Begin Class UROS2NodeComponent Function AddActionServer ******************************
struct Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics
{
	struct ROS2NodeComponent_eventAddActionServer_Parms
	{
		UROS2ActionServer* InActionServer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set this node to #UROS2ActionClient::OwnerNode and add to #ActionServers.\n     *\n     * @param InActionServer\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set this node to #UROS2ActionClient::OwnerNode and add to #ActionServers.\n\n@param InActionServer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActionServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::NewProp_InActionServer = { "InActionServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventAddActionServer_Parms, InActionServer), Z_Construct_UClass_UROS2ActionServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::NewProp_InActionServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "AddActionServer", Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::ROS2NodeComponent_eventAddActionServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::ROS2NodeComponent_eventAddActionServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_AddActionServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_AddActionServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execAddActionServer)
{
	P_GET_OBJECT(UROS2ActionServer,Z_Param_InActionServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActionServer(Z_Param_InActionServer);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function AddActionServer ********************************

// ********** Begin Class UROS2NodeComponent Function AddPublisher *********************************
struct Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics
{
	struct ROS2NodeComponent_eventAddPublisher_Parms
	{
		UROS2Publisher* InPublisher;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set this node to #UROS2Publisher::OwnerNode of InPublisher and add to #Publishers.\n     *\n     * @param InPublisher\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set this node to #UROS2Publisher::OwnerNode of InPublisher and add to #Publishers.\n\n@param InPublisher" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPublisher;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::NewProp_InPublisher = { "InPublisher", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventAddPublisher_Parms, InPublisher), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::NewProp_InPublisher,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "AddPublisher", Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::ROS2NodeComponent_eventAddPublisher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::ROS2NodeComponent_eventAddPublisher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_AddPublisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_AddPublisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execAddPublisher)
{
	P_GET_OBJECT(UROS2Publisher,Z_Param_InPublisher);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPublisher(Z_Param_InPublisher);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function AddPublisher ***********************************

// ********** Begin Class UROS2NodeComponent Function AddServiceClient *****************************
struct Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics
{
	struct ROS2NodeComponent_eventAddServiceClient_Parms
	{
		UROS2ServiceClient* InServiceClient;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set this node to #UROS2ServiceClient::OwnerNode and add to #ServiceClients.\n     *\n     * @param InClient\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set this node to #UROS2ServiceClient::OwnerNode and add to #ServiceClients.\n\n@param InClient" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InServiceClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::NewProp_InServiceClient = { "InServiceClient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventAddServiceClient_Parms, InServiceClient), Z_Construct_UClass_UROS2ServiceClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::NewProp_InServiceClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "AddServiceClient", Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::ROS2NodeComponent_eventAddServiceClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::ROS2NodeComponent_eventAddServiceClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execAddServiceClient)
{
	P_GET_OBJECT(UROS2ServiceClient,Z_Param_InServiceClient);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddServiceClient(Z_Param_InServiceClient);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function AddServiceClient *******************************

// ********** Begin Class UROS2NodeComponent Function AddServiceServer *****************************
struct Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics
{
	struct ROS2NodeComponent_eventAddServiceServer_Parms
	{
		UROS2ServiceServer* InServiceServer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create ServiceServer with rcl_service_init and add to #ServiceServers.\n     *\n     * @param ServiceName\n     * @param SrvClass\n     * @param Callback\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create ServiceServer with rcl_service_init and add to #ServiceServers.\n\n@param ServiceName\n@param SrvClass\n@param Callback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InServiceServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::NewProp_InServiceServer = { "InServiceServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventAddServiceServer_Parms, InServiceServer), Z_Construct_UClass_UROS2ServiceServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::NewProp_InServiceServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "AddServiceServer", Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::ROS2NodeComponent_eventAddServiceServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::ROS2NodeComponent_eventAddServiceServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execAddServiceServer)
{
	P_GET_OBJECT(UROS2ServiceServer,Z_Param_InServiceServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddServiceServer(Z_Param_InServiceServer);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function AddServiceServer *******************************

// ********** Begin Class UROS2NodeComponent Function AddSubscription ******************************
struct Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics
{
	struct ROS2NodeComponent_eventAddSubscription_Parms
	{
		UROS2Subscriber* InSubscriber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Methods to register subscribers.\n     * @param TopicName\n     * @param MsgClass\n     * @param Callback\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Methods to register subscribers.\n@param TopicName\n@param MsgClass\n@param Callback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSubscriber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::NewProp_InSubscriber = { "InSubscriber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventAddSubscription_Parms, InSubscriber), Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::NewProp_InSubscriber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "AddSubscription", Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::ROS2NodeComponent_eventAddSubscription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::ROS2NodeComponent_eventAddSubscription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_AddSubscription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_AddSubscription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execAddSubscription)
{
	P_GET_OBJECT(UROS2Subscriber,Z_Param_InSubscriber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSubscription(Z_Param_InSubscriber);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function AddSubscription ********************************

// ********** Begin Class UROS2NodeComponent Function CreateLoopPublisher **************************
struct Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics
{
	struct ROS2NodeComponent_eventCreateLoopPublisher_Parms
	{
		FString InTopicName;
		const TSubclassOf<UROS2Publisher> InPublisherClass;
		const TSubclassOf<UROS2GenericMsg> InMsgClass;
		float InPubFrequency;
		FScriptDelegate InUpdateDelegate;
		UROS2QoS InQoS;
		UROS2Publisher* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new #UROS2Publisher and add to Node.\n     *\n     * @param InTopicName Topic name\n     * @param InPublisherClass Custom output publisher type class\n     * @param InMsgClass Custom message type class\n     * @param InPubFrequency Publishing frequency\n     * @param InUpdateDelegate Delegate which is called with given frequency.\n     * @param InQoS QoS. Default is #UROS2QoS::Default\n     */" },
#endif
		{ "CPP_Default_InQoS", "Default" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new #UROS2Publisher and add to Node.\n\n@param InTopicName Topic name\n@param InPublisherClass Custom output publisher type class\n@param InMsgClass Custom message type class\n@param InPubFrequency Publishing frequency\n@param InUpdateDelegate Delegate which is called with given frequency.\n@param InQoS QoS. Default is #UROS2QoS::Default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTopicName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPublisherClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsgClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPubFrequency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUpdateDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPublisherClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InMsgClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPubFrequency;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InUpdateDelegate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisher_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InPublisherClass = { "InPublisherClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisher_Parms, InPublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPublisherClass_MetaData), NewProp_InPublisherClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InMsgClass = { "InMsgClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisher_Parms, InMsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsgClass_MetaData), NewProp_InMsgClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InPubFrequency = { "InPubFrequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisher_Parms, InPubFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPubFrequency_MetaData), NewProp_InPubFrequency_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InUpdateDelegate = { "InUpdateDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisher_Parms, InUpdateDelegate), Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUpdateDelegate_MetaData), NewProp_InUpdateDelegate_MetaData) }; // 3082268729
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisher_Parms, InQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InQoS_MetaData), NewProp_InQoS_MetaData) }; // 314065690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisher_Parms, ReturnValue), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InPublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InMsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InPubFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_InQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "CreateLoopPublisher", Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::ROS2NodeComponent_eventCreateLoopPublisher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::ROS2NodeComponent_eventCreateLoopPublisher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execCreateLoopPublisher)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2Publisher>,Z_Param_Out_InPublisherClass);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2GenericMsg>,Z_Param_Out_InMsgClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPubFrequency);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InUpdateDelegate);
	P_GET_ENUM(UROS2QoS,Z_Param_InQoS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Publisher**)Z_Param__Result=P_THIS->CreateLoopPublisher(Z_Param_InTopicName,Z_Param_Out_InPublisherClass,Z_Param_Out_InMsgClass,Z_Param_InPubFrequency,FTopicCallback(Z_Param_Out_InUpdateDelegate),UROS2QoS(Z_Param_InQoS));
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function CreateLoopPublisher ****************************

// ********** Begin Class UROS2NodeComponent Function CreateLoopPublisherWithClass *****************
struct Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics
{
	struct ROS2NodeComponent_eventCreateLoopPublisherWithClass_Parms
	{
		FString InTopicName;
		const TSubclassOf<UROS2Publisher> InPublisherClass;
		float InPubFrequency;
		UROS2Publisher* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new #UROS2Publisher of custom publisher class and add to Node.\n     * Custom Publisher class is expected to override #UROS2Publisher::Update which in loop with frequency.\n     * @param InTopicName Topic name\n     * @param InPublisherClass Custom output publisher type class\n     * @param InPubFrequency Publishing frequency\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new #UROS2Publisher of custom publisher class and add to Node.\nCustom Publisher class is expected to override #UROS2Publisher::Update which in loop with frequency.\n@param InTopicName Topic name\n@param InPublisherClass Custom output publisher type class\n@param InPubFrequency Publishing frequency" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTopicName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPublisherClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPubFrequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPublisherClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPubFrequency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisherWithClass_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::NewProp_InPublisherClass = { "InPublisherClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisherWithClass_Parms, InPublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPublisherClass_MetaData), NewProp_InPublisherClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::NewProp_InPubFrequency = { "InPubFrequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisherWithClass_Parms, InPubFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPubFrequency_MetaData), NewProp_InPubFrequency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateLoopPublisherWithClass_Parms, ReturnValue), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::NewProp_InPublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::NewProp_InPubFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "CreateLoopPublisherWithClass", Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::ROS2NodeComponent_eventCreateLoopPublisherWithClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::ROS2NodeComponent_eventCreateLoopPublisherWithClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execCreateLoopPublisherWithClass)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2Publisher>,Z_Param_Out_InPublisherClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPubFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Publisher**)Z_Param__Result=P_THIS->CreateLoopPublisherWithClass(Z_Param_InTopicName,Z_Param_Out_InPublisherClass,Z_Param_InPubFrequency);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function CreateLoopPublisherWithClass *******************

// ********** Begin Class UROS2NodeComponent Function CreateNewNode ********************************
struct Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics
{
	struct ROS2NodeComponent_eventCreateNewNode_Parms
	{
		UObject* InOwner;
		FString InNodeName;
		FString InNodeNamespace;
		FString InCompName;
		bool Init;
		UROS2NodeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a New Node object.\n     * Used outside of  constructor.\n     * @param InNodeName\n     * @param InNodeNamespace\n     * @param InCompName\n     * @return UROS2NodeComponent*\n     */" },
#endif
		{ "CPP_Default_InCompName", "ROS2NodeComponent" },
		{ "CPP_Default_Init", "true" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a New Node object.\nUsed outside of  constructor.\n@param InNodeName\n@param InNodeNamespace\n@param InCompName\n@return UROS2NodeComponent*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeNamespace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCompName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Init_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNodeNamespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCompName;
	static void NewProp_Init_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Init;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateNewNode_Parms, InOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_InNodeName = { "InNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateNewNode_Parms, InNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeName_MetaData), NewProp_InNodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_InNodeNamespace = { "InNodeNamespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateNewNode_Parms, InNodeNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeNamespace_MetaData), NewProp_InNodeNamespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_InCompName = { "InCompName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateNewNode_Parms, InCompName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCompName_MetaData), NewProp_InCompName_MetaData) };
void Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_Init_SetBit(void* Obj)
{
	((ROS2NodeComponent_eventCreateNewNode_Parms*)Obj)->Init = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_Init = { "Init", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2NodeComponent_eventCreateNewNode_Parms), &Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_Init_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Init_MetaData), NewProp_Init_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateNewNode_Parms, ReturnValue), Z_Construct_UClass_UROS2NodeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_InNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_InNodeNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_InCompName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_Init,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "CreateNewNode", Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::ROS2NodeComponent_eventCreateNewNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::ROS2NodeComponent_eventCreateNewNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execCreateNewNode)
{
	P_GET_OBJECT(UObject,Z_Param_InOwner);
	P_GET_PROPERTY(FStrProperty,Z_Param_InNodeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InNodeNamespace);
	P_GET_PROPERTY(FStrProperty,Z_Param_InCompName);
	P_GET_UBOOL(Z_Param_Init);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2NodeComponent**)Z_Param__Result=UROS2NodeComponent::CreateNewNode(Z_Param_InOwner,Z_Param_InNodeName,Z_Param_InNodeNamespace,Z_Param_InCompName,Z_Param_Init);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function CreateNewNode **********************************

// ********** Begin Class UROS2NodeComponent Function CreatePublisher ******************************
struct Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics
{
	struct ROS2NodeComponent_eventCreatePublisher_Parms
	{
		FString InTopicName;
		const TSubclassOf<UROS2Publisher> InPublisherClass;
		const TSubclassOf<UROS2GenericMsg> InMsgClass;
		UROS2QoS InQoS;
		UROS2Publisher* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new #UROS2Publisher and add to Node.\n     *\n     * @param InTopicName Topic name\n     * @param InPublisherClass Custom output publisher type class\n     * @param InMsgClass Custom message type class\n     * @param InQoS QoS. Default is #UROS2QoS::Default\n     */" },
#endif
		{ "CPP_Default_InQoS", "Default" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new #UROS2Publisher and add to Node.\n\n@param InTopicName Topic name\n@param InPublisherClass Custom output publisher type class\n@param InMsgClass Custom message type class\n@param InQoS QoS. Default is #UROS2QoS::Default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTopicName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPublisherClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsgClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPublisherClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InMsgClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreatePublisher_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InPublisherClass = { "InPublisherClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreatePublisher_Parms, InPublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPublisherClass_MetaData), NewProp_InPublisherClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InMsgClass = { "InMsgClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreatePublisher_Parms, InMsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsgClass_MetaData), NewProp_InMsgClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreatePublisher_Parms, InQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InQoS_MetaData), NewProp_InQoS_MetaData) }; // 314065690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreatePublisher_Parms, ReturnValue), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InPublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InMsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_InQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "CreatePublisher", Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::ROS2NodeComponent_eventCreatePublisher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::ROS2NodeComponent_eventCreatePublisher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execCreatePublisher)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2Publisher>,Z_Param_Out_InPublisherClass);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2GenericMsg>,Z_Param_Out_InMsgClass);
	P_GET_ENUM(UROS2QoS,Z_Param_InQoS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Publisher**)Z_Param__Result=P_THIS->CreatePublisher(Z_Param_InTopicName,Z_Param_Out_InPublisherClass,Z_Param_Out_InMsgClass,UROS2QoS(Z_Param_InQoS));
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function CreatePublisher ********************************

// ********** Begin Class UROS2NodeComponent Function CreatePublisherWithClass *********************
struct Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics
{
	struct ROS2NodeComponent_eventCreatePublisherWithClass_Parms
	{
		const TSubclassOf<UROS2Publisher> InPublisherClass;
		FString InTopicName;
		UROS2Publisher* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new #UROS2Publisher of custom publisher class and add to Node.\n     *\n     * @param InPublisherClass\n     * @param InTopicName\n     * @return UROS2Publisher*\n     */" },
#endif
		{ "CPP_Default_InTopicName", "" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new #UROS2Publisher of custom publisher class and add to Node.\n\n@param InPublisherClass\n@param InTopicName\n@return UROS2Publisher*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPublisherClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTopicName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPublisherClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTopicName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::NewProp_InPublisherClass = { "InPublisherClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreatePublisherWithClass_Parms, InPublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPublisherClass_MetaData), NewProp_InPublisherClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreatePublisherWithClass_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreatePublisherWithClass_Parms, ReturnValue), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::NewProp_InPublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "CreatePublisherWithClass", Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::ROS2NodeComponent_eventCreatePublisherWithClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::ROS2NodeComponent_eventCreatePublisherWithClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execCreatePublisherWithClass)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2Publisher>,Z_Param_Out_InPublisherClass);
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Publisher**)Z_Param__Result=P_THIS->CreatePublisherWithClass(Z_Param_Out_InPublisherClass,Z_Param_InTopicName);
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function CreatePublisherWithClass ***********************

// ********** Begin Class UROS2NodeComponent Function CreateServiceClient **************************
struct Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics
{
	struct ROS2NodeComponent_eventCreateServiceClient_Parms
	{
		FString InServiceName;
		const TSubclassOf<UROS2GenericSrv> InSrvClass;
		FScriptDelegate InResponseDelegate;
		UROS2QoS InQoS;
		UROS2ServiceClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new #UROS2ServiceClient and add to Node.\n     *\n     * @param InServiceName\n     * @param InSrvClass\n     * @param InRequestDelegate\n     * @param InResponseDelegate\n     * @param InQoS QoS. Default is #UROS2QoS::Default\n     * @return UROS2NodeComponent*\n     */" },
#endif
		{ "CPP_Default_InQoS", "Services" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new #UROS2ServiceClient and add to Node.\n\n@param InServiceName\n@param InSrvClass\n@param InRequestDelegate\n@param InResponseDelegate\n@param InQoS QoS. Default is #UROS2QoS::Default\n@return UROS2NodeComponent*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InServiceName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSrvClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InServiceName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InSrvClass;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InResponseDelegate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InServiceName = { "InServiceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceClient_Parms, InServiceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InServiceName_MetaData), NewProp_InServiceName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InSrvClass = { "InSrvClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceClient_Parms, InSrvClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSrvClass_MetaData), NewProp_InSrvClass_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InResponseDelegate = { "InResponseDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceClient_Parms, InResponseDelegate), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InResponseDelegate_MetaData), NewProp_InResponseDelegate_MetaData) }; // 1854847413
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceClient_Parms, InQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InQoS_MetaData), NewProp_InQoS_MetaData) }; // 314065690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceClient_Parms, ReturnValue), Z_Construct_UClass_UROS2ServiceClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InServiceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InSrvClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InResponseDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_InQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "CreateServiceClient", Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::ROS2NodeComponent_eventCreateServiceClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::ROS2NodeComponent_eventCreateServiceClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execCreateServiceClient)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InServiceName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2GenericSrv>,Z_Param_Out_InSrvClass);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InResponseDelegate);
	P_GET_ENUM(UROS2QoS,Z_Param_InQoS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2ServiceClient**)Z_Param__Result=P_THIS->CreateServiceClient(Z_Param_InServiceName,Z_Param_Out_InSrvClass,FServiceCallback(Z_Param_Out_InResponseDelegate),UROS2QoS(Z_Param_InQoS));
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function CreateServiceClient ****************************

// ********** Begin Class UROS2NodeComponent Function CreateServiceServer **************************
struct Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics
{
	struct ROS2NodeComponent_eventCreateServiceServer_Parms
	{
		FString InServiceName;
		const TSubclassOf<UROS2GenericSrv> InSrvClass;
		FScriptDelegate InCallback;
		UROS2QoS InQoS;
		UROS2ServiceServer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new #UROS2ServiceServer and add to Node.\n     *\n     * @param InTopicName Topic name\n     * @param InSrvClass Custom message type class\n     * @param InCallback Callback function\n     */" },
#endif
		{ "CPP_Default_InQoS", "Services" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new #UROS2ServiceServer and add to Node.\n\n@param InTopicName Topic name\n@param InSrvClass Custom message type class\n@param InCallback Callback function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InServiceName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSrvClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InServiceName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InSrvClass;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InServiceName = { "InServiceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceServer_Parms, InServiceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InServiceName_MetaData), NewProp_InServiceName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InSrvClass = { "InSrvClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceServer_Parms, InSrvClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSrvClass_MetaData), NewProp_InSrvClass_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceServer_Parms, InCallback), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCallback_MetaData), NewProp_InCallback_MetaData) }; // 1854847413
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceServer_Parms, InQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InQoS_MetaData), NewProp_InQoS_MetaData) }; // 314065690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateServiceServer_Parms, ReturnValue), Z_Construct_UClass_UROS2ServiceServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InServiceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InSrvClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_InQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "CreateServiceServer", Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::ROS2NodeComponent_eventCreateServiceServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::ROS2NodeComponent_eventCreateServiceServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execCreateServiceServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InServiceName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2GenericSrv>,Z_Param_Out_InSrvClass);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
	P_GET_ENUM(UROS2QoS,Z_Param_InQoS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2ServiceServer**)Z_Param__Result=P_THIS->CreateServiceServer(Z_Param_InServiceName,Z_Param_Out_InSrvClass,FServiceCallback(Z_Param_Out_InCallback),UROS2QoS(Z_Param_InQoS));
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function CreateServiceServer ****************************

// ********** Begin Class UROS2NodeComponent Function CreateSubscriber *****************************
struct Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics
{
	struct ROS2NodeComponent_eventCreateSubscriber_Parms
	{
		FString InTopicName;
		const TSubclassOf<UROS2GenericMsg> InMsgClass;
		FScriptDelegate InCallback;
		UROS2QoS InQoS;
		UROS2Subscriber* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new #UROS2Subscriber and add to Node.\n     *\n     * @param InTopicName\n     * @param InMsgClass\n     * @param InCallback\n     * @return UROS2Subscriber*\n     */" },
#endif
		{ "CPP_Default_InQoS", "Default" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new #UROS2Subscriber and add to Node.\n\n@param InTopicName\n@param InMsgClass\n@param InCallback\n@return UROS2Subscriber*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTopicName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsgClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InMsgClass;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateSubscriber_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InMsgClass = { "InMsgClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateSubscriber_Parms, InMsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsgClass_MetaData), NewProp_InMsgClass_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateSubscriber_Parms, InCallback), Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCallback_MetaData), NewProp_InCallback_MetaData) }; // 2107730569
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateSubscriber_Parms, InQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InQoS_MetaData), NewProp_InQoS_MetaData) }; // 314065690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NodeComponent_eventCreateSubscriber_Parms, ReturnValue), Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InMsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_InQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "CreateSubscriber", Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::ROS2NodeComponent_eventCreateSubscriber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::ROS2NodeComponent_eventCreateSubscriber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execCreateSubscriber)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2GenericMsg>,Z_Param_Out_InMsgClass);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
	P_GET_ENUM(UROS2QoS,Z_Param_InQoS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Subscriber**)Z_Param__Result=P_THIS->CreateSubscriber(Z_Param_InTopicName,Z_Param_Out_InMsgClass,FSubscriptionCallback(Z_Param_Out_InCallback),UROS2QoS(Z_Param_InQoS));
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function CreateSubscriber *******************************

// ********** Begin Class UROS2NodeComponent Function HandleActionClients **************************
struct Z_Construct_UFunction_UROS2NodeComponent_HandleActionClients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief based on _rclc_default_scheduling of the rclc executor.\n     * Called inside #SpinSome. rcl_take_response_with_info to get response and execute Callback.\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief based on _rclc_default_scheduling of the rclc executor.\nCalled inside #SpinSome. rcl_take_response_with_info to get response and execute Callback." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_HandleActionClients_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "HandleActionClients", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_HandleActionClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_HandleActionClients_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2NodeComponent_HandleActionClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_HandleActionClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execHandleActionClients)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActionClients();
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function HandleActionClients ****************************

// ********** Begin Class UROS2NodeComponent Function HandleActionServers **************************
struct Z_Construct_UFunction_UROS2NodeComponent_HandleActionServers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief based on _rclc_default_scheduling of the rclc executor.\n     * Called inside #SpinSome. rcl_take_response_with_info to get response and execute Callback.\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief based on _rclc_default_scheduling of the rclc executor.\nCalled inside #SpinSome. rcl_take_response_with_info to get response and execute Callback." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_HandleActionServers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "HandleActionServers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_HandleActionServers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_HandleActionServers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2NodeComponent_HandleActionServers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_HandleActionServers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execHandleActionServers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActionServers();
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function HandleActionServers ****************************

// ********** Begin Class UROS2NodeComponent Function HandleServiceClients *************************
struct Z_Construct_UFunction_UROS2NodeComponent_HandleServiceClients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief based on _rclc_default_scheduling of the rclc executor.\n     * Called inside #SpinSome. rcl_take_response_with_info to get response and execute Callback.\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief based on _rclc_default_scheduling of the rclc executor.\nCalled inside #SpinSome. rcl_take_response_with_info to get response and execute Callback." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_HandleServiceClients_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "HandleServiceClients", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_HandleServiceClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_HandleServiceClients_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2NodeComponent_HandleServiceClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_HandleServiceClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execHandleServiceClients)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleServiceClients();
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function HandleServiceClients ***************************

// ********** Begin Class UROS2NodeComponent Function HandleServiceServers *************************
struct Z_Construct_UFunction_UROS2NodeComponent_HandleServiceServers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief based on _rclc_default_scheduling of the rclc executor.\n     * Called inside #SpinSome. rcl_take_request_with_info to get request, execute Callback and rcl_send_response to send response\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief based on _rclc_default_scheduling of the rclc executor.\nCalled inside #SpinSome. rcl_take_request_with_info to get request, execute Callback and rcl_send_response to send response" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_HandleServiceServers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "HandleServiceServers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_HandleServiceServers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_HandleServiceServers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2NodeComponent_HandleServiceServers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_HandleServiceServers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execHandleServiceServers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleServiceServers();
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function HandleServiceServers ***************************

// ********** Begin Class UROS2NodeComponent Function HandleSubscriptions **************************
struct Z_Construct_UFunction_UROS2NodeComponent_HandleSubscriptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief based on _rclc_default_scheduling of the rclc executor.\n     * Called inside #SpinSome. rcl_take to get topic and execute Callback.\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief based on _rclc_default_scheduling of the rclc executor.\nCalled inside #SpinSome. rcl_take to get topic and execute Callback." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_HandleSubscriptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "HandleSubscriptions", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_HandleSubscriptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_HandleSubscriptions_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2NodeComponent_HandleSubscriptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_HandleSubscriptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execHandleSubscriptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSubscriptions();
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function HandleSubscriptions ****************************

// ********** Begin Class UROS2NodeComponent Function Init *****************************************
struct Z_Construct_UFunction_UROS2NodeComponent_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Initilize rosnode with rclc_node_init_default\n     * This can't be pre-placed in #UROS2NodeComponent::BeginPlay() as the order of rcl(c) instructions could be different/relevant\n     * in each of Child classes\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Initilize rosnode with rclc_node_init_default\nThis can't be pre-placed in #UROS2NodeComponent::BeginPlay() as the order of rcl(c) instructions could be different/relevant\nin each of Child classes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2NodeComponent_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function Init *******************************************

// ********** Begin Class UROS2NodeComponent Function InvalidateWaitSet ****************************
struct Z_Construct_UFunction_UROS2NodeComponent_InvalidateWaitSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief invalidate #wait_set so that in next spin_some() call the\n     * #wait_set is updated accordingly in #SpinSome\n     * @sa  [rclc_executor_add_subscription_with_context in\n     * rclc/executor.c](https://github.com/ros2/rclc/blob/243ee63ca369f0fb90397ba9ae0ca1283ab16ad3/rclc/src/rclc/executor.c#L207)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief invalidate #wait_set so that in next spin_some() call the\n#wait_set is updated accordingly in #SpinSome\n@sa  [rclc_executor_add_subscription_with_context in\nrclc/executor.c](https://github.com/ros2/rclc/blob/243ee63ca369f0fb90397ba9ae0ca1283ab16ad3/rclc/src/rclc/executor.c#L207)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_InvalidateWaitSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "InvalidateWaitSet", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_InvalidateWaitSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_InvalidateWaitSet_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2NodeComponent_InvalidateWaitSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_InvalidateWaitSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execInvalidateWaitSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvalidateWaitSet();
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function InvalidateWaitSet ******************************

// ********** Begin Class UROS2NodeComponent Function SpinSome *************************************
struct Z_Construct_UFunction_UROS2NodeComponent_SpinSome_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief method used to wait on communication and call delegates when appropriate modeled after executor + actions.\n     * @sa [rclc_executor_spin_some in\n     * rclc/executor.c](https://github.com/ros2/rclc/blob/243ee63ca369f0fb90397ba9ae0ca1283ab16ad3/rclc/src/rclc/executor.c#L1802)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief method used to wait on communication and call delegates when appropriate modeled after executor + actions.\n@sa [rclc_executor_spin_some in\nrclc/executor.c](https://github.com/ros2/rclc/blob/243ee63ca369f0fb90397ba9ae0ca1283ab16ad3/rclc/src/rclc/executor.c#L1802)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NodeComponent_SpinSome_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NodeComponent, nullptr, "SpinSome", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NodeComponent_SpinSome_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NodeComponent_SpinSome_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2NodeComponent_SpinSome()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NodeComponent_SpinSome_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NodeComponent::execSpinSome)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpinSome();
	P_NATIVE_END;
}
// ********** End Class UROS2NodeComponent Function SpinSome ***************************************

// ********** Begin Class UROS2NodeComponent *******************************************************
void UROS2NodeComponent::StaticRegisterNativesUROS2NodeComponent()
{
	UClass* Class = UROS2NodeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActionClient", &UROS2NodeComponent::execAddActionClient },
		{ "AddActionServer", &UROS2NodeComponent::execAddActionServer },
		{ "AddPublisher", &UROS2NodeComponent::execAddPublisher },
		{ "AddServiceClient", &UROS2NodeComponent::execAddServiceClient },
		{ "AddServiceServer", &UROS2NodeComponent::execAddServiceServer },
		{ "AddSubscription", &UROS2NodeComponent::execAddSubscription },
		{ "CreateLoopPublisher", &UROS2NodeComponent::execCreateLoopPublisher },
		{ "CreateLoopPublisherWithClass", &UROS2NodeComponent::execCreateLoopPublisherWithClass },
		{ "CreateNewNode", &UROS2NodeComponent::execCreateNewNode },
		{ "CreatePublisher", &UROS2NodeComponent::execCreatePublisher },
		{ "CreatePublisherWithClass", &UROS2NodeComponent::execCreatePublisherWithClass },
		{ "CreateServiceClient", &UROS2NodeComponent::execCreateServiceClient },
		{ "CreateServiceServer", &UROS2NodeComponent::execCreateServiceServer },
		{ "CreateSubscriber", &UROS2NodeComponent::execCreateSubscriber },
		{ "HandleActionClients", &UROS2NodeComponent::execHandleActionClients },
		{ "HandleActionServers", &UROS2NodeComponent::execHandleActionServers },
		{ "HandleServiceClients", &UROS2NodeComponent::execHandleServiceClients },
		{ "HandleServiceServers", &UROS2NodeComponent::execHandleServiceServers },
		{ "HandleSubscriptions", &UROS2NodeComponent::execHandleSubscriptions },
		{ "Init", &UROS2NodeComponent::execInit },
		{ "InvalidateWaitSet", &UROS2NodeComponent::execInvalidateWaitSet },
		{ "SpinSome", &UROS2NodeComponent::execSpinSome },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2NodeComponent;
UClass* UROS2NodeComponent::GetPrivateStaticClass()
{
	using TClass = UROS2NodeComponent;
	if (!Z_Registration_Info_UClass_UROS2NodeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2NodeComponent"),
			Z_Registration_Info_UClass_UROS2NodeComponent.InnerSingleton,
			StaticRegisterNativesUROS2NodeComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UROS2NodeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister()
{
	return UROS2NodeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2NodeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Class implementing ROS2 node.\n * This class also handles tasks performed by the executor in rclc.\n * Components of the node and not additional distinct entities publishers, subscribers, services, service clients, action servers\n * and action clients should register to the node with the appropriate methods (Add*).\n */" },
#endif
		{ "IncludePath", "ROS2NodeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Class implementing ROS2 node.\nThis class also handles tasks performed by the executor in rclc.\nComponents of the node and not additional distinct entities publishers, subscribers, services, service clients, action servers\nand action clients should register to the node with the appropriate methods (Add*)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Node state\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Node state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NGuardConditions_MetaData[] = {
		{ "Category", "Diagnostics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! wait_set quantities - currently unused\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! wait_set quantities - currently unused" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NTimers_MetaData[] = {
		{ "Category", "Diagnostics" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NEvents_MetaData[] = {
		{ "Category", "Diagnostics" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Support_MetaData[] = {
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subscriptions_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceServers_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Publishers_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceClients_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionClients_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionServers_MetaData[] = {
		{ "Category", "ROS2NodeComponent" },
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogLastHit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! internal property used to log throttle.\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2NodeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! internal property used to log throttle." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NGuardConditions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NTimers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Support;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subscriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subscriptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServiceServers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServiceServers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Publishers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Publishers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServiceClients_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServiceClients;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionClients_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionClients;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionServers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionServers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogLastHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2NodeComponent_AddActionClient, "AddActionClient" }, // 410984717
		{ &Z_Construct_UFunction_UROS2NodeComponent_AddActionServer, "AddActionServer" }, // 58766632
		{ &Z_Construct_UFunction_UROS2NodeComponent_AddPublisher, "AddPublisher" }, // 3164735357
		{ &Z_Construct_UFunction_UROS2NodeComponent_AddServiceClient, "AddServiceClient" }, // 1068266110
		{ &Z_Construct_UFunction_UROS2NodeComponent_AddServiceServer, "AddServiceServer" }, // 213051387
		{ &Z_Construct_UFunction_UROS2NodeComponent_AddSubscription, "AddSubscription" }, // 3311148103
		{ &Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisher, "CreateLoopPublisher" }, // 3977132289
		{ &Z_Construct_UFunction_UROS2NodeComponent_CreateLoopPublisherWithClass, "CreateLoopPublisherWithClass" }, // 1732829750
		{ &Z_Construct_UFunction_UROS2NodeComponent_CreateNewNode, "CreateNewNode" }, // 3513718400
		{ &Z_Construct_UFunction_UROS2NodeComponent_CreatePublisher, "CreatePublisher" }, // 358753273
		{ &Z_Construct_UFunction_UROS2NodeComponent_CreatePublisherWithClass, "CreatePublisherWithClass" }, // 3733108276
		{ &Z_Construct_UFunction_UROS2NodeComponent_CreateServiceClient, "CreateServiceClient" }, // 1810009085
		{ &Z_Construct_UFunction_UROS2NodeComponent_CreateServiceServer, "CreateServiceServer" }, // 2617907984
		{ &Z_Construct_UFunction_UROS2NodeComponent_CreateSubscriber, "CreateSubscriber" }, // 3455098670
		{ &Z_Construct_UFunction_UROS2NodeComponent_HandleActionClients, "HandleActionClients" }, // 1557114223
		{ &Z_Construct_UFunction_UROS2NodeComponent_HandleActionServers, "HandleActionServers" }, // 1487709663
		{ &Z_Construct_UFunction_UROS2NodeComponent_HandleServiceClients, "HandleServiceClients" }, // 1448212424
		{ &Z_Construct_UFunction_UROS2NodeComponent_HandleServiceServers, "HandleServiceServers" }, // 3867101196
		{ &Z_Construct_UFunction_UROS2NodeComponent_HandleSubscriptions, "HandleSubscriptions" }, // 1894679774
		{ &Z_Construct_UFunction_UROS2NodeComponent_Init, "Init" }, // 2194686391
		{ &Z_Construct_UFunction_UROS2NodeComponent_InvalidateWaitSet, "InvalidateWaitSet" }, // 2231229368
		{ &Z_Construct_UFunction_UROS2NodeComponent_SpinSome, "SpinSome" }, // 675669266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2NodeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, State), Z_Construct_UEnum_rclUE_UROS2State, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 478657319
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_NGuardConditions = { "NGuardConditions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, NGuardConditions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NGuardConditions_MetaData), NewProp_NGuardConditions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_NTimers = { "NTimers", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, NTimers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NTimers_MetaData), NewProp_NTimers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_NEvents = { "NEvents", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, NEvents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NEvents_MetaData), NewProp_NEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Support = { "Support", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, Support), Z_Construct_UClass_UROS2Support_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Support_MetaData), NewProp_Support_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Subscriptions_Inner = { "Subscriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Subscriptions = { "Subscriptions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, Subscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subscriptions_MetaData), NewProp_Subscriptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ServiceServers_Inner = { "ServiceServers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UROS2ServiceServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ServiceServers = { "ServiceServers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, ServiceServers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceServers_MetaData), NewProp_ServiceServers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Publishers_Inner = { "Publishers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Publishers = { "Publishers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, Publishers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Publishers_MetaData), NewProp_Publishers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ServiceClients_Inner = { "ServiceClients", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UROS2ServiceClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ServiceClients = { "ServiceClients", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, ServiceClients), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceClients_MetaData), NewProp_ServiceClients_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ActionClients_Inner = { "ActionClients", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UROS2ActionClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ActionClients = { "ActionClients", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, ActionClients), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionClients_MetaData), NewProp_ActionClients_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ActionServers_Inner = { "ActionServers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UROS2ActionServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ActionServers = { "ActionServers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, ActionServers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionServers_MetaData), NewProp_ActionServers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_LogLastHit = { "LogLastHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2NodeComponent, LogLastHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogLastHit_MetaData), NewProp_LogLastHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2NodeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_NGuardConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_NTimers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_NEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Support,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Subscriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Subscriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ServiceServers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ServiceServers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Publishers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_Publishers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ServiceClients_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ServiceClients,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ActionClients_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ActionClients,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ActionServers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_ActionServers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2NodeComponent_Statics::NewProp_LogLastHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2NodeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2NodeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2NodeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2NodeComponent_Statics::ClassParams = {
	&UROS2NodeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2NodeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2NodeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2NodeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2NodeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2NodeComponent()
{
	if (!Z_Registration_Info_UClass_UROS2NodeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2NodeComponent.OuterSingleton, Z_Construct_UClass_UROS2NodeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2NodeComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2NodeComponent);
UROS2NodeComponent::~UROS2NodeComponent() {}
// ********** End Class UROS2NodeComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2NodeComponent, UROS2NodeComponent::StaticClass, TEXT("UROS2NodeComponent"), &Z_Registration_Info_UClass_UROS2NodeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2NodeComponent), 727034515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h__Script_rclUE_4026743827(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2NodeComponent_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
