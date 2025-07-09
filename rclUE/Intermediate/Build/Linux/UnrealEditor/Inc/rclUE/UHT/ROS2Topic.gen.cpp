// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2Topic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Topic() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Topic();
RCLUE_API UClass* Z_Construct_UClass_UROS2Topic_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2State();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2Topic Function Destroy **********************************************
struct Z_Construct_UFunction_UROS2Topic_Destroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Destroy topic and #TopicMessage\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Destroy topic and #TopicMessage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Topic_Destroy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Topic, nullptr, "Destroy", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Topic_Destroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Topic_Destroy_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Topic_Destroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Topic_Destroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Topic::execDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Destroy();
	P_NATIVE_END;
}
// ********** End Class UROS2Topic Function Destroy ************************************************

// ********** Begin Class UROS2Topic Function Init *************************************************
struct Z_Construct_UFunction_UROS2Topic_Init_Statics
{
	struct ROS2Topic_eventInit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Initialize topic, #InitializeMessage and #InitializeTopicComponent\n     *\n     * @return true\n     * @return false\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Initialize topic, #InitializeMessage and #InitializeTopicComponent\n\n@return true\n@return false" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UROS2Topic_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ROS2Topic_eventInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2Topic_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2Topic_eventInit_Parms), &Z_Construct_UFunction_UROS2Topic_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Topic_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Topic_Init_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Topic_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Topic_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Topic, nullptr, "Init", Z_Construct_UFunction_UROS2Topic_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Topic_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Topic_Init_Statics::ROS2Topic_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Topic_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Topic_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Topic_Init_Statics::ROS2Topic_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Topic_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Topic_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Topic::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2Topic Function Init ***************************************************

// ********** Begin Class UROS2Topic Function InitializeMessage ************************************
struct Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics
{
	struct ROS2Topic_eventInitializeMessage_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create #TopicMessage instance and initialize it.\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create #TopicMessage instance and initialize it." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ROS2Topic_eventInitializeMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2Topic_eventInitializeMessage_Parms), &Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Topic, nullptr, "InitializeMessage", Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::ROS2Topic_eventInitializeMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::ROS2Topic_eventInitializeMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Topic_InitializeMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Topic_InitializeMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Topic::execInitializeMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeMessage();
	P_NATIVE_END;
}
// ********** End Class UROS2Topic Function InitializeMessage **************************************

// ********** Begin Class UROS2Topic Function InitializeTopicComponent *****************************
struct Z_Construct_UFunction_UROS2Topic_InitializeTopicComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Initialize ROS2 Topic. Should be implemented in #UROS2Publisher and #UROS2Subscriber\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Initialize ROS2 Topic. Should be implemented in #UROS2Publisher and #UROS2Subscriber" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Topic_InitializeTopicComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Topic, nullptr, "InitializeTopicComponent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Topic_InitializeTopicComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Topic_InitializeTopicComponent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Topic_InitializeTopicComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Topic_InitializeTopicComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Topic::execInitializeTopicComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeTopicComponent();
	P_NATIVE_END;
}
// ********** End Class UROS2Topic Function InitializeTopicComponent *******************************

// ********** Begin Class UROS2Topic ***************************************************************
void UROS2Topic::StaticRegisterNativesUROS2Topic()
{
	UClass* Class = UROS2Topic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Destroy", &UROS2Topic::execDestroy },
		{ "Init", &UROS2Topic::execInit },
		{ "InitializeMessage", &UROS2Topic::execInitializeMessage },
		{ "InitializeTopicComponent", &UROS2Topic::execInitializeTopicComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Topic;
UClass* UROS2Topic::GetPrivateStaticClass()
{
	using TClass = UROS2Topic;
	if (!Z_Registration_Info_UClass_UROS2Topic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Topic"),
			Z_Registration_Info_UClass_UROS2Topic.InnerSingleton,
			StaticRegisterNativesUROS2Topic,
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
	return Z_Registration_Info_UClass_UROS2Topic.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Topic_NoRegister()
{
	return UROS2Topic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Topic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ROS2 topic class. Parent class of #UROS2Publisher and #UROS2Subscriber\n *\n */" },
#endif
		{ "IncludePath", "ROS2Topic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ROS2 topic class. Parent class of #UROS2Publisher and #UROS2Subscriber" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicName_MetaData[] = {
		{ "Category", "ROS2Topic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this information is redundant with Topic, but it's needed to initialize it\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this information is redundant with Topic, but it's needed to initialize it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MsgClass_MetaData[] = {
		{ "Category", "ROS2Topic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! this information is redundant with Topic, but it's needed to initialize it\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! this information is redundant with Topic, but it's needed to initialize it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerNode_MetaData[] = {
		{ "Category", "ROS2Topic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! ROS2Node which own this topic.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! ROS2Node which own this topic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROS2Topic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! State\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QoS_MetaData[] = {
		{ "Category", "ROS2Topic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Quality of service\n//! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Quality of service\n! @sa [ROS2 QoS](https:docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopicMessage_MetaData[] = {
		{ "Category", "ROS2Topic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Message Instance\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Topic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Message Instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TopicName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MsgClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerNode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QoS_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QoS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopicMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Topic_Destroy, "Destroy" }, // 966173293
		{ &Z_Construct_UFunction_UROS2Topic_Init, "Init" }, // 2335107816
		{ &Z_Construct_UFunction_UROS2Topic_InitializeMessage, "InitializeMessage" }, // 3244293209
		{ &Z_Construct_UFunction_UROS2Topic_InitializeTopicComponent, "InitializeTopicComponent" }, // 2069138714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Topic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2Topic_Statics::NewProp_TopicName = { "TopicName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Topic, TopicName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicName_MetaData), NewProp_TopicName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2Topic_Statics::NewProp_MsgClass = { "MsgClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Topic, MsgClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MsgClass_MetaData), NewProp_MsgClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2Topic_Statics::NewProp_OwnerNode = { "OwnerNode", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Topic, OwnerNode), Z_Construct_UClass_UROS2NodeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerNode_MetaData), NewProp_OwnerNode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Topic_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Topic, State), Z_Construct_UEnum_rclUE_UROS2State, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 478657319
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Topic_Statics::NewProp_QoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2Topic_Statics::NewProp_QoS = { "QoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Topic, QoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QoS_MetaData), NewProp_QoS_MetaData) }; // 314065690
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2Topic_Statics::NewProp_TopicMessage = { "TopicMessage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Topic, TopicMessage), Z_Construct_UClass_UROS2GenericMsg_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopicMessage_MetaData), NewProp_TopicMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2Topic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Topic_Statics::NewProp_TopicName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Topic_Statics::NewProp_MsgClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Topic_Statics::NewProp_OwnerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Topic_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Topic_Statics::NewProp_QoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Topic_Statics::NewProp_QoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Topic_Statics::NewProp_TopicMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Topic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2Topic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Topic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Topic_Statics::ClassParams = {
	&UROS2Topic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2Topic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Topic_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Topic_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Topic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Topic()
{
	if (!Z_Registration_Info_UClass_UROS2Topic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Topic.OuterSingleton, Z_Construct_UClass_UROS2Topic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Topic.OuterSingleton;
}
UROS2Topic::UROS2Topic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Topic);
UROS2Topic::~UROS2Topic() {}
// ********** End Class UROS2Topic *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Topic_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Topic, UROS2Topic::StaticClass, TEXT("UROS2Topic"), &Z_Registration_Info_UClass_UROS2Topic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Topic), 2227968378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Topic_h__Script_rclUE_3424399402(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Topic_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Topic_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
