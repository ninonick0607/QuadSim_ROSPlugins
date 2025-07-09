// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2TimeReference.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Time.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2TimeReference() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TimeReferenceMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TimeReferenceMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTime();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTimeReference();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTimeReference *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTimeReference;
class UScriptStruct* FROSTimeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTimeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTimeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTimeReference, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTimeReference"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTimeReference.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTimeReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TimeReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSTimeReference" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TimeReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRef_MetaData[] = {
		{ "Category", "ROSTimeReference" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TimeReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "ROSTimeReference" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TimeReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeRef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTimeReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTimeReference_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTimeReference, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTimeReference_Statics::NewProp_TimeRef = { "TimeRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTimeReference, TimeRef), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRef_MetaData), NewProp_TimeRef_MetaData) }; // 3189130280
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSTimeReference_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTimeReference, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTimeReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTimeReference_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTimeReference_Statics::NewProp_TimeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTimeReference_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTimeReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTimeReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTimeReference",
	Z_Construct_UScriptStruct_FROSTimeReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTimeReference_Statics::PropPointers),
	sizeof(FROSTimeReference),
	alignof(FROSTimeReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTimeReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTimeReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTimeReference()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTimeReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTimeReference.InnerSingleton, Z_Construct_UScriptStruct_FROSTimeReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTimeReference.InnerSingleton;
}
// ********** End ScriptStruct FROSTimeReference ***************************************************

// ********** Begin Class UROS2TimeReferenceMsg Function GetMsg ************************************
struct Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics
{
	struct ROS2TimeReferenceMsg_eventGetMsg_Parms
	{
		FROSTimeReference Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TimeReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TimeReferenceMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTimeReference, METADATA_PARAMS(0, nullptr) }; // 764417542
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TimeReferenceMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::ROS2TimeReferenceMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::ROS2TimeReferenceMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TimeReferenceMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTimeReference,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TimeReferenceMsg Function GetMsg **************************************

// ********** Begin Class UROS2TimeReferenceMsg Function SetMsg ************************************
struct Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics
{
	struct ROS2TimeReferenceMsg_eventSetMsg_Parms
	{
		FROSTimeReference Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TimeReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TimeReferenceMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTimeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 764417542
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TimeReferenceMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::ROS2TimeReferenceMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::ROS2TimeReferenceMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TimeReferenceMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTimeReference,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TimeReferenceMsg Function SetMsg **************************************

// ********** Begin Class UROS2TimeReferenceMsg ****************************************************
void UROS2TimeReferenceMsg::StaticRegisterNativesUROS2TimeReferenceMsg()
{
	UClass* Class = UROS2TimeReferenceMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2TimeReferenceMsg::execGetMsg },
		{ "SetMsg", &UROS2TimeReferenceMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TimeReferenceMsg;
UClass* UROS2TimeReferenceMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TimeReferenceMsg;
	if (!Z_Registration_Info_UClass_UROS2TimeReferenceMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TimeReferenceMsg"),
			Z_Registration_Info_UClass_UROS2TimeReferenceMsg.InnerSingleton,
			StaticRegisterNativesUROS2TimeReferenceMsg,
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
	return Z_Registration_Info_UClass_UROS2TimeReferenceMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TimeReferenceMsg_NoRegister()
{
	return UROS2TimeReferenceMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TimeReferenceMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2TimeReference.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TimeReference.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TimeReferenceMsg_GetMsg, "GetMsg" }, // 658154330
		{ &Z_Construct_UFunction_UROS2TimeReferenceMsg_SetMsg, "SetMsg" }, // 3485391574
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TimeReferenceMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TimeReferenceMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TimeReferenceMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TimeReferenceMsg_Statics::ClassParams = {
	&UROS2TimeReferenceMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TimeReferenceMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TimeReferenceMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TimeReferenceMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TimeReferenceMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TimeReferenceMsg.OuterSingleton, Z_Construct_UClass_UROS2TimeReferenceMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TimeReferenceMsg.OuterSingleton;
}
UROS2TimeReferenceMsg::UROS2TimeReferenceMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TimeReferenceMsg);
UROS2TimeReferenceMsg::~UROS2TimeReferenceMsg() {}
// ********** End Class UROS2TimeReferenceMsg ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TimeReference_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTimeReference::StaticStruct, Z_Construct_UScriptStruct_FROSTimeReference_Statics::NewStructOps, TEXT("ROSTimeReference"), &Z_Registration_Info_UScriptStruct_FROSTimeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTimeReference), 764417542U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TimeReferenceMsg, UROS2TimeReferenceMsg::StaticClass, TEXT("UROS2TimeReferenceMsg"), &Z_Registration_Info_UClass_UROS2TimeReferenceMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TimeReferenceMsg), 2471752818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TimeReference_h__Script_rclUE_1878600659(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TimeReference_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TimeReference_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TimeReference_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TimeReference_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
