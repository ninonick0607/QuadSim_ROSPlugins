// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Int64.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Int64() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Int64Msg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Int64Msg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSInt64();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSInt64 *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSInt64;
class UScriptStruct* FROSInt64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInt64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSInt64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSInt64, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSInt64"));
	}
	return Z_Registration_Info_UScriptStruct_FROSInt64.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSInt64_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int64.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSInt64" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int64.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSInt64>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FROSInt64_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInt64, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInt64_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSInt64_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSInt64",
	Z_Construct_UScriptStruct_FROSInt64_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt64_Statics::PropPointers),
	sizeof(FROSInt64),
	alignof(FROSInt64),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInt64_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSInt64_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSInt64()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInt64.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSInt64.InnerSingleton, Z_Construct_UScriptStruct_FROSInt64_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSInt64.InnerSingleton;
}
// ********** End ScriptStruct FROSInt64 ***********************************************************

// ********** Begin Class UROS2Int64Msg Function GetMsg ********************************************
struct Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics
{
	struct ROS2Int64Msg_eventGetMsg_Parms
	{
		FROSInt64 Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int64.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Int64Msg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSInt64, METADATA_PARAMS(0, nullptr) }; // 3915248363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Int64Msg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::ROS2Int64Msg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::ROS2Int64Msg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Int64Msg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Int64Msg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Int64Msg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSInt64,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2Int64Msg Function GetMsg **********************************************

// ********** Begin Class UROS2Int64Msg Function SetMsg ********************************************
struct Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics
{
	struct ROS2Int64Msg_eventSetMsg_Parms
	{
		FROSInt64 Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int64.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Int64Msg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3915248363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Int64Msg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::ROS2Int64Msg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::ROS2Int64Msg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Int64Msg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Int64Msg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Int64Msg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSInt64,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2Int64Msg Function SetMsg **********************************************

// ********** Begin Class UROS2Int64Msg ************************************************************
void UROS2Int64Msg::StaticRegisterNativesUROS2Int64Msg()
{
	UClass* Class = UROS2Int64Msg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2Int64Msg::execGetMsg },
		{ "SetMsg", &UROS2Int64Msg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Int64Msg;
UClass* UROS2Int64Msg::GetPrivateStaticClass()
{
	using TClass = UROS2Int64Msg;
	if (!Z_Registration_Info_UClass_UROS2Int64Msg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Int64Msg"),
			Z_Registration_Info_UClass_UROS2Int64Msg.InnerSingleton,
			StaticRegisterNativesUROS2Int64Msg,
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
	return Z_Registration_Info_UClass_UROS2Int64Msg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Int64Msg_NoRegister()
{
	return UROS2Int64Msg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Int64Msg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Int64.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Int64.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Int64Msg_GetMsg, "GetMsg" }, // 864845933
		{ &Z_Construct_UFunction_UROS2Int64Msg_SetMsg, "SetMsg" }, // 441139592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Int64Msg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2Int64Msg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Int64Msg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Int64Msg_Statics::ClassParams = {
	&UROS2Int64Msg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Int64Msg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Int64Msg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Int64Msg()
{
	if (!Z_Registration_Info_UClass_UROS2Int64Msg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Int64Msg.OuterSingleton, Z_Construct_UClass_UROS2Int64Msg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Int64Msg.OuterSingleton;
}
UROS2Int64Msg::UROS2Int64Msg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Int64Msg);
UROS2Int64Msg::~UROS2Int64Msg() {}
// ********** End Class UROS2Int64Msg **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int64_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSInt64::StaticStruct, Z_Construct_UScriptStruct_FROSInt64_Statics::NewStructOps, TEXT("ROSInt64"), &Z_Registration_Info_UScriptStruct_FROSInt64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSInt64), 3915248363U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Int64Msg, UROS2Int64Msg::StaticClass, TEXT("UROS2Int64Msg"), &Z_Registration_Info_UClass_UROS2Int64Msg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Int64Msg), 1848147054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int64_h__Script_rclUE_3955401624(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int64_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int64_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int64_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int64_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
