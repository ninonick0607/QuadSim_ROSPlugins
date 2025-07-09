// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2NavSatStatus.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2NavSatStatus() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2NavSatStatusMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2NavSatStatusMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSNavSatStatus();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSNavSatStatus **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSNavSatStatus;
class UScriptStruct* FROSNavSatStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSNavSatStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSNavSatStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSNavSatStatus, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSNavSatStatus"));
	}
	return Z_Registration_Info_UScriptStruct_FROSNavSatStatus.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSNavSatStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "ROSNavSatStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Service_MetaData[] = {
		{ "Category", "ROSNavSatStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Status;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Service;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSNavSatStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatStatus, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::NewProp_Service = { "Service", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSNavSatStatus, Service), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Service_MetaData), NewProp_Service_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::NewProp_Service,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSNavSatStatus",
	Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::PropPointers),
	sizeof(FROSNavSatStatus),
	alignof(FROSNavSatStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSNavSatStatus()
{
	if (!Z_Registration_Info_UScriptStruct_FROSNavSatStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSNavSatStatus.InnerSingleton, Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSNavSatStatus.InnerSingleton;
}
// ********** End ScriptStruct FROSNavSatStatus ****************************************************

// ********** Begin Class UROS2NavSatStatusMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics
{
	struct ROS2NavSatStatusMsg_eventGetMsg_Parms
	{
		FROSNavSatStatus Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatStatus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NavSatStatusMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSNavSatStatus, METADATA_PARAMS(0, nullptr) }; // 3235383617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NavSatStatusMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::ROS2NavSatStatusMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::ROS2NavSatStatusMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NavSatStatusMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSNavSatStatus,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2NavSatStatusMsg Function GetMsg ***************************************

// ********** Begin Class UROS2NavSatStatusMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics
{
	struct ROS2NavSatStatusMsg_eventSetMsg_Parms
	{
		FROSNavSatStatus Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatStatus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2NavSatStatusMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSNavSatStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3235383617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2NavSatStatusMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::ROS2NavSatStatusMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::ROS2NavSatStatusMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2NavSatStatusMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSNavSatStatus,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2NavSatStatusMsg Function SetMsg ***************************************

// ********** Begin Class UROS2NavSatStatusMsg *****************************************************
void UROS2NavSatStatusMsg::StaticRegisterNativesUROS2NavSatStatusMsg()
{
	UClass* Class = UROS2NavSatStatusMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2NavSatStatusMsg::execGetMsg },
		{ "SetMsg", &UROS2NavSatStatusMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2NavSatStatusMsg;
UClass* UROS2NavSatStatusMsg::GetPrivateStaticClass()
{
	using TClass = UROS2NavSatStatusMsg;
	if (!Z_Registration_Info_UClass_UROS2NavSatStatusMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2NavSatStatusMsg"),
			Z_Registration_Info_UClass_UROS2NavSatStatusMsg.InnerSingleton,
			StaticRegisterNativesUROS2NavSatStatusMsg,
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
	return Z_Registration_Info_UClass_UROS2NavSatStatusMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2NavSatStatusMsg_NoRegister()
{
	return UROS2NavSatStatusMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2NavSatStatusMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2NavSatStatus.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2NavSatStatus.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2NavSatStatusMsg_GetMsg, "GetMsg" }, // 2116402850
		{ &Z_Construct_UFunction_UROS2NavSatStatusMsg_SetMsg, "SetMsg" }, // 2661430816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2NavSatStatusMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2NavSatStatusMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2NavSatStatusMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2NavSatStatusMsg_Statics::ClassParams = {
	&UROS2NavSatStatusMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2NavSatStatusMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2NavSatStatusMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2NavSatStatusMsg()
{
	if (!Z_Registration_Info_UClass_UROS2NavSatStatusMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2NavSatStatusMsg.OuterSingleton, Z_Construct_UClass_UROS2NavSatStatusMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2NavSatStatusMsg.OuterSingleton;
}
UROS2NavSatStatusMsg::UROS2NavSatStatusMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2NavSatStatusMsg);
UROS2NavSatStatusMsg::~UROS2NavSatStatusMsg() {}
// ********** End Class UROS2NavSatStatusMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSNavSatStatus::StaticStruct, Z_Construct_UScriptStruct_FROSNavSatStatus_Statics::NewStructOps, TEXT("ROSNavSatStatus"), &Z_Registration_Info_UScriptStruct_FROSNavSatStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSNavSatStatus), 3235383617U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2NavSatStatusMsg, UROS2NavSatStatusMsg::StaticClass, TEXT("UROS2NavSatStatusMsg"), &Z_Registration_Info_UClass_UROS2NavSatStatusMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2NavSatStatusMsg), 376648911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h__Script_rclUE_1104374157(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
