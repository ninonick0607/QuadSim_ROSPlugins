// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2Node.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Node() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
RCLUE_API UClass* Z_Construct_UClass_AROS2Node();
RCLUE_API UClass* Z_Construct_UClass_AROS2Node_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClient_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServer_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Publisher_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClient_NoRegister();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FService();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FSubscription();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSubscription *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSubscription;
class UScriptStruct* FSubscription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSubscription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSubscription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubscription, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("Subscription"));
	}
	return Z_Registration_Info_UScriptStruct_FSubscription.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSubscription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Helper structs which is components of the node and should register to\n * the node with the appropriate methods (AddSubscription).\n *\n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Helper structs which is components of the node and should register to\nthe node with the appropriate methods (AddSubscription)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicName_MetaData[] = {
		{ "Category", "Subscription" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicType_MetaData[] = {
		{ "Category", "Subscription" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicMsg_MetaData[] = {
		{ "Category", "Subscription" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ready_MetaData[] = {
		{ "Category", "Subscription" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TopicType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopicMsg;
	static void NewProp_Ready_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ready;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubscription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_TopicName = { "TopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubscription, TopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicName_MetaData), NewProp_TopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_TopicType = { "TopicType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubscription, TopicType), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicType_MetaData), NewProp_TopicType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_TopicMsg = { "TopicMsg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubscription, TopicMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicMsg_MetaData), NewProp_TopicMsg_MetaData) };
void Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_Ready_SetBit(void* Obj)
{
	((FSubscription*)Obj)->Ready = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_Ready = { "Ready", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubscription), &Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_Ready_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ready_MetaData), NewProp_Ready_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubscription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_TopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_TopicType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_TopicMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubscription_Statics::NewProp_Ready,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubscription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"Subscription",
	Z_Construct_UScriptStruct_FSubscription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscription_Statics::PropPointers),
	sizeof(FSubscription),
	alignof(FSubscription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubscription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubscription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubscription()
{
	if (!Z_Registration_Info_UScriptStruct_FSubscription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSubscription.InnerSingleton, Z_Construct_UScriptStruct_FSubscription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSubscription.InnerSingleton;
}
// ********** End ScriptStruct FSubscription *******************************************************

// ********** Begin ScriptStruct FService **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FService;
class UScriptStruct* FService::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FService.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FService.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FService, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("Service"));
	}
	return Z_Registration_Info_UScriptStruct_FService.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Helper structs which is components of the node and should register to\n * the node with the appropriate methods (AddServiceServer).\n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Helper structs which is components of the node and should register to\nthe node with the appropriate methods (AddServiceServer)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceName_MetaData[] = {
		{ "Category", "Service" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceType_MetaData[] = {
		{ "Category", "Service" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Service_MetaData[] = {
		{ "Category", "Service" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ready_MetaData[] = {
		{ "Category", "Service" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ServiceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Service;
	static void NewProp_Ready_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ready;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FService>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FService_Statics::NewProp_ServiceName = { "ServiceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FService, ServiceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceName_MetaData), NewProp_ServiceName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FService_Statics::NewProp_ServiceType = { "ServiceType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FService, ServiceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceType_MetaData), NewProp_ServiceType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FService_Statics::NewProp_Service = { "Service", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FService, Service), Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Service_MetaData), NewProp_Service_MetaData) };
void Z_Construct_UScriptStruct_FService_Statics::NewProp_Ready_SetBit(void* Obj)
{
	((FService*)Obj)->Ready = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FService_Statics::NewProp_Ready = { "Ready", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FService), &Z_Construct_UScriptStruct_FService_Statics::NewProp_Ready_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ready_MetaData), NewProp_Ready_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FService_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FService_Statics::NewProp_ServiceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FService_Statics::NewProp_ServiceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FService_Statics::NewProp_Service,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FService_Statics::NewProp_Ready,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FService_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FService_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"Service",
	Z_Construct_UScriptStruct_FService_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FService_Statics::PropPointers),
	sizeof(FService),
	alignof(FService),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FService_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FService_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FService()
{
	if (!Z_Registration_Info_UScriptStruct_FService.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FService.InnerSingleton, Z_Construct_UScriptStruct_FService_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FService.InnerSingleton;
}
// ********** End ScriptStruct FService ************************************************************

// ********** Begin Class AROS2Node Function AddActionClient ***************************************
struct Z_Construct_UFunction_AROS2Node_AddActionClient_Statics
{
	struct ROS2Node_eventAddActionClient_Parms
	{
		UROS2ActionClient* InActionClient;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set this node to UROS2ActionClient::OwnerNode and add to #ActionClients.\n     *\n     * @param InActionClient\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set this node to UROS2ActionClient::OwnerNode and add to #ActionClients.\n\n@param InActionClient" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActionClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::NewProp_InActionClient = { "InActionClient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddActionClient_Parms, InActionClient), Z_Construct_UClass_UROS2ActionClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::NewProp_InActionClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Node, nullptr, "AddActionClient", Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::ROS2Node_eventAddActionClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::ROS2Node_eventAddActionClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Node_AddActionClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Node_AddActionClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Node::execAddActionClient)
{
	P_GET_OBJECT(UROS2ActionClient,Z_Param_InActionClient);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActionClient(Z_Param_InActionClient);
	P_NATIVE_END;
}
// ********** End Class AROS2Node Function AddActionClient *****************************************

// ********** Begin Class AROS2Node Function AddActionServer ***************************************
struct Z_Construct_UFunction_AROS2Node_AddActionServer_Statics
{
	struct ROS2Node_eventAddActionServer_Parms
	{
		UROS2ActionServer* InActionServer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set this node to UROS2ActionClient::OwnerNode and add to #ActionServers.\n     *\n     * @param InActionServer\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set this node to UROS2ActionClient::OwnerNode and add to #ActionServers.\n\n@param InActionServer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActionServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::NewProp_InActionServer = { "InActionServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddActionServer_Parms, InActionServer), Z_Construct_UClass_UROS2ActionServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::NewProp_InActionServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Node, nullptr, "AddActionServer", Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::ROS2Node_eventAddActionServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::ROS2Node_eventAddActionServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Node_AddActionServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Node_AddActionServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Node::execAddActionServer)
{
	P_GET_OBJECT(UROS2ActionServer,Z_Param_InActionServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActionServer(Z_Param_InActionServer);
	P_NATIVE_END;
}
// ********** End Class AROS2Node Function AddActionServer *****************************************

// ********** Begin Class AROS2Node Function AddPublisher ******************************************
struct Z_Construct_UFunction_AROS2Node_AddPublisher_Statics
{
	struct ROS2Node_eventAddPublisher_Parms
	{
		UROS2Publisher* InPublisher;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set this node to UROS2Publisher::OwnerNode of InPublisher and add to #Publishers.\n     *\n     * @param InPublisher\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set this node to UROS2Publisher::OwnerNode of InPublisher and add to #Publishers.\n\n@param InPublisher" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPublisher;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::NewProp_InPublisher = { "InPublisher", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddPublisher_Parms, InPublisher), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::NewProp_InPublisher,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Node, nullptr, "AddPublisher", Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::ROS2Node_eventAddPublisher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::ROS2Node_eventAddPublisher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Node_AddPublisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Node_AddPublisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Node::execAddPublisher)
{
	P_GET_OBJECT(UROS2Publisher,Z_Param_InPublisher);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPublisher(Z_Param_InPublisher);
	P_NATIVE_END;
}
// ********** End Class AROS2Node Function AddPublisher ********************************************

// ********** Begin Class AROS2Node Function AddServiceClient **************************************
struct Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics
{
	struct ROS2Node_eventAddServiceClient_Parms
	{
		UROS2ServiceClient* InClient;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set this node to UROS2ServiceClient::OwnerNode and add to #Clients.\n     *\n     * @param InClient\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set this node to UROS2ServiceClient::OwnerNode and add to #Clients.\n\n@param InClient" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::NewProp_InClient = { "InClient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddServiceClient_Parms, InClient), Z_Construct_UClass_UROS2ServiceClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::NewProp_InClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Node, nullptr, "AddServiceClient", Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::ROS2Node_eventAddServiceClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::ROS2Node_eventAddServiceClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Node_AddServiceClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Node_AddServiceClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Node::execAddServiceClient)
{
	P_GET_OBJECT(UROS2ServiceClient,Z_Param_InClient);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddServiceClient(Z_Param_InClient);
	P_NATIVE_END;
}
// ********** End Class AROS2Node Function AddServiceClient ****************************************

// ********** Begin Class AROS2Node Function AddServiceServer **************************************
struct Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics
{
	struct ROS2Node_eventAddServiceServer_Parms
	{
		FString ServiceName;
		const TSubclassOf<UROS2GenericSrv> SrvClass;
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create ServiceServer with rcl_service_init and add to #Services.\n     * @note Keep original arguments, instead of take ServiceServer as arg in ROS2NodeComponent.\n     * @param ServiceName\n     * @param SrvClass\n     * @param Callback\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create ServiceServer with rcl_service_init and add to #Services.\n@note Keep original arguments, instead of take ServiceServer as arg in ROS2NodeComponent.\n@param ServiceName\n@param SrvClass\n@param Callback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrvClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SrvClass;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::NewProp_ServiceName = { "ServiceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddServiceServer_Parms, ServiceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceName_MetaData), NewProp_ServiceName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::NewProp_SrvClass = { "SrvClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddServiceServer_Parms, SrvClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrvClass_MetaData), NewProp_SrvClass_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddServiceServer_Parms, Callback), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1854847413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::NewProp_ServiceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::NewProp_SrvClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Node, nullptr, "AddServiceServer", Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::ROS2Node_eventAddServiceServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::ROS2Node_eventAddServiceServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Node_AddServiceServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Node_AddServiceServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Node::execAddServiceServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServiceName);
	P_GET_OBJECT(UClass,Z_Param_SrvClass);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddServiceServer(Z_Param_ServiceName,Z_Param_SrvClass,FServiceCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class AROS2Node Function AddServiceServer ****************************************

// ********** Begin Class AROS2Node Function AddSubscription ***************************************
struct Z_Construct_UFunction_AROS2Node_AddSubscription_Statics
{
	struct ROS2Node_eventAddSubscription_Parms
	{
		FString TopicName;
		TSubclassOf<UROS2GenericMsg> MsgClass;
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Methods to register subscribers.\n     * It is up to the user to ensure that they are only added once\n     * @param TopicName\n     * @param MsgClass\n     * @param Callback\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Methods to register subscribers.\nIt is up to the user to ensure that they are only added once\n@param TopicName\n@param MsgClass\n@param Callback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MsgClass;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::NewProp_TopicName = { "TopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddSubscription_Parms, TopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicName_MetaData), NewProp_TopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::NewProp_MsgClass = { "MsgClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddSubscription_Parms, MsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Node_eventAddSubscription_Parms, Callback), Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2107730569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::NewProp_TopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::NewProp_MsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Node, nullptr, "AddSubscription", Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::PropPointers), sizeof(Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::ROS2Node_eventAddSubscription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::ROS2Node_eventAddSubscription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AROS2Node_AddSubscription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Node_AddSubscription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Node::execAddSubscription)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TopicName);
	P_GET_OBJECT(UClass,Z_Param_MsgClass);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSubscription(Z_Param_TopicName,Z_Param_MsgClass,FSubscriptionCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class AROS2Node Function AddSubscription *****************************************

// ********** Begin Class AROS2Node Function Init **************************************************
struct Z_Construct_UFunction_AROS2Node_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Initilize rosnode with rclc_node_init_default\n     * This can't be pre-placed in AROS2Node::BeginPlay() as the order of rcl(c) instructions could be different/relevant in\n     * each of Child classes\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Initilize rosnode with rclc_node_init_default\nThis can't be pre-placed in AROS2Node::BeginPlay() as the order of rcl(c) instructions could be different/relevant in\neach of Child classes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AROS2Node_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AROS2Node, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AROS2Node_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_AROS2Node_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AROS2Node_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AROS2Node_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AROS2Node::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class AROS2Node Function Init ****************************************************

// ********** Begin Class AROS2Node ****************************************************************
void AROS2Node::StaticRegisterNativesAROS2Node()
{
	UClass* Class = AROS2Node::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActionClient", &AROS2Node::execAddActionClient },
		{ "AddActionServer", &AROS2Node::execAddActionServer },
		{ "AddPublisher", &AROS2Node::execAddPublisher },
		{ "AddServiceClient", &AROS2Node::execAddServiceClient },
		{ "AddServiceServer", &AROS2Node::execAddServiceServer },
		{ "AddSubscription", &AROS2Node::execAddSubscription },
		{ "Init", &AROS2Node::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AROS2Node;
UClass* AROS2Node::GetPrivateStaticClass()
{
	using TClass = AROS2Node;
	if (!Z_Registration_Info_UClass_AROS2Node.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Node"),
			Z_Registration_Info_UClass_AROS2Node.InnerSingleton,
			StaticRegisterNativesAROS2Node,
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
	return Z_Registration_Info_UClass_AROS2Node.InnerSingleton;
}
UClass* Z_Construct_UClass_AROS2Node_NoRegister()
{
	return AROS2Node::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AROS2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Wrapper Actor implementation of UROS2NodeComponent.\n * @deprecated Use UROS2NodeComponent instead.\n */" },
#endif
		{ "IncludePath", "ROS2Node.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Wrapper Actor implementation of UROS2NodeComponent.\n@deprecated Use UROS2NodeComponent instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROS2Node" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "Category", "ROS2Node" },
		{ "ModuleRelativePath", "Public/ROS2Node.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AROS2Node_AddActionClient, "AddActionClient" }, // 149496614
		{ &Z_Construct_UFunction_AROS2Node_AddActionServer, "AddActionServer" }, // 2292642511
		{ &Z_Construct_UFunction_AROS2Node_AddPublisher, "AddPublisher" }, // 1350826708
		{ &Z_Construct_UFunction_AROS2Node_AddServiceClient, "AddServiceClient" }, // 970766228
		{ &Z_Construct_UFunction_AROS2Node_AddServiceServer, "AddServiceServer" }, // 3406045600
		{ &Z_Construct_UFunction_AROS2Node_AddSubscription, "AddSubscription" }, // 1916510465
		{ &Z_Construct_UFunction_AROS2Node_Init, "Init" }, // 2054099214
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AROS2Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Node_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Node, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AROS2Node_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AROS2Node, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AROS2Node_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Node_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AROS2Node_Statics::NewProp_Namespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AROS2Node_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AROS2Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AROS2Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AROS2Node_Statics::ClassParams = {
	&AROS2Node::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AROS2Node_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AROS2Node_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AROS2Node_Statics::Class_MetaDataParams), Z_Construct_UClass_AROS2Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AROS2Node()
{
	if (!Z_Registration_Info_UClass_AROS2Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AROS2Node.OuterSingleton, Z_Construct_UClass_AROS2Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AROS2Node.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AROS2Node);
AROS2Node::~AROS2Node() {}
// ********** End Class AROS2Node ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubscription::StaticStruct, Z_Construct_UScriptStruct_FSubscription_Statics::NewStructOps, TEXT("Subscription"), &Z_Registration_Info_UScriptStruct_FSubscription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubscription), 3532685965U) },
		{ FService::StaticStruct, Z_Construct_UScriptStruct_FService_Statics::NewStructOps, TEXT("Service"), &Z_Registration_Info_UScriptStruct_FService, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FService), 4194162890U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AROS2Node, AROS2Node::StaticClass, TEXT("AROS2Node"), &Z_Registration_Info_UClass_AROS2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AROS2Node), 4044165781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h__Script_rclUE_2926771891(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
