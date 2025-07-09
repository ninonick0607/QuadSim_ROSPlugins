// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2PwmOutput.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PwmOutput() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2PwmOutputMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2PwmOutputMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSPwmOutput();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPwmOutput *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPwmOutput;
class UScriptStruct* FROSPwmOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPwmOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPwmOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPwmOutput, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSPwmOutput"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPwmOutput.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPwmOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PwmOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPwmOutput" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PwmOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "ROSPwmOutput" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PwmOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPwmOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPwmOutput_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPwmOutput, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FROSPwmOutput_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPwmOutput_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPwmOutput, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPwmOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPwmOutput_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPwmOutput_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPwmOutput_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPwmOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPwmOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSPwmOutput",
	Z_Construct_UScriptStruct_FROSPwmOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPwmOutput_Statics::PropPointers),
	sizeof(FROSPwmOutput),
	alignof(FROSPwmOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPwmOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPwmOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPwmOutput()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPwmOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPwmOutput.InnerSingleton, Z_Construct_UScriptStruct_FROSPwmOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPwmOutput.InnerSingleton;
}
// ********** End ScriptStruct FROSPwmOutput *******************************************************

// ********** Begin Class UROS2PwmOutputMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics
{
	struct ROS2PwmOutputMsg_eventGetMsg_Parms
	{
		FROSPwmOutput Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PwmOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PwmOutputMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPwmOutput, METADATA_PARAMS(0, nullptr) }; // 95635593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PwmOutputMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::ROS2PwmOutputMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::ROS2PwmOutputMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PwmOutputMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPwmOutput,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PwmOutputMsg Function GetMsg ******************************************

// ********** Begin Class UROS2PwmOutputMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics
{
	struct ROS2PwmOutputMsg_eventSetMsg_Parms
	{
		FROSPwmOutput Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PwmOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PwmOutputMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPwmOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 95635593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PwmOutputMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::ROS2PwmOutputMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::ROS2PwmOutputMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PwmOutputMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPwmOutput,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PwmOutputMsg Function SetMsg ******************************************

// ********** Begin Class UROS2PwmOutputMsg ********************************************************
void UROS2PwmOutputMsg::StaticRegisterNativesUROS2PwmOutputMsg()
{
	UClass* Class = UROS2PwmOutputMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PwmOutputMsg::execGetMsg },
		{ "SetMsg", &UROS2PwmOutputMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PwmOutputMsg;
UClass* UROS2PwmOutputMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PwmOutputMsg;
	if (!Z_Registration_Info_UClass_UROS2PwmOutputMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PwmOutputMsg"),
			Z_Registration_Info_UClass_UROS2PwmOutputMsg.InnerSingleton,
			StaticRegisterNativesUROS2PwmOutputMsg,
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
	return Z_Registration_Info_UClass_UROS2PwmOutputMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PwmOutputMsg_NoRegister()
{
	return UROS2PwmOutputMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PwmOutputMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PwmOutput.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PwmOutput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PwmOutputMsg_GetMsg, "GetMsg" }, // 2402561916
		{ &Z_Construct_UFunction_UROS2PwmOutputMsg_SetMsg, "SetMsg" }, // 3555669510
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PwmOutputMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PwmOutputMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PwmOutputMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PwmOutputMsg_Statics::ClassParams = {
	&UROS2PwmOutputMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PwmOutputMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PwmOutputMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PwmOutputMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PwmOutputMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PwmOutputMsg.OuterSingleton, Z_Construct_UClass_UROS2PwmOutputMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PwmOutputMsg.OuterSingleton;
}
UROS2PwmOutputMsg::UROS2PwmOutputMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PwmOutputMsg);
UROS2PwmOutputMsg::~UROS2PwmOutputMsg() {}
// ********** End Class UROS2PwmOutputMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPwmOutput::StaticStruct, Z_Construct_UScriptStruct_FROSPwmOutput_Statics::NewStructOps, TEXT("ROSPwmOutput"), &Z_Registration_Info_UScriptStruct_FROSPwmOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPwmOutput), 95635593U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PwmOutputMsg, UROS2PwmOutputMsg::StaticClass, TEXT("UROS2PwmOutputMsg"), &Z_Registration_Info_UClass_UROS2PwmOutputMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PwmOutputMsg), 122406919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h__Script_UnrealRosFlight_1487852920(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
