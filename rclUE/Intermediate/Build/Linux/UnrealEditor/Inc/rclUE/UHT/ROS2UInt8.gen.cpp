// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2UInt8.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2UInt8() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2UInt8Msg();
RCLUE_API UClass* Z_Construct_UClass_UROS2UInt8Msg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSUInt8();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSUInt8 *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSUInt8;
class UScriptStruct* FROSUInt8::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUInt8.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSUInt8.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSUInt8, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSUInt8"));
	}
	return Z_Registration_Info_UScriptStruct_FROSUInt8.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSUInt8_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt8.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSUInt8" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt8.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSUInt8>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSUInt8_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSUInt8, Data), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSUInt8_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUInt8_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt8_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSUInt8_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSUInt8",
	Z_Construct_UScriptStruct_FROSUInt8_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt8_Statics::PropPointers),
	sizeof(FROSUInt8),
	alignof(FROSUInt8),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUInt8_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSUInt8_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSUInt8()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUInt8.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSUInt8.InnerSingleton, Z_Construct_UScriptStruct_FROSUInt8_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSUInt8.InnerSingleton;
}
// ********** End ScriptStruct FROSUInt8 ***********************************************************

// ********** Begin Class UROS2UInt8Msg Function GetMsg ********************************************
struct Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics
{
	struct ROS2UInt8Msg_eventGetMsg_Parms
	{
		FROSUInt8 Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt8.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UInt8Msg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSUInt8, METADATA_PARAMS(0, nullptr) }; // 2591839068
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UInt8Msg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::ROS2UInt8Msg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::ROS2UInt8Msg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UInt8Msg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UInt8Msg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UInt8Msg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSUInt8,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2UInt8Msg Function GetMsg **********************************************

// ********** Begin Class UROS2UInt8Msg Function SetMsg ********************************************
struct Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics
{
	struct ROS2UInt8Msg_eventSetMsg_Parms
	{
		FROSUInt8 Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt8.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UInt8Msg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSUInt8, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2591839068
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UInt8Msg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::ROS2UInt8Msg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::ROS2UInt8Msg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UInt8Msg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UInt8Msg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UInt8Msg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSUInt8,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2UInt8Msg Function SetMsg **********************************************

// ********** Begin Class UROS2UInt8Msg ************************************************************
void UROS2UInt8Msg::StaticRegisterNativesUROS2UInt8Msg()
{
	UClass* Class = UROS2UInt8Msg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2UInt8Msg::execGetMsg },
		{ "SetMsg", &UROS2UInt8Msg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2UInt8Msg;
UClass* UROS2UInt8Msg::GetPrivateStaticClass()
{
	using TClass = UROS2UInt8Msg;
	if (!Z_Registration_Info_UClass_UROS2UInt8Msg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2UInt8Msg"),
			Z_Registration_Info_UClass_UROS2UInt8Msg.InnerSingleton,
			StaticRegisterNativesUROS2UInt8Msg,
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
	return Z_Registration_Info_UClass_UROS2UInt8Msg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2UInt8Msg_NoRegister()
{
	return UROS2UInt8Msg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2UInt8Msg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2UInt8.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UInt8.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2UInt8Msg_GetMsg, "GetMsg" }, // 3363653514
		{ &Z_Construct_UFunction_UROS2UInt8Msg_SetMsg, "SetMsg" }, // 1900727163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2UInt8Msg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2UInt8Msg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UInt8Msg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2UInt8Msg_Statics::ClassParams = {
	&UROS2UInt8Msg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UInt8Msg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2UInt8Msg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2UInt8Msg()
{
	if (!Z_Registration_Info_UClass_UROS2UInt8Msg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2UInt8Msg.OuterSingleton, Z_Construct_UClass_UROS2UInt8Msg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2UInt8Msg.OuterSingleton;
}
UROS2UInt8Msg::UROS2UInt8Msg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2UInt8Msg);
UROS2UInt8Msg::~UROS2UInt8Msg() {}
// ********** End Class UROS2UInt8Msg **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSUInt8::StaticStruct, Z_Construct_UScriptStruct_FROSUInt8_Statics::NewStructOps, TEXT("ROSUInt8"), &Z_Registration_Info_UScriptStruct_FROSUInt8, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSUInt8), 2591839068U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2UInt8Msg, UROS2UInt8Msg::StaticClass, TEXT("UROS2UInt8Msg"), &Z_Registration_Info_UClass_UROS2UInt8Msg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2UInt8Msg), 3266971643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h__Script_rclUE_649420933(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt8_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
