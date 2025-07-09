// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ROSFlightComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROSFlightComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Publisher_NoRegister();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROSFlightComponent();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROSFlightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROSFlightComponent Function HandlePWMOutputMsg **************************
struct Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics
{
	struct ROSFlightComponent_eventHandlePWMOutputMsg_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROSFlightComponent_eventHandlePWMOutputMsg_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROSFlightComponent, nullptr, "HandlePWMOutputMsg", Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::ROSFlightComponent_eventHandlePWMOutputMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::ROSFlightComponent_eventHandlePWMOutputMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROSFlightComponent::execHandlePWMOutputMsg)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePWMOutputMsg(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class UROSFlightComponent Function HandlePWMOutputMsg ****************************

// ********** Begin Class UROSFlightComponent Function HandleRunService ****************************
struct Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics
{
	struct ROSFlightComponent_eventHandleRunService_Parms
	{
		UROS2GenericSrv* InService;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InService;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::NewProp_InService = { "InService", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROSFlightComponent_eventHandleRunService_Parms, InService), Z_Construct_UClass_UROS2GenericSrv_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::NewProp_InService,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROSFlightComponent, nullptr, "HandleRunService", Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::ROSFlightComponent_eventHandleRunService_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::ROSFlightComponent_eventHandleRunService_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROSFlightComponent_HandleRunService()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROSFlightComponent_HandleRunService_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROSFlightComponent::execHandleRunService)
{
	P_GET_OBJECT(UROS2GenericSrv,Z_Param_InService);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRunService(Z_Param_InService);
	P_NATIVE_END;
}
// ********** End Class UROSFlightComponent Function HandleRunService ******************************

// ********** Begin Class UROSFlightComponent Function HandleWrenchMsg *****************************
struct Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics
{
	struct ROSFlightComponent_eventHandleWrenchMsg_Parms
	{
		const UROS2GenericMsg* InMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Callbacks\n" },
#endif
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callbacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROSFlightComponent_eventHandleWrenchMsg_Parms, InMsg), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMsg_MetaData), NewProp_InMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::NewProp_InMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROSFlightComponent, nullptr, "HandleWrenchMsg", Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::ROSFlightComponent_eventHandleWrenchMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::ROSFlightComponent_eventHandleWrenchMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROSFlightComponent::execHandleWrenchMsg)
{
	P_GET_OBJECT(UROS2GenericMsg,Z_Param_InMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWrenchMsg(Z_Param_InMsg);
	P_NATIVE_END;
}
// ********** End Class UROSFlightComponent Function HandleWrenchMsg *******************************

// ********** Begin Class UROSFlightComponent ******************************************************
void UROSFlightComponent::StaticRegisterNativesUROSFlightComponent()
{
	UClass* Class = UROSFlightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandlePWMOutputMsg", &UROSFlightComponent::execHandlePWMOutputMsg },
		{ "HandleRunService", &UROSFlightComponent::execHandleRunService },
		{ "HandleWrenchMsg", &UROSFlightComponent::execHandleWrenchMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROSFlightComponent;
UClass* UROSFlightComponent::GetPrivateStaticClass()
{
	using TClass = UROSFlightComponent;
	if (!Z_Registration_Info_UClass_UROSFlightComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROSFlightComponent"),
			Z_Registration_Info_UClass_UROSFlightComponent.InnerSingleton,
			StaticRegisterNativesUROSFlightComponent,
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
	return Z_Registration_Info_UClass_UROSFlightComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UROSFlightComponent_NoRegister()
{
	return UROSFlightComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROSFlightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ROSFlightComponent.h" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostAddress_MetaData[] = {
		{ "Category", "ROSflight Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Networking Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Networking Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "ROSflight Networking" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WrenchTopic_MetaData[] = {
		{ "Category", "ROS2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ROS2 Topics - FIXED to match ROSFlight expectations\n" },
#endif
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ROS2 Topics - FIXED to match ROSFlight expectations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimStateTopic_MetaData[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImuTopic_MetaData[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandTopic_MetaData[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagTopic_MetaData[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaroTopic_MetaData[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatteryTopic_MetaData[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiasTau_MetaData[] = {
		{ "Category", "Sensor Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sensor Noise Parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sensor Noise Parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSigmaGyro_MetaData[] = {
		{ "Category", "Sensor Noise" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSigmaAccel_MetaData[] = {
		{ "Category", "Sensor Noise" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatteryVoltage_MetaData[] = {
		{ "Category", "Battery Sim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Battery Simulation Parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Battery Simulation Parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatteryCapacity_MetaData[] = {
		{ "Category", "Battery Sim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 6S battery\n" },
#endif
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "6S battery" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ROS Node and Publishers\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ROS Node and Publishers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimStatePub_MetaData[] = {
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImuPub_MetaData[] = {
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandPub_MetaData[] = {
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagPub_MetaData[] = {
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaroPub_MetaData[] = {
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatteryPub_MetaData[] = {
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Physics\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ROSFlightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HostAddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WrenchTopic;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SimStateTopic;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImuTopic;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandTopic;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MagTopic;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaroTopic;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BatteryTopic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BiasTau;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseSigmaGyro;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseSigmaAccel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BatteryVoltage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BatteryCapacity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimStatePub;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImuPub;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommandPub;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagPub;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaroPub;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BatteryPub;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROSFlightComponent_HandlePWMOutputMsg, "HandlePWMOutputMsg" }, // 1886437960
		{ &Z_Construct_UFunction_UROSFlightComponent_HandleRunService, "HandleRunService" }, // 616959122
		{ &Z_Construct_UFunction_UROSFlightComponent_HandleWrenchMsg, "HandleWrenchMsg" }, // 3921313480
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROSFlightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_HostAddress = { "HostAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, HostAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostAddress_MetaData), NewProp_HostAddress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_WrenchTopic = { "WrenchTopic", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, WrenchTopic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WrenchTopic_MetaData), NewProp_WrenchTopic_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_SimStateTopic = { "SimStateTopic", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, SimStateTopic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimStateTopic_MetaData), NewProp_SimStateTopic_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_ImuTopic = { "ImuTopic", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, ImuTopic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImuTopic_MetaData), NewProp_ImuTopic_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_CommandTopic = { "CommandTopic", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, CommandTopic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandTopic_MetaData), NewProp_CommandTopic_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_MagTopic = { "MagTopic", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, MagTopic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagTopic_MetaData), NewProp_MagTopic_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BaroTopic = { "BaroTopic", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, BaroTopic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaroTopic_MetaData), NewProp_BaroTopic_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BatteryTopic = { "BatteryTopic", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, BatteryTopic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatteryTopic_MetaData), NewProp_BatteryTopic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BiasTau = { "BiasTau", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, BiasTau), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiasTau_MetaData), NewProp_BiasTau_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_NoiseSigmaGyro = { "NoiseSigmaGyro", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, NoiseSigmaGyro), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseSigmaGyro_MetaData), NewProp_NoiseSigmaGyro_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_NoiseSigmaAccel = { "NoiseSigmaAccel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, NoiseSigmaAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseSigmaAccel_MetaData), NewProp_NoiseSigmaAccel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BatteryVoltage = { "BatteryVoltage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, BatteryVoltage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatteryVoltage_MetaData), NewProp_BatteryVoltage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BatteryCapacity = { "BatteryCapacity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, BatteryCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatteryCapacity_MetaData), NewProp_BatteryCapacity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, Node), Z_Construct_UClass_UROS2NodeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_SimStatePub = { "SimStatePub", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, SimStatePub), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimStatePub_MetaData), NewProp_SimStatePub_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_ImuPub = { "ImuPub", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, ImuPub), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImuPub_MetaData), NewProp_ImuPub_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_CommandPub = { "CommandPub", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, CommandPub), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandPub_MetaData), NewProp_CommandPub_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_MagPub = { "MagPub", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, MagPub), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagPub_MetaData), NewProp_MagPub_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BaroPub = { "BaroPub", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, BaroPub), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaroPub_MetaData), NewProp_BaroPub_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BatteryPub = { "BatteryPub", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, BatteryPub), Z_Construct_UClass_UROS2Publisher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatteryPub_MetaData), NewProp_BatteryPub_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROSFlightComponent, Body), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROSFlightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_HostAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_WrenchTopic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_SimStateTopic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_ImuTopic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_CommandTopic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_MagTopic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BaroTopic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BatteryTopic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BiasTau,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_NoiseSigmaGyro,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_NoiseSigmaAccel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BatteryVoltage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BatteryCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_SimStatePub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_ImuPub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_CommandPub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_MagPub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BaroPub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_BatteryPub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROSFlightComponent_Statics::NewProp_Body,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROSFlightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROSFlightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROSFlightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROSFlightComponent_Statics::ClassParams = {
	&UROSFlightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROSFlightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROSFlightComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROSFlightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UROSFlightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROSFlightComponent()
{
	if (!Z_Registration_Info_UClass_UROSFlightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROSFlightComponent.OuterSingleton, Z_Construct_UClass_UROSFlightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROSFlightComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROSFlightComponent);
UROSFlightComponent::~UROSFlightComponent() {}
// ********** End Class UROSFlightComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h__Script_UnrealRosFlight_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROSFlightComponent, UROSFlightComponent::StaticClass, TEXT("UROSFlightComponent"), &Z_Registration_Info_UClass_UROSFlightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROSFlightComponent), 2377850773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h__Script_UnrealRosFlight_856101387(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h__Script_UnrealRosFlight_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
