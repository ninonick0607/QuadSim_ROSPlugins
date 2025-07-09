// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2ActionServer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ActionServer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2Action();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServer();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServer_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServerComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionServerComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2ActionServer Function ProcessAndSendCancelResponse ******************
struct Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics
{
	struct ROS2ActionServer_eventProcessAndSendCancelResponse_Parms
	{
		int32 InReturnCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Process and send cancel response with rcl_action_process_cancel_request\n     * @param InReturnCode return code\n     * @sa [CancelGoal](https://docs.ros2.org/foxy/api/action_msgs/srv/CancelGoal.html)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Process and send cancel response with rcl_action_process_cancel_request\n@param InReturnCode return code\n@sa [CancelGoal](https://docs.ros2.org/foxy/api/action_msgs/srv/CancelGoal.html)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReturnCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InReturnCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::NewProp_InReturnCode = { "InReturnCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ActionServer_eventProcessAndSendCancelResponse_Parms, InReturnCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReturnCode_MetaData), NewProp_InReturnCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::NewProp_InReturnCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionServer, nullptr, "ProcessAndSendCancelResponse", Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::ROS2ActionServer_eventProcessAndSendCancelResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::ROS2ActionServer_eventProcessAndSendCancelResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionServer::execProcessAndSendCancelResponse)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InReturnCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessAndSendCancelResponse(Z_Param_InReturnCode);
	P_NATIVE_END;
}
// ********** End Class UROS2ActionServer Function ProcessAndSendCancelResponse ********************

// ********** Begin Class UROS2ActionServer Function SendFeedback **********************************
struct Z_Construct_UFunction_UROS2ActionServer_SendFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Update and send feedback with rcl_action_publish_feedback\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Update and send feedback with rcl_action_publish_feedback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionServer_SendFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionServer, nullptr, "SendFeedback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_SendFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionServer_SendFeedback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ActionServer_SendFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionServer_SendFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionServer::execSendFeedback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendFeedback();
	P_NATIVE_END;
}
// ********** End Class UROS2ActionServer Function SendFeedback ************************************

// ********** Begin Class UROS2ActionServer Function SendGoalResponse ******************************
struct Z_Construct_UFunction_UROS2ActionServer_SendGoalResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Send action goal response with rcl_action_send_goal_response\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Send action goal response with rcl_action_send_goal_response" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionServer_SendGoalResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionServer, nullptr, "SendGoalResponse", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_SendGoalResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionServer_SendGoalResponse_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ActionServer_SendGoalResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionServer_SendGoalResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionServer::execSendGoalResponse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendGoalResponse();
	P_NATIVE_END;
}
// ********** End Class UROS2ActionServer Function SendGoalResponse ********************************

// ********** Begin Class UROS2ActionServer Function SendResultResponse ****************************
struct Z_Construct_UFunction_UROS2ActionServer_SendResultResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Update and send feedback with rcl_action_send_result_response\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Update and send feedback with rcl_action_send_result_response" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionServer_SendResultResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionServer, nullptr, "SendResultResponse", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_SendResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionServer_SendResultResponse_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ActionServer_SendResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionServer_SendResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionServer::execSendResultResponse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendResultResponse();
	P_NATIVE_END;
}
// ********** End Class UROS2ActionServer Function SendResultResponse ******************************

// ********** Begin Class UROS2ActionServer Function SetDelegates **********************************
struct Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics
{
	struct ROS2ActionServer_eventSetDelegates_Parms
	{
		FScriptDelegate InGoalDelegate;
		FScriptDelegate InCancelDelegate;
		FScriptDelegate InResultDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set the Delegates\n     *\n     * @param HandleGoal\n     * @param HandleCancel\n     * @param HandleAccepted\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set the Delegates\n\n@param HandleGoal\n@param HandleCancel\n@param HandleAccepted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGoalDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCancelDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InGoalDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCancelDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InResultDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::NewProp_InGoalDelegate = { "InGoalDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ActionServer_eventSetDelegates_Parms, InGoalDelegate), Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGoalDelegate_MetaData), NewProp_InGoalDelegate_MetaData) }; // 2722095223
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::NewProp_InCancelDelegate = { "InCancelDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ActionServer_eventSetDelegates_Parms, InCancelDelegate), Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCancelDelegate_MetaData), NewProp_InCancelDelegate_MetaData) }; // 124399133
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::NewProp_InResultDelegate = { "InResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ActionServer_eventSetDelegates_Parms, InResultDelegate), Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InResultDelegate_MetaData), NewProp_InResultDelegate_MetaData) }; // 124399133
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::NewProp_InGoalDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::NewProp_InCancelDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::NewProp_InResultDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionServer, nullptr, "SetDelegates", Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::ROS2ActionServer_eventSetDelegates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::ROS2ActionServer_eventSetDelegates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ActionServer_SetDelegates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionServer_SetDelegates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionServer::execSetDelegates)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InGoalDelegate);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCancelDelegate);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InResultDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDelegates(FActionCallback(Z_Param_Out_InGoalDelegate),FSimpleCallback(Z_Param_Out_InCancelDelegate),FSimpleCallback(Z_Param_Out_InResultDelegate));
	P_NATIVE_END;
}
// ********** End Class UROS2ActionServer Function SetDelegates ************************************

// ********** Begin Class UROS2ActionServer ********************************************************
void UROS2ActionServer::StaticRegisterNativesUROS2ActionServer()
{
	UClass* Class = UROS2ActionServer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProcessAndSendCancelResponse", &UROS2ActionServer::execProcessAndSendCancelResponse },
		{ "SendFeedback", &UROS2ActionServer::execSendFeedback },
		{ "SendGoalResponse", &UROS2ActionServer::execSendGoalResponse },
		{ "SendResultResponse", &UROS2ActionServer::execSendResultResponse },
		{ "SetDelegates", &UROS2ActionServer::execSetDelegates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ActionServer;
UClass* UROS2ActionServer::GetPrivateStaticClass()
{
	using TClass = UROS2ActionServer;
	if (!Z_Registration_Info_UClass_UROS2ActionServer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ActionServer"),
			Z_Registration_Info_UClass_UROS2ActionServer.InnerSingleton,
			StaticRegisterNativesUROS2ActionServer,
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
	return Z_Registration_Info_UClass_UROS2ActionServer.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ActionServer_NoRegister()
{
	return UROS2ActionServer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ActionServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief  Class implementing ROS2 action servers. Wrapper class of rclc action server. Callbacks are set through the SetDelegates\n * method\n * @sa [rclc action client](https://docs.ros2.org/dashing/api/rcl_action/action__server_8h.html)\n * @sa [Unreal Engine\n * Delegates](https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/)\n */" },
#endif
		{ "IncludePath", "ROS2ActionServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief  Class implementing ROS2 action servers. Wrapper class of rclc action server. Callbacks are set through the SetDelegates\nmethod\n@sa [rclc action client](https://docs.ros2.org/dashing/api/rcl_action/action__server_8h.html)\n@sa [Unreal Engine\nDelegates](https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ActionServer_ProcessAndSendCancelResponse, "ProcessAndSendCancelResponse" }, // 3561652914
		{ &Z_Construct_UFunction_UROS2ActionServer_SendFeedback, "SendFeedback" }, // 1168350687
		{ &Z_Construct_UFunction_UROS2ActionServer_SendGoalResponse, "SendGoalResponse" }, // 712312970
		{ &Z_Construct_UFunction_UROS2ActionServer_SendResultResponse, "SendResultResponse" }, // 572885602
		{ &Z_Construct_UFunction_UROS2ActionServer_SetDelegates, "SetDelegates" }, // 2145116756
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ActionServer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ActionServer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2Action,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionServer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ActionServer_Statics::ClassParams = {
	&UROS2ActionServer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionServer_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ActionServer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ActionServer()
{
	if (!Z_Registration_Info_UClass_UROS2ActionServer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ActionServer.OuterSingleton, Z_Construct_UClass_UROS2ActionServer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ActionServer.OuterSingleton;
}
UROS2ActionServer::UROS2ActionServer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ActionServer);
UROS2ActionServer::~UROS2ActionServer() {}
// ********** End Class UROS2ActionServer **********************************************************

// ********** Begin Class UROS2ActionServerComponent Function DefaultCreateActionServer ************
struct Z_Construct_UFunction_UROS2ActionServerComponent_DefaultCreateActionServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionServerComponent_DefaultCreateActionServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionServerComponent, nullptr, "DefaultCreateActionServer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionServerComponent_DefaultCreateActionServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionServerComponent_DefaultCreateActionServer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ActionServerComponent_DefaultCreateActionServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionServerComponent_DefaultCreateActionServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionServerComponent::execDefaultCreateActionServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultCreateActionServer();
	P_NATIVE_END;
}
// ********** End Class UROS2ActionServerComponent Function DefaultCreateActionServer **************

// ********** Begin Class UROS2ActionServerComponent ***********************************************
void UROS2ActionServerComponent::StaticRegisterNativesUROS2ActionServerComponent()
{
	UClass* Class = UROS2ActionServerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultCreateActionServer", &UROS2ActionServerComponent::execDefaultCreateActionServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ActionServerComponent;
UClass* UROS2ActionServerComponent::GetPrivateStaticClass()
{
	using TClass = UROS2ActionServerComponent;
	if (!Z_Registration_Info_UClass_UROS2ActionServerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ActionServerComponent"),
			Z_Registration_Info_UClass_UROS2ActionServerComponent.InnerSingleton,
			StaticRegisterNativesUROS2ActionServerComponent,
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
	return Z_Registration_Info_UClass_UROS2ActionServerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ActionServerComponent_NoRegister()
{
	return UROS2ActionServerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ActionServerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 Action server Component. Wrapper of #UROS2ActionServer for BP.\n *\n */" },
#endif
		{ "IncludePath", "ROS2ActionServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 Action server Component. Wrapper of #UROS2ActionServer for BP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionServer_MetaData[] = {
		{ "Category", "ROS2ActionServerComponent" },
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "ROS2ActionServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionServer::ActionName in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionServer::ActionName in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionClass_MetaData[] = {
		{ "Category", "ROS2ActionServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionServer::ActionClass in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionServer::ActionClass in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelQoS_MetaData[] = {
		{ "Category", "ROS2ActionServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionServer::CancelQoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionServer::CancelQoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalQoS_MetaData[] = {
		{ "Category", "ROS2ActionServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionServer::GoalQoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionServer::GoalQoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultQoS_MetaData[] = {
		{ "Category", "ROS2ActionServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionServer::ResultQoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionServer::ResultQoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackQoS_MetaData[] = {
		{ "Category", "ROS2ActionServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionServer::FeedbackQoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionServer::FeedbackQoS in #BeginPlay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionServer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CancelQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CancelQoS;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GoalQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GoalQoS;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultQoS;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FeedbackQoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FeedbackQoS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ActionServerComponent_DefaultCreateActionServer, "DefaultCreateActionServer" }, // 706006725
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ActionServerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ActionServer = { "ActionServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionServerComponent, ActionServer), Z_Construct_UClass_UROS2ActionServer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionServer_MetaData), NewProp_ActionServer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionServerComponent, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionServerComponent, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionClass_MetaData), NewProp_ActionClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_CancelQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_CancelQoS = { "CancelQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionServerComponent, CancelQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelQoS_MetaData), NewProp_CancelQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_GoalQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_GoalQoS = { "GoalQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionServerComponent, GoalQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalQoS_MetaData), NewProp_GoalQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ResultQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ResultQoS = { "ResultQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionServerComponent, ResultQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultQoS_MetaData), NewProp_ResultQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_FeedbackQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_FeedbackQoS = { "FeedbackQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionServerComponent, FeedbackQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackQoS_MetaData), NewProp_FeedbackQoS_MetaData) }; // 314065690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2ActionServerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ActionServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ActionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_CancelQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_CancelQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_GoalQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_GoalQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ResultQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_ResultQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_FeedbackQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionServerComponent_Statics::NewProp_FeedbackQoS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionServerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2ActionServerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionServerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ActionServerComponent_Statics::ClassParams = {
	&UROS2ActionServerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2ActionServerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionServerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionServerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ActionServerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ActionServerComponent()
{
	if (!Z_Registration_Info_UClass_UROS2ActionServerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ActionServerComponent.OuterSingleton, Z_Construct_UClass_UROS2ActionServerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ActionServerComponent.OuterSingleton;
}
UROS2ActionServerComponent::UROS2ActionServerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ActionServerComponent);
UROS2ActionServerComponent::~UROS2ActionServerComponent() {}
// ********** End Class UROS2ActionServerComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ActionServer, UROS2ActionServer::StaticClass, TEXT("UROS2ActionServer"), &Z_Registration_Info_UClass_UROS2ActionServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ActionServer), 363648924U) },
		{ Z_Construct_UClass_UROS2ActionServerComponent, UROS2ActionServerComponent::StaticClass, TEXT("UROS2ActionServerComponent"), &Z_Registration_Info_UClass_UROS2ActionServerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ActionServerComponent), 1987353617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h__Script_rclUE_964155579(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionServer_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
