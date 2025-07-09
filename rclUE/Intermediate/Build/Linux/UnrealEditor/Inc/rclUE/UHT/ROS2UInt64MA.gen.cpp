// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2UInt64MA.h"
#include "rclUE/Public/Msgs/ROS2MALayout.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2UInt64MA() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2UInt64MAMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2UInt64MAMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMALayout();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSUInt64MA();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSUInt64MA ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSUInt64MA;
class UScriptStruct* FROSUInt64MA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUInt64MA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSUInt64MA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSUInt64MA, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSUInt64MA"));
	}
	return Z_Registration_Info_UScriptStruct_FROSUInt64MA.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSUInt64MA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt64MA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "ROSUInt64MA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt64MA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSUInt64MA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt64MA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSUInt64MA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSUInt64MA_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSUInt64MA, Layout), Z_Construct_UScriptStruct_FROSMALayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 1296621711
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FROSUInt64MA_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSUInt64MA_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSUInt64MA, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSUInt64MA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUInt64MA_Statics::NewProp_Layout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUInt64MA_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUInt64MA_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt64MA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSUInt64MA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSUInt64MA",
	Z_Construct_UScriptStruct_FROSUInt64MA_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt64MA_Statics::PropPointers),
	sizeof(FROSUInt64MA),
	alignof(FROSUInt64MA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt64MA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSUInt64MA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSUInt64MA()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUInt64MA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSUInt64MA.InnerSingleton, Z_Construct_UScriptStruct_FROSUInt64MA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSUInt64MA.InnerSingleton;
}
// ********** End ScriptStruct FROSUInt64MA ********************************************************

// ********** Begin Class UROS2UInt64MAMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics
{
	struct ROS2UInt64MAMsg_eventGetMsg_Parms
	{
		FROSUInt64MA Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt64MA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UInt64MAMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSUInt64MA, METADATA_PARAMS(0, nullptr) }; // 2917541429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UInt64MAMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::ROS2UInt64MAMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::ROS2UInt64MAMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UInt64MAMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSUInt64MA,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2UInt64MAMsg Function GetMsg *******************************************

// ********** Begin Class UROS2UInt64MAMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics
{
	struct ROS2UInt64MAMsg_eventSetMsg_Parms
	{
		FROSUInt64MA Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt64MA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UInt64MAMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSUInt64MA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2917541429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UInt64MAMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::ROS2UInt64MAMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::ROS2UInt64MAMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UInt64MAMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSUInt64MA,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2UInt64MAMsg Function SetMsg *******************************************

// ********** Begin Class UROS2UInt64MAMsg *********************************************************
void UROS2UInt64MAMsg::StaticRegisterNativesUROS2UInt64MAMsg()
{
	UClass* Class = UROS2UInt64MAMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2UInt64MAMsg::execGetMsg },
		{ "SetMsg", &UROS2UInt64MAMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2UInt64MAMsg;
UClass* UROS2UInt64MAMsg::GetPrivateStaticClass()
{
	using TClass = UROS2UInt64MAMsg;
	if (!Z_Registration_Info_UClass_UROS2UInt64MAMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2UInt64MAMsg"),
			Z_Registration_Info_UClass_UROS2UInt64MAMsg.InnerSingleton,
			StaticRegisterNativesUROS2UInt64MAMsg,
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
	return Z_Registration_Info_UClass_UROS2UInt64MAMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2UInt64MAMsg_NoRegister()
{
	return UROS2UInt64MAMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2UInt64MAMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2UInt64MA.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt64MA.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2UInt64MAMsg_GetMsg, "GetMsg" }, // 3576631290
		{ &Z_Construct_UFunction_UROS2UInt64MAMsg_SetMsg, "SetMsg" }, // 2309392894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2UInt64MAMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2UInt64MAMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UInt64MAMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2UInt64MAMsg_Statics::ClassParams = {
	&UROS2UInt64MAMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UInt64MAMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2UInt64MAMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2UInt64MAMsg()
{
	if (!Z_Registration_Info_UClass_UROS2UInt64MAMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2UInt64MAMsg.OuterSingleton, Z_Construct_UClass_UROS2UInt64MAMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2UInt64MAMsg.OuterSingleton;
}
UROS2UInt64MAMsg::UROS2UInt64MAMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2UInt64MAMsg);
UROS2UInt64MAMsg::~UROS2UInt64MAMsg() {}
// ********** End Class UROS2UInt64MAMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt64MA_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSUInt64MA::StaticStruct, Z_Construct_UScriptStruct_FROSUInt64MA_Statics::NewStructOps, TEXT("ROSUInt64MA"), &Z_Registration_Info_UScriptStruct_FROSUInt64MA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSUInt64MA), 2917541429U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2UInt64MAMsg, UROS2UInt64MAMsg::StaticClass, TEXT("UROS2UInt64MAMsg"), &Z_Registration_Info_UClass_UROS2UInt64MAMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2UInt64MAMsg), 3105045578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt64MA_h__Script_rclUE_2399290730(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt64MA_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt64MA_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt64MA_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt64MA_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
