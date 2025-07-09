// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2Airspeed.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Airspeed() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2AirspeedMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2AirspeedMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSAirspeed();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAirspeed ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAirspeed;
class UScriptStruct* FROSAirspeed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAirspeed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAirspeed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAirspeed, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSAirspeed"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAirspeed.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAirspeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Airspeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSAirspeed" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Airspeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "ROSAirspeed" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Airspeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifferentialPressure_MetaData[] = {
		{ "Category", "ROSAirspeed" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Airspeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "ROSAirspeed" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Airspeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DifferentialPressure;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAirspeed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAirspeed, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAirspeed, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewProp_DifferentialPressure = { "DifferentialPressure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAirspeed, DifferentialPressure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifferentialPressure_MetaData), NewProp_DifferentialPressure_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAirspeed, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAirspeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewProp_DifferentialPressure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewProp_Temperature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAirspeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAirspeed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSAirspeed",
	Z_Construct_UScriptStruct_FROSAirspeed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAirspeed_Statics::PropPointers),
	sizeof(FROSAirspeed),
	alignof(FROSAirspeed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAirspeed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAirspeed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAirspeed()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAirspeed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAirspeed.InnerSingleton, Z_Construct_UScriptStruct_FROSAirspeed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAirspeed.InnerSingleton;
}
// ********** End ScriptStruct FROSAirspeed ********************************************************

// ********** Begin Class UROS2AirspeedMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics
{
	struct ROS2AirspeedMsg_eventGetMsg_Parms
	{
		FROSAirspeed Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Airspeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AirspeedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSAirspeed, METADATA_PARAMS(0, nullptr) }; // 900182957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AirspeedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::ROS2AirspeedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::ROS2AirspeedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AirspeedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSAirspeed,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2AirspeedMsg Function GetMsg *******************************************

// ********** Begin Class UROS2AirspeedMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics
{
	struct ROS2AirspeedMsg_eventSetMsg_Parms
	{
		FROSAirspeed Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Airspeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AirspeedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSAirspeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 900182957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AirspeedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::ROS2AirspeedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::ROS2AirspeedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AirspeedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSAirspeed,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2AirspeedMsg Function SetMsg *******************************************

// ********** Begin Class UROS2AirspeedMsg *********************************************************
void UROS2AirspeedMsg::StaticRegisterNativesUROS2AirspeedMsg()
{
	UClass* Class = UROS2AirspeedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2AirspeedMsg::execGetMsg },
		{ "SetMsg", &UROS2AirspeedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AirspeedMsg;
UClass* UROS2AirspeedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2AirspeedMsg;
	if (!Z_Registration_Info_UClass_UROS2AirspeedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AirspeedMsg"),
			Z_Registration_Info_UClass_UROS2AirspeedMsg.InnerSingleton,
			StaticRegisterNativesUROS2AirspeedMsg,
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
	return Z_Registration_Info_UClass_UROS2AirspeedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AirspeedMsg_NoRegister()
{
	return UROS2AirspeedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AirspeedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Airspeed.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Airspeed.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AirspeedMsg_GetMsg, "GetMsg" }, // 878021239
		{ &Z_Construct_UFunction_UROS2AirspeedMsg_SetMsg, "SetMsg" }, // 451923009
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AirspeedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AirspeedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AirspeedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AirspeedMsg_Statics::ClassParams = {
	&UROS2AirspeedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AirspeedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AirspeedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AirspeedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2AirspeedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AirspeedMsg.OuterSingleton, Z_Construct_UClass_UROS2AirspeedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AirspeedMsg.OuterSingleton;
}
UROS2AirspeedMsg::UROS2AirspeedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AirspeedMsg);
UROS2AirspeedMsg::~UROS2AirspeedMsg() {}
// ********** End Class UROS2AirspeedMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Airspeed_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAirspeed::StaticStruct, Z_Construct_UScriptStruct_FROSAirspeed_Statics::NewStructOps, TEXT("ROSAirspeed"), &Z_Registration_Info_UScriptStruct_FROSAirspeed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAirspeed), 900182957U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AirspeedMsg, UROS2AirspeedMsg::StaticClass, TEXT("UROS2AirspeedMsg"), &Z_Registration_Info_UClass_UROS2AirspeedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AirspeedMsg), 3102022460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Airspeed_h__Script_UnrealRosFlight_3309994634(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Airspeed_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Airspeed_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Airspeed_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Airspeed_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
