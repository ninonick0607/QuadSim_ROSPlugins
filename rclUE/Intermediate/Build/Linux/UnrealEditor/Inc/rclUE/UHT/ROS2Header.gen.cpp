// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Time.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Header() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2HeaderMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2HeaderMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTime();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSHeader ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSHeader;
class UScriptStruct* FROSHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSHeader, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSHeader"));
	}
	return Z_Registration_Info_UScriptStruct_FROSHeader.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSHeader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Header.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamp_MetaData[] = {
		{ "Category", "ROSHeader" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Header.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameId_MetaData[] = {
		{ "Category", "ROSHeader" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Header.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FrameId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSHeader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSHeader_Statics::NewProp_Stamp = { "Stamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHeader, Stamp), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamp_MetaData), NewProp_Stamp_MetaData) }; // 3189130280
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSHeader_Statics::NewProp_FrameId = { "FrameId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHeader, FrameId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameId_MetaData), NewProp_FrameId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHeader_Statics::NewProp_Stamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHeader_Statics::NewProp_FrameId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSHeader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSHeader",
	Z_Construct_UScriptStruct_FROSHeader_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSHeader_Statics::PropPointers),
	sizeof(FROSHeader),
	alignof(FROSHeader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSHeader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSHeader()
{
	if (!Z_Registration_Info_UScriptStruct_FROSHeader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSHeader.InnerSingleton, Z_Construct_UScriptStruct_FROSHeader_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSHeader.InnerSingleton;
}
// ********** End ScriptStruct FROSHeader **********************************************************

// ********** Begin Class UROS2HeaderMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics
{
	struct ROS2HeaderMsg_eventGetMsg_Parms
	{
		FROSHeader Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Header.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2HeaderMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(0, nullptr) }; // 3543120155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2HeaderMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::ROS2HeaderMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::ROS2HeaderMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2HeaderMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2HeaderMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2HeaderMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSHeader,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2HeaderMsg Function GetMsg *********************************************

// ********** Begin Class UROS2HeaderMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics
{
	struct ROS2HeaderMsg_eventSetMsg_Parms
	{
		FROSHeader Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Header.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2HeaderMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3543120155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2HeaderMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::ROS2HeaderMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::ROS2HeaderMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2HeaderMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2HeaderMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2HeaderMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSHeader,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2HeaderMsg Function SetMsg *********************************************

// ********** Begin Class UROS2HeaderMsg ***********************************************************
void UROS2HeaderMsg::StaticRegisterNativesUROS2HeaderMsg()
{
	UClass* Class = UROS2HeaderMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2HeaderMsg::execGetMsg },
		{ "SetMsg", &UROS2HeaderMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2HeaderMsg;
UClass* UROS2HeaderMsg::GetPrivateStaticClass()
{
	using TClass = UROS2HeaderMsg;
	if (!Z_Registration_Info_UClass_UROS2HeaderMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2HeaderMsg"),
			Z_Registration_Info_UClass_UROS2HeaderMsg.InnerSingleton,
			StaticRegisterNativesUROS2HeaderMsg,
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
	return Z_Registration_Info_UClass_UROS2HeaderMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2HeaderMsg_NoRegister()
{
	return UROS2HeaderMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2HeaderMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Header.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Header.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2HeaderMsg_GetMsg, "GetMsg" }, // 1889615126
		{ &Z_Construct_UFunction_UROS2HeaderMsg_SetMsg, "SetMsg" }, // 12148930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2HeaderMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2HeaderMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2HeaderMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2HeaderMsg_Statics::ClassParams = {
	&UROS2HeaderMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2HeaderMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2HeaderMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2HeaderMsg()
{
	if (!Z_Registration_Info_UClass_UROS2HeaderMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2HeaderMsg.OuterSingleton, Z_Construct_UClass_UROS2HeaderMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2HeaderMsg.OuterSingleton;
}
UROS2HeaderMsg::UROS2HeaderMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2HeaderMsg);
UROS2HeaderMsg::~UROS2HeaderMsg() {}
// ********** End Class UROS2HeaderMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Header_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSHeader::StaticStruct, Z_Construct_UScriptStruct_FROSHeader_Statics::NewStructOps, TEXT("ROSHeader"), &Z_Registration_Info_UScriptStruct_FROSHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSHeader), 3543120155U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2HeaderMsg, UROS2HeaderMsg::StaticClass, TEXT("UROS2HeaderMsg"), &Z_Registration_Info_UClass_UROS2HeaderMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2HeaderMsg), 2202792364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Header_h__Script_rclUE_1181266305(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Header_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Header_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Header_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Header_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
