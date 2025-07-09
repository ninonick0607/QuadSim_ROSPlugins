// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Wrench.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Wrench() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2WrenchMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2WrenchMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSWrench();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSWrench ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSWrench;
class UScriptStruct* FROSWrench::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSWrench.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSWrench.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSWrench, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSWrench"));
	}
	return Z_Registration_Info_UScriptStruct_FROSWrench.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSWrench_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Wrench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "Category", "ROSWrench" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Wrench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Torque_MetaData[] = {
		{ "Category", "ROSWrench" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Wrench.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Torque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSWrench>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSWrench_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSWrench, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSWrench_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSWrench, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Torque_MetaData), NewProp_Torque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSWrench_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSWrench_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSWrench_Statics::NewProp_Torque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWrench_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSWrench_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSWrench",
	Z_Construct_UScriptStruct_FROSWrench_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWrench_Statics::PropPointers),
	sizeof(FROSWrench),
	alignof(FROSWrench),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWrench_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSWrench_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSWrench()
{
	if (!Z_Registration_Info_UScriptStruct_FROSWrench.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSWrench.InnerSingleton, Z_Construct_UScriptStruct_FROSWrench_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSWrench.InnerSingleton;
}
// ********** End ScriptStruct FROSWrench **********************************************************

// ********** Begin Class UROS2WrenchMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics
{
	struct ROS2WrenchMsg_eventGetMsg_Parms
	{
		FROSWrench Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Wrench.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2WrenchMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSWrench, METADATA_PARAMS(0, nullptr) }; // 3360570850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2WrenchMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::ROS2WrenchMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::ROS2WrenchMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2WrenchMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2WrenchMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2WrenchMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSWrench,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2WrenchMsg Function GetMsg *********************************************

// ********** Begin Class UROS2WrenchMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics
{
	struct ROS2WrenchMsg_eventSetMsg_Parms
	{
		FROSWrench Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Wrench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2WrenchMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSWrench, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3360570850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2WrenchMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::ROS2WrenchMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::ROS2WrenchMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2WrenchMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2WrenchMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2WrenchMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSWrench,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2WrenchMsg Function SetMsg *********************************************

// ********** Begin Class UROS2WrenchMsg ***********************************************************
void UROS2WrenchMsg::StaticRegisterNativesUROS2WrenchMsg()
{
	UClass* Class = UROS2WrenchMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2WrenchMsg::execGetMsg },
		{ "SetMsg", &UROS2WrenchMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2WrenchMsg;
UClass* UROS2WrenchMsg::GetPrivateStaticClass()
{
	using TClass = UROS2WrenchMsg;
	if (!Z_Registration_Info_UClass_UROS2WrenchMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2WrenchMsg"),
			Z_Registration_Info_UClass_UROS2WrenchMsg.InnerSingleton,
			StaticRegisterNativesUROS2WrenchMsg,
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
	return Z_Registration_Info_UClass_UROS2WrenchMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2WrenchMsg_NoRegister()
{
	return UROS2WrenchMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2WrenchMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Wrench.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Wrench.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2WrenchMsg_GetMsg, "GetMsg" }, // 2330800061
		{ &Z_Construct_UFunction_UROS2WrenchMsg_SetMsg, "SetMsg" }, // 1372765628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2WrenchMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2WrenchMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2WrenchMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2WrenchMsg_Statics::ClassParams = {
	&UROS2WrenchMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2WrenchMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2WrenchMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2WrenchMsg()
{
	if (!Z_Registration_Info_UClass_UROS2WrenchMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2WrenchMsg.OuterSingleton, Z_Construct_UClass_UROS2WrenchMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2WrenchMsg.OuterSingleton;
}
UROS2WrenchMsg::UROS2WrenchMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2WrenchMsg);
UROS2WrenchMsg::~UROS2WrenchMsg() {}
// ********** End Class UROS2WrenchMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Wrench_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSWrench::StaticStruct, Z_Construct_UScriptStruct_FROSWrench_Statics::NewStructOps, TEXT("ROSWrench"), &Z_Registration_Info_UScriptStruct_FROSWrench, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSWrench), 3360570850U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2WrenchMsg, UROS2WrenchMsg::StaticClass, TEXT("UROS2WrenchMsg"), &Z_Registration_Info_UClass_UROS2WrenchMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2WrenchMsg), 3642467195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Wrench_h__Script_rclUE_3216996612(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Wrench_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Wrench_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Wrench_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Wrench_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
