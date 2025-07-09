// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MarkerArray.h"
#include "rclUE/Public/Msgs/ROS2Marker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MarkerArray() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MarkerArrayMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MarkerArrayMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMarker();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMarkerArray();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMarkerArray ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMarkerArray;
class UScriptStruct* FROSMarkerArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMarkerArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMarkerArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMarkerArray, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMarkerArray"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMarkerArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMarkerArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MarkerArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[] = {
		{ "Category", "ROSMarkerArray" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MarkerArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMarkerArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarkerArray_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSMarker, METADATA_PARAMS(0, nullptr) }; // 158721406
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMarkerArray_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarkerArray, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Markers_MetaData), NewProp_Markers_MetaData) }; // 158721406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMarkerArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarkerArray_Statics::NewProp_Markers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarkerArray_Statics::NewProp_Markers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMarkerArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMarkerArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMarkerArray",
	Z_Construct_UScriptStruct_FROSMarkerArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMarkerArray_Statics::PropPointers),
	sizeof(FROSMarkerArray),
	alignof(FROSMarkerArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMarkerArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMarkerArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMarkerArray()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMarkerArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMarkerArray.InnerSingleton, Z_Construct_UScriptStruct_FROSMarkerArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMarkerArray.InnerSingleton;
}
// ********** End ScriptStruct FROSMarkerArray *****************************************************

// ********** Begin Class UROS2MarkerArrayMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics
{
	struct ROS2MarkerArrayMsg_eventGetMsg_Parms
	{
		FROSMarkerArray Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MarkerArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerArrayMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMarkerArray, METADATA_PARAMS(0, nullptr) }; // 2793129704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerArrayMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::ROS2MarkerArrayMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::ROS2MarkerArrayMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerArrayMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMarkerArray,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerArrayMsg Function GetMsg ****************************************

// ********** Begin Class UROS2MarkerArrayMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics
{
	struct ROS2MarkerArrayMsg_eventSetMsg_Parms
	{
		FROSMarkerArray Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MarkerArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerArrayMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMarkerArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2793129704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerArrayMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::ROS2MarkerArrayMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::ROS2MarkerArrayMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerArrayMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMarkerArray,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerArrayMsg Function SetMsg ****************************************

// ********** Begin Class UROS2MarkerArrayMsg ******************************************************
void UROS2MarkerArrayMsg::StaticRegisterNativesUROS2MarkerArrayMsg()
{
	UClass* Class = UROS2MarkerArrayMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2MarkerArrayMsg::execGetMsg },
		{ "SetMsg", &UROS2MarkerArrayMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MarkerArrayMsg;
UClass* UROS2MarkerArrayMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MarkerArrayMsg;
	if (!Z_Registration_Info_UClass_UROS2MarkerArrayMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MarkerArrayMsg"),
			Z_Registration_Info_UClass_UROS2MarkerArrayMsg.InnerSingleton,
			StaticRegisterNativesUROS2MarkerArrayMsg,
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
	return Z_Registration_Info_UClass_UROS2MarkerArrayMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MarkerArrayMsg_NoRegister()
{
	return UROS2MarkerArrayMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MarkerArrayMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MarkerArray.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MarkerArray.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MarkerArrayMsg_GetMsg, "GetMsg" }, // 1786398783
		{ &Z_Construct_UFunction_UROS2MarkerArrayMsg_SetMsg, "SetMsg" }, // 2007992544
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MarkerArrayMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MarkerArrayMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MarkerArrayMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MarkerArrayMsg_Statics::ClassParams = {
	&UROS2MarkerArrayMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MarkerArrayMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MarkerArrayMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MarkerArrayMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MarkerArrayMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MarkerArrayMsg.OuterSingleton, Z_Construct_UClass_UROS2MarkerArrayMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MarkerArrayMsg.OuterSingleton;
}
UROS2MarkerArrayMsg::UROS2MarkerArrayMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MarkerArrayMsg);
UROS2MarkerArrayMsg::~UROS2MarkerArrayMsg() {}
// ********** End Class UROS2MarkerArrayMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMarkerArray::StaticStruct, Z_Construct_UScriptStruct_FROSMarkerArray_Statics::NewStructOps, TEXT("ROSMarkerArray"), &Z_Registration_Info_UScriptStruct_FROSMarkerArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMarkerArray), 2793129704U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MarkerArrayMsg, UROS2MarkerArrayMsg::StaticClass, TEXT("UROS2MarkerArrayMsg"), &Z_Registration_Info_UClass_UROS2MarkerArrayMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MarkerArrayMsg), 3393678250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h__Script_rclUE_3141781643(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MarkerArray_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
