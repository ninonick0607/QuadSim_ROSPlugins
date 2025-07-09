// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2QuatStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2QuatStamped() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2QuatStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2QuatStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSQuatStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSQuatStamped ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSQuatStamped;
class UScriptStruct* FROSQuatStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSQuatStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSQuatStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSQuatStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSQuatStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSQuatStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSQuatStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2QuatStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSQuatStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2QuatStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[] = {
		{ "Category", "ROSQuatStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2QuatStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSQuatStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSQuatStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSQuatStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSQuatStamped_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSQuatStamped, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quaternion_MetaData), NewProp_Quaternion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSQuatStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSQuatStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSQuatStamped_Statics::NewProp_Quaternion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSQuatStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSQuatStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSQuatStamped",
	Z_Construct_UScriptStruct_FROSQuatStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSQuatStamped_Statics::PropPointers),
	sizeof(FROSQuatStamped),
	alignof(FROSQuatStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSQuatStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSQuatStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSQuatStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSQuatStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSQuatStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSQuatStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSQuatStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSQuatStamped *****************************************************

// ********** Begin Class UROS2QuatStampedMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics
{
	struct ROS2QuatStampedMsg_eventGetMsg_Parms
	{
		FROSQuatStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2QuatStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2QuatStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSQuatStamped, METADATA_PARAMS(0, nullptr) }; // 1982499808
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2QuatStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::ROS2QuatStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::ROS2QuatStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2QuatStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSQuatStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2QuatStampedMsg Function GetMsg ****************************************

// ********** Begin Class UROS2QuatStampedMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics
{
	struct ROS2QuatStampedMsg_eventSetMsg_Parms
	{
		FROSQuatStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2QuatStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2QuatStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSQuatStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1982499808
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2QuatStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::ROS2QuatStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::ROS2QuatStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2QuatStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSQuatStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2QuatStampedMsg Function SetMsg ****************************************

// ********** Begin Class UROS2QuatStampedMsg ******************************************************
void UROS2QuatStampedMsg::StaticRegisterNativesUROS2QuatStampedMsg()
{
	UClass* Class = UROS2QuatStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2QuatStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2QuatStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2QuatStampedMsg;
UClass* UROS2QuatStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2QuatStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2QuatStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2QuatStampedMsg"),
			Z_Registration_Info_UClass_UROS2QuatStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2QuatStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2QuatStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2QuatStampedMsg_NoRegister()
{
	return UROS2QuatStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2QuatStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2QuatStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2QuatStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2QuatStampedMsg_GetMsg, "GetMsg" }, // 1863720566
		{ &Z_Construct_UFunction_UROS2QuatStampedMsg_SetMsg, "SetMsg" }, // 12493674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2QuatStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2QuatStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2QuatStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2QuatStampedMsg_Statics::ClassParams = {
	&UROS2QuatStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2QuatStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2QuatStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2QuatStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2QuatStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2QuatStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2QuatStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2QuatStampedMsg.OuterSingleton;
}
UROS2QuatStampedMsg::UROS2QuatStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2QuatStampedMsg);
UROS2QuatStampedMsg::~UROS2QuatStampedMsg() {}
// ********** End Class UROS2QuatStampedMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2QuatStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSQuatStamped::StaticStruct, Z_Construct_UScriptStruct_FROSQuatStamped_Statics::NewStructOps, TEXT("ROSQuatStamped"), &Z_Registration_Info_UScriptStruct_FROSQuatStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSQuatStamped), 1982499808U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2QuatStampedMsg, UROS2QuatStampedMsg::StaticClass, TEXT("UROS2QuatStampedMsg"), &Z_Registration_Info_UClass_UROS2QuatStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2QuatStampedMsg), 1772456318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2QuatStamped_h__Script_rclUE_2551103382(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2QuatStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2QuatStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2QuatStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2QuatStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
