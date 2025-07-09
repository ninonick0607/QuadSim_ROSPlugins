// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Point32.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Point32() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Point32Msg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Point32Msg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoint32();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPoint32 *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPoint32;
class UScriptStruct* FROSPoint32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPoint32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPoint32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPoint32, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPoint32"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPoint32.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPoint32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Point32.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "ROSPoint32" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Point32.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "ROSPoint32" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Point32.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "ROSPoint32" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Point32.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPoint32>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSPoint32_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoint32, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSPoint32_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoint32, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSPoint32_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoint32, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPoint32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoint32_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoint32_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoint32_Statics::NewProp_Z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoint32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPoint32_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPoint32",
	Z_Construct_UScriptStruct_FROSPoint32_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoint32_Statics::PropPointers),
	sizeof(FROSPoint32),
	alignof(FROSPoint32),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoint32_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPoint32_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPoint32()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPoint32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPoint32.InnerSingleton, Z_Construct_UScriptStruct_FROSPoint32_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPoint32.InnerSingleton;
}
// ********** End ScriptStruct FROSPoint32 *********************************************************

// ********** Begin Class UROS2Point32Msg Function GetMsg ******************************************
struct Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics
{
	struct ROS2Point32Msg_eventGetMsg_Parms
	{
		FROSPoint32 Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Point32.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Point32Msg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPoint32, METADATA_PARAMS(0, nullptr) }; // 1868964832
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Point32Msg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::ROS2Point32Msg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::ROS2Point32Msg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Point32Msg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Point32Msg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Point32Msg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPoint32,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2Point32Msg Function GetMsg ********************************************

// ********** Begin Class UROS2Point32Msg Function SetMsg ******************************************
struct Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics
{
	struct ROS2Point32Msg_eventSetMsg_Parms
	{
		FROSPoint32 Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Point32.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Point32Msg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPoint32, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1868964832
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Point32Msg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::ROS2Point32Msg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::ROS2Point32Msg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Point32Msg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Point32Msg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Point32Msg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPoint32,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2Point32Msg Function SetMsg ********************************************

// ********** Begin Class UROS2Point32Msg **********************************************************
void UROS2Point32Msg::StaticRegisterNativesUROS2Point32Msg()
{
	UClass* Class = UROS2Point32Msg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2Point32Msg::execGetMsg },
		{ "SetMsg", &UROS2Point32Msg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Point32Msg;
UClass* UROS2Point32Msg::GetPrivateStaticClass()
{
	using TClass = UROS2Point32Msg;
	if (!Z_Registration_Info_UClass_UROS2Point32Msg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Point32Msg"),
			Z_Registration_Info_UClass_UROS2Point32Msg.InnerSingleton,
			StaticRegisterNativesUROS2Point32Msg,
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
	return Z_Registration_Info_UClass_UROS2Point32Msg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Point32Msg_NoRegister()
{
	return UROS2Point32Msg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Point32Msg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Point32.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Point32.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Point32Msg_GetMsg, "GetMsg" }, // 509337060
		{ &Z_Construct_UFunction_UROS2Point32Msg_SetMsg, "SetMsg" }, // 2909078980
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Point32Msg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2Point32Msg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Point32Msg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Point32Msg_Statics::ClassParams = {
	&UROS2Point32Msg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Point32Msg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Point32Msg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Point32Msg()
{
	if (!Z_Registration_Info_UClass_UROS2Point32Msg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Point32Msg.OuterSingleton, Z_Construct_UClass_UROS2Point32Msg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Point32Msg.OuterSingleton;
}
UROS2Point32Msg::UROS2Point32Msg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Point32Msg);
UROS2Point32Msg::~UROS2Point32Msg() {}
// ********** End Class UROS2Point32Msg ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPoint32::StaticStruct, Z_Construct_UScriptStruct_FROSPoint32_Statics::NewStructOps, TEXT("ROSPoint32"), &Z_Registration_Info_UScriptStruct_FROSPoint32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPoint32), 1868964832U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Point32Msg, UROS2Point32Msg::StaticClass, TEXT("UROS2Point32Msg"), &Z_Registration_Info_UClass_UROS2Point32Msg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Point32Msg), 273453711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h__Script_rclUE_3048059850(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Point32_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
