// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PointIndices.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PointIndices() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointIndicesMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointIndicesMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPointIndices();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPointIndices **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPointIndices;
class UScriptStruct* FROSPointIndices::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointIndices.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPointIndices.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPointIndices, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPointIndices"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPointIndices.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPointIndices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointIndices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPointIndices" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointIndices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Category", "ROSPointIndices" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointIndices.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPointIndices>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPointIndices_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointIndices, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSPointIndices_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPointIndices_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointIndices, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPointIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointIndices_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointIndices_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointIndices_Statics::NewProp_Indices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPointIndices_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPointIndices",
	Z_Construct_UScriptStruct_FROSPointIndices_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointIndices_Statics::PropPointers),
	sizeof(FROSPointIndices),
	alignof(FROSPointIndices),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointIndices_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPointIndices_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPointIndices()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointIndices.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPointIndices.InnerSingleton, Z_Construct_UScriptStruct_FROSPointIndices_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPointIndices.InnerSingleton;
}
// ********** End ScriptStruct FROSPointIndices ****************************************************

// ********** Begin Class UROS2PointIndicesMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics
{
	struct ROS2PointIndicesMsg_eventGetMsg_Parms
	{
		FROSPointIndices Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointIndices.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointIndicesMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPointIndices, METADATA_PARAMS(0, nullptr) }; // 3567641783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointIndicesMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::ROS2PointIndicesMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::ROS2PointIndicesMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointIndicesMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPointIndices,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PointIndicesMsg Function GetMsg ***************************************

// ********** Begin Class UROS2PointIndicesMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics
{
	struct ROS2PointIndicesMsg_eventSetMsg_Parms
	{
		FROSPointIndices Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointIndices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointIndicesMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPointIndices, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3567641783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointIndicesMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::ROS2PointIndicesMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::ROS2PointIndicesMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointIndicesMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPointIndices,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PointIndicesMsg Function SetMsg ***************************************

// ********** Begin Class UROS2PointIndicesMsg *****************************************************
void UROS2PointIndicesMsg::StaticRegisterNativesUROS2PointIndicesMsg()
{
	UClass* Class = UROS2PointIndicesMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PointIndicesMsg::execGetMsg },
		{ "SetMsg", &UROS2PointIndicesMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PointIndicesMsg;
UClass* UROS2PointIndicesMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PointIndicesMsg;
	if (!Z_Registration_Info_UClass_UROS2PointIndicesMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PointIndicesMsg"),
			Z_Registration_Info_UClass_UROS2PointIndicesMsg.InnerSingleton,
			StaticRegisterNativesUROS2PointIndicesMsg,
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
	return Z_Registration_Info_UClass_UROS2PointIndicesMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PointIndicesMsg_NoRegister()
{
	return UROS2PointIndicesMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PointIndicesMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PointIndices.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointIndices.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PointIndicesMsg_GetMsg, "GetMsg" }, // 885001274
		{ &Z_Construct_UFunction_UROS2PointIndicesMsg_SetMsg, "SetMsg" }, // 3304452693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PointIndicesMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PointIndicesMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointIndicesMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PointIndicesMsg_Statics::ClassParams = {
	&UROS2PointIndicesMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointIndicesMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PointIndicesMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PointIndicesMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PointIndicesMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PointIndicesMsg.OuterSingleton, Z_Construct_UClass_UROS2PointIndicesMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PointIndicesMsg.OuterSingleton;
}
UROS2PointIndicesMsg::UROS2PointIndicesMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PointIndicesMsg);
UROS2PointIndicesMsg::~UROS2PointIndicesMsg() {}
// ********** End Class UROS2PointIndicesMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointIndices_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPointIndices::StaticStruct, Z_Construct_UScriptStruct_FROSPointIndices_Statics::NewStructOps, TEXT("ROSPointIndices"), &Z_Registration_Info_UScriptStruct_FROSPointIndices, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPointIndices), 3567641783U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PointIndicesMsg, UROS2PointIndicesMsg::StaticClass, TEXT("UROS2PointIndicesMsg"), &Z_Registration_Info_UClass_UROS2PointIndicesMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PointIndicesMsg), 1063030458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointIndices_h__Script_rclUE_4093454638(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointIndices_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointIndices_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointIndices_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointIndices_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
