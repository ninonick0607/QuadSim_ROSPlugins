// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2ServiceClient.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ServiceClient() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Service();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClient();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClient_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClientComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceClientComponent_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2ServiceClient Function IsServiceReady *******************************
struct Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics
{
	struct ROS2ServiceClient_eventIsServiceReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Return true if service is available.\n     * @sa https://github.com/ros2/rclcpp/blob/11edf82c7d960e76a00a470033b99cc88a5eb082/rclcpp/src/rclcpp/client.cpp#L107\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Return true if service is available.\n@sa https://github.com/ros2/rclcpp/blob/11edf82c7d960e76a00a470033b99cc88a5eb082/rclcpp/src/rclcpp/client.cpp#L107" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ROS2ServiceClient_eventIsServiceReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2ServiceClient_eventIsServiceReady_Parms), &Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ServiceClient, nullptr, "IsServiceReady", Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::ROS2ServiceClient_eventIsServiceReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::ROS2ServiceClient_eventIsServiceReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ServiceClient::execIsServiceReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsServiceReady();
	P_NATIVE_END;
}
// ********** End Class UROS2ServiceClient Function IsServiceReady *********************************

// ********** Begin Class UROS2ServiceClient Function SendRequest **********************************
struct Z_Construct_UFunction_UROS2ServiceClient_SendRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Send service request\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Send service request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ServiceClient_SendRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ServiceClient, nullptr, "SendRequest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceClient_SendRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ServiceClient_SendRequest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ServiceClient_SendRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ServiceClient_SendRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ServiceClient::execSendRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendRequest();
	P_NATIVE_END;
}
// ********** End Class UROS2ServiceClient Function SendRequest ************************************

// ********** Begin Class UROS2ServiceClient Function SetDelegates *********************************
struct Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics
{
	struct ROS2ServiceClient_eventSetDelegates_Parms
	{
		FScriptDelegate InResponseCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set #ResponseDelegate\n     *\n     * @param InResponseCallback\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set #ResponseDelegate\n\n@param InResponseCallback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InResponseCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InResponseCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::NewProp_InResponseCallback = { "InResponseCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ServiceClient_eventSetDelegates_Parms, InResponseCallback), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InResponseCallback_MetaData), NewProp_InResponseCallback_MetaData) }; // 1854847413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::NewProp_InResponseCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ServiceClient, nullptr, "SetDelegates", Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::ROS2ServiceClient_eventSetDelegates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::ROS2ServiceClient_eventSetDelegates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ServiceClient_SetDelegates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ServiceClient_SetDelegates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ServiceClient::execSetDelegates)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InResponseCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDelegates(FServiceCallback(Z_Param_Out_InResponseCallback));
	P_NATIVE_END;
}
// ********** End Class UROS2ServiceClient Function SetDelegates ***********************************

// ********** Begin Class UROS2ServiceClient *******************************************************
void UROS2ServiceClient::StaticRegisterNativesUROS2ServiceClient()
{
	UClass* Class = UROS2ServiceClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsServiceReady", &UROS2ServiceClient::execIsServiceReady },
		{ "SendRequest", &UROS2ServiceClient::execSendRequest },
		{ "SetDelegates", &UROS2ServiceClient::execSetDelegates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ServiceClient;
UClass* UROS2ServiceClient::GetPrivateStaticClass()
{
	using TClass = UROS2ServiceClient;
	if (!Z_Registration_Info_UClass_UROS2ServiceClient.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ServiceClient"),
			Z_Registration_Info_UClass_UROS2ServiceClient.InnerSingleton,
			StaticRegisterNativesUROS2ServiceClient,
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
	return Z_Registration_Info_UClass_UROS2ServiceClient.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ServiceClient_NoRegister()
{
	return UROS2ServiceClient::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ServiceClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Class implementing ROS2 service clients.\n *  Service type is defined by SrvClass\n *\n */" },
#endif
		{ "IncludePath", "ROS2ServiceClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Class implementing ROS2 service clients.\n Service type is defined by SrvClass" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseDelegate_MetaData[] = {
		{ "Category", "ROS2ServiceClient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! used to receive the answer\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! used to receive the answer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResponseDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ServiceClient_IsServiceReady, "IsServiceReady" }, // 885036201
		{ &Z_Construct_UFunction_UROS2ServiceClient_SendRequest, "SendRequest" }, // 1172546782
		{ &Z_Construct_UFunction_UROS2ServiceClient_SetDelegates, "SetDelegates" }, // 861411793
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ServiceClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UROS2ServiceClient_Statics::NewProp_ResponseDelegate = { "ResponseDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceClient, ResponseDelegate), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseDelegate_MetaData), NewProp_ResponseDelegate_MetaData) }; // 1854847413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2ServiceClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceClient_Statics::NewProp_ResponseDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceClient_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2ServiceClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2Service,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ServiceClient_Statics::ClassParams = {
	&UROS2ServiceClient::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2ServiceClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceClient_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ServiceClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ServiceClient()
{
	if (!Z_Registration_Info_UClass_UROS2ServiceClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ServiceClient.OuterSingleton, Z_Construct_UClass_UROS2ServiceClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ServiceClient.OuterSingleton;
}
UROS2ServiceClient::UROS2ServiceClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ServiceClient);
UROS2ServiceClient::~UROS2ServiceClient() {}
// ********** End Class UROS2ServiceClient *********************************************************

// ********** Begin Class UROS2ServiceClientComponent Function DefaultCreateServiceClient **********
struct Z_Construct_UFunction_UROS2ServiceClientComponent_DefaultCreateServiceClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ServiceClientComponent_DefaultCreateServiceClient_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ServiceClientComponent, nullptr, "DefaultCreateServiceClient", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceClientComponent_DefaultCreateServiceClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ServiceClientComponent_DefaultCreateServiceClient_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ServiceClientComponent_DefaultCreateServiceClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ServiceClientComponent_DefaultCreateServiceClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ServiceClientComponent::execDefaultCreateServiceClient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultCreateServiceClient();
	P_NATIVE_END;
}
// ********** End Class UROS2ServiceClientComponent Function DefaultCreateServiceClient ************

// ********** Begin Class UROS2ServiceClientComponent **********************************************
void UROS2ServiceClientComponent::StaticRegisterNativesUROS2ServiceClientComponent()
{
	UClass* Class = UROS2ServiceClientComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultCreateServiceClient", &UROS2ServiceClientComponent::execDefaultCreateServiceClient },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ServiceClientComponent;
UClass* UROS2ServiceClientComponent::GetPrivateStaticClass()
{
	using TClass = UROS2ServiceClientComponent;
	if (!Z_Registration_Info_UClass_UROS2ServiceClientComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ServiceClientComponent"),
			Z_Registration_Info_UClass_UROS2ServiceClientComponent.InnerSingleton,
			StaticRegisterNativesUROS2ServiceClientComponent,
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
	return Z_Registration_Info_UClass_UROS2ServiceClientComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ServiceClientComponent_NoRegister()
{
	return UROS2ServiceClientComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ServiceClientComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 ServiceClient Component. Wrapper of #UROS2ServiceClient for BP.\n *\n */" },
#endif
		{ "IncludePath", "ROS2ServiceClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 ServiceClient Component. Wrapper of #UROS2ServiceClient for BP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceClient_MetaData[] = {
		{ "Category", "ROS2ServiceClientComponent" },
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceName_MetaData[] = {
		{ "Category", "ROS2ServiceClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ServiceClient::ServiceName in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ServiceClient::ServiceName in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrvClass_MetaData[] = {
		{ "Category", "ROS2ServiceClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ServiceClient::SrvClass in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ServiceClient::SrvClass in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QoS_MetaData[] = {
		{ "Category", "ROS2ServiceClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ServiceClient::QoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ServiceClient::QoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseDelegate_MetaData[] = {
		{ "Category", "ROS2ServiceClientComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ServiceClient::ResponseDelegate in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ServiceClient::ResponseDelegate in #BeginPlay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServiceClient;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SrvClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QoS;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResponseDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ServiceClientComponent_DefaultCreateServiceClient, "DefaultCreateServiceClient" }, // 1082093650
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ServiceClientComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_ServiceClient = { "ServiceClient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceClientComponent, ServiceClient), Z_Construct_UClass_UROS2ServiceClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceClient_MetaData), NewProp_ServiceClient_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_ServiceName = { "ServiceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceClientComponent, ServiceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceName_MetaData), NewProp_ServiceName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_SrvClass = { "SrvClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceClientComponent, SrvClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrvClass_MetaData), NewProp_SrvClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_QoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_QoS = { "QoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceClientComponent, QoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QoS_MetaData), NewProp_QoS_MetaData) }; // 314065690
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_ResponseDelegate = { "ResponseDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceClientComponent, ResponseDelegate), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseDelegate_MetaData), NewProp_ResponseDelegate_MetaData) }; // 1854847413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2ServiceClientComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_ServiceClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_ServiceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_SrvClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_QoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_QoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceClientComponent_Statics::NewProp_ResponseDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceClientComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2ServiceClientComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceClientComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ServiceClientComponent_Statics::ClassParams = {
	&UROS2ServiceClientComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2ServiceClientComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceClientComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceClientComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ServiceClientComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ServiceClientComponent()
{
	if (!Z_Registration_Info_UClass_UROS2ServiceClientComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ServiceClientComponent.OuterSingleton, Z_Construct_UClass_UROS2ServiceClientComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ServiceClientComponent.OuterSingleton;
}
UROS2ServiceClientComponent::UROS2ServiceClientComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ServiceClientComponent);
UROS2ServiceClientComponent::~UROS2ServiceClientComponent() {}
// ********** End Class UROS2ServiceClientComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ServiceClient, UROS2ServiceClient::StaticClass, TEXT("UROS2ServiceClient"), &Z_Registration_Info_UClass_UROS2ServiceClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ServiceClient), 2995891258U) },
		{ Z_Construct_UClass_UROS2ServiceClientComponent, UROS2ServiceClientComponent::StaticClass, TEXT("UROS2ServiceClientComponent"), &Z_Registration_Info_UClass_UROS2ServiceClientComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ServiceClientComponent), 4117622547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h__Script_rclUE_3676455073(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceClient_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
