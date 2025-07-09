// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PoseCovStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2PoseCov.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PoseCovStamped() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PoseCovStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PoseCovStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoseCov();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoseCovStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPoseCovStamped ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPoseCovStamped;
class UScriptStruct* FROSPoseCovStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPoseCovStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPoseCovStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPoseCovStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPoseCovStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPoseCovStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCovStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPoseCovStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCovStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSPoseCovStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCovStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPoseCovStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoseCovStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPoseCovStamped, Pose), Z_Construct_UScriptStruct_FROSPoseCov, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 60953764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::NewProp_Pose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPoseCovStamped",
	Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::PropPointers),
	sizeof(FROSPoseCovStamped),
	alignof(FROSPoseCovStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPoseCovStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPoseCovStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPoseCovStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPoseCovStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSPoseCovStamped **************************************************

// ********** Begin Class UROS2PoseCovStampedMsg Function GetMsg ***********************************
struct Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics
{
	struct ROS2PoseCovStampedMsg_eventGetMsg_Parms
	{
		FROSPoseCovStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCovStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PoseCovStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPoseCovStamped, METADATA_PARAMS(0, nullptr) }; // 1210142651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PoseCovStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::ROS2PoseCovStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::ROS2PoseCovStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PoseCovStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPoseCovStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PoseCovStampedMsg Function GetMsg *************************************

// ********** Begin Class UROS2PoseCovStampedMsg Function SetMsg ***********************************
struct Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics
{
	struct ROS2PoseCovStampedMsg_eventSetMsg_Parms
	{
		FROSPoseCovStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCovStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PoseCovStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPoseCovStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1210142651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PoseCovStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::ROS2PoseCovStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::ROS2PoseCovStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PoseCovStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPoseCovStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PoseCovStampedMsg Function SetMsg *************************************

// ********** Begin Class UROS2PoseCovStampedMsg ***************************************************
void UROS2PoseCovStampedMsg::StaticRegisterNativesUROS2PoseCovStampedMsg()
{
	UClass* Class = UROS2PoseCovStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PoseCovStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2PoseCovStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PoseCovStampedMsg;
UClass* UROS2PoseCovStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PoseCovStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2PoseCovStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PoseCovStampedMsg"),
			Z_Registration_Info_UClass_UROS2PoseCovStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2PoseCovStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2PoseCovStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PoseCovStampedMsg_NoRegister()
{
	return UROS2PoseCovStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PoseCovStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PoseCovStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PoseCovStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PoseCovStampedMsg_GetMsg, "GetMsg" }, // 2610923115
		{ &Z_Construct_UFunction_UROS2PoseCovStampedMsg_SetMsg, "SetMsg" }, // 1741549160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PoseCovStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PoseCovStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PoseCovStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PoseCovStampedMsg_Statics::ClassParams = {
	&UROS2PoseCovStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PoseCovStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PoseCovStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PoseCovStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PoseCovStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PoseCovStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2PoseCovStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PoseCovStampedMsg.OuterSingleton;
}
UROS2PoseCovStampedMsg::UROS2PoseCovStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PoseCovStampedMsg);
UROS2PoseCovStampedMsg::~UROS2PoseCovStampedMsg() {}
// ********** End Class UROS2PoseCovStampedMsg *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCovStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPoseCovStamped::StaticStruct, Z_Construct_UScriptStruct_FROSPoseCovStamped_Statics::NewStructOps, TEXT("ROSPoseCovStamped"), &Z_Registration_Info_UScriptStruct_FROSPoseCovStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPoseCovStamped), 1210142651U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PoseCovStampedMsg, UROS2PoseCovStampedMsg::StaticClass, TEXT("UROS2PoseCovStampedMsg"), &Z_Registration_Info_UClass_UROS2PoseCovStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PoseCovStampedMsg), 1050383930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCovStamped_h__Script_rclUE_1523859341(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCovStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCovStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCovStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PoseCovStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
