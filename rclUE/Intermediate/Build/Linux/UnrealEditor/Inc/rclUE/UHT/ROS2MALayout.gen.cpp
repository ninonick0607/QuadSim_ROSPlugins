// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MALayout.h"
#include "rclUE/Public/Msgs/ROS2MADim.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MALayout() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MALayoutMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MALayoutMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMADim();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMALayout();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMALayout ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMALayout;
class UScriptStruct* FROSMALayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMALayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMALayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMALayout, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMALayout"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMALayout.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMALayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MALayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dim_MetaData[] = {
		{ "Category", "ROSMALayout" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MALayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataOffset_MetaData[] = {
		{ "Category", "ROSMALayout" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MALayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dim_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dim;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMALayout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMALayout_Statics::NewProp_Dim_Inner = { "Dim", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSMADim, METADATA_PARAMS(0, nullptr) }; // 1978164288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMALayout_Statics::NewProp_Dim = { "Dim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMALayout, Dim), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dim_MetaData), NewProp_Dim_MetaData) }; // 1978164288
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSMALayout_Statics::NewProp_DataOffset = { "DataOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMALayout, DataOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataOffset_MetaData), NewProp_DataOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMALayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMALayout_Statics::NewProp_Dim_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMALayout_Statics::NewProp_Dim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMALayout_Statics::NewProp_DataOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMALayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMALayout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMALayout",
	Z_Construct_UScriptStruct_FROSMALayout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMALayout_Statics::PropPointers),
	sizeof(FROSMALayout),
	alignof(FROSMALayout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMALayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMALayout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMALayout()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMALayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMALayout.InnerSingleton, Z_Construct_UScriptStruct_FROSMALayout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMALayout.InnerSingleton;
}
// ********** End ScriptStruct FROSMALayout ********************************************************

// ********** Begin Class UROS2MALayoutMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics
{
	struct ROS2MALayoutMsg_eventGetMsg_Parms
	{
		FROSMALayout Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MALayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MALayoutMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMALayout, METADATA_PARAMS(0, nullptr) }; // 1296621711
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MALayoutMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::ROS2MALayoutMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::ROS2MALayoutMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MALayoutMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMALayout,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MALayoutMsg Function GetMsg *******************************************

// ********** Begin Class UROS2MALayoutMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics
{
	struct ROS2MALayoutMsg_eventSetMsg_Parms
	{
		FROSMALayout Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MALayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MALayoutMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMALayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1296621711
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MALayoutMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::ROS2MALayoutMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::ROS2MALayoutMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MALayoutMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMALayout,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MALayoutMsg Function SetMsg *******************************************

// ********** Begin Class UROS2MALayoutMsg *********************************************************
void UROS2MALayoutMsg::StaticRegisterNativesUROS2MALayoutMsg()
{
	UClass* Class = UROS2MALayoutMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2MALayoutMsg::execGetMsg },
		{ "SetMsg", &UROS2MALayoutMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MALayoutMsg;
UClass* UROS2MALayoutMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MALayoutMsg;
	if (!Z_Registration_Info_UClass_UROS2MALayoutMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MALayoutMsg"),
			Z_Registration_Info_UClass_UROS2MALayoutMsg.InnerSingleton,
			StaticRegisterNativesUROS2MALayoutMsg,
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
	return Z_Registration_Info_UClass_UROS2MALayoutMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MALayoutMsg_NoRegister()
{
	return UROS2MALayoutMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MALayoutMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MALayout.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MALayout.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MALayoutMsg_GetMsg, "GetMsg" }, // 1702170730
		{ &Z_Construct_UFunction_UROS2MALayoutMsg_SetMsg, "SetMsg" }, // 3298220980
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MALayoutMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MALayoutMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MALayoutMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MALayoutMsg_Statics::ClassParams = {
	&UROS2MALayoutMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MALayoutMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MALayoutMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MALayoutMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MALayoutMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MALayoutMsg.OuterSingleton, Z_Construct_UClass_UROS2MALayoutMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MALayoutMsg.OuterSingleton;
}
UROS2MALayoutMsg::UROS2MALayoutMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MALayoutMsg);
UROS2MALayoutMsg::~UROS2MALayoutMsg() {}
// ********** End Class UROS2MALayoutMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMALayout::StaticStruct, Z_Construct_UScriptStruct_FROSMALayout_Statics::NewStructOps, TEXT("ROSMALayout"), &Z_Registration_Info_UScriptStruct_FROSMALayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMALayout), 1296621711U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MALayoutMsg, UROS2MALayoutMsg::StaticClass, TEXT("UROS2MALayoutMsg"), &Z_Registration_Info_UClass_UROS2MALayoutMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MALayoutMsg), 3766770533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h__Script_rclUE_2987848234(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MALayout_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
