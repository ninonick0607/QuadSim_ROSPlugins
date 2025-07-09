// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MultiDOFJointState.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Twist.h"
#include "rclUE/Public/Msgs/ROS2Wrench.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MultiDOFJointState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointStateMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MultiDOFJointStateMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMultiDOFJointState();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwist();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSWrench();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMultiDOFJointState ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMultiDOFJointState;
class UScriptStruct* FROSMultiDOFJointState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMultiDOFJointState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMultiDOFJointState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMultiDOFJointState, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMultiDOFJointState"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMultiDOFJointState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSMultiDOFJointState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointNames_MetaData[] = {
		{ "Category", "ROSMultiDOFJointState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "ROSMultiDOFJointState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "ROSMultiDOFJointState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wrench_MetaData[] = {
		{ "Category", "ROSMultiDOFJointState" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JointNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wrench_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Wrench;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMultiDOFJointState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointState, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_JointNames_Inner = { "JointNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_JointNames = { "JointNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointState, JointNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointNames_MetaData), NewProp_JointNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointState, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Twist_Inner = { "Twist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSTwist, METADATA_PARAMS(0, nullptr) }; // 3641426361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointState, Twist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) }; // 3641426361
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Wrench_Inner = { "Wrench", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSWrench, METADATA_PARAMS(0, nullptr) }; // 3360570850
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Wrench = { "Wrench", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMultiDOFJointState, Wrench), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wrench_MetaData), NewProp_Wrench_MetaData) }; // 3360570850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_JointNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_JointNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Twist_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Twist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Wrench_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewProp_Wrench,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMultiDOFJointState",
	Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::PropPointers),
	sizeof(FROSMultiDOFJointState),
	alignof(FROSMultiDOFJointState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMultiDOFJointState()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMultiDOFJointState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMultiDOFJointState.InnerSingleton, Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMultiDOFJointState.InnerSingleton;
}
// ********** End ScriptStruct FROSMultiDOFJointState **********************************************

// ********** Begin Class UROS2MultiDOFJointStateMsg Function GetMsg *******************************
struct Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics
{
	struct ROS2MultiDOFJointStateMsg_eventGetMsg_Parms
	{
		FROSMultiDOFJointState Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MultiDOFJointStateMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMultiDOFJointState, METADATA_PARAMS(0, nullptr) }; // 3936276979
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MultiDOFJointStateMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::ROS2MultiDOFJointStateMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::ROS2MultiDOFJointStateMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MultiDOFJointStateMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMultiDOFJointState,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MultiDOFJointStateMsg Function GetMsg *********************************

// ********** Begin Class UROS2MultiDOFJointStateMsg Function SetMsg *******************************
struct Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics
{
	struct ROS2MultiDOFJointStateMsg_eventSetMsg_Parms
	{
		FROSMultiDOFJointState Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MultiDOFJointStateMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMultiDOFJointState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3936276979
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MultiDOFJointStateMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::ROS2MultiDOFJointStateMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::ROS2MultiDOFJointStateMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MultiDOFJointStateMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMultiDOFJointState,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MultiDOFJointStateMsg Function SetMsg *********************************

// ********** Begin Class UROS2MultiDOFJointStateMsg ***********************************************
void UROS2MultiDOFJointStateMsg::StaticRegisterNativesUROS2MultiDOFJointStateMsg()
{
	UClass* Class = UROS2MultiDOFJointStateMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2MultiDOFJointStateMsg::execGetMsg },
		{ "SetMsg", &UROS2MultiDOFJointStateMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MultiDOFJointStateMsg;
UClass* UROS2MultiDOFJointStateMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MultiDOFJointStateMsg;
	if (!Z_Registration_Info_UClass_UROS2MultiDOFJointStateMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MultiDOFJointStateMsg"),
			Z_Registration_Info_UClass_UROS2MultiDOFJointStateMsg.InnerSingleton,
			StaticRegisterNativesUROS2MultiDOFJointStateMsg,
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
	return Z_Registration_Info_UClass_UROS2MultiDOFJointStateMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MultiDOFJointStateMsg_NoRegister()
{
	return UROS2MultiDOFJointStateMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MultiDOFJointStateMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MultiDOFJointState.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MultiDOFJointState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_GetMsg, "GetMsg" }, // 3819966295
		{ &Z_Construct_UFunction_UROS2MultiDOFJointStateMsg_SetMsg, "SetMsg" }, // 4036775667
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MultiDOFJointStateMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MultiDOFJointStateMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MultiDOFJointStateMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MultiDOFJointStateMsg_Statics::ClassParams = {
	&UROS2MultiDOFJointStateMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MultiDOFJointStateMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MultiDOFJointStateMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MultiDOFJointStateMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MultiDOFJointStateMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MultiDOFJointStateMsg.OuterSingleton, Z_Construct_UClass_UROS2MultiDOFJointStateMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MultiDOFJointStateMsg.OuterSingleton;
}
UROS2MultiDOFJointStateMsg::UROS2MultiDOFJointStateMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MultiDOFJointStateMsg);
UROS2MultiDOFJointStateMsg::~UROS2MultiDOFJointStateMsg() {}
// ********** End Class UROS2MultiDOFJointStateMsg *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMultiDOFJointState::StaticStruct, Z_Construct_UScriptStruct_FROSMultiDOFJointState_Statics::NewStructOps, TEXT("ROSMultiDOFJointState"), &Z_Registration_Info_UScriptStruct_FROSMultiDOFJointState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMultiDOFJointState), 3936276979U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MultiDOFJointStateMsg, UROS2MultiDOFJointStateMsg::StaticClass, TEXT("UROS2MultiDOFJointStateMsg"), &Z_Registration_Info_UClass_UROS2MultiDOFJointStateMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MultiDOFJointStateMsg), 2394042820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h__Script_rclUE_80127275(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MultiDOFJointState_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
