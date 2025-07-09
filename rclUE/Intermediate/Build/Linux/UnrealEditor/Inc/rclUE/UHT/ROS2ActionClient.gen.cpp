// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2ActionClient.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ActionClient() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2Action();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClient();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClient_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClientComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2ActionClientComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2ActionClient Function SendCancelRequest *****************************
struct Z_Construct_UFunction_UROS2ActionClient_SendCancelRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Send cancel request with rcl_action_send_cancel_request\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Send cancel request with rcl_action_send_cancel_request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionClient_SendCancelRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionClient, nullptr, "SendCancelRequest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClient_SendCancelRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionClient_SendCancelRequest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ActionClient_SendCancelRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionClient_SendCancelRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionClient::execSendCancelRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendCancelRequest();
	P_NATIVE_END;
}
// ********** End Class UROS2ActionClient Function SendCancelRequest *******************************

// ********** Begin Class UROS2ActionClient Function SendGoal **************************************
struct Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics
{
	struct ROS2ActionClient_eventSendGoal_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Send action goal with rcl_action_send_goal_request\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Send action goal with rcl_action_send_goal_request" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ROS2ActionClient_eventSendGoal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2ActionClient_eventSendGoal_Parms), &Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionClient, nullptr, "SendGoal", Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::ROS2ActionClient_eventSendGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::ROS2ActionClient_eventSendGoal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ActionClient_SendGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionClient_SendGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionClient::execSendGoal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendGoal();
	P_NATIVE_END;
}
// ********** End Class UROS2ActionClient Function SendGoal ****************************************

// ********** Begin Class UROS2ActionClient Function SendResultRequest *****************************
struct Z_Construct_UFunction_UROS2ActionClient_SendResultRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Send result request to get result with rcl_action_send_result_request\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Send result request to get result with rcl_action_send_result_request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionClient_SendResultRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionClient, nullptr, "SendResultRequest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClient_SendResultRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionClient_SendResultRequest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ActionClient_SendResultRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionClient_SendResultRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionClient::execSendResultRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendResultRequest();
	P_NATIVE_END;
}
// ********** End Class UROS2ActionClient Function SendResultRequest *******************************

// ********** Begin Class UROS2ActionClient Function SetDelegates **********************************
struct Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics
{
	struct ROS2ActionClient_eventSetDelegates_Parms
	{
		FScriptDelegate InFeedbackDelegate;
		FScriptDelegate InResultResponseDelegate;
		FScriptDelegate InGoalResponseDelegate;
		FScriptDelegate InCancelResponseDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set the Delegates\n     *\n     * @param SetGoal\n     * @param Feedback\n     * @param Result\n     * @param GoalResponse\n     * @param Cancel\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set the Delegates\n\n@param SetGoal\n@param Feedback\n@param Result\n@param GoalResponse\n@param Cancel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFeedbackDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InResultResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGoalResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCancelResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InFeedbackDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InResultResponseDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InGoalResponseDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCancelResponseDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::NewProp_InFeedbackDelegate = { "InFeedbackDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ActionClient_eventSetDelegates_Parms, InFeedbackDelegate), Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFeedbackDelegate_MetaData), NewProp_InFeedbackDelegate_MetaData) }; // 2722095223
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::NewProp_InResultResponseDelegate = { "InResultResponseDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ActionClient_eventSetDelegates_Parms, InResultResponseDelegate), Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InResultResponseDelegate_MetaData), NewProp_InResultResponseDelegate_MetaData) }; // 2722095223
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::NewProp_InGoalResponseDelegate = { "InGoalResponseDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ActionClient_eventSetDelegates_Parms, InGoalResponseDelegate), Z_Construct_UDelegateFunction_rclUE_ActionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGoalResponseDelegate_MetaData), NewProp_InGoalResponseDelegate_MetaData) }; // 2722095223
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::NewProp_InCancelResponseDelegate = { "InCancelResponseDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ActionClient_eventSetDelegates_Parms, InCancelResponseDelegate), Z_Construct_UDelegateFunction_rclUE_SimpleCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCancelResponseDelegate_MetaData), NewProp_InCancelResponseDelegate_MetaData) }; // 124399133
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::NewProp_InFeedbackDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::NewProp_InResultResponseDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::NewProp_InGoalResponseDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::NewProp_InCancelResponseDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionClient, nullptr, "SetDelegates", Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::ROS2ActionClient_eventSetDelegates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::ROS2ActionClient_eventSetDelegates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ActionClient_SetDelegates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionClient_SetDelegates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionClient::execSetDelegates)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InFeedbackDelegate);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InResultResponseDelegate);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InGoalResponseDelegate);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCancelResponseDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDelegates(FActionCallback(Z_Param_Out_InFeedbackDelegate),FActionCallback(Z_Param_Out_InResultResponseDelegate),FActionCallback(Z_Param_Out_InGoalResponseDelegate),FSimpleCallback(Z_Param_Out_InCancelResponseDelegate));
	P_NATIVE_END;
}
// ********** End Class UROS2ActionClient Function SetDelegates ************************************

// ********** Begin Class UROS2ActionClient ********************************************************
void UROS2ActionClient::StaticRegisterNativesUROS2ActionClient()
{
	UClass* Class = UROS2ActionClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendCancelRequest", &UROS2ActionClient::execSendCancelRequest },
		{ "SendGoal", &UROS2ActionClient::execSendGoal },
		{ "SendResultRequest", &UROS2ActionClient::execSendResultRequest },
		{ "SetDelegates", &UROS2ActionClient::execSetDelegates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ActionClient;
UClass* UROS2ActionClient::GetPrivateStaticClass()
{
	using TClass = UROS2ActionClient;
	if (!Z_Registration_Info_UClass_UROS2ActionClient.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ActionClient"),
			Z_Registration_Info_UClass_UROS2ActionClient.InnerSingleton,
			StaticRegisterNativesUROS2ActionClient,
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
	return Z_Registration_Info_UClass_UROS2ActionClient.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ActionClient_NoRegister()
{
	return UROS2ActionClient::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ActionClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief  Class implementing ROS2 action clients. Wrapper class of rclc action client. Callbacks are set through the SetDelegates\n * method\n * @sa [rclc action client](https://docs.ros2.org/dashing/api/rcl_action/action__client_8h.html)\n * @sa [Unreal Engine Delegates](https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/)\n */" },
#endif
		{ "IncludePath", "ROS2ActionClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief  Class implementing ROS2 action clients. Wrapper class of rclc action client. Callbacks are set through the SetDelegates\nmethod\n@sa [rclc action client](https://docs.ros2.org/dashing/api/rcl_action/action__client_8h.html)\n@sa [Unreal Engine Delegates](https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ActionClient_SendCancelRequest, "SendCancelRequest" }, // 113033905
		{ &Z_Construct_UFunction_UROS2ActionClient_SendGoal, "SendGoal" }, // 1692105041
		{ &Z_Construct_UFunction_UROS2ActionClient_SendResultRequest, "SendResultRequest" }, // 1027621154
		{ &Z_Construct_UFunction_UROS2ActionClient_SetDelegates, "SetDelegates" }, // 4103295843
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ActionClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ActionClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2Action,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ActionClient_Statics::ClassParams = {
	&UROS2ActionClient::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ActionClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ActionClient()
{
	if (!Z_Registration_Info_UClass_UROS2ActionClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ActionClient.OuterSingleton, Z_Construct_UClass_UROS2ActionClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ActionClient.OuterSingleton;
}
UROS2ActionClient::UROS2ActionClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ActionClient);
UROS2ActionClient::~UROS2ActionClient() {}
// ********** End Class UROS2ActionClient **********************************************************

// ********** Begin Class UROS2ActionClientComponent Function DefaultCreateActionClient ************
struct Z_Construct_UFunction_UROS2ActionClientComponent_DefaultCreateActionClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ActionClientComponent_DefaultCreateActionClient_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ActionClientComponent, nullptr, "DefaultCreateActionClient", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ActionClientComponent_DefaultCreateActionClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ActionClientComponent_DefaultCreateActionClient_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ActionClientComponent_DefaultCreateActionClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ActionClientComponent_DefaultCreateActionClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ActionClientComponent::execDefaultCreateActionClient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultCreateActionClient();
	P_NATIVE_END;
}
// ********** End Class UROS2ActionClientComponent Function DefaultCreateActionClient **************

// ********** Begin Class UROS2ActionClientComponent ***********************************************
void UROS2ActionClientComponent::StaticRegisterNativesUROS2ActionClientComponent()
{
	UClass* Class = UROS2ActionClientComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultCreateActionClient", &UROS2ActionClientComponent::execDefaultCreateActionClient },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ActionClientComponent;
UClass* UROS2ActionClientComponent::GetPrivateStaticClass()
{
	using TClass = UROS2ActionClientComponent;
	if (!Z_Registration_Info_UClass_UROS2ActionClientComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ActionClientComponent"),
			Z_Registration_Info_UClass_UROS2ActionClientComponent.InnerSingleton,
			StaticRegisterNativesUROS2ActionClientComponent,
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
	return Z_Registration_Info_UClass_UROS2ActionClientComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ActionClientComponent_NoRegister()
{
	return UROS2ActionClientComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ActionClientComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 Action client Component. Wrapper of #UROS2ActionClient for BP.\n *\n */" },
#endif
		{ "IncludePath", "ROS2ActionClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 Action client Component. Wrapper of #UROS2ActionClient for BP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionClient_MetaData[] = {
		{ "Category", "ROS2ActionClientComponent" },
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "ROS2ActionClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionClient::ActionName in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionClient::ActionName in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionClass_MetaData[] = {
		{ "Category", "ROS2ActionClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionClient::ActionClass in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionClient::ActionClass in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelQoS_MetaData[] = {
		{ "Category", "ROS2ActionClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionClient::CancelQoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionClient::CancelQoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalQoS_MetaData[] = {
		{ "Category", "ROS2ActionClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionClient::GoalQoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionClient::GoalQoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultQoS_MetaData[] = {
		{ "Category", "ROS2ActionClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionClient::ResultQoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionClient::ResultQoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackQoS_MetaData[] = {
		{ "Category", "ROS2ActionClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ActionClient::FeedbackQoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ActionClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ActionClient::FeedbackQoS in #BeginPlay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionClient;
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
		{ &Z_Construct_UFunction_UROS2ActionClientComponent_DefaultCreateActionClient, "DefaultCreateActionClient" }, // 3302734893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ActionClientComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ActionClient = { "ActionClient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionClientComponent, ActionClient), Z_Construct_UClass_UROS2ActionClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionClient_MetaData), NewProp_ActionClient_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionClientComponent, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionClientComponent, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionClass_MetaData), NewProp_ActionClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_CancelQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_CancelQoS = { "CancelQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionClientComponent, CancelQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelQoS_MetaData), NewProp_CancelQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_GoalQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_GoalQoS = { "GoalQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionClientComponent, GoalQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalQoS_MetaData), NewProp_GoalQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ResultQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ResultQoS = { "ResultQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionClientComponent, ResultQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultQoS_MetaData), NewProp_ResultQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_FeedbackQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_FeedbackQoS = { "FeedbackQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ActionClientComponent, FeedbackQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackQoS_MetaData), NewProp_FeedbackQoS_MetaData) }; // 314065690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2ActionClientComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ActionClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ActionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_CancelQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_CancelQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_GoalQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_GoalQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ResultQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_ResultQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_FeedbackQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ActionClientComponent_Statics::NewProp_FeedbackQoS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionClientComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2ActionClientComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionClientComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ActionClientComponent_Statics::ClassParams = {
	&UROS2ActionClientComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2ActionClientComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionClientComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ActionClientComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ActionClientComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ActionClientComponent()
{
	if (!Z_Registration_Info_UClass_UROS2ActionClientComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ActionClientComponent.OuterSingleton, Z_Construct_UClass_UROS2ActionClientComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ActionClientComponent.OuterSingleton;
}
UROS2ActionClientComponent::UROS2ActionClientComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ActionClientComponent);
UROS2ActionClientComponent::~UROS2ActionClientComponent() {}
// ********** End Class UROS2ActionClientComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ActionClient, UROS2ActionClient::StaticClass, TEXT("UROS2ActionClient"), &Z_Registration_Info_UClass_UROS2ActionClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ActionClient), 2313165384U) },
		{ Z_Construct_UClass_UROS2ActionClientComponent, UROS2ActionClientComponent::StaticClass, TEXT("UROS2ActionClientComponent"), &Z_Registration_Info_UClass_UROS2ActionClientComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ActionClientComponent), 707447154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h__Script_rclUE_3437736439(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ActionClient_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
