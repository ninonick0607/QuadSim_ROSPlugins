// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2GoalStatusArray.h"
#include "rclUE/Public/Msgs/ROS2GoalStatus.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GoalStatusArray() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GoalStatusArrayMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GoalStatusArrayMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGoalStatus();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGoalStatusArray();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGoalStatusArray ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGoalStatusArray;
class UScriptStruct* FROSGoalStatusArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGoalStatusArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGoalStatusArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGoalStatusArray, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGoalStatusArray"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGoalStatusArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatusArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSGoalStatusArray" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatusArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusList_MetaData[] = {
		{ "Category", "ROSGoalStatusArray" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatusArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatusList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatusList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGoalStatusArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalStatusArray, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::NewProp_StatusList_Inner = { "StatusList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSGoalStatus, METADATA_PARAMS(0, nullptr) }; // 2996246580
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::NewProp_StatusList = { "StatusList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGoalStatusArray, StatusList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusList_MetaData), NewProp_StatusList_MetaData) }; // 2996246580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::NewProp_StatusList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::NewProp_StatusList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGoalStatusArray",
	Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::PropPointers),
	sizeof(FROSGoalStatusArray),
	alignof(FROSGoalStatusArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGoalStatusArray()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGoalStatusArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGoalStatusArray.InnerSingleton, Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGoalStatusArray.InnerSingleton;
}
// ********** End ScriptStruct FROSGoalStatusArray *************************************************

// ********** Begin Class UROS2GoalStatusArrayMsg Function GetMsg **********************************
struct Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics
{
	struct ROS2GoalStatusArrayMsg_eventGetMsg_Parms
	{
		FROSGoalStatusArray Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatusArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusArrayMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSGoalStatusArray, METADATA_PARAMS(0, nullptr) }; // 682038075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusArrayMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::ROS2GoalStatusArrayMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::ROS2GoalStatusArrayMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusArrayMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSGoalStatusArray,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusArrayMsg Function GetMsg ************************************

// ********** Begin Class UROS2GoalStatusArrayMsg Function SetMsg **********************************
struct Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics
{
	struct ROS2GoalStatusArrayMsg_eventSetMsg_Parms
	{
		FROSGoalStatusArray Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatusArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GoalStatusArrayMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSGoalStatusArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 682038075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GoalStatusArrayMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::ROS2GoalStatusArrayMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::ROS2GoalStatusArrayMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GoalStatusArrayMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSGoalStatusArray,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2GoalStatusArrayMsg Function SetMsg ************************************

// ********** Begin Class UROS2GoalStatusArrayMsg **************************************************
void UROS2GoalStatusArrayMsg::StaticRegisterNativesUROS2GoalStatusArrayMsg()
{
	UClass* Class = UROS2GoalStatusArrayMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2GoalStatusArrayMsg::execGetMsg },
		{ "SetMsg", &UROS2GoalStatusArrayMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GoalStatusArrayMsg;
UClass* UROS2GoalStatusArrayMsg::GetPrivateStaticClass()
{
	using TClass = UROS2GoalStatusArrayMsg;
	if (!Z_Registration_Info_UClass_UROS2GoalStatusArrayMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GoalStatusArrayMsg"),
			Z_Registration_Info_UClass_UROS2GoalStatusArrayMsg.InnerSingleton,
			StaticRegisterNativesUROS2GoalStatusArrayMsg,
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
	return Z_Registration_Info_UClass_UROS2GoalStatusArrayMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GoalStatusArrayMsg_NoRegister()
{
	return UROS2GoalStatusArrayMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GoalStatusArrayMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2GoalStatusArray.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GoalStatusArray.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GoalStatusArrayMsg_GetMsg, "GetMsg" }, // 4250152088
		{ &Z_Construct_UFunction_UROS2GoalStatusArrayMsg_SetMsg, "SetMsg" }, // 3274168588
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GoalStatusArrayMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GoalStatusArrayMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GoalStatusArrayMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GoalStatusArrayMsg_Statics::ClassParams = {
	&UROS2GoalStatusArrayMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GoalStatusArrayMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GoalStatusArrayMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GoalStatusArrayMsg()
{
	if (!Z_Registration_Info_UClass_UROS2GoalStatusArrayMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GoalStatusArrayMsg.OuterSingleton, Z_Construct_UClass_UROS2GoalStatusArrayMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GoalStatusArrayMsg.OuterSingleton;
}
UROS2GoalStatusArrayMsg::UROS2GoalStatusArrayMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GoalStatusArrayMsg);
UROS2GoalStatusArrayMsg::~UROS2GoalStatusArrayMsg() {}
// ********** End Class UROS2GoalStatusArrayMsg ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGoalStatusArray::StaticStruct, Z_Construct_UScriptStruct_FROSGoalStatusArray_Statics::NewStructOps, TEXT("ROSGoalStatusArray"), &Z_Registration_Info_UScriptStruct_FROSGoalStatusArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGoalStatusArray), 682038075U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GoalStatusArrayMsg, UROS2GoalStatusArrayMsg::StaticClass, TEXT("UROS2GoalStatusArrayMsg"), &Z_Registration_Info_UClass_UROS2GoalStatusArrayMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GoalStatusArrayMsg), 3769556014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h__Script_rclUE_255802912(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GoalStatusArray_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
