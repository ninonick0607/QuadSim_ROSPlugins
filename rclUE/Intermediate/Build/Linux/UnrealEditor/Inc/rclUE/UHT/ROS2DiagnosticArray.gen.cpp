// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2DiagnosticArray.h"
#include "rclUE/Public/Msgs/ROS2DiagnosticStatus.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2DiagnosticArray() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2DiagnosticArrayMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2DiagnosticArrayMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDiagnosticArray();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDiagnosticStatus();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSDiagnosticArray ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSDiagnosticArray;
class UScriptStruct* FROSDiagnosticArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDiagnosticArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSDiagnosticArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSDiagnosticArray, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSDiagnosticArray"));
	}
	return Z_Registration_Info_UScriptStruct_FROSDiagnosticArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSDiagnosticArray" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "ROSDiagnosticArray" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Status_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSDiagnosticArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDiagnosticArray, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::NewProp_Status_Inner = { "Status", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSDiagnosticStatus, METADATA_PARAMS(0, nullptr) }; // 2497086417
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDiagnosticArray, Status), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 2497086417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::NewProp_Status_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSDiagnosticArray",
	Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::PropPointers),
	sizeof(FROSDiagnosticArray),
	alignof(FROSDiagnosticArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSDiagnosticArray()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDiagnosticArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSDiagnosticArray.InnerSingleton, Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSDiagnosticArray.InnerSingleton;
}
// ********** End ScriptStruct FROSDiagnosticArray *************************************************

// ********** Begin Class UROS2DiagnosticArrayMsg Function GetMsg **********************************
struct Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics
{
	struct ROS2DiagnosticArrayMsg_eventGetMsg_Parms
	{
		FROSDiagnosticArray Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DiagnosticArrayMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSDiagnosticArray, METADATA_PARAMS(0, nullptr) }; // 537574964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DiagnosticArrayMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::ROS2DiagnosticArrayMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::ROS2DiagnosticArrayMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DiagnosticArrayMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSDiagnosticArray,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2DiagnosticArrayMsg Function GetMsg ************************************

// ********** Begin Class UROS2DiagnosticArrayMsg Function SetMsg **********************************
struct Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics
{
	struct ROS2DiagnosticArrayMsg_eventSetMsg_Parms
	{
		FROSDiagnosticArray Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DiagnosticArrayMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSDiagnosticArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 537574964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DiagnosticArrayMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::ROS2DiagnosticArrayMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::ROS2DiagnosticArrayMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DiagnosticArrayMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSDiagnosticArray,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2DiagnosticArrayMsg Function SetMsg ************************************

// ********** Begin Class UROS2DiagnosticArrayMsg **************************************************
void UROS2DiagnosticArrayMsg::StaticRegisterNativesUROS2DiagnosticArrayMsg()
{
	UClass* Class = UROS2DiagnosticArrayMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2DiagnosticArrayMsg::execGetMsg },
		{ "SetMsg", &UROS2DiagnosticArrayMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2DiagnosticArrayMsg;
UClass* UROS2DiagnosticArrayMsg::GetPrivateStaticClass()
{
	using TClass = UROS2DiagnosticArrayMsg;
	if (!Z_Registration_Info_UClass_UROS2DiagnosticArrayMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2DiagnosticArrayMsg"),
			Z_Registration_Info_UClass_UROS2DiagnosticArrayMsg.InnerSingleton,
			StaticRegisterNativesUROS2DiagnosticArrayMsg,
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
	return Z_Registration_Info_UClass_UROS2DiagnosticArrayMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2DiagnosticArrayMsg_NoRegister()
{
	return UROS2DiagnosticArrayMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2DiagnosticArrayMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2DiagnosticArray.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DiagnosticArray.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2DiagnosticArrayMsg_GetMsg, "GetMsg" }, // 1568901334
		{ &Z_Construct_UFunction_UROS2DiagnosticArrayMsg_SetMsg, "SetMsg" }, // 1489707837
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2DiagnosticArrayMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2DiagnosticArrayMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DiagnosticArrayMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2DiagnosticArrayMsg_Statics::ClassParams = {
	&UROS2DiagnosticArrayMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DiagnosticArrayMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2DiagnosticArrayMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2DiagnosticArrayMsg()
{
	if (!Z_Registration_Info_UClass_UROS2DiagnosticArrayMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2DiagnosticArrayMsg.OuterSingleton, Z_Construct_UClass_UROS2DiagnosticArrayMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2DiagnosticArrayMsg.OuterSingleton;
}
UROS2DiagnosticArrayMsg::UROS2DiagnosticArrayMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2DiagnosticArrayMsg);
UROS2DiagnosticArrayMsg::~UROS2DiagnosticArrayMsg() {}
// ********** End Class UROS2DiagnosticArrayMsg ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSDiagnosticArray::StaticStruct, Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics::NewStructOps, TEXT("ROSDiagnosticArray"), &Z_Registration_Info_UScriptStruct_FROSDiagnosticArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSDiagnosticArray), 537574964U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2DiagnosticArrayMsg, UROS2DiagnosticArrayMsg::StaticClass, TEXT("UROS2DiagnosticArrayMsg"), &Z_Registration_Info_UClass_UROS2DiagnosticArrayMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2DiagnosticArrayMsg), 3034750777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h__Script_rclUE_2510443717(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
