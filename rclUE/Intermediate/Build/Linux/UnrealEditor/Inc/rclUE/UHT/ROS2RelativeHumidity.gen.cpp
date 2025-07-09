// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2RelativeHumidity.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2RelativeHumidity() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2RelativeHumidityMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2RelativeHumidityMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSRelativeHumidity();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSRelativeHumidity **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSRelativeHumidity;
class UScriptStruct* FROSRelativeHumidity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSRelativeHumidity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSRelativeHumidity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSRelativeHumidity, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSRelativeHumidity"));
	}
	return Z_Registration_Info_UScriptStruct_FROSRelativeHumidity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RelativeHumidity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSRelativeHumidity" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RelativeHumidity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeHumidity_MetaData[] = {
		{ "Category", "ROSRelativeHumidity" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RelativeHumidity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variance_MetaData[] = {
		{ "Category", "ROSRelativeHumidity" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RelativeHumidity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RelativeHumidity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Variance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSRelativeHumidity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRelativeHumidity, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::NewProp_RelativeHumidity = { "RelativeHumidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRelativeHumidity, RelativeHumidity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeHumidity_MetaData), NewProp_RelativeHumidity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::NewProp_Variance = { "Variance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRelativeHumidity, Variance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variance_MetaData), NewProp_Variance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::NewProp_RelativeHumidity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::NewProp_Variance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSRelativeHumidity",
	Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::PropPointers),
	sizeof(FROSRelativeHumidity),
	alignof(FROSRelativeHumidity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSRelativeHumidity()
{
	if (!Z_Registration_Info_UScriptStruct_FROSRelativeHumidity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSRelativeHumidity.InnerSingleton, Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSRelativeHumidity.InnerSingleton;
}
// ********** End ScriptStruct FROSRelativeHumidity ************************************************

// ********** Begin Class UROS2RelativeHumidityMsg Function GetMsg *********************************
struct Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics
{
	struct ROS2RelativeHumidityMsg_eventGetMsg_Parms
	{
		FROSRelativeHumidity Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2RelativeHumidity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RelativeHumidityMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSRelativeHumidity, METADATA_PARAMS(0, nullptr) }; // 1763544738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RelativeHumidityMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::ROS2RelativeHumidityMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::ROS2RelativeHumidityMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RelativeHumidityMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSRelativeHumidity,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2RelativeHumidityMsg Function GetMsg ***********************************

// ********** Begin Class UROS2RelativeHumidityMsg Function SetMsg *********************************
struct Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics
{
	struct ROS2RelativeHumidityMsg_eventSetMsg_Parms
	{
		FROSRelativeHumidity Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2RelativeHumidity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RelativeHumidityMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSRelativeHumidity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1763544738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RelativeHumidityMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::ROS2RelativeHumidityMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::ROS2RelativeHumidityMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RelativeHumidityMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSRelativeHumidity,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2RelativeHumidityMsg Function SetMsg ***********************************

// ********** Begin Class UROS2RelativeHumidityMsg *************************************************
void UROS2RelativeHumidityMsg::StaticRegisterNativesUROS2RelativeHumidityMsg()
{
	UClass* Class = UROS2RelativeHumidityMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2RelativeHumidityMsg::execGetMsg },
		{ "SetMsg", &UROS2RelativeHumidityMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2RelativeHumidityMsg;
UClass* UROS2RelativeHumidityMsg::GetPrivateStaticClass()
{
	using TClass = UROS2RelativeHumidityMsg;
	if (!Z_Registration_Info_UClass_UROS2RelativeHumidityMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2RelativeHumidityMsg"),
			Z_Registration_Info_UClass_UROS2RelativeHumidityMsg.InnerSingleton,
			StaticRegisterNativesUROS2RelativeHumidityMsg,
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
	return Z_Registration_Info_UClass_UROS2RelativeHumidityMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2RelativeHumidityMsg_NoRegister()
{
	return UROS2RelativeHumidityMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2RelativeHumidityMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2RelativeHumidity.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RelativeHumidity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2RelativeHumidityMsg_GetMsg, "GetMsg" }, // 2884717141
		{ &Z_Construct_UFunction_UROS2RelativeHumidityMsg_SetMsg, "SetMsg" }, // 913750038
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2RelativeHumidityMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2RelativeHumidityMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2RelativeHumidityMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2RelativeHumidityMsg_Statics::ClassParams = {
	&UROS2RelativeHumidityMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2RelativeHumidityMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2RelativeHumidityMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2RelativeHumidityMsg()
{
	if (!Z_Registration_Info_UClass_UROS2RelativeHumidityMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2RelativeHumidityMsg.OuterSingleton, Z_Construct_UClass_UROS2RelativeHumidityMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2RelativeHumidityMsg.OuterSingleton;
}
UROS2RelativeHumidityMsg::UROS2RelativeHumidityMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2RelativeHumidityMsg);
UROS2RelativeHumidityMsg::~UROS2RelativeHumidityMsg() {}
// ********** End Class UROS2RelativeHumidityMsg ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSRelativeHumidity::StaticStruct, Z_Construct_UScriptStruct_FROSRelativeHumidity_Statics::NewStructOps, TEXT("ROSRelativeHumidity"), &Z_Registration_Info_UScriptStruct_FROSRelativeHumidity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSRelativeHumidity), 1763544738U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2RelativeHumidityMsg, UROS2RelativeHumidityMsg::StaticClass, TEXT("UROS2RelativeHumidityMsg"), &Z_Registration_Info_UClass_UROS2RelativeHumidityMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2RelativeHumidityMsg), 2941581652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h__Script_rclUE_439010249(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RelativeHumidity_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
