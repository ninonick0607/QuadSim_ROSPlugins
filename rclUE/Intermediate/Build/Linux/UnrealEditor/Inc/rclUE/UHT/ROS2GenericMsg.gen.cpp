// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2GenericMsg.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GenericMsg() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2GenericMsg Function Fini ********************************************
struct Z_Construct_UFunction_UROS2GenericMsg_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GenericMsg.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericMsg_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericMsg, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericMsg_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericMsg_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GenericMsg_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericMsg_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericMsg::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericMsg Function Fini **********************************************

// ********** Begin Class UROS2GenericMsg Function Init ********************************************
struct Z_Construct_UFunction_UROS2GenericMsg_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GenericMsg.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericMsg_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericMsg, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericMsg_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericMsg_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GenericMsg_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericMsg_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericMsg::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericMsg Function Init **********************************************

// ********** Begin Class UROS2GenericMsg Function MsgToString *************************************
struct Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics
{
	struct ROS2GenericMsg_eventMsgToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GenericMsg.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GenericMsg_eventMsgToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericMsg, nullptr, "MsgToString", Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::ROS2GenericMsg_eventMsgToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::ROS2GenericMsg_eventMsgToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GenericMsg_MsgToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericMsg_MsgToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericMsg::execMsgToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->MsgToString();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericMsg Function MsgToString ***************************************

// ********** Begin Class UROS2GenericMsg **********************************************************
void UROS2GenericMsg::StaticRegisterNativesUROS2GenericMsg()
{
	UClass* Class = UROS2GenericMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2GenericMsg::execFini },
		{ "Init", &UROS2GenericMsg::execInit },
		{ "MsgToString", &UROS2GenericMsg::execMsgToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GenericMsg;
UClass* UROS2GenericMsg::GetPrivateStaticClass()
{
	using TClass = UROS2GenericMsg;
	if (!Z_Registration_Info_UClass_UROS2GenericMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GenericMsg"),
			Z_Registration_Info_UClass_UROS2GenericMsg.InnerSingleton,
			StaticRegisterNativesUROS2GenericMsg,
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
	return Z_Registration_Info_UClass_UROS2GenericMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister()
{
	return UROS2GenericMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GenericMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions).\n * @todo  Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not bottlenecks and control flow inside them should be fine)\n */" },
#endif
		{ "IncludePath", "Msgs/ROS2GenericMsg.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GenericMsg.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions).\n@todo  Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not bottlenecks and control flow inside them should be fine)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GenericMsg_Fini, "Fini" }, // 3247630940
		{ &Z_Construct_UFunction_UROS2GenericMsg_Init, "Init" }, // 2816629676
		{ &Z_Construct_UFunction_UROS2GenericMsg_MsgToString, "MsgToString" }, // 1360378959
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GenericMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GenericMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GenericMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GenericMsg_Statics::ClassParams = {
	&UROS2GenericMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GenericMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GenericMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GenericMsg()
{
	if (!Z_Registration_Info_UClass_UROS2GenericMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GenericMsg.OuterSingleton, Z_Construct_UClass_UROS2GenericMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GenericMsg.OuterSingleton;
}
UROS2GenericMsg::UROS2GenericMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GenericMsg);
UROS2GenericMsg::~UROS2GenericMsg() {}
// ********** End Class UROS2GenericMsg ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GenericMsg, UROS2GenericMsg::StaticClass, TEXT("UROS2GenericMsg"), &Z_Registration_Info_UClass_UROS2GenericMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GenericMsg), 680612165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h__Script_rclUE_4037875125(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
