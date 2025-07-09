// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2Barometer.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Barometer() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2BarometerMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2BarometerMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSBarometer();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSBarometer *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSBarometer;
class UScriptStruct* FROSBarometer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSBarometer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSBarometer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSBarometer, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSBarometer"));
	}
	return Z_Registration_Info_UScriptStruct_FROSBarometer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSBarometer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Barometer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSBarometer" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Barometer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[] = {
		{ "Category", "ROSBarometer" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Barometer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pressure_MetaData[] = {
		{ "Category", "ROSBarometer" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Barometer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "ROSBarometer" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Barometer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Altitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pressure;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSBarometer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSBarometer_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBarometer, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBarometer_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBarometer, Altitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Altitude_MetaData), NewProp_Altitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBarometer_Statics::NewProp_Pressure = { "Pressure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBarometer, Pressure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pressure_MetaData), NewProp_Pressure_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBarometer_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBarometer, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSBarometer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBarometer_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBarometer_Statics::NewProp_Altitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBarometer_Statics::NewProp_Pressure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBarometer_Statics::NewProp_Temperature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBarometer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSBarometer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSBarometer",
	Z_Construct_UScriptStruct_FROSBarometer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBarometer_Statics::PropPointers),
	sizeof(FROSBarometer),
	alignof(FROSBarometer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBarometer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSBarometer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSBarometer()
{
	if (!Z_Registration_Info_UScriptStruct_FROSBarometer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSBarometer.InnerSingleton, Z_Construct_UScriptStruct_FROSBarometer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSBarometer.InnerSingleton;
}
// ********** End ScriptStruct FROSBarometer *******************************************************

// ********** Begin Class UROS2BarometerMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics
{
	struct ROS2BarometerMsg_eventGetMsg_Parms
	{
		FROSBarometer Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Barometer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BarometerMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSBarometer, METADATA_PARAMS(0, nullptr) }; // 2886184190
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BarometerMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::ROS2BarometerMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::ROS2BarometerMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BarometerMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BarometerMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BarometerMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSBarometer,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2BarometerMsg Function GetMsg ******************************************

// ********** Begin Class UROS2BarometerMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics
{
	struct ROS2BarometerMsg_eventSetMsg_Parms
	{
		FROSBarometer Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Barometer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BarometerMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSBarometer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2886184190
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BarometerMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::ROS2BarometerMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::ROS2BarometerMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BarometerMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BarometerMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BarometerMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSBarometer,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2BarometerMsg Function SetMsg ******************************************

// ********** Begin Class UROS2BarometerMsg ********************************************************
void UROS2BarometerMsg::StaticRegisterNativesUROS2BarometerMsg()
{
	UClass* Class = UROS2BarometerMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2BarometerMsg::execGetMsg },
		{ "SetMsg", &UROS2BarometerMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2BarometerMsg;
UClass* UROS2BarometerMsg::GetPrivateStaticClass()
{
	using TClass = UROS2BarometerMsg;
	if (!Z_Registration_Info_UClass_UROS2BarometerMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2BarometerMsg"),
			Z_Registration_Info_UClass_UROS2BarometerMsg.InnerSingleton,
			StaticRegisterNativesUROS2BarometerMsg,
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
	return Z_Registration_Info_UClass_UROS2BarometerMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2BarometerMsg_NoRegister()
{
	return UROS2BarometerMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2BarometerMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Barometer.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Barometer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2BarometerMsg_GetMsg, "GetMsg" }, // 4171489292
		{ &Z_Construct_UFunction_UROS2BarometerMsg_SetMsg, "SetMsg" }, // 895716705
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2BarometerMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2BarometerMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2BarometerMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2BarometerMsg_Statics::ClassParams = {
	&UROS2BarometerMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2BarometerMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2BarometerMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2BarometerMsg()
{
	if (!Z_Registration_Info_UClass_UROS2BarometerMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2BarometerMsg.OuterSingleton, Z_Construct_UClass_UROS2BarometerMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2BarometerMsg.OuterSingleton;
}
UROS2BarometerMsg::UROS2BarometerMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2BarometerMsg);
UROS2BarometerMsg::~UROS2BarometerMsg() {}
// ********** End Class UROS2BarometerMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Barometer_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSBarometer::StaticStruct, Z_Construct_UScriptStruct_FROSBarometer_Statics::NewStructOps, TEXT("ROSBarometer"), &Z_Registration_Info_UScriptStruct_FROSBarometer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSBarometer), 2886184190U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2BarometerMsg, UROS2BarometerMsg::StaticClass, TEXT("UROS2BarometerMsg"), &Z_Registration_Info_UClass_UROS2BarometerMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2BarometerMsg), 2001121593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Barometer_h__Script_UnrealRosFlight_637907927(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Barometer_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Barometer_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Barometer_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Barometer_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
