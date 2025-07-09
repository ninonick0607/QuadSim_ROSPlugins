// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2Action.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Action() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RCLUE_API UClass* Z_Construct_UClass_UROS2Action();
RCLUE_API UClass* Z_Construct_UClass_UROS2Action_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2NodeComponent_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2State();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2Action Function Destroy *********************************************
struct Z_Construct_UFunction_UROS2Action_Destroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Destroy this actor component.\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Destroy this actor component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Action_Destroy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Action, nullptr, "Destroy", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Action_Destroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Action_Destroy_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Action_Destroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Action_Destroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Action::execDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Destroy();
	P_NATIVE_END;
}
// ********** End Class UROS2Action Function Destroy ***********************************************

// ********** Begin Class UROS2Action Function Init ************************************************
struct Z_Construct_UFunction_UROS2Action_Init_Statics
{
	struct ROS2Action_eventInit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Initialize action and action component\n     *\n     * @return true\n     * @return false\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Initialize action and action component\n\n@return true\n@return false" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UROS2Action_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ROS2Action_eventInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2Action_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2Action_eventInit_Parms), &Z_Construct_UFunction_UROS2Action_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Action_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Action_Init_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Action_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Action_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Action, nullptr, "Init", Z_Construct_UFunction_UROS2Action_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Action_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Action_Init_Statics::ROS2Action_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Action_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Action_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Action_Init_Statics::ROS2Action_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Action_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Action_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Action::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2Action Function Init **************************************************

// ********** Begin Class UROS2Action Function InitializeAction ************************************
struct Z_Construct_UFunction_UROS2Action_InitializeAction_Statics
{
	struct ROS2Action_eventInitializeAction_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Create and Initize action\n     *\n     * @return true\n     * @return false\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Create and Initize action\n\n@return true\n@return false" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ROS2Action_eventInitializeAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ROS2Action_eventInitializeAction_Parms), &Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Action, nullptr, "InitializeAction", Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::ROS2Action_eventInitializeAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::ROS2Action_eventInitializeAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Action_InitializeAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Action_InitializeAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Action::execInitializeAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeAction();
	P_NATIVE_END;
}
// ********** End Class UROS2Action Function InitializeAction **************************************

// ********** Begin Class UROS2Action Function InitializeActionComponent ***************************
struct Z_Construct_UFunction_UROS2Action_InitializeActionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Initialize ROS2 Action. Should be implemented in #UROS2ActionServer and #UROS2ActionClient\n     *\n     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Initialize ROS2 Action. Should be implemented in #UROS2ActionServer and #UROS2ActionClient\n\n@sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Action_InitializeActionComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Action, nullptr, "InitializeActionComponent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Action_InitializeActionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Action_InitializeActionComponent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Action_InitializeActionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Action_InitializeActionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Action::execInitializeActionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeActionComponent();
	P_NATIVE_END;
}
// ********** End Class UROS2Action Function InitializeActionComponent *****************************

// ********** Begin Class UROS2Action **************************************************************
void UROS2Action::StaticRegisterNativesUROS2Action()
{
	UClass* Class = UROS2Action::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Destroy", &UROS2Action::execDestroy },
		{ "Init", &UROS2Action::execInit },
		{ "InitializeAction", &UROS2Action::execInitializeAction },
		{ "InitializeActionComponent", &UROS2Action::execInitializeActionComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Action;
UClass* UROS2Action::GetPrivateStaticClass()
{
	using TClass = UROS2Action;
	if (!Z_Registration_Info_UClass_UROS2Action.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Action"),
			Z_Registration_Info_UClass_UROS2Action.InnerSingleton,
			StaticRegisterNativesUROS2Action,
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
	return Z_Registration_Info_UClass_UROS2Action.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Action_NoRegister()
{
	return UROS2Action::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Action_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Base class implementing ROS2 actions from which ActionServer and ActionClient should inherit\n *\n * type of action is defined by ActionClass\n*/" },
#endif
		{ "IncludePath", "ROS2Action.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Base class implementing ROS2 actions from which ActionServer and ActionClient should inherit\n\ntype of action is defined by ActionClass" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "ROS2Action" },
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionClass_MetaData[] = {
		{ "Category", "ROS2Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! type of action\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! type of action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "ROS2Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! ROS2 Action Instance\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! ROS2 Action Instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerNode_MetaData[] = {
		{ "Category", "ROS2Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! ROS2Node which own this action.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! ROS2Node which own this action." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROS2Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Action state\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Action state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelQoS_MetaData[] = {
		{ "Category", "ROS2Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Quality of Cancel\n//! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Quality of Cancel\n! @sa [ROS2 QoS](https:docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalQoS_MetaData[] = {
		{ "Category", "ROS2Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Quality of Goal\n//! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Quality of Goal\n! @sa [ROS2 QoS](https:docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultQoS_MetaData[] = {
		{ "Category", "ROS2Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Quality of Result\n//! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Quality of Result\n! @sa [ROS2 QoS](https:docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackQoS_MetaData[] = {
		{ "Category", "ROS2Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Quality of Feedback\n//! @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)\n" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Action.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Quality of Feedback\n! @sa [ROS2 QoS](https:docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerNode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State;
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
		{ &Z_Construct_UFunction_UROS2Action_Destroy, "Destroy" }, // 706740965
		{ &Z_Construct_UFunction_UROS2Action_Init, "Init" }, // 1504972984
		{ &Z_Construct_UFunction_UROS2Action_InitializeAction, "InitializeAction" }, // 3102662510
		{ &Z_Construct_UFunction_UROS2Action_InitializeActionComponent, "InitializeActionComponent" }, // 1847326797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Action>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UROS2GenericAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionClass_MetaData), NewProp_ActionClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, Action), Z_Construct_UClass_UROS2GenericAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_OwnerNode = { "OwnerNode", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, OwnerNode), Z_Construct_UClass_UROS2NodeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerNode_MetaData), NewProp_OwnerNode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, State), Z_Construct_UEnum_rclUE_UROS2State, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 478657319
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_CancelQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_CancelQoS = { "CancelQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, CancelQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelQoS_MetaData), NewProp_CancelQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_GoalQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_GoalQoS = { "GoalQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, GoalQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalQoS_MetaData), NewProp_GoalQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_ResultQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_ResultQoS = { "ResultQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, ResultQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultQoS_MetaData), NewProp_ResultQoS_MetaData) }; // 314065690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_FeedbackQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UROS2Action_Statics::NewProp_FeedbackQoS = { "FeedbackQoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Action, FeedbackQoS), Z_Construct_UEnum_rclUE_UROS2QoS, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackQoS_MetaData), NewProp_FeedbackQoS_MetaData) }; // 314065690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2Action_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_ActionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_OwnerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_CancelQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_CancelQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_GoalQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_GoalQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_ResultQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_ResultQoS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_FeedbackQoS_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Action_Statics::NewProp_FeedbackQoS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Action_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2Action_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Action_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Action_Statics::ClassParams = {
	&UROS2Action::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2Action_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Action_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Action_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Action_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Action()
{
	if (!Z_Registration_Info_UClass_UROS2Action.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Action.OuterSingleton, Z_Construct_UClass_UROS2Action_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Action.OuterSingleton;
}
UROS2Action::UROS2Action(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Action);
UROS2Action::~UROS2Action() {}
// ********** End Class UROS2Action ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Action_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Action, UROS2Action::StaticClass, TEXT("UROS2Action"), &Z_Registration_Info_UClass_UROS2Action, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Action), 3713659854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Action_h__Script_rclUE_970196594(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Action_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Action_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
