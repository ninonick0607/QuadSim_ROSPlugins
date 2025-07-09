// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2InertiaStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Inertia.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2InertiaStamped() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2InertiaStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2InertiaStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSInertia();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSInertiaStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSInertiaStamped ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSInertiaStamped;
class UScriptStruct* FROSInertiaStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInertiaStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSInertiaStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSInertiaStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSInertiaStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSInertiaStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSInertiaStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2InertiaStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSInertiaStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2InertiaStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inertia_MetaData[] = {
		{ "Category", "ROSInertiaStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2InertiaStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inertia;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSInertiaStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertiaStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::NewProp_Inertia = { "Inertia", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertiaStamped, Inertia), Z_Construct_UScriptStruct_FROSInertia, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inertia_MetaData), NewProp_Inertia_MetaData) }; // 329516648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::NewProp_Inertia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSInertiaStamped",
	Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::PropPointers),
	sizeof(FROSInertiaStamped),
	alignof(FROSInertiaStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSInertiaStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInertiaStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSInertiaStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSInertiaStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSInertiaStamped **************************************************

// ********** Begin Class UROS2InertiaStampedMsg Function GetMsg ***********************************
struct Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics
{
	struct ROS2InertiaStampedMsg_eventGetMsg_Parms
	{
		FROSInertiaStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2InertiaStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2InertiaStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSInertiaStamped, METADATA_PARAMS(0, nullptr) }; // 501026974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2InertiaStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::ROS2InertiaStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::ROS2InertiaStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2InertiaStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSInertiaStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2InertiaStampedMsg Function GetMsg *************************************

// ********** Begin Class UROS2InertiaStampedMsg Function SetMsg ***********************************
struct Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics
{
	struct ROS2InertiaStampedMsg_eventSetMsg_Parms
	{
		FROSInertiaStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2InertiaStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2InertiaStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSInertiaStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 501026974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2InertiaStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::ROS2InertiaStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::ROS2InertiaStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2InertiaStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSInertiaStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2InertiaStampedMsg Function SetMsg *************************************

// ********** Begin Class UROS2InertiaStampedMsg ***************************************************
void UROS2InertiaStampedMsg::StaticRegisterNativesUROS2InertiaStampedMsg()
{
	UClass* Class = UROS2InertiaStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2InertiaStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2InertiaStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2InertiaStampedMsg;
UClass* UROS2InertiaStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2InertiaStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2InertiaStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2InertiaStampedMsg"),
			Z_Registration_Info_UClass_UROS2InertiaStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2InertiaStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2InertiaStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2InertiaStampedMsg_NoRegister()
{
	return UROS2InertiaStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2InertiaStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2InertiaStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2InertiaStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2InertiaStampedMsg_GetMsg, "GetMsg" }, // 3984006831
		{ &Z_Construct_UFunction_UROS2InertiaStampedMsg_SetMsg, "SetMsg" }, // 3995485288
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2InertiaStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2InertiaStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2InertiaStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2InertiaStampedMsg_Statics::ClassParams = {
	&UROS2InertiaStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2InertiaStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2InertiaStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2InertiaStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2InertiaStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2InertiaStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2InertiaStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2InertiaStampedMsg.OuterSingleton;
}
UROS2InertiaStampedMsg::UROS2InertiaStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2InertiaStampedMsg);
UROS2InertiaStampedMsg::~UROS2InertiaStampedMsg() {}
// ********** End Class UROS2InertiaStampedMsg *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2InertiaStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSInertiaStamped::StaticStruct, Z_Construct_UScriptStruct_FROSInertiaStamped_Statics::NewStructOps, TEXT("ROSInertiaStamped"), &Z_Registration_Info_UScriptStruct_FROSInertiaStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSInertiaStamped), 501026974U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2InertiaStampedMsg, UROS2InertiaStampedMsg::StaticClass, TEXT("UROS2InertiaStampedMsg"), &Z_Registration_Info_UClass_UROS2InertiaStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2InertiaStampedMsg), 1671859421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2InertiaStamped_h__Script_rclUE_4246460756(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2InertiaStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2InertiaStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2InertiaStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2InertiaStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
