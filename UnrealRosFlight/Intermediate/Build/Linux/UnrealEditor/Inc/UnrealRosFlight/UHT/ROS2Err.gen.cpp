// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2Err.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Err() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ErrMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ErrMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSErr();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSErr ***********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSErr;
class UScriptStruct* FROSErr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSErr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSErr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSErr, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSErr"));
	}
	return Z_Registration_Info_UScriptStruct_FROSErr.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSErr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSErr" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "ROSErr" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[] = {
		{ "Category", "ROSErr" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetCount_MetaData[] = {
		{ "Category", "ROSErr" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRearm_MetaData[] = {
		{ "Category", "ROSErr" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pc_MetaData[] = {
		{ "Category", "ROSErr" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ResetCount;
	static void NewProp_bRearm_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRearm;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Pc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSErr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSErr, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSErr, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSErr, ErrorCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorCode_MetaData), NewProp_ErrorCode_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_ResetCount = { "ResetCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSErr, ResetCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetCount_MetaData), NewProp_ResetCount_MetaData) };
void Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_bRearm_SetBit(void* Obj)
{
	((FROSErr*)Obj)->bRearm = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_bRearm = { "bRearm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSErr), &Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_bRearm_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRearm_MetaData), NewProp_bRearm_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_Pc = { "Pc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSErr, Pc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pc_MetaData), NewProp_Pc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSErr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_ErrorCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_ResetCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_bRearm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSErr_Statics::NewProp_Pc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSErr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSErr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSErr",
	Z_Construct_UScriptStruct_FROSErr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSErr_Statics::PropPointers),
	sizeof(FROSErr),
	alignof(FROSErr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSErr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSErr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSErr()
{
	if (!Z_Registration_Info_UScriptStruct_FROSErr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSErr.InnerSingleton, Z_Construct_UScriptStruct_FROSErr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSErr.InnerSingleton;
}
// ********** End ScriptStruct FROSErr *************************************************************

// ********** Begin Class UROS2ErrMsg Function GetMsg **********************************************
struct Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics
{
	struct ROS2ErrMsg_eventGetMsg_Parms
	{
		FROSErr Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ErrMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSErr, METADATA_PARAMS(0, nullptr) }; // 2435423082
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ErrMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::ROS2ErrMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::ROS2ErrMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ErrMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ErrMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ErrMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSErr,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2ErrMsg Function GetMsg ************************************************

// ********** Begin Class UROS2ErrMsg Function SetMsg **********************************************
struct Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics
{
	struct ROS2ErrMsg_eventSetMsg_Parms
	{
		FROSErr Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ErrMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSErr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2435423082
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ErrMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::ROS2ErrMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::ROS2ErrMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ErrMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ErrMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ErrMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSErr,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2ErrMsg Function SetMsg ************************************************

// ********** Begin Class UROS2ErrMsg **************************************************************
void UROS2ErrMsg::StaticRegisterNativesUROS2ErrMsg()
{
	UClass* Class = UROS2ErrMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2ErrMsg::execGetMsg },
		{ "SetMsg", &UROS2ErrMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ErrMsg;
UClass* UROS2ErrMsg::GetPrivateStaticClass()
{
	using TClass = UROS2ErrMsg;
	if (!Z_Registration_Info_UClass_UROS2ErrMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ErrMsg"),
			Z_Registration_Info_UClass_UROS2ErrMsg.InnerSingleton,
			StaticRegisterNativesUROS2ErrMsg,
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
	return Z_Registration_Info_UClass_UROS2ErrMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ErrMsg_NoRegister()
{
	return UROS2ErrMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ErrMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Err.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Err.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ErrMsg_GetMsg, "GetMsg" }, // 302463578
		{ &Z_Construct_UFunction_UROS2ErrMsg_SetMsg, "SetMsg" }, // 2702953278
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ErrMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ErrMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ErrMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ErrMsg_Statics::ClassParams = {
	&UROS2ErrMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ErrMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ErrMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ErrMsg()
{
	if (!Z_Registration_Info_UClass_UROS2ErrMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ErrMsg.OuterSingleton, Z_Construct_UClass_UROS2ErrMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ErrMsg.OuterSingleton;
}
UROS2ErrMsg::UROS2ErrMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ErrMsg);
UROS2ErrMsg::~UROS2ErrMsg() {}
// ********** End Class UROS2ErrMsg ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Err_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSErr::StaticStruct, Z_Construct_UScriptStruct_FROSErr_Statics::NewStructOps, TEXT("ROSErr"), &Z_Registration_Info_UScriptStruct_FROSErr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSErr), 2435423082U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ErrMsg, UROS2ErrMsg::StaticClass, TEXT("UROS2ErrMsg"), &Z_Registration_Info_UClass_UROS2ErrMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ErrMsg), 2353483223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Err_h__Script_UnrealRosFlight_1035480465(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Err_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Err_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Err_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Err_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
