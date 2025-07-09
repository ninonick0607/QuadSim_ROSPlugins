// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2OutputRaw.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2OutputRaw() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2OutputRawMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2OutputRawMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSOutputRaw();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSOutputRaw *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSOutputRaw;
class UScriptStruct* FROSOutputRaw::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOutputRaw.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSOutputRaw.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSOutputRaw, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSOutputRaw"));
	}
	return Z_Registration_Info_UScriptStruct_FROSOutputRaw.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSOutputRaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OutputRaw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSOutputRaw" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OutputRaw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "ROSOutputRaw" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OutputRaw.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSOutputRaw>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSOutputRaw_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOutputRaw, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSOutputRaw_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSOutputRaw_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOutputRaw, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSOutputRaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOutputRaw_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOutputRaw_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOutputRaw_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOutputRaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSOutputRaw_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSOutputRaw",
	Z_Construct_UScriptStruct_FROSOutputRaw_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOutputRaw_Statics::PropPointers),
	sizeof(FROSOutputRaw),
	alignof(FROSOutputRaw),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOutputRaw_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSOutputRaw_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSOutputRaw()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOutputRaw.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSOutputRaw.InnerSingleton, Z_Construct_UScriptStruct_FROSOutputRaw_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSOutputRaw.InnerSingleton;
}
// ********** End ScriptStruct FROSOutputRaw *******************************************************

// ********** Begin Class UROS2OutputRawMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics
{
	struct ROS2OutputRawMsg_eventGetMsg_Parms
	{
		FROSOutputRaw Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2OutputRaw.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OutputRawMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSOutputRaw, METADATA_PARAMS(0, nullptr) }; // 3437610836
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OutputRawMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::ROS2OutputRawMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::ROS2OutputRawMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OutputRawMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSOutputRaw,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2OutputRawMsg Function GetMsg ******************************************

// ********** Begin Class UROS2OutputRawMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics
{
	struct ROS2OutputRawMsg_eventSetMsg_Parms
	{
		FROSOutputRaw Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2OutputRaw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OutputRawMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSOutputRaw, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3437610836
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OutputRawMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::ROS2OutputRawMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::ROS2OutputRawMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OutputRawMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSOutputRaw,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2OutputRawMsg Function SetMsg ******************************************

// ********** Begin Class UROS2OutputRawMsg ********************************************************
void UROS2OutputRawMsg::StaticRegisterNativesUROS2OutputRawMsg()
{
	UClass* Class = UROS2OutputRawMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2OutputRawMsg::execGetMsg },
		{ "SetMsg", &UROS2OutputRawMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2OutputRawMsg;
UClass* UROS2OutputRawMsg::GetPrivateStaticClass()
{
	using TClass = UROS2OutputRawMsg;
	if (!Z_Registration_Info_UClass_UROS2OutputRawMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2OutputRawMsg"),
			Z_Registration_Info_UClass_UROS2OutputRawMsg.InnerSingleton,
			StaticRegisterNativesUROS2OutputRawMsg,
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
	return Z_Registration_Info_UClass_UROS2OutputRawMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2OutputRawMsg_NoRegister()
{
	return UROS2OutputRawMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2OutputRawMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2OutputRaw.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OutputRaw.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2OutputRawMsg_GetMsg, "GetMsg" }, // 1479404847
		{ &Z_Construct_UFunction_UROS2OutputRawMsg_SetMsg, "SetMsg" }, // 2331595402
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2OutputRawMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2OutputRawMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OutputRawMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2OutputRawMsg_Statics::ClassParams = {
	&UROS2OutputRawMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OutputRawMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2OutputRawMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2OutputRawMsg()
{
	if (!Z_Registration_Info_UClass_UROS2OutputRawMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2OutputRawMsg.OuterSingleton, Z_Construct_UClass_UROS2OutputRawMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2OutputRawMsg.OuterSingleton;
}
UROS2OutputRawMsg::UROS2OutputRawMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2OutputRawMsg);
UROS2OutputRawMsg::~UROS2OutputRawMsg() {}
// ********** End Class UROS2OutputRawMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSOutputRaw::StaticStruct, Z_Construct_UScriptStruct_FROSOutputRaw_Statics::NewStructOps, TEXT("ROSOutputRaw"), &Z_Registration_Info_UScriptStruct_FROSOutputRaw, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSOutputRaw), 3437610836U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2OutputRawMsg, UROS2OutputRawMsg::StaticClass, TEXT("UROS2OutputRawMsg"), &Z_Registration_Info_UClass_UROS2OutputRawMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2OutputRawMsg), 1687704806U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h__Script_UnrealRosFlight_241201004(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
