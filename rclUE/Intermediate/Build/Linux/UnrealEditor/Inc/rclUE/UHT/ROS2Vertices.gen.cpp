// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Vertices.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Vertices() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2VerticesMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2VerticesMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSVertices();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSVertices ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSVertices;
class UScriptStruct* FROSVertices::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSVertices.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSVertices.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSVertices, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSVertices"));
	}
	return Z_Registration_Info_UScriptStruct_FROSVertices.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSVertices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vertices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "ROSVertices" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vertices.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSVertices>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSVertices_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSVertices_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSVertices, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSVertices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSVertices_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSVertices_Statics::NewProp_Vertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSVertices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSVertices_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSVertices",
	Z_Construct_UScriptStruct_FROSVertices_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSVertices_Statics::PropPointers),
	sizeof(FROSVertices),
	alignof(FROSVertices),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSVertices_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSVertices_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSVertices()
{
	if (!Z_Registration_Info_UScriptStruct_FROSVertices.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSVertices.InnerSingleton, Z_Construct_UScriptStruct_FROSVertices_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSVertices.InnerSingleton;
}
// ********** End ScriptStruct FROSVertices ********************************************************

// ********** Begin Class UROS2VerticesMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics
{
	struct ROS2VerticesMsg_eventGetMsg_Parms
	{
		FROSVertices Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vertices.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2VerticesMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSVertices, METADATA_PARAMS(0, nullptr) }; // 4170961386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2VerticesMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::ROS2VerticesMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::ROS2VerticesMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2VerticesMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2VerticesMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2VerticesMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSVertices,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2VerticesMsg Function GetMsg *******************************************

// ********** Begin Class UROS2VerticesMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics
{
	struct ROS2VerticesMsg_eventSetMsg_Parms
	{
		FROSVertices Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vertices.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2VerticesMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSVertices, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 4170961386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2VerticesMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::ROS2VerticesMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::ROS2VerticesMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2VerticesMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2VerticesMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2VerticesMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSVertices,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2VerticesMsg Function SetMsg *******************************************

// ********** Begin Class UROS2VerticesMsg *********************************************************
void UROS2VerticesMsg::StaticRegisterNativesUROS2VerticesMsg()
{
	UClass* Class = UROS2VerticesMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2VerticesMsg::execGetMsg },
		{ "SetMsg", &UROS2VerticesMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2VerticesMsg;
UClass* UROS2VerticesMsg::GetPrivateStaticClass()
{
	using TClass = UROS2VerticesMsg;
	if (!Z_Registration_Info_UClass_UROS2VerticesMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2VerticesMsg"),
			Z_Registration_Info_UClass_UROS2VerticesMsg.InnerSingleton,
			StaticRegisterNativesUROS2VerticesMsg,
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
	return Z_Registration_Info_UClass_UROS2VerticesMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2VerticesMsg_NoRegister()
{
	return UROS2VerticesMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2VerticesMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Vertices.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vertices.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2VerticesMsg_GetMsg, "GetMsg" }, // 1937275864
		{ &Z_Construct_UFunction_UROS2VerticesMsg_SetMsg, "SetMsg" }, // 359842578
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2VerticesMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2VerticesMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2VerticesMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2VerticesMsg_Statics::ClassParams = {
	&UROS2VerticesMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2VerticesMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2VerticesMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2VerticesMsg()
{
	if (!Z_Registration_Info_UClass_UROS2VerticesMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2VerticesMsg.OuterSingleton, Z_Construct_UClass_UROS2VerticesMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2VerticesMsg.OuterSingleton;
}
UROS2VerticesMsg::UROS2VerticesMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2VerticesMsg);
UROS2VerticesMsg::~UROS2VerticesMsg() {}
// ********** End Class UROS2VerticesMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vertices_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSVertices::StaticStruct, Z_Construct_UScriptStruct_FROSVertices_Statics::NewStructOps, TEXT("ROSVertices"), &Z_Registration_Info_UScriptStruct_FROSVertices, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSVertices), 4170961386U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2VerticesMsg, UROS2VerticesMsg::StaticClass, TEXT("UROS2VerticesMsg"), &Z_Registration_Info_UClass_UROS2VerticesMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2VerticesMsg), 3843351327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vertices_h__Script_rclUE_1951810399(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vertices_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vertices_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vertices_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vertices_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
