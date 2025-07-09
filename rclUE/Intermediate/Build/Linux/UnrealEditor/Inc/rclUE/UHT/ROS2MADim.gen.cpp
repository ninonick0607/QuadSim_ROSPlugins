// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MADim.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MADim() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MADimMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MADimMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMADim();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMADim *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMADim;
class UScriptStruct* FROSMADim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMADim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMADim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMADim, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMADim"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMADim.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMADim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MADim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "ROSMADim" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MADim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "ROSMADim" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MADim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[] = {
		{ "Category", "ROSMADim" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MADim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Size;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Stride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMADim>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSMADim_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMADim, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSMADim_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMADim, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSMADim_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMADim, Stride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stride_MetaData), NewProp_Stride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMADim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMADim_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMADim_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMADim_Statics::NewProp_Stride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMADim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMADim_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMADim",
	Z_Construct_UScriptStruct_FROSMADim_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMADim_Statics::PropPointers),
	sizeof(FROSMADim),
	alignof(FROSMADim),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMADim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMADim_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMADim()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMADim.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMADim.InnerSingleton, Z_Construct_UScriptStruct_FROSMADim_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMADim.InnerSingleton;
}
// ********** End ScriptStruct FROSMADim ***********************************************************

// ********** Begin Class UROS2MADimMsg Function GetMsg ********************************************
struct Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics
{
	struct ROS2MADimMsg_eventGetMsg_Parms
	{
		FROSMADim Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MADim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MADimMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMADim, METADATA_PARAMS(0, nullptr) }; // 1978164288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MADimMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::ROS2MADimMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::ROS2MADimMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MADimMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MADimMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MADimMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMADim,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MADimMsg Function GetMsg **********************************************

// ********** Begin Class UROS2MADimMsg Function SetMsg ********************************************
struct Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics
{
	struct ROS2MADimMsg_eventSetMsg_Parms
	{
		FROSMADim Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MADim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MADimMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMADim, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1978164288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MADimMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::ROS2MADimMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::ROS2MADimMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MADimMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MADimMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MADimMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMADim,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MADimMsg Function SetMsg **********************************************

// ********** Begin Class UROS2MADimMsg ************************************************************
void UROS2MADimMsg::StaticRegisterNativesUROS2MADimMsg()
{
	UClass* Class = UROS2MADimMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2MADimMsg::execGetMsg },
		{ "SetMsg", &UROS2MADimMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MADimMsg;
UClass* UROS2MADimMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MADimMsg;
	if (!Z_Registration_Info_UClass_UROS2MADimMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MADimMsg"),
			Z_Registration_Info_UClass_UROS2MADimMsg.InnerSingleton,
			StaticRegisterNativesUROS2MADimMsg,
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
	return Z_Registration_Info_UClass_UROS2MADimMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MADimMsg_NoRegister()
{
	return UROS2MADimMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MADimMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MADim.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MADim.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MADimMsg_GetMsg, "GetMsg" }, // 1779685657
		{ &Z_Construct_UFunction_UROS2MADimMsg_SetMsg, "SetMsg" }, // 2941138894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MADimMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MADimMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MADimMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MADimMsg_Statics::ClassParams = {
	&UROS2MADimMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MADimMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MADimMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MADimMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MADimMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MADimMsg.OuterSingleton, Z_Construct_UClass_UROS2MADimMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MADimMsg.OuterSingleton;
}
UROS2MADimMsg::UROS2MADimMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MADimMsg);
UROS2MADimMsg::~UROS2MADimMsg() {}
// ********** End Class UROS2MADimMsg **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MADim_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMADim::StaticStruct, Z_Construct_UScriptStruct_FROSMADim_Statics::NewStructOps, TEXT("ROSMADim"), &Z_Registration_Info_UScriptStruct_FROSMADim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMADim), 1978164288U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MADimMsg, UROS2MADimMsg::StaticClass, TEXT("UROS2MADimMsg"), &Z_Registration_Info_UClass_UROS2MADimMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MADimMsg), 1482087893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MADim_h__Script_rclUE_2255726668(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MADim_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MADim_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MADim_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MADim_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
