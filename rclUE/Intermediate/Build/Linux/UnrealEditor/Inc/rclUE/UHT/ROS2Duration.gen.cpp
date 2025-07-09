// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Duration.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Duration() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2DurationMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2DurationMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDuration();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSDuration ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSDuration;
class UScriptStruct* FROSDuration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDuration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSDuration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSDuration, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSDuration"));
	}
	return Z_Registration_Info_UScriptStruct_FROSDuration.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSDuration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Duration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sec_MetaData[] = {
		{ "Category", "ROSDuration" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Duration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nanosec_MetaData[] = {
		{ "Category", "ROSDuration" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Duration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Sec;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Nanosec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSDuration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSDuration_Statics::NewProp_Sec = { "Sec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDuration, Sec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sec_MetaData), NewProp_Sec_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSDuration_Statics::NewProp_Nanosec = { "Nanosec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDuration, Nanosec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nanosec_MetaData), NewProp_Nanosec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDuration_Statics::NewProp_Sec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDuration_Statics::NewProp_Nanosec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSDuration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSDuration",
	Z_Construct_UScriptStruct_FROSDuration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDuration_Statics::PropPointers),
	sizeof(FROSDuration),
	alignof(FROSDuration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDuration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSDuration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSDuration()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDuration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSDuration.InnerSingleton, Z_Construct_UScriptStruct_FROSDuration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSDuration.InnerSingleton;
}
// ********** End ScriptStruct FROSDuration ********************************************************

// ********** Begin Class UROS2DurationMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics
{
	struct ROS2DurationMsg_eventGetMsg_Parms
	{
		FROSDuration Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Duration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DurationMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSDuration, METADATA_PARAMS(0, nullptr) }; // 3152230835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DurationMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::ROS2DurationMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::ROS2DurationMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DurationMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DurationMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DurationMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSDuration,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2DurationMsg Function GetMsg *******************************************

// ********** Begin Class UROS2DurationMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics
{
	struct ROS2DurationMsg_eventSetMsg_Parms
	{
		FROSDuration Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Duration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DurationMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSDuration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3152230835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DurationMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::ROS2DurationMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::ROS2DurationMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DurationMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DurationMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DurationMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSDuration,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2DurationMsg Function SetMsg *******************************************

// ********** Begin Class UROS2DurationMsg *********************************************************
void UROS2DurationMsg::StaticRegisterNativesUROS2DurationMsg()
{
	UClass* Class = UROS2DurationMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2DurationMsg::execGetMsg },
		{ "SetMsg", &UROS2DurationMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2DurationMsg;
UClass* UROS2DurationMsg::GetPrivateStaticClass()
{
	using TClass = UROS2DurationMsg;
	if (!Z_Registration_Info_UClass_UROS2DurationMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2DurationMsg"),
			Z_Registration_Info_UClass_UROS2DurationMsg.InnerSingleton,
			StaticRegisterNativesUROS2DurationMsg,
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
	return Z_Registration_Info_UClass_UROS2DurationMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2DurationMsg_NoRegister()
{
	return UROS2DurationMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2DurationMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Duration.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Duration.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2DurationMsg_GetMsg, "GetMsg" }, // 3192146386
		{ &Z_Construct_UFunction_UROS2DurationMsg_SetMsg, "SetMsg" }, // 3422629542
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2DurationMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2DurationMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DurationMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2DurationMsg_Statics::ClassParams = {
	&UROS2DurationMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DurationMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2DurationMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2DurationMsg()
{
	if (!Z_Registration_Info_UClass_UROS2DurationMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2DurationMsg.OuterSingleton, Z_Construct_UClass_UROS2DurationMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2DurationMsg.OuterSingleton;
}
UROS2DurationMsg::UROS2DurationMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2DurationMsg);
UROS2DurationMsg::~UROS2DurationMsg() {}
// ********** End Class UROS2DurationMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Duration_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSDuration::StaticStruct, Z_Construct_UScriptStruct_FROSDuration_Statics::NewStructOps, TEXT("ROSDuration"), &Z_Registration_Info_UScriptStruct_FROSDuration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSDuration), 3152230835U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2DurationMsg, UROS2DurationMsg::StaticClass, TEXT("UROS2DurationMsg"), &Z_Registration_Info_UClass_UROS2DurationMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2DurationMsg), 72918961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Duration_h__Script_rclUE_1681491769(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Duration_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Duration_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Duration_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Duration_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
