// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Temperature.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Temperature() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TemperatureMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TemperatureMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTemperature();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTemperature ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTemperature;
class UScriptStruct* FROSTemperature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTemperature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTemperature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTemperature, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTemperature"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTemperature.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTemperature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Temperature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSTemperature" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Temperature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "ROSTemperature" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Temperature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variance_MetaData[] = {
		{ "Category", "ROSTemperature" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Temperature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Variance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTemperature>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTemperature_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTemperature, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSTemperature_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTemperature, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSTemperature_Statics::NewProp_Variance = { "Variance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTemperature, Variance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variance_MetaData), NewProp_Variance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTemperature_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTemperature_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTemperature_Statics::NewProp_Variance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTemperature_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTemperature",
	Z_Construct_UScriptStruct_FROSTemperature_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTemperature_Statics::PropPointers),
	sizeof(FROSTemperature),
	alignof(FROSTemperature),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTemperature_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTemperature_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTemperature()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTemperature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTemperature.InnerSingleton, Z_Construct_UScriptStruct_FROSTemperature_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTemperature.InnerSingleton;
}
// ********** End ScriptStruct FROSTemperature *****************************************************

// ********** Begin Class UROS2TemperatureMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics
{
	struct ROS2TemperatureMsg_eventGetMsg_Parms
	{
		FROSTemperature Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Temperature.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TemperatureMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTemperature, METADATA_PARAMS(0, nullptr) }; // 3327294942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TemperatureMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::ROS2TemperatureMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::ROS2TemperatureMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TemperatureMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTemperature,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TemperatureMsg Function GetMsg ****************************************

// ********** Begin Class UROS2TemperatureMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics
{
	struct ROS2TemperatureMsg_eventSetMsg_Parms
	{
		FROSTemperature Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Temperature.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TemperatureMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTemperature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3327294942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TemperatureMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::ROS2TemperatureMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::ROS2TemperatureMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TemperatureMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTemperature,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TemperatureMsg Function SetMsg ****************************************

// ********** Begin Class UROS2TemperatureMsg ******************************************************
void UROS2TemperatureMsg::StaticRegisterNativesUROS2TemperatureMsg()
{
	UClass* Class = UROS2TemperatureMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2TemperatureMsg::execGetMsg },
		{ "SetMsg", &UROS2TemperatureMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TemperatureMsg;
UClass* UROS2TemperatureMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TemperatureMsg;
	if (!Z_Registration_Info_UClass_UROS2TemperatureMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TemperatureMsg"),
			Z_Registration_Info_UClass_UROS2TemperatureMsg.InnerSingleton,
			StaticRegisterNativesUROS2TemperatureMsg,
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
	return Z_Registration_Info_UClass_UROS2TemperatureMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TemperatureMsg_NoRegister()
{
	return UROS2TemperatureMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TemperatureMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Temperature.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Temperature.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TemperatureMsg_GetMsg, "GetMsg" }, // 3731897456
		{ &Z_Construct_UFunction_UROS2TemperatureMsg_SetMsg, "SetMsg" }, // 2923945284
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TemperatureMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TemperatureMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TemperatureMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TemperatureMsg_Statics::ClassParams = {
	&UROS2TemperatureMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TemperatureMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TemperatureMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TemperatureMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TemperatureMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TemperatureMsg.OuterSingleton, Z_Construct_UClass_UROS2TemperatureMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TemperatureMsg.OuterSingleton;
}
UROS2TemperatureMsg::UROS2TemperatureMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TemperatureMsg);
UROS2TemperatureMsg::~UROS2TemperatureMsg() {}
// ********** End Class UROS2TemperatureMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Temperature_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTemperature::StaticStruct, Z_Construct_UScriptStruct_FROSTemperature_Statics::NewStructOps, TEXT("ROSTemperature"), &Z_Registration_Info_UScriptStruct_FROSTemperature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTemperature), 3327294942U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TemperatureMsg, UROS2TemperatureMsg::StaticClass, TEXT("UROS2TemperatureMsg"), &Z_Registration_Info_UClass_UROS2TemperatureMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TemperatureMsg), 2251448996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Temperature_h__Script_rclUE_3212206598(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Temperature_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Temperature_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Temperature_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Temperature_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
