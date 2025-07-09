// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Int8.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Int8() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Int8Msg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Int8Msg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSInt8();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSInt8 **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSInt8;
class UScriptStruct* FROSInt8::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInt8.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSInt8.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSInt8, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSInt8"));
	}
	return Z_Registration_Info_UScriptStruct_FROSInt8.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSInt8_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSInt8" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSInt8>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FROSInt8_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInt8, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSInt8_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInt8_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt8_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSInt8_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSInt8",
	Z_Construct_UScriptStruct_FROSInt8_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt8_Statics::PropPointers),
	sizeof(FROSInt8),
	alignof(FROSInt8),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt8_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSInt8_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSInt8()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInt8.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSInt8.InnerSingleton, Z_Construct_UScriptStruct_FROSInt8_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSInt8.InnerSingleton;
}
// ********** End ScriptStruct FROSInt8 ************************************************************

// ********** Begin Class UROS2Int8Msg Function GetMsg *********************************************
struct Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics
{
	struct ROS2Int8Msg_eventGetMsg_Parms
	{
		FROSInt8 Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Int8Msg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSInt8, METADATA_PARAMS(0, nullptr) }; // 1947789423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Int8Msg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::ROS2Int8Msg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::ROS2Int8Msg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Int8Msg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Int8Msg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Int8Msg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSInt8,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2Int8Msg Function GetMsg ***********************************************

// ********** Begin Class UROS2Int8Msg Function SetMsg *********************************************
struct Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics
{
	struct ROS2Int8Msg_eventSetMsg_Parms
	{
		FROSInt8 Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Int8Msg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSInt8, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1947789423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Int8Msg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::ROS2Int8Msg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::ROS2Int8Msg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Int8Msg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Int8Msg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Int8Msg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSInt8,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2Int8Msg Function SetMsg ***********************************************

// ********** Begin Class UROS2Int8Msg *************************************************************
void UROS2Int8Msg::StaticRegisterNativesUROS2Int8Msg()
{
	UClass* Class = UROS2Int8Msg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2Int8Msg::execGetMsg },
		{ "SetMsg", &UROS2Int8Msg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Int8Msg;
UClass* UROS2Int8Msg::GetPrivateStaticClass()
{
	using TClass = UROS2Int8Msg;
	if (!Z_Registration_Info_UClass_UROS2Int8Msg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Int8Msg"),
			Z_Registration_Info_UClass_UROS2Int8Msg.InnerSingleton,
			StaticRegisterNativesUROS2Int8Msg,
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
	return Z_Registration_Info_UClass_UROS2Int8Msg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Int8Msg_NoRegister()
{
	return UROS2Int8Msg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Int8Msg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Int8.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int8.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Int8Msg_GetMsg, "GetMsg" }, // 2481198532
		{ &Z_Construct_UFunction_UROS2Int8Msg_SetMsg, "SetMsg" }, // 2577240139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Int8Msg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2Int8Msg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Int8Msg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Int8Msg_Statics::ClassParams = {
	&UROS2Int8Msg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Int8Msg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Int8Msg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Int8Msg()
{
	if (!Z_Registration_Info_UClass_UROS2Int8Msg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Int8Msg.OuterSingleton, Z_Construct_UClass_UROS2Int8Msg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Int8Msg.OuterSingleton;
}
UROS2Int8Msg::UROS2Int8Msg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Int8Msg);
UROS2Int8Msg::~UROS2Int8Msg() {}
// ********** End Class UROS2Int8Msg ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSInt8::StaticStruct, Z_Construct_UScriptStruct_FROSInt8_Statics::NewStructOps, TEXT("ROSInt8"), &Z_Registration_Info_UScriptStruct_FROSInt8, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSInt8), 1947789423U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Int8Msg, UROS2Int8Msg::StaticClass, TEXT("UROS2Int8Msg"), &Z_Registration_Info_UClass_UROS2Int8Msg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Int8Msg), 1926319659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8_h__Script_rclUE_149693221(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
