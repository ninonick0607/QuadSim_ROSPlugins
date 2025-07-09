// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Int8MA.h"
#include "rclUE/Public/Msgs/ROS2MALayout.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Int8MA() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Int8MAMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Int8MAMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSInt8MA();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMALayout();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSInt8MA ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSInt8MA;
class UScriptStruct* FROSInt8MA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInt8MA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSInt8MA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSInt8MA, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSInt8MA"));
	}
	return Z_Registration_Info_UScriptStruct_FROSInt8MA.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSInt8MA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8MA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "ROSInt8MA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8MA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSInt8MA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8MA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSInt8MA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSInt8MA_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInt8MA, Layout), Z_Construct_UScriptStruct_FROSMALayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 1296621711
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FROSInt8MA_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSInt8MA_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInt8MA, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSInt8MA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInt8MA_Statics::NewProp_Layout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInt8MA_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInt8MA_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt8MA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSInt8MA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSInt8MA",
	Z_Construct_UScriptStruct_FROSInt8MA_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt8MA_Statics::PropPointers),
	sizeof(FROSInt8MA),
	alignof(FROSInt8MA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt8MA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSInt8MA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSInt8MA()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInt8MA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSInt8MA.InnerSingleton, Z_Construct_UScriptStruct_FROSInt8MA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSInt8MA.InnerSingleton;
}
// ********** End ScriptStruct FROSInt8MA **********************************************************

// ********** Begin Class UROS2Int8MAMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics
{
	struct ROS2Int8MAMsg_eventGetMsg_Parms
	{
		FROSInt8MA Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8MA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Int8MAMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSInt8MA, METADATA_PARAMS(0, nullptr) }; // 962207722
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Int8MAMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::ROS2Int8MAMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::ROS2Int8MAMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Int8MAMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSInt8MA,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2Int8MAMsg Function GetMsg *********************************************

// ********** Begin Class UROS2Int8MAMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics
{
	struct ROS2Int8MAMsg_eventSetMsg_Parms
	{
		FROSInt8MA Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8MA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Int8MAMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSInt8MA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 962207722
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Int8MAMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::ROS2Int8MAMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::ROS2Int8MAMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Int8MAMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSInt8MA,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2Int8MAMsg Function SetMsg *********************************************

// ********** Begin Class UROS2Int8MAMsg ***********************************************************
void UROS2Int8MAMsg::StaticRegisterNativesUROS2Int8MAMsg()
{
	UClass* Class = UROS2Int8MAMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2Int8MAMsg::execGetMsg },
		{ "SetMsg", &UROS2Int8MAMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Int8MAMsg;
UClass* UROS2Int8MAMsg::GetPrivateStaticClass()
{
	using TClass = UROS2Int8MAMsg;
	if (!Z_Registration_Info_UClass_UROS2Int8MAMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Int8MAMsg"),
			Z_Registration_Info_UClass_UROS2Int8MAMsg.InnerSingleton,
			StaticRegisterNativesUROS2Int8MAMsg,
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
	return Z_Registration_Info_UClass_UROS2Int8MAMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Int8MAMsg_NoRegister()
{
	return UROS2Int8MAMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Int8MAMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Int8MA.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8MA.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Int8MAMsg_GetMsg, "GetMsg" }, // 2488063251
		{ &Z_Construct_UFunction_UROS2Int8MAMsg_SetMsg, "SetMsg" }, // 3369971298
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Int8MAMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2Int8MAMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Int8MAMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Int8MAMsg_Statics::ClassParams = {
	&UROS2Int8MAMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Int8MAMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Int8MAMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Int8MAMsg()
{
	if (!Z_Registration_Info_UClass_UROS2Int8MAMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Int8MAMsg.OuterSingleton, Z_Construct_UClass_UROS2Int8MAMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Int8MAMsg.OuterSingleton;
}
UROS2Int8MAMsg::UROS2Int8MAMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Int8MAMsg);
UROS2Int8MAMsg::~UROS2Int8MAMsg() {}
// ********** End Class UROS2Int8MAMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSInt8MA::StaticStruct, Z_Construct_UScriptStruct_FROSInt8MA_Statics::NewStructOps, TEXT("ROSInt8MA"), &Z_Registration_Info_UScriptStruct_FROSInt8MA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSInt8MA), 962207722U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Int8MAMsg, UROS2Int8MAMsg::StaticClass, TEXT("UROS2Int8MAMsg"), &Z_Registration_Info_UClass_UROS2Int8MAMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Int8MAMsg), 699054415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h__Script_rclUE_2490472521(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
