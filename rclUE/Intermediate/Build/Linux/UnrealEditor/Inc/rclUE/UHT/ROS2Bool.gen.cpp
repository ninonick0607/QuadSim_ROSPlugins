// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Bool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Bool() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2BoolMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2BoolMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSBool();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSBool **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSBool;
class UScriptStruct* FROSBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSBool, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSBool"));
	}
	return Z_Registration_Info_UScriptStruct_FROSBool.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Bool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bData_MetaData[] = {
		{ "Category", "ROSBool" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Bool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSBool_Statics::NewProp_bData_SetBit(void* Obj)
{
	((FROSBool*)Obj)->bData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSBool_Statics::NewProp_bData = { "bData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSBool), &Z_Construct_UScriptStruct_FROSBool_Statics::NewProp_bData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bData_MetaData), NewProp_bData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSBool_Statics::NewProp_bData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSBool",
	Z_Construct_UScriptStruct_FROSBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBool_Statics::PropPointers),
	sizeof(FROSBool),
	alignof(FROSBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSBool()
{
	if (!Z_Registration_Info_UScriptStruct_FROSBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSBool.InnerSingleton, Z_Construct_UScriptStruct_FROSBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSBool.InnerSingleton;
}
// ********** End ScriptStruct FROSBool ************************************************************

// ********** Begin Class UROS2BoolMsg Function GetMsg *********************************************
struct Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics
{
	struct ROS2BoolMsg_eventGetMsg_Parms
	{
		FROSBool Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Bool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BoolMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSBool, METADATA_PARAMS(0, nullptr) }; // 1289963263
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BoolMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::ROS2BoolMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::ROS2BoolMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BoolMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BoolMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BoolMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSBool,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2BoolMsg Function GetMsg ***********************************************

// ********** Begin Class UROS2BoolMsg Function SetMsg *********************************************
struct Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics
{
	struct ROS2BoolMsg_eventSetMsg_Parms
	{
		FROSBool Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Bool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2BoolMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1289963263
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2BoolMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::ROS2BoolMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::ROS2BoolMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2BoolMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2BoolMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2BoolMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSBool,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2BoolMsg Function SetMsg ***********************************************

// ********** Begin Class UROS2BoolMsg *************************************************************
void UROS2BoolMsg::StaticRegisterNativesUROS2BoolMsg()
{
	UClass* Class = UROS2BoolMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2BoolMsg::execGetMsg },
		{ "SetMsg", &UROS2BoolMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2BoolMsg;
UClass* UROS2BoolMsg::GetPrivateStaticClass()
{
	using TClass = UROS2BoolMsg;
	if (!Z_Registration_Info_UClass_UROS2BoolMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2BoolMsg"),
			Z_Registration_Info_UClass_UROS2BoolMsg.InnerSingleton,
			StaticRegisterNativesUROS2BoolMsg,
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
	return Z_Registration_Info_UClass_UROS2BoolMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2BoolMsg_NoRegister()
{
	return UROS2BoolMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2BoolMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Bool.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Bool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2BoolMsg_GetMsg, "GetMsg" }, // 1264960096
		{ &Z_Construct_UFunction_UROS2BoolMsg_SetMsg, "SetMsg" }, // 329164766
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2BoolMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2BoolMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2BoolMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2BoolMsg_Statics::ClassParams = {
	&UROS2BoolMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2BoolMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2BoolMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2BoolMsg()
{
	if (!Z_Registration_Info_UClass_UROS2BoolMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2BoolMsg.OuterSingleton, Z_Construct_UClass_UROS2BoolMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2BoolMsg.OuterSingleton;
}
UROS2BoolMsg::UROS2BoolMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2BoolMsg);
UROS2BoolMsg::~UROS2BoolMsg() {}
// ********** End Class UROS2BoolMsg ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Bool_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSBool::StaticStruct, Z_Construct_UScriptStruct_FROSBool_Statics::NewStructOps, TEXT("ROSBool"), &Z_Registration_Info_UScriptStruct_FROSBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSBool), 1289963263U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2BoolMsg, UROS2BoolMsg::StaticClass, TEXT("UROS2BoolMsg"), &Z_Registration_Info_UClass_UROS2BoolMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2BoolMsg), 1237123230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Bool_h__Script_rclUE_2500142774(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Bool_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Bool_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Bool_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Bool_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
