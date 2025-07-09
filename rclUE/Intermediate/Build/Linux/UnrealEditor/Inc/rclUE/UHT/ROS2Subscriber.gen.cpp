// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2Subscriber.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Subscriber() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Subscriber();
RCLUE_API UClass* Z_Construct_UClass_UROS2Subscriber_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2SubscriberComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2SubscriberComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Topic();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2Subscriber Function SetDelegates ************************************
struct Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics
{
	struct ROS2Subscriber_eventSetDelegates_Parms
	{
		FScriptDelegate InCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::NewProp_InCallback = { "InCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Subscriber_eventSetDelegates_Parms, InCallback), Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCallback_MetaData), NewProp_InCallback_MetaData) }; // 2107730569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::NewProp_InCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Subscriber, nullptr, "SetDelegates", Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::ROS2Subscriber_eventSetDelegates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::ROS2Subscriber_eventSetDelegates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Subscriber_SetDelegates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Subscriber_SetDelegates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Subscriber::execSetDelegates)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDelegates(FSubscriptionCallback(Z_Param_Out_InCallback));
	P_NATIVE_END;
}
// ********** End Class UROS2Subscriber Function SetDelegates **************************************

// ********** Begin Class UROS2Subscriber **********************************************************
void UROS2Subscriber::StaticRegisterNativesUROS2Subscriber()
{
	UClass* Class = UROS2Subscriber::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDelegates", &UROS2Subscriber::execSetDelegates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Subscriber;
UClass* UROS2Subscriber::GetPrivateStaticClass()
{
	using TClass = UROS2Subscriber;
	if (!Z_Registration_Info_UClass_UROS2Subscriber.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Subscriber"),
			Z_Registration_Info_UClass_UROS2Subscriber.InnerSingleton,
			StaticRegisterNativesUROS2Subscriber,
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
	return Z_Registration_Info_UClass_UROS2Subscriber.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Subscriber_NoRegister()
{
	return UROS2Subscriber::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Subscriber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 Subscriber class.\n *\n */" },
#endif
		{ "IncludePath", "ROS2Subscriber.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 Subscriber class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "Category", "ROS2Subscriber" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Delegate which is Bound with #UpdateMessage by #SetDelegates\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Delegate which is Bound with #UpdateMessage by #SetDelegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Subscriber_SetDelegates, "SetDelegates" }, // 3768054714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Subscriber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UROS2Subscriber_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Subscriber, Callback), Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2107730569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2Subscriber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Subscriber_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Subscriber_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2Subscriber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2Topic,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Subscriber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Subscriber_Statics::ClassParams = {
	&UROS2Subscriber::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2Subscriber_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Subscriber_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Subscriber_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Subscriber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Subscriber()
{
	if (!Z_Registration_Info_UClass_UROS2Subscriber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Subscriber.OuterSingleton, Z_Construct_UClass_UROS2Subscriber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Subscriber.OuterSingleton;
}
UROS2Subscriber::UROS2Subscriber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Subscriber);
UROS2Subscriber::~UROS2Subscriber() {}
// ********** End Class UROS2Subscriber ************************************************************

// ********** Begin Class UROS2SubscriberComponent Function DefaultCreateSubscriber ****************
struct Z_Construct_UFunction_UROS2SubscriberComponent_DefaultCreateSubscriber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SubscriberComponent_DefaultCreateSubscriber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SubscriberComponent, nullptr, "DefaultCreateSubscriber", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SubscriberComponent_DefaultCreateSubscriber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SubscriberComponent_DefaultCreateSubscriber_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SubscriberComponent_DefaultCreateSubscriber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SubscriberComponent_DefaultCreateSubscriber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SubscriberComponent::execDefaultCreateSubscriber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultCreateSubscriber();
	P_NATIVE_END;
}
// ********** End Class UROS2SubscriberComponent Function DefaultCreateSubscriber ******************

// ********** Begin Class UROS2SubscriberComponent *************************************************
void UROS2SubscriberComponent::StaticRegisterNativesUROS2SubscriberComponent()
{
	UClass* Class = UROS2SubscriberComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultCreateSubscriber", &UROS2SubscriberComponent::execDefaultCreateSubscriber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SubscriberComponent;
UClass* UROS2SubscriberComponent::GetPrivateStaticClass()
{
	using TClass = UROS2SubscriberComponent;
	if (!Z_Registration_Info_UClass_UROS2SubscriberComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SubscriberComponent"),
			Z_Registration_Info_UClass_UROS2SubscriberComponent.InnerSingleton,
			StaticRegisterNativesUROS2SubscriberComponent,
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
	return Z_Registration_Info_UClass_UROS2SubscriberComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SubscriberComponent_NoRegister()
{
	return UROS2SubscriberComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SubscriberComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 Subscriber Component. Wrapper of #UROS2Subscriber for BP.\n *\n */" },
#endif
		{ "IncludePath", "ROS2Subscriber.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 Subscriber Component. Wrapper of #UROS2Subscriber for BP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subscriber_MetaData[] = {
		{ "Category", "ROS2SubscriberComponent" },
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicName_MetaData[] = {
		{ "Category", "ROS2SubscriberComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Subscriber::TopicName in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Subscriber::TopicName in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MsgClass_MetaData[] = {
		{ "Category", "ROS2SubscriberComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Subscriber::MsgClass in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Subscriber::MsgClass in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QoS_MetaData[] = {
		{ "Category", "ROS2SubscriberComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Subscriber::QoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Subscriber::QoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "Category", "ROS2SubscriberComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2Subscriber::Callback in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Subscriber.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2Subscriber::Callback in #BeginPlay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subscriber;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MsgClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QoS;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SubscriberComponent_DefaultCreateSubscriber, "DefaultCreateSubscriber" }, // 1792702016
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SubscriberComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_Subscriber = { "Subscriber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2SubscriberComponent, Subscriber), Z_Construct_UClass_UROS2Subscriber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subscriber_MetaData), NewProp_Subscriber_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_TopicName = { "TopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2SubscriberComponent, TopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicName_MetaData), NewProp_TopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_MsgClass = { "MsgClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2SubscriberComponent, MsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MsgClass_MetaData), NewProp_MsgClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_QoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_QoS = { "QoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2SubscriberComponent, QoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QoS_MetaData), NewProp_QoS_MetaData) }; // 314065690
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2SubscriberComponent, Callback), Z_Construct_UDelegateFunction_rclUE_SubscriptionCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2107730569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2SubscriberComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_Subscriber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_TopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_MsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_QoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_QoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2SubscriberComponent_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SubscriberComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2SubscriberComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SubscriberComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SubscriberComponent_Statics::ClassParams = {
	&UROS2SubscriberComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2SubscriberComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SubscriberComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SubscriberComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SubscriberComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SubscriberComponent()
{
	if (!Z_Registration_Info_UClass_UROS2SubscriberComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SubscriberComponent.OuterSingleton, Z_Construct_UClass_UROS2SubscriberComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SubscriberComponent.OuterSingleton;
}
UROS2SubscriberComponent::UROS2SubscriberComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SubscriberComponent);
UROS2SubscriberComponent::~UROS2SubscriberComponent() {}
// ********** End Class UROS2SubscriberComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subscriber_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Subscriber, UROS2Subscriber::StaticClass, TEXT("UROS2Subscriber"), &Z_Registration_Info_UClass_UROS2Subscriber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Subscriber), 2395373248U) },
		{ Z_Construct_UClass_UROS2SubscriberComponent, UROS2SubscriberComponent::StaticClass, TEXT("UROS2SubscriberComponent"), &Z_Registration_Info_UClass_UROS2SubscriberComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SubscriberComponent), 3555907058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subscriber_h__Script_rclUE_2002085949(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subscriber_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subscriber_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
