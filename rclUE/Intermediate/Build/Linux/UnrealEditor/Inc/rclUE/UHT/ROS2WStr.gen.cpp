// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2WStr.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2WStr() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2WStrMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2WStrMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSWStr();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSWStr **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSWStr;
class UScriptStruct* FROSWStr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSWStr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSWStr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSWStr, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSWStr"));
	}
	return Z_Registration_Info_UScriptStruct_FROSWStr.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSWStr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2WStr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSWStr" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2WStr.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSWStr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSWStr_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSWStr, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSWStr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSWStr_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWStr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSWStr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSWStr",
	Z_Construct_UScriptStruct_FROSWStr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWStr_Statics::PropPointers),
	sizeof(FROSWStr),
	alignof(FROSWStr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWStr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSWStr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSWStr()
{
	if (!Z_Registration_Info_UScriptStruct_FROSWStr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSWStr.InnerSingleton, Z_Construct_UScriptStruct_FROSWStr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSWStr.InnerSingleton;
}
// ********** End ScriptStruct FROSWStr ************************************************************

// ********** Begin Class UROS2WStrMsg Function GetMsg *********************************************
struct Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics
{
	struct ROS2WStrMsg_eventGetMsg_Parms
	{
		FROSWStr Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2WStr.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2WStrMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSWStr, METADATA_PARAMS(0, nullptr) }; // 1844921104
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2WStrMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::ROS2WStrMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::ROS2WStrMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2WStrMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2WStrMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2WStrMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSWStr,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2WStrMsg Function GetMsg ***********************************************

// ********** Begin Class UROS2WStrMsg Function SetMsg *********************************************
struct Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics
{
	struct ROS2WStrMsg_eventSetMsg_Parms
	{
		FROSWStr Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2WStr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2WStrMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSWStr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1844921104
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2WStrMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::ROS2WStrMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::ROS2WStrMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2WStrMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2WStrMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2WStrMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSWStr,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2WStrMsg Function SetMsg ***********************************************

// ********** Begin Class UROS2WStrMsg *************************************************************
void UROS2WStrMsg::StaticRegisterNativesUROS2WStrMsg()
{
	UClass* Class = UROS2WStrMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2WStrMsg::execGetMsg },
		{ "SetMsg", &UROS2WStrMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2WStrMsg;
UClass* UROS2WStrMsg::GetPrivateStaticClass()
{
	using TClass = UROS2WStrMsg;
	if (!Z_Registration_Info_UClass_UROS2WStrMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2WStrMsg"),
			Z_Registration_Info_UClass_UROS2WStrMsg.InnerSingleton,
			StaticRegisterNativesUROS2WStrMsg,
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
	return Z_Registration_Info_UClass_UROS2WStrMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2WStrMsg_NoRegister()
{
	return UROS2WStrMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2WStrMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2WStr.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2WStr.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2WStrMsg_GetMsg, "GetMsg" }, // 3105172448
		{ &Z_Construct_UFunction_UROS2WStrMsg_SetMsg, "SetMsg" }, // 4293774552
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2WStrMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2WStrMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2WStrMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2WStrMsg_Statics::ClassParams = {
	&UROS2WStrMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2WStrMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2WStrMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2WStrMsg()
{
	if (!Z_Registration_Info_UClass_UROS2WStrMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2WStrMsg.OuterSingleton, Z_Construct_UClass_UROS2WStrMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2WStrMsg.OuterSingleton;
}
UROS2WStrMsg::UROS2WStrMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2WStrMsg);
UROS2WStrMsg::~UROS2WStrMsg() {}
// ********** End Class UROS2WStrMsg ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WStr_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSWStr::StaticStruct, Z_Construct_UScriptStruct_FROSWStr_Statics::NewStructOps, TEXT("ROSWStr"), &Z_Registration_Info_UScriptStruct_FROSWStr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSWStr), 1844921104U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2WStrMsg, UROS2WStrMsg::StaticClass, TEXT("UROS2WStrMsg"), &Z_Registration_Info_UClass_UROS2WStrMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2WStrMsg), 501609395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WStr_h__Script_rclUE_3838302055(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WStr_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WStr_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WStr_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WStr_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
