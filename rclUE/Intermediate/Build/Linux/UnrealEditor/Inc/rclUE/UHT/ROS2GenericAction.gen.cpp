// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Actions/ROS2GenericAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GenericAction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2GenericAction Function ActionFeedbackToString ***********************
struct Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics
{
	struct ROS2GenericAction_eventActionFeedbackToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2GenericAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GenericAction_eventActionFeedbackToString_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericAction, nullptr, "ActionFeedbackToString", Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::ROS2GenericAction_eventActionFeedbackToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::ROS2GenericAction_eventActionFeedbackToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericAction::execActionFeedbackToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ActionFeedbackToString();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericAction Function ActionFeedbackToString *************************

// ********** Begin Class UROS2GenericAction Function ActionGoalToString ***************************
struct Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics
{
	struct ROS2GenericAction_eventActionGoalToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2GenericAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GenericAction_eventActionGoalToString_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericAction, nullptr, "ActionGoalToString", Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::ROS2GenericAction_eventActionGoalToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::ROS2GenericAction_eventActionGoalToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericAction::execActionGoalToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ActionGoalToString();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericAction Function ActionGoalToString *****************************

// ********** Begin Class UROS2GenericAction Function ActionResultToString *************************
struct Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics
{
	struct ROS2GenericAction_eventActionResultToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2GenericAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GenericAction_eventActionResultToString_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericAction, nullptr, "ActionResultToString", Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::ROS2GenericAction_eventActionResultToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::ROS2GenericAction_eventActionResultToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GenericAction_ActionResultToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericAction_ActionResultToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericAction::execActionResultToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ActionResultToString();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericAction Function ActionResultToString ***************************

// ********** Begin Class UROS2GenericAction Function Fini *****************************************
struct Z_Construct_UFunction_UROS2GenericAction_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2GenericAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericAction_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericAction, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericAction_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GenericAction_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericAction_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericAction::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericAction Function Fini *******************************************

// ********** Begin Class UROS2GenericAction Function GetCancelResponseReturnCode ******************
struct Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics
{
	struct ROS2GenericAction_eventGetCancelResponseReturnCode_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2GenericAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GenericAction_eventGetCancelResponseReturnCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericAction, nullptr, "GetCancelResponseReturnCode", Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::ROS2GenericAction_eventGetCancelResponseReturnCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::ROS2GenericAction_eventGetCancelResponseReturnCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericAction::execGetCancelResponseReturnCode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCancelResponseReturnCode();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericAction Function GetCancelResponseReturnCode ********************

// ********** Begin Class UROS2GenericAction Function Init *****************************************
struct Z_Construct_UFunction_UROS2GenericAction_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2GenericAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericAction_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericAction, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericAction_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericAction_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GenericAction_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericAction_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericAction::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericAction Function Init *******************************************

// ********** Begin Class UROS2GenericAction *******************************************************
void UROS2GenericAction::StaticRegisterNativesUROS2GenericAction()
{
	UClass* Class = UROS2GenericAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActionFeedbackToString", &UROS2GenericAction::execActionFeedbackToString },
		{ "ActionGoalToString", &UROS2GenericAction::execActionGoalToString },
		{ "ActionResultToString", &UROS2GenericAction::execActionResultToString },
		{ "Fini", &UROS2GenericAction::execFini },
		{ "GetCancelResponseReturnCode", &UROS2GenericAction::execGetCancelResponseReturnCode },
		{ "Init", &UROS2GenericAction::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GenericAction;
UClass* UROS2GenericAction::GetPrivateStaticClass()
{
	using TClass = UROS2GenericAction;
	if (!Z_Registration_Info_UClass_UROS2GenericAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GenericAction"),
			Z_Registration_Info_UClass_UROS2GenericAction.InnerSingleton,
			StaticRegisterNativesUROS2GenericAction,
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
	return Z_Registration_Info_UClass_UROS2GenericAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GenericAction_NoRegister()
{
	return UROS2GenericAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GenericAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions).\n * @todo  Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not bottlenecks and control flow inside them should be fine)\n */" },
#endif
		{ "IncludePath", "Actions/ROS2GenericAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2GenericAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions).\n@todo  Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not bottlenecks and control flow inside them should be fine)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GenericAction_ActionFeedbackToString, "ActionFeedbackToString" }, // 68413465
		{ &Z_Construct_UFunction_UROS2GenericAction_ActionGoalToString, "ActionGoalToString" }, // 2859002446
		{ &Z_Construct_UFunction_UROS2GenericAction_ActionResultToString, "ActionResultToString" }, // 534751928
		{ &Z_Construct_UFunction_UROS2GenericAction_Fini, "Fini" }, // 2242310257
		{ &Z_Construct_UFunction_UROS2GenericAction_GetCancelResponseReturnCode, "GetCancelResponseReturnCode" }, // 2469877846
		{ &Z_Construct_UFunction_UROS2GenericAction_Init, "Init" }, // 3286018685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GenericAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GenericAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GenericAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GenericAction_Statics::ClassParams = {
	&UROS2GenericAction::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GenericAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GenericAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GenericAction()
{
	if (!Z_Registration_Info_UClass_UROS2GenericAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GenericAction.OuterSingleton, Z_Construct_UClass_UROS2GenericAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GenericAction.OuterSingleton;
}
UROS2GenericAction::UROS2GenericAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GenericAction);
UROS2GenericAction::~UROS2GenericAction() {}
// ********** End Class UROS2GenericAction *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GenericAction, UROS2GenericAction::StaticClass, TEXT("UROS2GenericAction"), &Z_Registration_Info_UClass_UROS2GenericAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GenericAction), 223632776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h__Script_rclUE_1236873665(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2GenericAction_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
