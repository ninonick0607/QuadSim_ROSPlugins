// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2TFMsg.h"
#include "rclUE/Public/Msgs/ROS2TFStamped.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2TFMsg() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TFMsgMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TFMsgMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTFMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTFStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTFMsg *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTFMsg;
class UScriptStruct* FROSTFMsg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTFMsg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTFMsg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTFMsg, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTFMsg"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTFMsg.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTFMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFMsg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "ROSTFMsg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFMsg.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTFMsg>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTFMsg_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSTFStamped, METADATA_PARAMS(0, nullptr) }; // 1072931543
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSTFMsg_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTFMsg, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) }; // 1072931543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTFMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTFMsg_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTFMsg_Statics::NewProp_Transforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTFMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTFMsg_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTFMsg",
	Z_Construct_UScriptStruct_FROSTFMsg_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTFMsg_Statics::PropPointers),
	sizeof(FROSTFMsg),
	alignof(FROSTFMsg),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTFMsg_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTFMsg_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTFMsg()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTFMsg.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTFMsg.InnerSingleton, Z_Construct_UScriptStruct_FROSTFMsg_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTFMsg.InnerSingleton;
}
// ********** End ScriptStruct FROSTFMsg ***********************************************************

// ********** Begin Class UROS2TFMsgMsg Function GetMsg ********************************************
struct Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics
{
	struct ROS2TFMsgMsg_eventGetMsg_Parms
	{
		FROSTFMsg Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFMsg.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TFMsgMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTFMsg, METADATA_PARAMS(0, nullptr) }; // 3664300723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TFMsgMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::ROS2TFMsgMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::ROS2TFMsgMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TFMsgMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTFMsg,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TFMsgMsg Function GetMsg **********************************************

// ********** Begin Class UROS2TFMsgMsg Function SetMsg ********************************************
struct Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics
{
	struct ROS2TFMsgMsg_eventSetMsg_Parms
	{
		FROSTFMsg Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFMsg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TFMsgMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTFMsg, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3664300723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TFMsgMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::ROS2TFMsgMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::ROS2TFMsgMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TFMsgMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTFMsg,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TFMsgMsg Function SetMsg **********************************************

// ********** Begin Class UROS2TFMsgMsg ************************************************************
void UROS2TFMsgMsg::StaticRegisterNativesUROS2TFMsgMsg()
{
	UClass* Class = UROS2TFMsgMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2TFMsgMsg::execGetMsg },
		{ "SetMsg", &UROS2TFMsgMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TFMsgMsg;
UClass* UROS2TFMsgMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TFMsgMsg;
	if (!Z_Registration_Info_UClass_UROS2TFMsgMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TFMsgMsg"),
			Z_Registration_Info_UClass_UROS2TFMsgMsg.InnerSingleton,
			StaticRegisterNativesUROS2TFMsgMsg,
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
	return Z_Registration_Info_UClass_UROS2TFMsgMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TFMsgMsg_NoRegister()
{
	return UROS2TFMsgMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TFMsgMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2TFMsg.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFMsg.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TFMsgMsg_GetMsg, "GetMsg" }, // 2336008869
		{ &Z_Construct_UFunction_UROS2TFMsgMsg_SetMsg, "SetMsg" }, // 1813572625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TFMsgMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TFMsgMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TFMsgMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TFMsgMsg_Statics::ClassParams = {
	&UROS2TFMsgMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TFMsgMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TFMsgMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TFMsgMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TFMsgMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TFMsgMsg.OuterSingleton, Z_Construct_UClass_UROS2TFMsgMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TFMsgMsg.OuterSingleton;
}
UROS2TFMsgMsg::UROS2TFMsgMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TFMsgMsg);
UROS2TFMsgMsg::~UROS2TFMsgMsg() {}
// ********** End Class UROS2TFMsgMsg **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTFMsg::StaticStruct, Z_Construct_UScriptStruct_FROSTFMsg_Statics::NewStructOps, TEXT("ROSTFMsg"), &Z_Registration_Info_UScriptStruct_FROSTFMsg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTFMsg), 3664300723U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TFMsgMsg, UROS2TFMsgMsg::StaticClass, TEXT("UROS2TFMsgMsg"), &Z_Registration_Info_UClass_UROS2TFMsgMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TFMsgMsg), 1031328130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h__Script_rclUE_2950433101(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFMsg_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
