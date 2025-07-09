// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2ServiceServer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ServiceServer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Service();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceServer();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceServer_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceServerComponent();
RCLUE_API UClass* Z_Construct_UClass_UROS2ServiceServerComponent_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UFunction* Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2ServiceServer Function SetDelegates *********************************
struct Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics
{
	struct ROS2ServiceServer_eventSetDelegates_Parms
	{
		FScriptDelegate InSrvCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set #SrvCallback\n     *\n     * @param InSrvCallback\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set #SrvCallback\n\n@param InSrvCallback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSrvCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InSrvCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::NewProp_InSrvCallback = { "InSrvCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ServiceServer_eventSetDelegates_Parms, InSrvCallback), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSrvCallback_MetaData), NewProp_InSrvCallback_MetaData) }; // 1854847413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::NewProp_InSrvCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ServiceServer, nullptr, "SetDelegates", Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::ROS2ServiceServer_eventSetDelegates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::ROS2ServiceServer_eventSetDelegates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ServiceServer_SetDelegates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ServiceServer_SetDelegates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ServiceServer::execSetDelegates)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InSrvCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDelegates(FServiceCallback(Z_Param_Out_InSrvCallback));
	P_NATIVE_END;
}
// ********** End Class UROS2ServiceServer Function SetDelegates ***********************************

// ********** Begin Class UROS2ServiceServer *******************************************************
void UROS2ServiceServer::StaticRegisterNativesUROS2ServiceServer()
{
	UClass* Class = UROS2ServiceServer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDelegates", &UROS2ServiceServer::execSetDelegates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ServiceServer;
UClass* UROS2ServiceServer::GetPrivateStaticClass()
{
	using TClass = UROS2ServiceServer;
	if (!Z_Registration_Info_UClass_UROS2ServiceServer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ServiceServer"),
			Z_Registration_Info_UClass_UROS2ServiceServer.InnerSingleton,
			StaticRegisterNativesUROS2ServiceServer,
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
	return Z_Registration_Info_UClass_UROS2ServiceServer.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ServiceServer_NoRegister()
{
	return UROS2ServiceServer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ServiceServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Class implementing ROS2 service server.\n *  Service type is defined by SrvClass\n *\n */" },
#endif
		{ "IncludePath", "ROS2ServiceServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Class implementing ROS2 service server.\n Service type is defined by SrvClass" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrvCallback_MetaData[] = {
		{ "Category", "ROS2ServiceServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! used to receive the answer\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! used to receive the answer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRejectConsecutiveIdenticalRequest_MetaData[] = {
		{ "Category", "ROS2ServiceServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Rejct consecutive identical requests\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Rejct consecutive identical requests" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SrvCallback;
	static void NewProp_bRejectConsecutiveIdenticalRequest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRejectConsecutiveIdenticalRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ServiceServer_SetDelegates, "SetDelegates" }, // 2553704804
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ServiceServer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UROS2ServiceServer_Statics::NewProp_SrvCallback = { "SrvCallback", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceServer, SrvCallback), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrvCallback_MetaData), NewProp_SrvCallback_MetaData) }; // 1854847413
void Z_Construct_UClass_UROS2ServiceServer_Statics::NewProp_bRejectConsecutiveIdenticalRequest_SetBit(void* Obj)
{
	((UROS2ServiceServer*)Obj)->bRejectConsecutiveIdenticalRequest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UROS2ServiceServer_Statics::NewProp_bRejectConsecutiveIdenticalRequest = { "bRejectConsecutiveIdenticalRequest", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UROS2ServiceServer), &Z_Construct_UClass_UROS2ServiceServer_Statics::NewProp_bRejectConsecutiveIdenticalRequest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRejectConsecutiveIdenticalRequest_MetaData), NewProp_bRejectConsecutiveIdenticalRequest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2ServiceServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceServer_Statics::NewProp_SrvCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceServer_Statics::NewProp_bRejectConsecutiveIdenticalRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceServer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2ServiceServer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2Service,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceServer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ServiceServer_Statics::ClassParams = {
	&UROS2ServiceServer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2ServiceServer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceServer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceServer_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ServiceServer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ServiceServer()
{
	if (!Z_Registration_Info_UClass_UROS2ServiceServer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ServiceServer.OuterSingleton, Z_Construct_UClass_UROS2ServiceServer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ServiceServer.OuterSingleton;
}
UROS2ServiceServer::UROS2ServiceServer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ServiceServer);
UROS2ServiceServer::~UROS2ServiceServer() {}
// ********** End Class UROS2ServiceServer *********************************************************

// ********** Begin Class UROS2ServiceServerComponent Function DefaultCreateServiceServer **********
struct Z_Construct_UFunction_UROS2ServiceServerComponent_DefaultCreateServiceServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ServiceServerComponent_DefaultCreateServiceServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ServiceServerComponent, nullptr, "DefaultCreateServiceServer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ServiceServerComponent_DefaultCreateServiceServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ServiceServerComponent_DefaultCreateServiceServer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ServiceServerComponent_DefaultCreateServiceServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ServiceServerComponent_DefaultCreateServiceServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ServiceServerComponent::execDefaultCreateServiceServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultCreateServiceServer();
	P_NATIVE_END;
}
// ********** End Class UROS2ServiceServerComponent Function DefaultCreateServiceServer ************

// ********** Begin Class UROS2ServiceServerComponent **********************************************
void UROS2ServiceServerComponent::StaticRegisterNativesUROS2ServiceServerComponent()
{
	UClass* Class = UROS2ServiceServerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultCreateServiceServer", &UROS2ServiceServerComponent::execDefaultCreateServiceServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ServiceServerComponent;
UClass* UROS2ServiceServerComponent::GetPrivateStaticClass()
{
	using TClass = UROS2ServiceServerComponent;
	if (!Z_Registration_Info_UClass_UROS2ServiceServerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ServiceServerComponent"),
			Z_Registration_Info_UClass_UROS2ServiceServerComponent.InnerSingleton,
			StaticRegisterNativesUROS2ServiceServerComponent,
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
	return Z_Registration_Info_UClass_UROS2ServiceServerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ServiceServerComponent_NoRegister()
{
	return UROS2ServiceServerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ServiceServerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 ServiceServer Component. Wrapper of #UROS2ServiceServer for BP.\n *\n */" },
#endif
		{ "IncludePath", "ROS2ServiceServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 ServiceServer Component. Wrapper of #UROS2ServiceServer for BP." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceServer_MetaData[] = {
		{ "Category", "ROS2ServiceServerComponent" },
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceName_MetaData[] = {
		{ "Category", "ROS2ServiceServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ServiceServer::ServiceName in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ServiceServer::ServiceName in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrvClass_MetaData[] = {
		{ "Category", "ROS2ServiceServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ServiceServer::SrvClass in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ServiceServer::SrvClass in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QoS_MetaData[] = {
		{ "Category", "ROS2ServiceServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ServiceServer::QoS in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ServiceServer::QoS in #BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrvCallback_MetaData[] = {
		{ "Category", "ROS2ServiceServerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this is pass to #UROS2ServiceServer::ResponseDelegate in #BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2ServiceServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this is pass to #UROS2ServiceServer::ResponseDelegate in #BeginPlay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServiceServer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SrvClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QoS;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SrvCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ServiceServerComponent_DefaultCreateServiceServer, "DefaultCreateServiceServer" }, // 1547036970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ServiceServerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_ServiceServer = { "ServiceServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceServerComponent, ServiceServer), Z_Construct_UClass_UROS2ServiceServer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceServer_MetaData), NewProp_ServiceServer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_ServiceName = { "ServiceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceServerComponent, ServiceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceName_MetaData), NewProp_ServiceName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_SrvClass = { "SrvClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceServerComponent, SrvClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrvClass_MetaData), NewProp_SrvClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_QoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_QoS = { "QoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceServerComponent, QoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QoS_MetaData), NewProp_QoS_MetaData) }; // 314065690
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_SrvCallback = { "SrvCallback", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2ServiceServerComponent, SrvCallback), Z_Construct_UDelegateFunction_rclUE_ServiceCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrvCallback_MetaData), NewProp_SrvCallback_MetaData) }; // 1854847413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2ServiceServerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_ServiceServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_ServiceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_SrvClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_QoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_QoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2ServiceServerComponent_Statics::NewProp_SrvCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceServerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2ServiceServerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceServerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ServiceServerComponent_Statics::ClassParams = {
	&UROS2ServiceServerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2ServiceServerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceServerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ServiceServerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ServiceServerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ServiceServerComponent()
{
	if (!Z_Registration_Info_UClass_UROS2ServiceServerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ServiceServerComponent.OuterSingleton, Z_Construct_UClass_UROS2ServiceServerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ServiceServerComponent.OuterSingleton;
}
UROS2ServiceServerComponent::UROS2ServiceServerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ServiceServerComponent);
UROS2ServiceServerComponent::~UROS2ServiceServerComponent() {}
// ********** End Class UROS2ServiceServerComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceServer_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ServiceServer, UROS2ServiceServer::StaticClass, TEXT("UROS2ServiceServer"), &Z_Registration_Info_UClass_UROS2ServiceServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ServiceServer), 2667486862U) },
		{ Z_Construct_UClass_UROS2ServiceServerComponent, UROS2ServiceServerComponent::StaticClass, TEXT("UROS2ServiceServerComponent"), &Z_Registration_Info_UClass_UROS2ServiceServerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ServiceServerComponent), 3132365646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceServer_h__Script_rclUE_1690735329(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceServer_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2ServiceServer_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
