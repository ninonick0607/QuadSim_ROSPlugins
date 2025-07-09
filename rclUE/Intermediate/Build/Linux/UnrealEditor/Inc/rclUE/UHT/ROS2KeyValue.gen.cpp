// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2KeyValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2KeyValue() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2KeyValueMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2KeyValueMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSKeyValue();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSKeyValue ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSKeyValue;
class UScriptStruct* FROSKeyValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSKeyValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSKeyValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSKeyValue, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSKeyValue"));
	}
	return Z_Registration_Info_UScriptStruct_FROSKeyValue.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSKeyValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2KeyValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "ROSKeyValue" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2KeyValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "ROSKeyValue" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2KeyValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSKeyValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSKeyValue, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSKeyValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSKeyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSKeyValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSKeyValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSKeyValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSKeyValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSKeyValue",
	Z_Construct_UScriptStruct_FROSKeyValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSKeyValue_Statics::PropPointers),
	sizeof(FROSKeyValue),
	alignof(FROSKeyValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSKeyValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSKeyValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSKeyValue()
{
	if (!Z_Registration_Info_UScriptStruct_FROSKeyValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSKeyValue.InnerSingleton, Z_Construct_UScriptStruct_FROSKeyValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSKeyValue.InnerSingleton;
}
// ********** End ScriptStruct FROSKeyValue ********************************************************

// ********** Begin Class UROS2KeyValueMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics
{
	struct ROS2KeyValueMsg_eventGetMsg_Parms
	{
		FROSKeyValue Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2KeyValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2KeyValueMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSKeyValue, METADATA_PARAMS(0, nullptr) }; // 3430551668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2KeyValueMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::ROS2KeyValueMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::ROS2KeyValueMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2KeyValueMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSKeyValue,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2KeyValueMsg Function GetMsg *******************************************

// ********** Begin Class UROS2KeyValueMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics
{
	struct ROS2KeyValueMsg_eventSetMsg_Parms
	{
		FROSKeyValue Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2KeyValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2KeyValueMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSKeyValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3430551668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2KeyValueMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::ROS2KeyValueMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::ROS2KeyValueMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2KeyValueMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSKeyValue,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2KeyValueMsg Function SetMsg *******************************************

// ********** Begin Class UROS2KeyValueMsg *********************************************************
void UROS2KeyValueMsg::StaticRegisterNativesUROS2KeyValueMsg()
{
	UClass* Class = UROS2KeyValueMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2KeyValueMsg::execGetMsg },
		{ "SetMsg", &UROS2KeyValueMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2KeyValueMsg;
UClass* UROS2KeyValueMsg::GetPrivateStaticClass()
{
	using TClass = UROS2KeyValueMsg;
	if (!Z_Registration_Info_UClass_UROS2KeyValueMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2KeyValueMsg"),
			Z_Registration_Info_UClass_UROS2KeyValueMsg.InnerSingleton,
			StaticRegisterNativesUROS2KeyValueMsg,
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
	return Z_Registration_Info_UClass_UROS2KeyValueMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2KeyValueMsg_NoRegister()
{
	return UROS2KeyValueMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2KeyValueMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2KeyValue.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2KeyValue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2KeyValueMsg_GetMsg, "GetMsg" }, // 570769972
		{ &Z_Construct_UFunction_UROS2KeyValueMsg_SetMsg, "SetMsg" }, // 30415485
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2KeyValueMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2KeyValueMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2KeyValueMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2KeyValueMsg_Statics::ClassParams = {
	&UROS2KeyValueMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2KeyValueMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2KeyValueMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2KeyValueMsg()
{
	if (!Z_Registration_Info_UClass_UROS2KeyValueMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2KeyValueMsg.OuterSingleton, Z_Construct_UClass_UROS2KeyValueMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2KeyValueMsg.OuterSingleton;
}
UROS2KeyValueMsg::UROS2KeyValueMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2KeyValueMsg);
UROS2KeyValueMsg::~UROS2KeyValueMsg() {}
// ********** End Class UROS2KeyValueMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSKeyValue::StaticStruct, Z_Construct_UScriptStruct_FROSKeyValue_Statics::NewStructOps, TEXT("ROSKeyValue"), &Z_Registration_Info_UScriptStruct_FROSKeyValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSKeyValue), 3430551668U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2KeyValueMsg, UROS2KeyValueMsg::StaticClass, TEXT("UROS2KeyValueMsg"), &Z_Registration_Info_UClass_UROS2KeyValueMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2KeyValueMsg), 3535951640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h__Script_rclUE_1781917031(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2KeyValue_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
