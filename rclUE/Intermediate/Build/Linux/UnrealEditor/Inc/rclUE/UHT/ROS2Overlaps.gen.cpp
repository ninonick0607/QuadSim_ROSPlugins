// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Overlaps.h"
#include "rclUE/Public/Msgs/ROS2OverlappingObjects.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Overlaps() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OverlapsMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OverlapsMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOverlappingObjects();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOverlaps();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSOverlaps ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSOverlaps;
class UScriptStruct* FROSOverlaps::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOverlaps.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSOverlaps.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSOverlaps, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSOverlaps"));
	}
	return Z_Registration_Info_UScriptStruct_FROSOverlaps.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSOverlaps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Overlaps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "Category", "ROSOverlaps" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Overlaps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overlaps_MetaData[] = {
		{ "Category", "ROSOverlaps" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Overlaps.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Overlaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Overlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSOverlaps>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlaps, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewProp_Overlaps_Inner = { "Overlaps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSOverlappingObjects, METADATA_PARAMS(0, nullptr) }; // 751529697
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewProp_Overlaps = { "Overlaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOverlaps, Overlaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overlaps_MetaData), NewProp_Overlaps_MetaData) }; // 751529697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSOverlaps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewProp_Targets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewProp_Overlaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewProp_Overlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlaps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSOverlaps_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSOverlaps",
	Z_Construct_UScriptStruct_FROSOverlaps_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlaps_Statics::PropPointers),
	sizeof(FROSOverlaps),
	alignof(FROSOverlaps),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOverlaps_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSOverlaps_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSOverlaps()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOverlaps.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSOverlaps.InnerSingleton, Z_Construct_UScriptStruct_FROSOverlaps_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSOverlaps.InnerSingleton;
}
// ********** End ScriptStruct FROSOverlaps ********************************************************

// ********** Begin Class UROS2OverlapsMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics
{
	struct ROS2OverlapsMsg_eventGetMsg_Parms
	{
		FROSOverlaps Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Overlaps.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OverlapsMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSOverlaps, METADATA_PARAMS(0, nullptr) }; // 2902891513
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OverlapsMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::ROS2OverlapsMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::ROS2OverlapsMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OverlapsMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSOverlaps,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2OverlapsMsg Function GetMsg *******************************************

// ********** Begin Class UROS2OverlapsMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics
{
	struct ROS2OverlapsMsg_eventSetMsg_Parms
	{
		FROSOverlaps Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Overlaps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OverlapsMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSOverlaps, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2902891513
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OverlapsMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::ROS2OverlapsMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::ROS2OverlapsMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OverlapsMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSOverlaps,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2OverlapsMsg Function SetMsg *******************************************

// ********** Begin Class UROS2OverlapsMsg *********************************************************
void UROS2OverlapsMsg::StaticRegisterNativesUROS2OverlapsMsg()
{
	UClass* Class = UROS2OverlapsMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2OverlapsMsg::execGetMsg },
		{ "SetMsg", &UROS2OverlapsMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2OverlapsMsg;
UClass* UROS2OverlapsMsg::GetPrivateStaticClass()
{
	using TClass = UROS2OverlapsMsg;
	if (!Z_Registration_Info_UClass_UROS2OverlapsMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2OverlapsMsg"),
			Z_Registration_Info_UClass_UROS2OverlapsMsg.InnerSingleton,
			StaticRegisterNativesUROS2OverlapsMsg,
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
	return Z_Registration_Info_UClass_UROS2OverlapsMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2OverlapsMsg_NoRegister()
{
	return UROS2OverlapsMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2OverlapsMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Overlaps.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Overlaps.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2OverlapsMsg_GetMsg, "GetMsg" }, // 1514514553
		{ &Z_Construct_UFunction_UROS2OverlapsMsg_SetMsg, "SetMsg" }, // 4215165184
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2OverlapsMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2OverlapsMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OverlapsMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2OverlapsMsg_Statics::ClassParams = {
	&UROS2OverlapsMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OverlapsMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2OverlapsMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2OverlapsMsg()
{
	if (!Z_Registration_Info_UClass_UROS2OverlapsMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2OverlapsMsg.OuterSingleton, Z_Construct_UClass_UROS2OverlapsMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2OverlapsMsg.OuterSingleton;
}
UROS2OverlapsMsg::UROS2OverlapsMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2OverlapsMsg);
UROS2OverlapsMsg::~UROS2OverlapsMsg() {}
// ********** End Class UROS2OverlapsMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSOverlaps::StaticStruct, Z_Construct_UScriptStruct_FROSOverlaps_Statics::NewStructOps, TEXT("ROSOverlaps"), &Z_Registration_Info_UScriptStruct_FROSOverlaps, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSOverlaps), 2902891513U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2OverlapsMsg, UROS2OverlapsMsg::StaticClass, TEXT("UROS2OverlapsMsg"), &Z_Registration_Info_UClass_UROS2OverlapsMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2OverlapsMsg), 2857564193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h__Script_rclUE_2883545031(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Overlaps_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
