// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2ByteMA.h"
#include "rclUE/Public/Msgs/ROS2MALayout.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ByteMA() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2ByteMAMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2ByteMAMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSByteMA();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMALayout();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSByteMA ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSByteMA;
class UScriptStruct* FROSByteMA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSByteMA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSByteMA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSByteMA, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSByteMA"));
	}
	return Z_Registration_Info_UScriptStruct_FROSByteMA.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSByteMA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ByteMA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "ROSByteMA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ByteMA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSByteMA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ByteMA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSByteMA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSByteMA_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSByteMA, Layout), Z_Construct_UScriptStruct_FROSMALayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 1296621711
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSByteMA_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSByteMA_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSByteMA, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSByteMA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSByteMA_Statics::NewProp_Layout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSByteMA_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSByteMA_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSByteMA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSByteMA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSByteMA",
	Z_Construct_UScriptStruct_FROSByteMA_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSByteMA_Statics::PropPointers),
	sizeof(FROSByteMA),
	alignof(FROSByteMA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSByteMA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSByteMA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSByteMA()
{
	if (!Z_Registration_Info_UScriptStruct_FROSByteMA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSByteMA.InnerSingleton, Z_Construct_UScriptStruct_FROSByteMA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSByteMA.InnerSingleton;
}
// ********** End ScriptStruct FROSByteMA **********************************************************

// ********** Begin Class UROS2ByteMAMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics
{
	struct ROS2ByteMAMsg_eventGetMsg_Parms
	{
		FROSByteMA Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ByteMA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ByteMAMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSByteMA, METADATA_PARAMS(0, nullptr) }; // 3067007516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ByteMAMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::ROS2ByteMAMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::ROS2ByteMAMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ByteMAMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSByteMA,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2ByteMAMsg Function GetMsg *********************************************

// ********** Begin Class UROS2ByteMAMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics
{
	struct ROS2ByteMAMsg_eventSetMsg_Parms
	{
		FROSByteMA Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ByteMA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ByteMAMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSByteMA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3067007516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ByteMAMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::ROS2ByteMAMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::ROS2ByteMAMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ByteMAMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSByteMA,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2ByteMAMsg Function SetMsg *********************************************

// ********** Begin Class UROS2ByteMAMsg ***********************************************************
void UROS2ByteMAMsg::StaticRegisterNativesUROS2ByteMAMsg()
{
	UClass* Class = UROS2ByteMAMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2ByteMAMsg::execGetMsg },
		{ "SetMsg", &UROS2ByteMAMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ByteMAMsg;
UClass* UROS2ByteMAMsg::GetPrivateStaticClass()
{
	using TClass = UROS2ByteMAMsg;
	if (!Z_Registration_Info_UClass_UROS2ByteMAMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ByteMAMsg"),
			Z_Registration_Info_UClass_UROS2ByteMAMsg.InnerSingleton,
			StaticRegisterNativesUROS2ByteMAMsg,
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
	return Z_Registration_Info_UClass_UROS2ByteMAMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ByteMAMsg_NoRegister()
{
	return UROS2ByteMAMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ByteMAMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2ByteMA.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ByteMA.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ByteMAMsg_GetMsg, "GetMsg" }, // 1090141574
		{ &Z_Construct_UFunction_UROS2ByteMAMsg_SetMsg, "SetMsg" }, // 1997426127
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ByteMAMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ByteMAMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ByteMAMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ByteMAMsg_Statics::ClassParams = {
	&UROS2ByteMAMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ByteMAMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ByteMAMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ByteMAMsg()
{
	if (!Z_Registration_Info_UClass_UROS2ByteMAMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ByteMAMsg.OuterSingleton, Z_Construct_UClass_UROS2ByteMAMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ByteMAMsg.OuterSingleton;
}
UROS2ByteMAMsg::UROS2ByteMAMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ByteMAMsg);
UROS2ByteMAMsg::~UROS2ByteMAMsg() {}
// ********** End Class UROS2ByteMAMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ByteMA_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSByteMA::StaticStruct, Z_Construct_UScriptStruct_FROSByteMA_Statics::NewStructOps, TEXT("ROSByteMA"), &Z_Registration_Info_UScriptStruct_FROSByteMA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSByteMA), 3067007516U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ByteMAMsg, UROS2ByteMAMsg::StaticClass, TEXT("UROS2ByteMAMsg"), &Z_Registration_Info_UClass_UROS2ByteMAMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ByteMAMsg), 150214999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ByteMA_h__Script_rclUE_3804307473(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ByteMA_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ByteMA_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ByteMA_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ByteMA_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
