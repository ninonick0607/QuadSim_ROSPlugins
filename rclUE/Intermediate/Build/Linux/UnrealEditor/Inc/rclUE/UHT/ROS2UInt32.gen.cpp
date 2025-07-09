// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2UInt32.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2UInt32() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2UInt32Msg();
RCLUE_API UClass* Z_Construct_UClass_UROS2UInt32Msg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSUInt32();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSUInt32 ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSUInt32;
class UScriptStruct* FROSUInt32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUInt32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSUInt32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSUInt32, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSUInt32"));
	}
	return Z_Registration_Info_UScriptStruct_FROSUInt32.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSUInt32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt32.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSUInt32" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt32.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSUInt32>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSUInt32_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSUInt32, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSUInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUInt32_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSUInt32_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSUInt32",
	Z_Construct_UScriptStruct_FROSUInt32_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt32_Statics::PropPointers),
	sizeof(FROSUInt32),
	alignof(FROSUInt32),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt32_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSUInt32_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSUInt32()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUInt32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSUInt32.InnerSingleton, Z_Construct_UScriptStruct_FROSUInt32_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSUInt32.InnerSingleton;
}
// ********** End ScriptStruct FROSUInt32 **********************************************************

// ********** Begin Class UROS2UInt32Msg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics
{
	struct ROS2UInt32Msg_eventGetMsg_Parms
	{
		FROSUInt32 Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt32.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UInt32Msg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSUInt32, METADATA_PARAMS(0, nullptr) }; // 785670839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UInt32Msg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::ROS2UInt32Msg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::ROS2UInt32Msg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UInt32Msg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UInt32Msg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UInt32Msg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSUInt32,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2UInt32Msg Function GetMsg *********************************************

// ********** Begin Class UROS2UInt32Msg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics
{
	struct ROS2UInt32Msg_eventSetMsg_Parms
	{
		FROSUInt32 Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt32.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UInt32Msg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSUInt32, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 785670839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UInt32Msg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::ROS2UInt32Msg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::ROS2UInt32Msg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UInt32Msg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UInt32Msg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UInt32Msg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSUInt32,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2UInt32Msg Function SetMsg *********************************************

// ********** Begin Class UROS2UInt32Msg ***********************************************************
void UROS2UInt32Msg::StaticRegisterNativesUROS2UInt32Msg()
{
	UClass* Class = UROS2UInt32Msg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2UInt32Msg::execGetMsg },
		{ "SetMsg", &UROS2UInt32Msg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2UInt32Msg;
UClass* UROS2UInt32Msg::GetPrivateStaticClass()
{
	using TClass = UROS2UInt32Msg;
	if (!Z_Registration_Info_UClass_UROS2UInt32Msg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2UInt32Msg"),
			Z_Registration_Info_UClass_UROS2UInt32Msg.InnerSingleton,
			StaticRegisterNativesUROS2UInt32Msg,
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
	return Z_Registration_Info_UClass_UROS2UInt32Msg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2UInt32Msg_NoRegister()
{
	return UROS2UInt32Msg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2UInt32Msg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2UInt32.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt32.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2UInt32Msg_GetMsg, "GetMsg" }, // 3031865455
		{ &Z_Construct_UFunction_UROS2UInt32Msg_SetMsg, "SetMsg" }, // 2648620618
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2UInt32Msg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2UInt32Msg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UInt32Msg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2UInt32Msg_Statics::ClassParams = {
	&UROS2UInt32Msg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UInt32Msg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2UInt32Msg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2UInt32Msg()
{
	if (!Z_Registration_Info_UClass_UROS2UInt32Msg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2UInt32Msg.OuterSingleton, Z_Construct_UClass_UROS2UInt32Msg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2UInt32Msg.OuterSingleton;
}
UROS2UInt32Msg::UROS2UInt32Msg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2UInt32Msg);
UROS2UInt32Msg::~UROS2UInt32Msg() {}
// ********** End Class UROS2UInt32Msg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt32_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSUInt32::StaticStruct, Z_Construct_UScriptStruct_FROSUInt32_Statics::NewStructOps, TEXT("ROSUInt32"), &Z_Registration_Info_UScriptStruct_FROSUInt32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSUInt32), 785670839U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2UInt32Msg, UROS2UInt32Msg::StaticClass, TEXT("UROS2UInt32Msg"), &Z_Registration_Info_UClass_UROS2UInt32Msg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2UInt32Msg), 4073622622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt32_h__Script_rclUE_42339706(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt32_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt32_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt32_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt32_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
