// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2BatteryStatus.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2BatteryStatus() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2BatteryStatusMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2BatteryStatusMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSBatteryStatus();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSBatteryStatus *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSBatteryStatus;
class UScriptStruct* FROSBatteryStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSBatteryStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSBatteryStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSBatteryStatus, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSBatteryStatus"));
	}
	return Z_Registration_Info_UScriptStruct_FROSBatteryStatus.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSBatteryStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSBatteryStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voltage_MetaData[] = {
		{ "Category", "ROSBatteryStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "Category", "ROSBatteryStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Voltage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSBatteryStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryStatus, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::NewProp_Voltage = { "Voltage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryStatus, Voltage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voltage_MetaData), NewProp_Voltage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSBatteryStatus, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::NewProp_Voltage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::NewProp_Current,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSBatteryStatus",
	Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::PropPointers),
	sizeof(FROSBatteryStatus),
	alignof(FROSBatteryStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSBatteryStatus()
{
	if (!Z_Registration_Info_UScriptStruct_FROSBatteryStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSBatteryStatus.InnerSingleton, Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSBatteryStatus.InnerSingleton;
}
// ********** End ScriptStruct FROSBatteryStatus ***************************************************

// ********** Begin Class UROS2BatteryStatusMsg Function GetMsg ************************************
struct Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics
{
	struct ROS2BatteryStatusMsg_eventGetMsg_Parms
	{
		FROSBatteryStatus Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStatusMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSBatteryStatus, METADATA_PARAMS(0, nullptr) }; // 1454265477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStatusMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::ROS2BatteryStatusMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::ROS2BatteryStatusMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStatusMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSBatteryStatus,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStatusMsg Function GetMsg **************************************

// ********** Begin Class UROS2BatteryStatusMsg Function SetMsg ************************************
struct Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics
{
	struct ROS2BatteryStatusMsg_eventSetMsg_Parms
	{
		FROSBatteryStatus Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BatteryStatusMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSBatteryStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1454265477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BatteryStatusMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::ROS2BatteryStatusMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::ROS2BatteryStatusMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BatteryStatusMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSBatteryStatus,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2BatteryStatusMsg Function SetMsg **************************************

// ********** Begin Class UROS2BatteryStatusMsg ****************************************************
void UROS2BatteryStatusMsg::StaticRegisterNativesUROS2BatteryStatusMsg()
{
	UClass* Class = UROS2BatteryStatusMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2BatteryStatusMsg::execGetMsg },
		{ "SetMsg", &UROS2BatteryStatusMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2BatteryStatusMsg;
UClass* UROS2BatteryStatusMsg::GetPrivateStaticClass()
{
	using TClass = UROS2BatteryStatusMsg;
	if (!Z_Registration_Info_UClass_UROS2BatteryStatusMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2BatteryStatusMsg"),
			Z_Registration_Info_UClass_UROS2BatteryStatusMsg.InnerSingleton,
			StaticRegisterNativesUROS2BatteryStatusMsg,
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
	return Z_Registration_Info_UClass_UROS2BatteryStatusMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2BatteryStatusMsg_NoRegister()
{
	return UROS2BatteryStatusMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2BatteryStatusMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2BatteryStatus.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2BatteryStatus.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2BatteryStatusMsg_GetMsg, "GetMsg" }, // 1473255600
		{ &Z_Construct_UFunction_UROS2BatteryStatusMsg_SetMsg, "SetMsg" }, // 3752022268
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2BatteryStatusMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2BatteryStatusMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2BatteryStatusMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2BatteryStatusMsg_Statics::ClassParams = {
	&UROS2BatteryStatusMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2BatteryStatusMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2BatteryStatusMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2BatteryStatusMsg()
{
	if (!Z_Registration_Info_UClass_UROS2BatteryStatusMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2BatteryStatusMsg.OuterSingleton, Z_Construct_UClass_UROS2BatteryStatusMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2BatteryStatusMsg.OuterSingleton;
}
UROS2BatteryStatusMsg::UROS2BatteryStatusMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2BatteryStatusMsg);
UROS2BatteryStatusMsg::~UROS2BatteryStatusMsg() {}
// ********** End Class UROS2BatteryStatusMsg ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2BatteryStatus_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSBatteryStatus::StaticStruct, Z_Construct_UScriptStruct_FROSBatteryStatus_Statics::NewStructOps, TEXT("ROSBatteryStatus"), &Z_Registration_Info_UScriptStruct_FROSBatteryStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSBatteryStatus), 1454265477U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2BatteryStatusMsg, UROS2BatteryStatusMsg::StaticClass, TEXT("UROS2BatteryStatusMsg"), &Z_Registration_Info_UClass_UROS2BatteryStatusMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2BatteryStatusMsg), 2988600072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2BatteryStatus_h__Script_UnrealRosFlight_3812218533(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2BatteryStatus_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2BatteryStatus_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2BatteryStatus_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2BatteryStatus_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
