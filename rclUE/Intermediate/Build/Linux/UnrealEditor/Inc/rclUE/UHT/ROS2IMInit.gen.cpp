// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2IMInit.h"
#include "rclUE/Public/Msgs/ROS2IM.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2IMInit() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMInitMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMInitMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIM();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIMInit();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSIMInit ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSIMInit;
class UScriptStruct* FROSIMInit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMInit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSIMInit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSIMInit, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSIMInit"));
	}
	return Z_Registration_Info_UScriptStruct_FROSIMInit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSIMInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerId_MetaData[] = {
		{ "Category", "ROSIMInit" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeqNum_MetaData[] = {
		{ "Category", "ROSIMInit" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[] = {
		{ "Category", "ROSIMInit" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMInit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerId;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_SeqNum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSIMInit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMInit_Statics::NewProp_ServerId = { "ServerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMInit, ServerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerId_MetaData), NewProp_ServerId_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FROSIMInit_Statics::NewProp_SeqNum = { "SeqNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMInit, SeqNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeqNum_MetaData), NewProp_SeqNum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMInit_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSIM, METADATA_PARAMS(0, nullptr) }; // 3626302721
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSIMInit_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMInit, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Markers_MetaData), NewProp_Markers_MetaData) }; // 3626302721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSIMInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMInit_Statics::NewProp_ServerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMInit_Statics::NewProp_SeqNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMInit_Statics::NewProp_Markers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMInit_Statics::NewProp_Markers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSIMInit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSIMInit",
	Z_Construct_UScriptStruct_FROSIMInit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMInit_Statics::PropPointers),
	sizeof(FROSIMInit),
	alignof(FROSIMInit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMInit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSIMInit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSIMInit()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMInit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSIMInit.InnerSingleton, Z_Construct_UScriptStruct_FROSIMInit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSIMInit.InnerSingleton;
}
// ********** End ScriptStruct FROSIMInit **********************************************************

// ********** Begin Class UROS2IMInitMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics
{
	struct ROS2IMInitMsg_eventGetMsg_Parms
	{
		FROSIMInit Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMInit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMInitMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSIMInit, METADATA_PARAMS(0, nullptr) }; // 3528054922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMInitMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::ROS2IMInitMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::ROS2IMInitMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMInitMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMInitMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMInitMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSIMInit,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2IMInitMsg Function GetMsg *********************************************

// ********** Begin Class UROS2IMInitMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics
{
	struct ROS2IMInitMsg_eventSetMsg_Parms
	{
		FROSIMInit Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMInitMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSIMInit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3528054922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMInitMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::ROS2IMInitMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::ROS2IMInitMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMInitMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMInitMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMInitMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSIMInit,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2IMInitMsg Function SetMsg *********************************************

// ********** Begin Class UROS2IMInitMsg ***********************************************************
void UROS2IMInitMsg::StaticRegisterNativesUROS2IMInitMsg()
{
	UClass* Class = UROS2IMInitMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2IMInitMsg::execGetMsg },
		{ "SetMsg", &UROS2IMInitMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2IMInitMsg;
UClass* UROS2IMInitMsg::GetPrivateStaticClass()
{
	using TClass = UROS2IMInitMsg;
	if (!Z_Registration_Info_UClass_UROS2IMInitMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2IMInitMsg"),
			Z_Registration_Info_UClass_UROS2IMInitMsg.InnerSingleton,
			StaticRegisterNativesUROS2IMInitMsg,
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
	return Z_Registration_Info_UClass_UROS2IMInitMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2IMInitMsg_NoRegister()
{
	return UROS2IMInitMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2IMInitMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2IMInit.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMInit.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2IMInitMsg_GetMsg, "GetMsg" }, // 3167005552
		{ &Z_Construct_UFunction_UROS2IMInitMsg_SetMsg, "SetMsg" }, // 3460490304
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2IMInitMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2IMInitMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMInitMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2IMInitMsg_Statics::ClassParams = {
	&UROS2IMInitMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMInitMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2IMInitMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2IMInitMsg()
{
	if (!Z_Registration_Info_UClass_UROS2IMInitMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2IMInitMsg.OuterSingleton, Z_Construct_UClass_UROS2IMInitMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2IMInitMsg.OuterSingleton;
}
UROS2IMInitMsg::UROS2IMInitMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2IMInitMsg);
UROS2IMInitMsg::~UROS2IMInitMsg() {}
// ********** End Class UROS2IMInitMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMInit_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSIMInit::StaticStruct, Z_Construct_UScriptStruct_FROSIMInit_Statics::NewStructOps, TEXT("ROSIMInit"), &Z_Registration_Info_UScriptStruct_FROSIMInit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSIMInit), 3528054922U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2IMInitMsg, UROS2IMInitMsg::StaticClass, TEXT("UROS2IMInitMsg"), &Z_Registration_Info_UClass_UROS2IMInitMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2IMInitMsg), 2634217643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMInit_h__Script_rclUE_954010394(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMInit_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMInit_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMInit_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMInit_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
