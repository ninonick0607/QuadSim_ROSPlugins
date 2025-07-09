// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2WrenchStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Wrench.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2WrenchStamped() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2WrenchStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2WrenchStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSWrench();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSWrenchStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSWrenchStamped *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSWrenchStamped;
class UScriptStruct* FROSWrenchStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSWrenchStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSWrenchStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSWrenchStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSWrenchStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSWrenchStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSWrenchStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2WrenchStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSWrenchStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2WrenchStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wrench_MetaData[] = {
		{ "Category", "ROSWrenchStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2WrenchStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wrench;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSWrenchStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSWrenchStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::NewProp_Wrench = { "Wrench", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSWrenchStamped, Wrench), Z_Construct_UScriptStruct_FROSWrench, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wrench_MetaData), NewProp_Wrench_MetaData) }; // 3360570850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::NewProp_Wrench,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSWrenchStamped",
	Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::PropPointers),
	sizeof(FROSWrenchStamped),
	alignof(FROSWrenchStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSWrenchStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSWrenchStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSWrenchStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSWrenchStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSWrenchStamped ***************************************************

// ********** Begin Class UROS2WrenchStampedMsg Function GetMsg ************************************
struct Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics
{
	struct ROS2WrenchStampedMsg_eventGetMsg_Parms
	{
		FROSWrenchStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2WrenchStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2WrenchStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSWrenchStamped, METADATA_PARAMS(0, nullptr) }; // 489671096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2WrenchStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::ROS2WrenchStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::ROS2WrenchStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2WrenchStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSWrenchStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2WrenchStampedMsg Function GetMsg **************************************

// ********** Begin Class UROS2WrenchStampedMsg Function SetMsg ************************************
struct Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics
{
	struct ROS2WrenchStampedMsg_eventSetMsg_Parms
	{
		FROSWrenchStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2WrenchStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2WrenchStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSWrenchStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 489671096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2WrenchStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::ROS2WrenchStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::ROS2WrenchStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2WrenchStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSWrenchStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2WrenchStampedMsg Function SetMsg **************************************

// ********** Begin Class UROS2WrenchStampedMsg ****************************************************
void UROS2WrenchStampedMsg::StaticRegisterNativesUROS2WrenchStampedMsg()
{
	UClass* Class = UROS2WrenchStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2WrenchStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2WrenchStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2WrenchStampedMsg;
UClass* UROS2WrenchStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2WrenchStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2WrenchStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2WrenchStampedMsg"),
			Z_Registration_Info_UClass_UROS2WrenchStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2WrenchStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2WrenchStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2WrenchStampedMsg_NoRegister()
{
	return UROS2WrenchStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2WrenchStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2WrenchStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2WrenchStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2WrenchStampedMsg_GetMsg, "GetMsg" }, // 209595605
		{ &Z_Construct_UFunction_UROS2WrenchStampedMsg_SetMsg, "SetMsg" }, // 2678743408
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2WrenchStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2WrenchStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2WrenchStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2WrenchStampedMsg_Statics::ClassParams = {
	&UROS2WrenchStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2WrenchStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2WrenchStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2WrenchStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2WrenchStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2WrenchStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2WrenchStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2WrenchStampedMsg.OuterSingleton;
}
UROS2WrenchStampedMsg::UROS2WrenchStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2WrenchStampedMsg);
UROS2WrenchStampedMsg::~UROS2WrenchStampedMsg() {}
// ********** End Class UROS2WrenchStampedMsg ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WrenchStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSWrenchStamped::StaticStruct, Z_Construct_UScriptStruct_FROSWrenchStamped_Statics::NewStructOps, TEXT("ROSWrenchStamped"), &Z_Registration_Info_UScriptStruct_FROSWrenchStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSWrenchStamped), 489671096U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2WrenchStampedMsg, UROS2WrenchStampedMsg::StaticClass, TEXT("UROS2WrenchStampedMsg"), &Z_Registration_Info_UClass_UROS2WrenchStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2WrenchStampedMsg), 270483067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WrenchStamped_h__Script_rclUE_2484053584(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WrenchStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WrenchStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WrenchStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2WrenchStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
