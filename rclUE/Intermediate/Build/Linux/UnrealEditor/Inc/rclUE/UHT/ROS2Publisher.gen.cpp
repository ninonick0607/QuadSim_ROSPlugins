// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2Publisher.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Publisher() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
RCLUE_API UClass* Z_Construct_UClass_UROS2CustomPublisherComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2CustomPublisherComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Publisher();
RCLUE_API UClass* Z_Construct_UClass_UROS2Publisher_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2PublisherComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2PublisherComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Topic();
RCLUE_API UClass* Z_Construct_UClass_URRTimerManager_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2Publisher Function CreateLoopPublisher ******************************
struct Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics
{
	struct ROS2Publisher_eventCreateLoopPublisher_Parms
	{
		UObject* InOwner;
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
		{ "Comment", "/**\n     * @brief Create a Loop Publisher object\n     *\n     * @param InOwner\n     * @param InTopicName Topic name\n     * @param InPublisherClass Custom output publisher type class\n     * @param InMsgClass Custom message type class\n     * @param InPubFrequency Publishing frequency\n     * @param InUpdateDelegate\n     * @param InQoS\n     * @return UROS2Publisher*\n     */" },
#endif
		{ "CPP_Default_InQoS", "Default" },
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a Loop Publisher object\n\n@param InOwner\n@param InTopicName Topic name\n@param InPublisherClass Custom output publisher type class\n@param InMsgClass Custom message type class\n@param InPubFrequency Publishing frequency\n@param InUpdateDelegate\n@param InQoS\n@return UROS2Publisher*" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUpdateDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisher_Parms, InOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisher_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InPublisherClass = { "InPublisherClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisher_Parms, InPublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPublisherClass_MetaData), NewProp_InPublisherClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InMsgClass = { "InMsgClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisher_Parms, InMsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsgClass_MetaData), NewProp_InMsgClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InPubFrequency = { "InPubFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisher_Parms, InPubFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InUpdateDelegate = { "InUpdateDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisher_Parms, InUpdateDelegate), Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUpdateDelegate_MetaData), NewProp_InUpdateDelegate_MetaData) }; // 3082268729
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisher_Parms, InQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InQoS_MetaData), NewProp_InQoS_MetaData) }; // 314065690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisher_Parms, ReturnValue), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InPublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InMsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InPubFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_InQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "CreateLoopPublisher", Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::ROS2Publisher_eventCreateLoopPublisher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::ROS2Publisher_eventCreateLoopPublisher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execCreateLoopPublisher)
{
	P_GET_OBJECT(UObject,Z_Param_InOwner);
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2Publisher>,Z_Param_Out_InPublisherClass);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2GenericMsg>,Z_Param_Out_InMsgClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPubFrequency);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InUpdateDelegate);
	P_GET_ENUM(UROS2QoS,Z_Param_InQoS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Publisher**)Z_Param__Result=UROS2Publisher::CreateLoopPublisher(Z_Param_InOwner,Z_Param_InTopicName,Z_Param_Out_InPublisherClass,Z_Param_Out_InMsgClass,Z_Param_InPubFrequency,FTopicCallback(Z_Param_Out_InUpdateDelegate),UROS2QoS(Z_Param_InQoS));
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function CreateLoopPublisher ********************************

// ********** Begin Class UROS2Publisher Function CreateLoopPublisherWithClass *********************
struct Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics
{
	struct ROS2Publisher_eventCreateLoopPublisherWithClass_Parms
	{
		UObject* InOwner;
		FString InTopicName;
		const TSubclassOf<UROS2Publisher> InPublisherClass;
		float InPubFrequency;
		UROS2Publisher* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new UROS2Publisher of custom publisher class and andd to Node.\n     * Custom Publisher class is expected to override #UROS2Publisher::Update which in loop with frequency.\n     * @param InOwner\n     * @param InTopicName Topic name\n     * @param InPublisherClass Custom output publisher type class\n     * @param InPubFrequency Publishing frequency\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new UROS2Publisher of custom publisher class and andd to Node.\nCustom Publisher class is expected to override #UROS2Publisher::Update which in loop with frequency.\n@param InOwner\n@param InTopicName Topic name\n@param InPublisherClass Custom output publisher type class\n@param InPubFrequency Publishing frequency" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPublisherClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPubFrequency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisherWithClass_Parms, InOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisherWithClass_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_InPublisherClass = { "InPublisherClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisherWithClass_Parms, InPublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPublisherClass_MetaData), NewProp_InPublisherClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_InPubFrequency = { "InPubFrequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisherWithClass_Parms, InPubFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPubFrequency_MetaData), NewProp_InPubFrequency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreateLoopPublisherWithClass_Parms, ReturnValue), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_InPublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_InPubFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "CreateLoopPublisherWithClass", Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::ROS2Publisher_eventCreateLoopPublisherWithClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::ROS2Publisher_eventCreateLoopPublisherWithClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execCreateLoopPublisherWithClass)
{
	P_GET_OBJECT(UObject,Z_Param_InOwner);
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2Publisher>,Z_Param_Out_InPublisherClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPubFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Publisher**)Z_Param__Result=UROS2Publisher::CreateLoopPublisherWithClass(Z_Param_InOwner,Z_Param_InTopicName,Z_Param_Out_InPublisherClass,Z_Param_InPubFrequency);
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function CreateLoopPublisherWithClass ***********************

// ********** Begin Class UROS2Publisher Function CreatePublisher **********************************
struct Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics
{
	struct ROS2Publisher_eventCreatePublisher_Parms
	{
		UObject* InOwner;
		FString InTopicName;
		const TSubclassOf<UROS2Publisher> InPublisherClass;
		const TSubclassOf<UROS2GenericMsg> InMsgClass;
		float InPubFrequency;
		UROS2QoS InQoS;
		UROS2Publisher* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new UROS2Publisher of custom type\n     *\n     * @param InOwner\n     * @param InTopicName Topic name\n     * @param InPublisherClass Custom output publisher type class\n     * @param InMsgClass Custom message type class\n     * @param InPubFrequency Publishing frequency\n     * @param InQoS\n     * @return UROS2Publisher*\n     */" },
#endif
		{ "CPP_Default_InQoS", "Default" },
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new UROS2Publisher of custom type\n\n@param InOwner\n@param InTopicName Topic name\n@param InPublisherClass Custom output publisher type class\n@param InMsgClass Custom message type class\n@param InPubFrequency Publishing frequency\n@param InQoS\n@return UROS2Publisher*" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPublisherClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InMsgClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPubFrequency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisher_Parms, InOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisher_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InPublisherClass = { "InPublisherClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisher_Parms, InPublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPublisherClass_MetaData), NewProp_InPublisherClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InMsgClass = { "InMsgClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisher_Parms, InMsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsgClass_MetaData), NewProp_InMsgClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InPubFrequency = { "InPubFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisher_Parms, InPubFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisher_Parms, InQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InQoS_MetaData), NewProp_InQoS_MetaData) }; // 314065690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisher_Parms, ReturnValue), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InPublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InMsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InPubFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_InQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "CreatePublisher", Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::ROS2Publisher_eventCreatePublisher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::ROS2Publisher_eventCreatePublisher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Publisher_CreatePublisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_CreatePublisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execCreatePublisher)
{
	P_GET_OBJECT(UObject,Z_Param_InOwner);
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2Publisher>,Z_Param_Out_InPublisherClass);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2GenericMsg>,Z_Param_Out_InMsgClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPubFrequency);
	P_GET_ENUM(UROS2QoS,Z_Param_InQoS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Publisher**)Z_Param__Result=UROS2Publisher::CreatePublisher(Z_Param_InOwner,Z_Param_InTopicName,Z_Param_Out_InPublisherClass,Z_Param_Out_InMsgClass,Z_Param_InPubFrequency,UROS2QoS(Z_Param_InQoS));
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function CreatePublisher ************************************

// ********** Begin Class UROS2Publisher Function CreatePublisherWithClass *************************
struct Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics
{
	struct ROS2Publisher_eventCreatePublisherWithClass_Parms
	{
		UObject* InOwner;
		const TSubclassOf<UROS2Publisher> InPublisherClass;
		FString InTopicName;
		UROS2Publisher* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create a new UROS2Publisher and add to Node.\n     *\n     * @param InOwner\n     * @param InPublisherClass\n     * @param InTopicName\n     * @return UROS2Publisher*\n     */" },
#endif
		{ "CPP_Default_InTopicName", "" },
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create a new UROS2Publisher and add to Node.\n\n@param InOwner\n@param InPublisherClass\n@param InTopicName\n@return UROS2Publisher*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPublisherClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTopicName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPublisherClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InTopicName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisherWithClass_Parms, InOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::NewProp_InPublisherClass = { "InPublisherClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisherWithClass_Parms, InPublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPublisherClass_MetaData), NewProp_InPublisherClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::NewProp_InTopicName = { "InTopicName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisherWithClass_Parms, InTopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTopicName_MetaData), NewProp_InTopicName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventCreatePublisherWithClass_Parms, ReturnValue), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::NewProp_InPublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::NewProp_InTopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "CreatePublisherWithClass", Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::ROS2Publisher_eventCreatePublisherWithClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::ROS2Publisher_eventCreatePublisherWithClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execCreatePublisherWithClass)
{
	P_GET_OBJECT(UObject,Z_Param_InOwner);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UROS2Publisher>,Z_Param_Out_InPublisherClass);
	P_GET_PROPERTY(FStrProperty,Z_Param_InTopicName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Publisher**)Z_Param__Result=UROS2Publisher::CreatePublisherWithClass(Z_Param_InOwner,Z_Param_Out_InPublisherClass,Z_Param_InTopicName);
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function CreatePublisherWithClass ***************************

// ********** Begin Class UROS2Publisher Function Publish ******************************************
struct Z_Construct_UFunction_UROS2Publisher_Publish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Publish msg\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Publish msg" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_Publish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "Publish", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_Publish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_Publish_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Publisher_Publish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_Publish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execPublish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Publish();
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function Publish ********************************************

// ********** Begin Class UROS2Publisher Function SetDefaultDelegates ******************************
struct Z_Construct_UFunction_UROS2Publisher_SetDefaultDelegates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Bind #UpdateMessage with #UpdateDelegate\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Bind #UpdateMessage with #UpdateDelegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_SetDefaultDelegates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "SetDefaultDelegates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_SetDefaultDelegates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_SetDefaultDelegates_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Publisher_SetDefaultDelegates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_SetDefaultDelegates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execSetDefaultDelegates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultDelegates();
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function SetDefaultDelegates ********************************

// ********** Begin Class UROS2Publisher Function SetDelegates *************************************
struct Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics
{
	struct ROS2Publisher_eventSetDelegates_Parms
	{
		FScriptDelegate InUpdateDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set the Delegates object.\n     *\n     * @param InUpdateDelegate\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set the Delegates object.\n\n@param InUpdateDelegate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUpdateDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InUpdateDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::NewProp_InUpdateDelegate = { "InUpdateDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventSetDelegates_Parms, InUpdateDelegate), Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUpdateDelegate_MetaData), NewProp_InUpdateDelegate_MetaData) }; // 3082268729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::NewProp_InUpdateDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "SetDelegates", Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::ROS2Publisher_eventSetDelegates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::ROS2Publisher_eventSetDelegates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Publisher_SetDelegates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_SetDelegates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execSetDelegates)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InUpdateDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDelegates(FTopicCallback(Z_Param_Out_InUpdateDelegate));
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function SetDelegates ***************************************

// ********** Begin Class UROS2Publisher Function StartPublishTimer ********************************
struct Z_Construct_UFunction_UROS2Publisher_StartPublishTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Start publishing topic with #PublicationFrequencyHz\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Start publishing topic with #PublicationFrequencyHz" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_StartPublishTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "StartPublishTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_StartPublishTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_StartPublishTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Publisher_StartPublishTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_StartPublishTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execStartPublishTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPublishTimer();
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function StartPublishTimer **********************************

// ********** Begin Class UROS2Publisher Function StopPublishTimer *********************************
struct Z_Construct_UFunction_UROS2Publisher_StopPublishTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Stope publishing timer\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Stope publishing timer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_StopPublishTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "StopPublishTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_StopPublishTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_StopPublishTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Publisher_StopPublishTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_StopPublishTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execStopPublishTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPublishTimer();
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function StopPublishTimer ***********************************

// ********** Begin Class UROS2Publisher Function UpdateAndPublish *********************************
struct Z_Construct_UFunction_UROS2Publisher_UpdateAndPublish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Update Msg with delegate and publish msg.\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Update Msg with delegate and publish msg." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_UpdateAndPublish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "UpdateAndPublish", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_UpdateAndPublish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_UpdateAndPublish_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Publisher_UpdateAndPublish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_UpdateAndPublish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execUpdateAndPublish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAndPublish();
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function UpdateAndPublish ***********************************

// ********** Begin Class UROS2Publisher Function UpdateMessage ************************************
struct Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics
{
	struct ROS2Publisher_eventUpdateMessage_Parms
	{
		UROS2GenericMsg* InMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Update msg. Should be implemented in child class.\n     *\n     * @param InMessage Input Message.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Update msg. Should be implemented in child class.\n\n@param InMessage Input Message." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Publisher_eventUpdateMessage_Parms, InMessage), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Publisher, nullptr, "UpdateMessage", Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::ROS2Publisher_eventUpdateMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::ROS2Publisher_eventUpdateMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Publisher_UpdateMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Publisher_UpdateMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Publisher::execUpdateMessage)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMessage(Z_Param_InMessage);
	P_NATIVE_END;
}
// ********** End Class UROS2Publisher Function UpdateMessage **************************************

// ********** Begin Class UROS2Publisher ***********************************************************
void UROS2Publisher::StaticRegisterNativesUROS2Publisher()
{
	UClass* Class = UROS2Publisher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateLoopPublisher", &UROS2Publisher::execCreateLoopPublisher },
		{ "CreateLoopPublisherWithClass", &UROS2Publisher::execCreateLoopPublisherWithClass },
		{ "CreatePublisher", &UROS2Publisher::execCreatePublisher },
		{ "CreatePublisherWithClass", &UROS2Publisher::execCreatePublisherWithClass },
		{ "Publish", &UROS2Publisher::execPublish },
		{ "SetDefaultDelegates", &UROS2Publisher::execSetDefaultDelegates },
		{ "SetDelegates", &UROS2Publisher::execSetDelegates },
		{ "StartPublishTimer", &UROS2Publisher::execStartPublishTimer },
		{ "StopPublishTimer", &UROS2Publisher::execStopPublishTimer },
		{ "UpdateAndPublish", &UROS2Publisher::execUpdateAndPublish },
		{ "UpdateMessage", &UROS2Publisher::execUpdateMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Publisher;
UClass* UROS2Publisher::GetPrivateStaticClass()
{
	using TClass = UROS2Publisher;
	if (!Z_Registration_Info_UClass_UROS2Publisher.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Publisher"),
			Z_Registration_Info_UClass_UROS2Publisher.InnerSingleton,
			StaticRegisterNativesUROS2Publisher,
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
	return Z_Registration_Info_UClass_UROS2Publisher.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Publisher_NoRegister()
{
	return UROS2Publisher::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Publisher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 Publisher class.\n *\n */" },
#endif
		{ "IncludePath", "ROS2Publisher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 Publisher class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublicationFrequencyHz_MetaData[] = {
		{ "Category", "ROS2Publisher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Publish frequency. if this value > 0, this will update and publish msg periodically.\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Publish frequency. if this value > 0, this will update and publish msg periodically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateDelegate_MetaData[] = {
		{ "Category", "ROS2Publisher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Delegate which is Bound with #UpdateMessage by #SetDefaultDelegates\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Delegate which is Bound with #UpdateMessage by #SetDefaultDelegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[] = {
		{ "Category", "ROS2Publisher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Timer handler for periodic publisher\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Timer handler for periodic publisher" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Timer Manager\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Timer Manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PublicationFrequencyHz;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_UpdateDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimerManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisher, "CreateLoopPublisher" }, // 2647452003
		{ &Z_Construct_UFunction_UROS2Publisher_CreateLoopPublisherWithClass, "CreateLoopPublisherWithClass" }, // 2028740989
		{ &Z_Construct_UFunction_UROS2Publisher_CreatePublisher, "CreatePublisher" }, // 2678340459
		{ &Z_Construct_UFunction_UROS2Publisher_CreatePublisherWithClass, "CreatePublisherWithClass" }, // 2912059785
		{ &Z_Construct_UFunction_UROS2Publisher_Publish, "Publish" }, // 1914439742
		{ &Z_Construct_UFunction_UROS2Publisher_SetDefaultDelegates, "SetDefaultDelegates" }, // 988689250
		{ &Z_Construct_UFunction_UROS2Publisher_SetDelegates, "SetDelegates" }, // 1074361028
		{ &Z_Construct_UFunction_UROS2Publisher_StartPublishTimer, "StartPublishTimer" }, // 76839460
		{ &Z_Construct_UFunction_UROS2Publisher_StopPublishTimer, "StopPublishTimer" }, // 3900754917
		{ &Z_Construct_UFunction_UROS2Publisher_UpdateAndPublish, "UpdateAndPublish" }, // 2277125611
		{ &Z_Construct_UFunction_UROS2Publisher_UpdateMessage, "UpdateMessage" }, // 3610296376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Publisher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UROS2Publisher_Statics::NewProp_PublicationFrequencyHz = { "PublicationFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Publisher, PublicationFrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublicationFrequencyHz_MetaData), NewProp_PublicationFrequencyHz_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UROS2Publisher_Statics::NewProp_UpdateDelegate = { "UpdateDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Publisher, UpdateDelegate), Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateDelegate_MetaData), NewProp_UpdateDelegate_MetaData) }; // 3082268729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UROS2Publisher_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Publisher, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_MetaData), NewProp_TimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2Publisher_Statics::NewProp_TimerManager = { "TimerManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Publisher, TimerManager), Z_Construct_UClass_URRTimerManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerManager_MetaData), NewProp_TimerManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2Publisher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Publisher_Statics::NewProp_PublicationFrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Publisher_Statics::NewProp_UpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Publisher_Statics::NewProp_TimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Publisher_Statics::NewProp_TimerManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Publisher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2Publisher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2Topic,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Publisher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Publisher_Statics::ClassParams = {
	&UROS2Publisher::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2Publisher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Publisher_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Publisher_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Publisher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Publisher()
{
	if (!Z_Registration_Info_UClass_UROS2Publisher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Publisher.OuterSingleton, Z_Construct_UClass_UROS2Publisher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Publisher.OuterSingleton;
}
UROS2Publisher::UROS2Publisher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Publisher);
UROS2Publisher::~UROS2Publisher() {}
// ********** End Class UROS2Publisher *************************************************************

// ********** Begin Class UROS2PublisherComponent Function DefaultCreatePublisher ******************
struct Z_Construct_UFunction_UROS2PublisherComponent_DefaultCreatePublisher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PublisherComponent_DefaultCreatePublisher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PublisherComponent, nullptr, "DefaultCreatePublisher", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PublisherComponent_DefaultCreatePublisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PublisherComponent_DefaultCreatePublisher_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2PublisherComponent_DefaultCreatePublisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PublisherComponent_DefaultCreatePublisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PublisherComponent::execDefaultCreatePublisher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultCreatePublisher();
	P_NATIVE_END;
}
// ********** End Class UROS2PublisherComponent Function DefaultCreatePublisher ********************

// ********** Begin Class UROS2PublisherComponent Function SetParams *******************************
struct Z_Construct_UFunction_UROS2PublisherComponent_SetParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Pass this class's parameter #TopicName, #PublicationFrequencyHz, #QoS to #Publisher\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Pass this class's parameter #TopicName, #PublicationFrequencyHz, #QoS to #Publisher" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PublisherComponent_SetParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PublisherComponent, nullptr, "SetParams", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PublisherComponent_SetParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PublisherComponent_SetParams_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2PublisherComponent_SetParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PublisherComponent_SetParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PublisherComponent::execSetParams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParams();
	P_NATIVE_END;
}
// ********** End Class UROS2PublisherComponent Function SetParams *********************************

// ********** Begin Class UROS2PublisherComponent **************************************************
void UROS2PublisherComponent::StaticRegisterNativesUROS2PublisherComponent()
{
	UClass* Class = UROS2PublisherComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultCreatePublisher", &UROS2PublisherComponent::execDefaultCreatePublisher },
		{ "SetParams", &UROS2PublisherComponent::execSetParams },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PublisherComponent;
UClass* UROS2PublisherComponent::GetPrivateStaticClass()
{
	using TClass = UROS2PublisherComponent;
	if (!Z_Registration_Info_UClass_UROS2PublisherComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PublisherComponent"),
			Z_Registration_Info_UClass_UROS2PublisherComponent.InnerSingleton,
			StaticRegisterNativesUROS2PublisherComponent,
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
	return Z_Registration_Info_UClass_UROS2PublisherComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PublisherComponent_NoRegister()
{
	return UROS2PublisherComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PublisherComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 Publisher Component. Wrapper of #UROS2Publisher for BP.\n *\n */" },
#endif
		{ "IncludePath", "ROS2Publisher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 Publisher Component. Wrapper of #UROS2Publisher for BP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Publisher_MetaData[] = {
		{ "Category", "ROS2PublisherComponent" },
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicName_MetaData[] = {
		{ "Category", "ROS2PublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::TopicName in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::TopicName in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublisherClass_MetaData[] = {
		{ "Category", "ROS2PublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::PublisherClass in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::PublisherClass in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MsgClass_MetaData[] = {
		{ "Category", "ROS2PublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::MsgClass in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::MsgClass in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublicationFrequencyHz_MetaData[] = {
		{ "Category", "ROS2PublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::PublicationFrequencyHz in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::PublicationFrequencyHz in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QoS_MetaData[] = {
		{ "Category", "ROS2PublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::QoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::QoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateDelegate_MetaData[] = {
		{ "Category", "ROS2PublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::UpdateDelegate in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::UpdateDelegate in #BeginPlay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Publisher;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PublisherClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MsgClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PublicationFrequencyHz;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QoS;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_UpdateDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PublisherComponent_DefaultCreatePublisher, "DefaultCreatePublisher" }, // 2415538773
		{ &Z_Construct_UFunction_UROS2PublisherComponent_SetParams, "SetParams" }, // 1778000820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PublisherComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_Publisher = { "Publisher", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2PublisherComponent, Publisher), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Publisher_MetaData), NewProp_Publisher_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_TopicName = { "TopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2PublisherComponent, TopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicName_MetaData), NewProp_TopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_PublisherClass = { "PublisherClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2PublisherComponent, PublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublisherClass_MetaData), NewProp_PublisherClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_MsgClass = { "MsgClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2PublisherComponent, MsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MsgClass_MetaData), NewProp_MsgClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_PublicationFrequencyHz = { "PublicationFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2PublisherComponent, PublicationFrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublicationFrequencyHz_MetaData), NewProp_PublicationFrequencyHz_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_QoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_QoS = { "QoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2PublisherComponent, QoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QoS_MetaData), NewProp_QoS_MetaData) }; // 314065690
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_UpdateDelegate = { "UpdateDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2PublisherComponent, UpdateDelegate), Z_Construct_UDelegateFunction_rclUE_TopicCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateDelegate_MetaData), NewProp_UpdateDelegate_MetaData) }; // 3082268729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2PublisherComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_Publisher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_TopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_PublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_MsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_PublicationFrequencyHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_QoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_QoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2PublisherComponent_Statics::NewProp_UpdateDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PublisherComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2PublisherComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PublisherComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PublisherComponent_Statics::ClassParams = {
	&UROS2PublisherComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2PublisherComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PublisherComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PublisherComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PublisherComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PublisherComponent()
{
	if (!Z_Registration_Info_UClass_UROS2PublisherComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PublisherComponent.OuterSingleton, Z_Construct_UClass_UROS2PublisherComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PublisherComponent.OuterSingleton;
}
UROS2PublisherComponent::UROS2PublisherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PublisherComponent);
UROS2PublisherComponent::~UROS2PublisherComponent() {}
// ********** End Class UROS2PublisherComponent ****************************************************

// ********** Begin Class UROS2CustomPublisherComponent Function DefaultCreatePublisher ************
struct Z_Construct_UFunction_UROS2CustomPublisherComponent_DefaultCreatePublisher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CustomPublisherComponent_DefaultCreatePublisher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CustomPublisherComponent, nullptr, "DefaultCreatePublisher", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CustomPublisherComponent_DefaultCreatePublisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CustomPublisherComponent_DefaultCreatePublisher_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2CustomPublisherComponent_DefaultCreatePublisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CustomPublisherComponent_DefaultCreatePublisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CustomPublisherComponent::execDefaultCreatePublisher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultCreatePublisher();
	P_NATIVE_END;
}
// ********** End Class UROS2CustomPublisherComponent Function DefaultCreatePublisher **************

// ********** Begin Class UROS2CustomPublisherComponent ********************************************
void UROS2CustomPublisherComponent::StaticRegisterNativesUROS2CustomPublisherComponent()
{
	UClass* Class = UROS2CustomPublisherComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultCreatePublisher", &UROS2CustomPublisherComponent::execDefaultCreatePublisher },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2CustomPublisherComponent;
UClass* UROS2CustomPublisherComponent::GetPrivateStaticClass()
{
	using TClass = UROS2CustomPublisherComponent;
	if (!Z_Registration_Info_UClass_UROS2CustomPublisherComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2CustomPublisherComponent"),
			Z_Registration_Info_UClass_UROS2CustomPublisherComponent.InnerSingleton,
			StaticRegisterNativesUROS2CustomPublisherComponent,
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
	return Z_Registration_Info_UClass_UROS2CustomPublisherComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2CustomPublisherComponent_NoRegister()
{
	return UROS2CustomPublisherComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2CustomPublisherComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 Custom Publisher Component. Wrapper of #UROS2Publisher for BP.\n *\n */" },
#endif
		{ "IncludePath", "ROS2Publisher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 Custom Publisher Component. Wrapper of #UROS2Publisher for BP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Publisher_MetaData[] = {
		{ "Category", "ROS2CustomPublisherComponent" },
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicName_MetaData[] = {
		{ "Category", "ROS2CustomPublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::TopicName in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::TopicName in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublisherClass_MetaData[] = {
		{ "Category", "ROS2CustomPublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::PublisherClass in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::PublisherClass in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublicationFrequencyHz_MetaData[] = {
		{ "Category", "ROS2CustomPublisherComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Publisher::PublicationFrequencyHz in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Publisher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Publisher::PublicationFrequencyHz in #BeginPlay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Publisher;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PublisherClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PublicationFrequencyHz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2CustomPublisherComponent_DefaultCreatePublisher, "DefaultCreatePublisher" }, // 2671747614
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2CustomPublisherComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::NewProp_Publisher = { "Publisher", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2CustomPublisherComponent, Publisher), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Publisher_MetaData), NewProp_Publisher_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::NewProp_TopicName = { "TopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2CustomPublisherComponent, TopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicName_MetaData), NewProp_TopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::NewProp_PublisherClass = { "PublisherClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2CustomPublisherComponent, PublisherClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublisherClass_MetaData), NewProp_PublisherClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::NewProp_PublicationFrequencyHz = { "PublicationFrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2CustomPublisherComponent, PublicationFrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublicationFrequencyHz_MetaData), NewProp_PublicationFrequencyHz_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::NewProp_Publisher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::NewProp_TopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::NewProp_PublisherClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::NewProp_PublicationFrequencyHz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::ClassParams = {
	&UROS2CustomPublisherComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2CustomPublisherComponent()
{
	if (!Z_Registration_Info_UClass_UROS2CustomPublisherComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2CustomPublisherComponent.OuterSingleton, Z_Construct_UClass_UROS2CustomPublisherComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2CustomPublisherComponent.OuterSingleton;
}
UROS2CustomPublisherComponent::UROS2CustomPublisherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2CustomPublisherComponent);
UROS2CustomPublisherComponent::~UROS2CustomPublisherComponent() {}
// ********** End Class UROS2CustomPublisherComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Publisher, UROS2Publisher::StaticClass, TEXT("UROS2Publisher"), &Z_Registration_Info_UClass_UROS2Publisher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Publisher), 22177102U) },
		{ Z_Construct_UClass_UROS2PublisherComponent, UROS2PublisherComponent::StaticClass, TEXT("UROS2PublisherComponent"), &Z_Registration_Info_UClass_UROS2PublisherComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PublisherComponent), 3193276766U) },
		{ Z_Construct_UClass_UROS2CustomPublisherComponent, UROS2CustomPublisherComponent::StaticClass, TEXT("UROS2CustomPublisherComponent"), &Z_Registration_Info_UClass_UROS2CustomPublisherComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2CustomPublisherComponent), 1948187307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h__Script_rclUE_3752498344(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Publisher_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
