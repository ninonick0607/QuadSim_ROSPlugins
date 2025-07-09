// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2Service.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Service() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Service();
RCLUE_API UClass* Z_Construct_UClass_UROS2Service_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2State();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2Service Function Destroy ********************************************
struct Z_Construct_UFunction_UROS2Service_Destroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Destroy service with rcl_client_fini\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Destroy service with rcl_client_fini" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Service_Destroy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Service, nullptr, "Destroy", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Service_Destroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Service_Destroy_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Service_Destroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Service_Destroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Service::execDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Destroy();
	P_NATIVE_END;
}
// ********** End Class UROS2Service Function Destroy **********************************************

// ********** Begin Class UROS2Service Function Init ***********************************************
struct Z_Construct_UFunction_UROS2Service_Init_Statics
{
	struct ROS2Service_eventInit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Initialize ROS2 service client with rcl_client_init, set QoS, #InitializeService and #InitializeServiceComponent .\n     *\n     * @return true\n     * @return false\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Initialize ROS2 service client with rcl_client_init, set QoS, #InitializeService and #InitializeServiceComponent .\n\n@return true\n@return false" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UROS2Service_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ROS2Service_eventInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2Service_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2Service_eventInit_Parms), &Z_Construct_UFunction_UROS2Service_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Service_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Service_Init_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Service_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Service_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Service, nullptr, "Init", Z_Construct_UFunction_UROS2Service_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Service_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Service_Init_Statics::ROS2Service_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Service_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Service_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Service_Init_Statics::ROS2Service_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Service_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Service_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Service::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2Service Function Init *************************************************

// ********** Begin Class UROS2Service Function InitializeService **********************************
struct Z_Construct_UFunction_UROS2Service_InitializeService_Statics
{
	struct ROS2Service_eventInitializeService_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create #Service instance and initialize it.\n     *\n     * @return true\n     * @return false\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create #Service instance and initialize it.\n\n@return true\n@return false" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UROS2Service_InitializeService_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ROS2Service_eventInitializeService_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2Service_InitializeService_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2Service_eventInitializeService_Parms), &Z_Construct_UFunction_UROS2Service_InitializeService_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Service_InitializeService_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Service_InitializeService_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Service_InitializeService_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Service_InitializeService_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Service, nullptr, "InitializeService", Z_Construct_UFunction_UROS2Service_InitializeService_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Service_InitializeService_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Service_InitializeService_Statics::ROS2Service_eventInitializeService_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Service_InitializeService_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Service_InitializeService_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Service_InitializeService_Statics::ROS2Service_eventInitializeService_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Service_InitializeService()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Service_InitializeService_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Service::execInitializeService)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeService();
	P_NATIVE_END;
}
// ********** End Class UROS2Service Function InitializeService ************************************

// ********** Begin Class UROS2Service Function InitializeServiceComponent *************************
struct Z_Construct_UFunction_UROS2Service_InitializeServiceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Initialize ROS2 Action. Should be implemented in #UROS2ServiceServer and #UROS2ServiceClient\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Initialize ROS2 Action. Should be implemented in #UROS2ServiceServer and #UROS2ServiceClient" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Service_InitializeServiceComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Service, nullptr, "InitializeServiceComponent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Service_InitializeServiceComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Service_InitializeServiceComponent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Service_InitializeServiceComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Service_InitializeServiceComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Service::execInitializeServiceComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeServiceComponent();
	P_NATIVE_END;
}
// ********** End Class UROS2Service Function InitializeServiceComponent ***************************

// ********** Begin Class UROS2Service *************************************************************
void UROS2Service::StaticRegisterNativesUROS2Service()
{
	UClass* Class = UROS2Service::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Destroy", &UROS2Service::execDestroy },
		{ "Init", &UROS2Service::execInit },
		{ "InitializeService", &UROS2Service::execInitializeService },
		{ "InitializeServiceComponent", &UROS2Service::execInitializeServiceComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Service;
UClass* UROS2Service::GetPrivateStaticClass()
{
	using TClass = UROS2Service;
	if (!Z_Registration_Info_UClass_UROS2Service.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Service"),
			Z_Registration_Info_UClass_UROS2Service.InnerSingleton,
			StaticRegisterNativesUROS2Service,
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
	return Z_Registration_Info_UClass_UROS2Service.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Service_NoRegister()
{
	return UROS2Service::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Service_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Class implementing ROS2 service clients.\n *  Service type is defined by SrvClass\n *\n */" },
#endif
		{ "IncludePath", "ROS2Service.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Class implementing ROS2 service clients.\n Service type is defined by SrvClass" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceName_MetaData[] = {
		{ "Category", "ROS2Service" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this information is redundant with Topic, but it's used to initialize it\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this information is redundant with Topic, but it's used to initialize it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrvClass_MetaData[] = {
		{ "Category", "ROS2Service" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! type of Srv class\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! type of Srv class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerNode_MetaData[] = {
		{ "Category", "ROS2Service" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! ROS2Node which own this service client.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! ROS2Node which own this service client." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROS2Service" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Service client state\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Service client state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Service_MetaData[] = {
		{ "Category", "ROS2Service" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Service Instance\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Service Instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QoS_MetaData[] = {
		{ "Category", "ROS2Service" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Quality of service\n//! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Service.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Quality of service\n! @sa [ROS2 QoS](https:docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SrvClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerNode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Service;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QoS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Service_Destroy, "Destroy" }, // 1572328577
		{ &Z_Construct_UFunction_UROS2Service_Init, "Init" }, // 3409464722
		{ &Z_Construct_UFunction_UROS2Service_InitializeService, "InitializeService" }, // 4019866649
		{ &Z_Construct_UFunction_UROS2Service_InitializeServiceComponent, "InitializeServiceComponent" }, // 2143579149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Service>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2Service_Statics::NewProp_ServiceName = { "ServiceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Service, ServiceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceName_MetaData), NewProp_ServiceName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2Service_Statics::NewProp_SrvClass = { "SrvClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Service, SrvClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrvClass_MetaData), NewProp_SrvClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2Service_Statics::NewProp_OwnerNode = { "OwnerNode", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Service, OwnerNode), Z_Construct_UClass_UROS2NodeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerNode_MetaData), NewProp_OwnerNode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Service_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Service, State), Z_Construct_UEnum_rclUE_UROS2State, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 478657319
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2Service_Statics::NewProp_Service = { "Service", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Service, Service), Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Service_MetaData), NewProp_Service_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Service_Statics::NewProp_QoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2Service_Statics::NewProp_QoS = { "QoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Service, QoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QoS_MetaData), NewProp_QoS_MetaData) }; // 314065690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2Service_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Service_Statics::NewProp_ServiceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Service_Statics::NewProp_SrvClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Service_Statics::NewProp_OwnerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Service_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Service_Statics::NewProp_Service,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Service_Statics::NewProp_QoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Service_Statics::NewProp_QoS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Service_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2Service_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Service_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Service_Statics::ClassParams = {
	&UROS2Service::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2Service_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Service_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Service_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Service_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Service()
{
	if (!Z_Registration_Info_UClass_UROS2Service.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Service.OuterSingleton, Z_Construct_UClass_UROS2Service_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Service.OuterSingleton;
}
UROS2Service::UROS2Service(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Service);
UROS2Service::~UROS2Service() {}
// ********** End Class UROS2Service ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Service_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Service, UROS2Service::StaticClass, TEXT("UROS2Service"), &Z_Registration_Info_UClass_UROS2Service, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Service), 310311752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Service_h__Script_rclUE_2523277437(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Service_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Service_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
