// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2RCRaw.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2RCRaw() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2RCRawMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2RCRawMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSRCRaw();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSRCRaw *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSRCRaw;
class UScriptStruct* FROSRCRaw::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSRCRaw.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSRCRaw.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSRCRaw, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSRCRaw"));
	}
	return Z_Registration_Info_UScriptStruct_FROSRCRaw.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSRCRaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RCRaw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSRCRaw" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RCRaw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "ROSRCRaw" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RCRaw.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSRCRaw>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSRCRaw_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRCRaw, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FROSRCRaw_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSRCRaw_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRCRaw, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSRCRaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRCRaw_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRCRaw_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRCRaw_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRCRaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSRCRaw_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSRCRaw",
	Z_Construct_UScriptStruct_FROSRCRaw_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRCRaw_Statics::PropPointers),
	sizeof(FROSRCRaw),
	alignof(FROSRCRaw),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRCRaw_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSRCRaw_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSRCRaw()
{
	if (!Z_Registration_Info_UScriptStruct_FROSRCRaw.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSRCRaw.InnerSingleton, Z_Construct_UScriptStruct_FROSRCRaw_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSRCRaw.InnerSingleton;
}
// ********** End ScriptStruct FROSRCRaw ***********************************************************

// ********** Begin Class UROS2RCRawMsg Function GetMsg ********************************************
struct Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics
{
	struct ROS2RCRawMsg_eventGetMsg_Parms
	{
		FROSRCRaw Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2RCRaw.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RCRawMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSRCRaw, METADATA_PARAMS(0, nullptr) }; // 4294631514
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RCRawMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::ROS2RCRawMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::ROS2RCRawMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RCRawMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RCRawMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RCRawMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSRCRaw,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2RCRawMsg Function GetMsg **********************************************

// ********** Begin Class UROS2RCRawMsg Function SetMsg ********************************************
struct Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics
{
	struct ROS2RCRawMsg_eventSetMsg_Parms
	{
		FROSRCRaw Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2RCRaw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RCRawMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSRCRaw, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 4294631514
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RCRawMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::ROS2RCRawMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::ROS2RCRawMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RCRawMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RCRawMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RCRawMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSRCRaw,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2RCRawMsg Function SetMsg **********************************************

// ********** Begin Class UROS2RCRawMsg ************************************************************
void UROS2RCRawMsg::StaticRegisterNativesUROS2RCRawMsg()
{
	UClass* Class = UROS2RCRawMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2RCRawMsg::execGetMsg },
		{ "SetMsg", &UROS2RCRawMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2RCRawMsg;
UClass* UROS2RCRawMsg::GetPrivateStaticClass()
{
	using TClass = UROS2RCRawMsg;
	if (!Z_Registration_Info_UClass_UROS2RCRawMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2RCRawMsg"),
			Z_Registration_Info_UClass_UROS2RCRawMsg.InnerSingleton,
			StaticRegisterNativesUROS2RCRawMsg,
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
	return Z_Registration_Info_UClass_UROS2RCRawMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2RCRawMsg_NoRegister()
{
	return UROS2RCRawMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2RCRawMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2RCRaw.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RCRaw.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2RCRawMsg_GetMsg, "GetMsg" }, // 1239988967
		{ &Z_Construct_UFunction_UROS2RCRawMsg_SetMsg, "SetMsg" }, // 1669393621
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2RCRawMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2RCRawMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2RCRawMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2RCRawMsg_Statics::ClassParams = {
	&UROS2RCRawMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2RCRawMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2RCRawMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2RCRawMsg()
{
	if (!Z_Registration_Info_UClass_UROS2RCRawMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2RCRawMsg.OuterSingleton, Z_Construct_UClass_UROS2RCRawMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2RCRawMsg.OuterSingleton;
}
UROS2RCRawMsg::UROS2RCRawMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2RCRawMsg);
UROS2RCRawMsg::~UROS2RCRawMsg() {}
// ********** End Class UROS2RCRawMsg **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSRCRaw::StaticStruct, Z_Construct_UScriptStruct_FROSRCRaw_Statics::NewStructOps, TEXT("ROSRCRaw"), &Z_Registration_Info_UScriptStruct_FROSRCRaw, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSRCRaw), 4294631514U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2RCRawMsg, UROS2RCRawMsg::StaticClass, TEXT("UROS2RCRawMsg"), &Z_Registration_Info_UClass_UROS2RCRawMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2RCRawMsg), 2382102610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h__Script_UnrealRosFlight_1129147031(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
