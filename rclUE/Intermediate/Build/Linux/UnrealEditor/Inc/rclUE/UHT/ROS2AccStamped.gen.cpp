// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2AccStamped.h"
#include "rclUE/Public/Msgs/ROS2Acc.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2AccStamped() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2AccStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2AccStampedMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAcc();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAccStamped();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAccStamped ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAccStamped;
class UScriptStruct* FROSAccStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAccStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAccStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAccStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAccStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAccStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAccStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSAccStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accel_MetaData[] = {
		{ "Category", "ROSAccStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Accel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAccStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAccStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAccStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAccStamped_Statics::NewProp_Accel = { "Accel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAccStamped, Accel), Z_Construct_UScriptStruct_FROSAcc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accel_MetaData), NewProp_Accel_MetaData) }; // 404115498
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAccStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAccStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAccStamped_Statics::NewProp_Accel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAccStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAccStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAccStamped",
	Z_Construct_UScriptStruct_FROSAccStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAccStamped_Statics::PropPointers),
	sizeof(FROSAccStamped),
	alignof(FROSAccStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAccStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAccStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAccStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAccStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAccStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSAccStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAccStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSAccStamped ******************************************************

// ********** Begin Class UROS2AccStampedMsg Function GetMsg ***************************************
struct Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics
{
	struct ROS2AccStampedMsg_eventGetMsg_Parms
	{
		FROSAccStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AccStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSAccStamped, METADATA_PARAMS(0, nullptr) }; // 966806351
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AccStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::ROS2AccStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::ROS2AccStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AccStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSAccStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2AccStampedMsg Function GetMsg *****************************************

// ********** Begin Class UROS2AccStampedMsg Function SetMsg ***************************************
struct Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics
{
	struct ROS2AccStampedMsg_eventSetMsg_Parms
	{
		FROSAccStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AccStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSAccStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 966806351
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AccStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::ROS2AccStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::ROS2AccStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AccStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSAccStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2AccStampedMsg Function SetMsg *****************************************

// ********** Begin Class UROS2AccStampedMsg *******************************************************
void UROS2AccStampedMsg::StaticRegisterNativesUROS2AccStampedMsg()
{
	UClass* Class = UROS2AccStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2AccStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2AccStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AccStampedMsg;
UClass* UROS2AccStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2AccStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2AccStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AccStampedMsg"),
			Z_Registration_Info_UClass_UROS2AccStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2AccStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2AccStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AccStampedMsg_NoRegister()
{
	return UROS2AccStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AccStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2AccStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2AccStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AccStampedMsg_GetMsg, "GetMsg" }, // 3259380736
		{ &Z_Construct_UFunction_UROS2AccStampedMsg_SetMsg, "SetMsg" }, // 2770156729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AccStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AccStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AccStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AccStampedMsg_Statics::ClassParams = {
	&UROS2AccStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AccStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AccStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AccStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2AccStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AccStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2AccStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AccStampedMsg.OuterSingleton;
}
UROS2AccStampedMsg::UROS2AccStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AccStampedMsg);
UROS2AccStampedMsg::~UROS2AccStampedMsg() {}
// ********** End Class UROS2AccStampedMsg *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAccStamped::StaticStruct, Z_Construct_UScriptStruct_FROSAccStamped_Statics::NewStructOps, TEXT("ROSAccStamped"), &Z_Registration_Info_UScriptStruct_FROSAccStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAccStamped), 966806351U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AccStampedMsg, UROS2AccStampedMsg::StaticClass, TEXT("UROS2AccStampedMsg"), &Z_Registration_Info_UClass_UROS2AccStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AccStampedMsg), 2471740150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h__Script_rclUE_3399381176(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2AccStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
