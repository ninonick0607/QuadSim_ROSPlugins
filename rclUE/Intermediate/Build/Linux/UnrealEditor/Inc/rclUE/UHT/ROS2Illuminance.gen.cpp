// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Illuminance.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Illuminance() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IlluminanceMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IlluminanceMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIlluminance();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSIlluminance ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSIlluminance;
class UScriptStruct* FROSIlluminance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIlluminance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSIlluminance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSIlluminance, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSIlluminance"));
	}
	return Z_Registration_Info_UScriptStruct_FROSIlluminance.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSIlluminance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Illuminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSIlluminance" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Illuminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Illuminance_MetaData[] = {
		{ "Category", "ROSIlluminance" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Illuminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variance_MetaData[] = {
		{ "Category", "ROSIlluminance" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Illuminance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Illuminance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Variance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSIlluminance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIlluminance_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIlluminance, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSIlluminance_Statics::NewProp_Illuminance = { "Illuminance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIlluminance, Illuminance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Illuminance_MetaData), NewProp_Illuminance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSIlluminance_Statics::NewProp_Variance = { "Variance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIlluminance, Variance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variance_MetaData), NewProp_Variance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSIlluminance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIlluminance_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIlluminance_Statics::NewProp_Illuminance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIlluminance_Statics::NewProp_Variance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIlluminance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSIlluminance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSIlluminance",
	Z_Construct_UScriptStruct_FROSIlluminance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIlluminance_Statics::PropPointers),
	sizeof(FROSIlluminance),
	alignof(FROSIlluminance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIlluminance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSIlluminance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSIlluminance()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIlluminance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSIlluminance.InnerSingleton, Z_Construct_UScriptStruct_FROSIlluminance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSIlluminance.InnerSingleton;
}
// ********** End ScriptStruct FROSIlluminance *****************************************************

// ********** Begin Class UROS2IlluminanceMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics
{
	struct ROS2IlluminanceMsg_eventGetMsg_Parms
	{
		FROSIlluminance Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Illuminance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IlluminanceMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSIlluminance, METADATA_PARAMS(0, nullptr) }; // 2560382196
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IlluminanceMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::ROS2IlluminanceMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::ROS2IlluminanceMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IlluminanceMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSIlluminance,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2IlluminanceMsg Function GetMsg ****************************************

// ********** Begin Class UROS2IlluminanceMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics
{
	struct ROS2IlluminanceMsg_eventSetMsg_Parms
	{
		FROSIlluminance Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Illuminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IlluminanceMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSIlluminance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2560382196
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IlluminanceMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::ROS2IlluminanceMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::ROS2IlluminanceMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IlluminanceMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSIlluminance,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2IlluminanceMsg Function SetMsg ****************************************

// ********** Begin Class UROS2IlluminanceMsg ******************************************************
void UROS2IlluminanceMsg::StaticRegisterNativesUROS2IlluminanceMsg()
{
	UClass* Class = UROS2IlluminanceMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2IlluminanceMsg::execGetMsg },
		{ "SetMsg", &UROS2IlluminanceMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2IlluminanceMsg;
UClass* UROS2IlluminanceMsg::GetPrivateStaticClass()
{
	using TClass = UROS2IlluminanceMsg;
	if (!Z_Registration_Info_UClass_UROS2IlluminanceMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2IlluminanceMsg"),
			Z_Registration_Info_UClass_UROS2IlluminanceMsg.InnerSingleton,
			StaticRegisterNativesUROS2IlluminanceMsg,
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
	return Z_Registration_Info_UClass_UROS2IlluminanceMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2IlluminanceMsg_NoRegister()
{
	return UROS2IlluminanceMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2IlluminanceMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Illuminance.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Illuminance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2IlluminanceMsg_GetMsg, "GetMsg" }, // 2739171792
		{ &Z_Construct_UFunction_UROS2IlluminanceMsg_SetMsg, "SetMsg" }, // 3717922893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2IlluminanceMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2IlluminanceMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IlluminanceMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2IlluminanceMsg_Statics::ClassParams = {
	&UROS2IlluminanceMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IlluminanceMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2IlluminanceMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2IlluminanceMsg()
{
	if (!Z_Registration_Info_UClass_UROS2IlluminanceMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2IlluminanceMsg.OuterSingleton, Z_Construct_UClass_UROS2IlluminanceMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2IlluminanceMsg.OuterSingleton;
}
UROS2IlluminanceMsg::UROS2IlluminanceMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2IlluminanceMsg);
UROS2IlluminanceMsg::~UROS2IlluminanceMsg() {}
// ********** End Class UROS2IlluminanceMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSIlluminance::StaticStruct, Z_Construct_UScriptStruct_FROSIlluminance_Statics::NewStructOps, TEXT("ROSIlluminance"), &Z_Registration_Info_UScriptStruct_FROSIlluminance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSIlluminance), 2560382196U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2IlluminanceMsg, UROS2IlluminanceMsg::StaticClass, TEXT("UROS2IlluminanceMsg"), &Z_Registration_Info_UClass_UROS2IlluminanceMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2IlluminanceMsg), 3568937338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h__Script_rclUE_2718536025(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
