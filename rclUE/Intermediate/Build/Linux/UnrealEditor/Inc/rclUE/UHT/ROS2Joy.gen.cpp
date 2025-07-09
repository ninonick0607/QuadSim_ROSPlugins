// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Joy.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Joy() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2JoyMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2JoyMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSJoy();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSJoy ***********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSJoy;
class UScriptStruct* FROSJoy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSJoy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSJoy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSJoy, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSJoy"));
	}
	return Z_Registration_Info_UScriptStruct_FROSJoy.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSJoy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Joy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSJoy" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Joy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[] = {
		{ "Category", "ROSJoy" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Joy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[] = {
		{ "Category", "ROSJoy" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Joy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Axes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Axes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Buttons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buttons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSJoy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJoy, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Axes_Inner = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJoy, Axes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axes_MetaData), NewProp_Axes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Buttons_Inner = { "Buttons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSJoy, Buttons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buttons_MetaData), NewProp_Buttons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSJoy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Axes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Axes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Buttons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSJoy_Statics::NewProp_Buttons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJoy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSJoy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSJoy",
	Z_Construct_UScriptStruct_FROSJoy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJoy_Statics::PropPointers),
	sizeof(FROSJoy),
	alignof(FROSJoy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSJoy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSJoy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSJoy()
{
	if (!Z_Registration_Info_UScriptStruct_FROSJoy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSJoy.InnerSingleton, Z_Construct_UScriptStruct_FROSJoy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSJoy.InnerSingleton;
}
// ********** End ScriptStruct FROSJoy *************************************************************

// ********** Begin Class UROS2JoyMsg Function GetMsg **********************************************
struct Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics
{
	struct ROS2JoyMsg_eventGetMsg_Parms
	{
		FROSJoy Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Joy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JoyMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSJoy, METADATA_PARAMS(0, nullptr) }; // 3282069161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JoyMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::ROS2JoyMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::ROS2JoyMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JoyMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JoyMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JoyMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSJoy,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2JoyMsg Function GetMsg ************************************************

// ********** Begin Class UROS2JoyMsg Function SetMsg **********************************************
struct Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics
{
	struct ROS2JoyMsg_eventSetMsg_Parms
	{
		FROSJoy Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Joy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2JoyMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSJoy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3282069161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2JoyMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::ROS2JoyMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::ROS2JoyMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2JoyMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2JoyMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2JoyMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSJoy,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2JoyMsg Function SetMsg ************************************************

// ********** Begin Class UROS2JoyMsg **************************************************************
void UROS2JoyMsg::StaticRegisterNativesUROS2JoyMsg()
{
	UClass* Class = UROS2JoyMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2JoyMsg::execGetMsg },
		{ "SetMsg", &UROS2JoyMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2JoyMsg;
UClass* UROS2JoyMsg::GetPrivateStaticClass()
{
	using TClass = UROS2JoyMsg;
	if (!Z_Registration_Info_UClass_UROS2JoyMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2JoyMsg"),
			Z_Registration_Info_UClass_UROS2JoyMsg.InnerSingleton,
			StaticRegisterNativesUROS2JoyMsg,
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
	return Z_Registration_Info_UClass_UROS2JoyMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2JoyMsg_NoRegister()
{
	return UROS2JoyMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2JoyMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Joy.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Joy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2JoyMsg_GetMsg, "GetMsg" }, // 3636553170
		{ &Z_Construct_UFunction_UROS2JoyMsg_SetMsg, "SetMsg" }, // 3909899292
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2JoyMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2JoyMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2JoyMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2JoyMsg_Statics::ClassParams = {
	&UROS2JoyMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2JoyMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2JoyMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2JoyMsg()
{
	if (!Z_Registration_Info_UClass_UROS2JoyMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2JoyMsg.OuterSingleton, Z_Construct_UClass_UROS2JoyMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2JoyMsg.OuterSingleton;
}
UROS2JoyMsg::UROS2JoyMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2JoyMsg);
UROS2JoyMsg::~UROS2JoyMsg() {}
// ********** End Class UROS2JoyMsg ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Joy_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSJoy::StaticStruct, Z_Construct_UScriptStruct_FROSJoy_Statics::NewStructOps, TEXT("ROSJoy"), &Z_Registration_Info_UScriptStruct_FROSJoy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSJoy), 3282069161U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2JoyMsg, UROS2JoyMsg::StaticClass, TEXT("UROS2JoyMsg"), &Z_Registration_Info_UClass_UROS2JoyMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2JoyMsg), 1982952590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Joy_h__Script_rclUE_2646795253(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Joy_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Joy_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Joy_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Joy_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
