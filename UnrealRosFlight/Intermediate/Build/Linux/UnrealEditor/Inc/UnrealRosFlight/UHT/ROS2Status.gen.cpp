// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2Status.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Status() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2StatusMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2StatusMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSStatus();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSStatus ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSStatus;
class UScriptStruct* FROSStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSStatus, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSStatus"));
	}
	return Z_Registration_Info_UScriptStruct_FROSStatus.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bArmed_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFailsafe_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRcOverride_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOffboard_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlMode_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumErrors_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopTimeUs_MetaData[] = {
		{ "Category", "ROSStatus" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static void NewProp_bArmed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bArmed;
	static void NewProp_bFailsafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailsafe;
	static void NewProp_bRcOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRcOverride;
	static void NewProp_bOffboard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControlMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_NumErrors;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_LoopTimeUs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSStatus, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
void Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bArmed_SetBit(void* Obj)
{
	((FROSStatus*)Obj)->bArmed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bArmed = { "bArmed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSStatus), &Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bArmed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bArmed_MetaData), NewProp_bArmed_MetaData) };
void Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bFailsafe_SetBit(void* Obj)
{
	((FROSStatus*)Obj)->bFailsafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bFailsafe = { "bFailsafe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSStatus), &Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bFailsafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFailsafe_MetaData), NewProp_bFailsafe_MetaData) };
void Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bRcOverride_SetBit(void* Obj)
{
	((FROSStatus*)Obj)->bRcOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bRcOverride = { "bRcOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSStatus), &Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bRcOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRcOverride_MetaData), NewProp_bRcOverride_MetaData) };
void Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bOffboard_SetBit(void* Obj)
{
	((FROSStatus*)Obj)->bOffboard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bOffboard = { "bOffboard", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSStatus), &Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bOffboard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOffboard_MetaData), NewProp_bOffboard_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_ControlMode = { "ControlMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSStatus, ControlMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlMode_MetaData), NewProp_ControlMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSStatus, ErrorCode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorCode_MetaData), NewProp_ErrorCode_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_NumErrors = { "NumErrors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSStatus, NumErrors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumErrors_MetaData), NewProp_NumErrors_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_LoopTimeUs = { "LoopTimeUs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSStatus, LoopTimeUs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopTimeUs_MetaData), NewProp_LoopTimeUs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bArmed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bFailsafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bRcOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_bOffboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_ControlMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_ErrorCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_NumErrors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStatus_Statics::NewProp_LoopTimeUs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSStatus",
	Z_Construct_UScriptStruct_FROSStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStatus_Statics::PropPointers),
	sizeof(FROSStatus),
	alignof(FROSStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSStatus()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSStatus.InnerSingleton, Z_Construct_UScriptStruct_FROSStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSStatus.InnerSingleton;
}
// ********** End ScriptStruct FROSStatus **********************************************************

// ********** Begin Class UROS2StatusMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics
{
	struct ROS2StatusMsg_eventGetMsg_Parms
	{
		FROSStatus Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StatusMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSStatus, METADATA_PARAMS(0, nullptr) }; // 2351162006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StatusMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::ROS2StatusMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::ROS2StatusMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StatusMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StatusMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StatusMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSStatus,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2StatusMsg Function GetMsg *********************************************

// ********** Begin Class UROS2StatusMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics
{
	struct ROS2StatusMsg_eventSetMsg_Parms
	{
		FROSStatus Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StatusMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2351162006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StatusMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::ROS2StatusMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::ROS2StatusMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StatusMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StatusMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StatusMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSStatus,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2StatusMsg Function SetMsg *********************************************

// ********** Begin Class UROS2StatusMsg ***********************************************************
void UROS2StatusMsg::StaticRegisterNativesUROS2StatusMsg()
{
	UClass* Class = UROS2StatusMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2StatusMsg::execGetMsg },
		{ "SetMsg", &UROS2StatusMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2StatusMsg;
UClass* UROS2StatusMsg::GetPrivateStaticClass()
{
	using TClass = UROS2StatusMsg;
	if (!Z_Registration_Info_UClass_UROS2StatusMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2StatusMsg"),
			Z_Registration_Info_UClass_UROS2StatusMsg.InnerSingleton,
			StaticRegisterNativesUROS2StatusMsg,
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
	return Z_Registration_Info_UClass_UROS2StatusMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2StatusMsg_NoRegister()
{
	return UROS2StatusMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2StatusMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Status.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Status.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2StatusMsg_GetMsg, "GetMsg" }, // 81199414
		{ &Z_Construct_UFunction_UROS2StatusMsg_SetMsg, "SetMsg" }, // 2663765007
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2StatusMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2StatusMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2StatusMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2StatusMsg_Statics::ClassParams = {
	&UROS2StatusMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2StatusMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2StatusMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2StatusMsg()
{
	if (!Z_Registration_Info_UClass_UROS2StatusMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2StatusMsg.OuterSingleton, Z_Construct_UClass_UROS2StatusMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2StatusMsg.OuterSingleton;
}
UROS2StatusMsg::UROS2StatusMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2StatusMsg);
UROS2StatusMsg::~UROS2StatusMsg() {}
// ********** End Class UROS2StatusMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Status_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSStatus::StaticStruct, Z_Construct_UScriptStruct_FROSStatus_Statics::NewStructOps, TEXT("ROSStatus"), &Z_Registration_Info_UScriptStruct_FROSStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSStatus), 2351162006U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2StatusMsg, UROS2StatusMsg::StaticClass, TEXT("UROS2StatusMsg"), &Z_Registration_Info_UClass_UROS2StatusMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2StatusMsg), 1963826169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Status_h__Script_UnrealRosFlight_836377566(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Status_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Status_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Status_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Status_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
