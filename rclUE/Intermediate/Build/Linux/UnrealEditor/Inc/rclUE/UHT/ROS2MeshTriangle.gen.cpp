// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2MeshTriangle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2MeshTriangle() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MeshTriangleMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MeshTriangleMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMeshTriangle();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMeshTriangle **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMeshTriangle;
class UScriptStruct* FROSMeshTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMeshTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMeshTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMeshTriangle, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMeshTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMeshTriangle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMeshTriangle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MeshTriangle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndices_MetaData[] = {
		{ "Category", "ROSMeshTriangle" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MeshTriangle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VertexIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMeshTriangle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::NewProp_VertexIndices_Inner = { "VertexIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::NewProp_VertexIndices = { "VertexIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMeshTriangle, VertexIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexIndices_MetaData), NewProp_VertexIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::NewProp_VertexIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::NewProp_VertexIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMeshTriangle",
	Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::PropPointers),
	sizeof(FROSMeshTriangle),
	alignof(FROSMeshTriangle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMeshTriangle()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMeshTriangle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMeshTriangle.InnerSingleton, Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMeshTriangle.InnerSingleton;
}
// ********** End ScriptStruct FROSMeshTriangle ****************************************************

// ********** Begin Class UROS2MeshTriangleMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics
{
	struct ROS2MeshTriangleMsg_eventGetMsg_Parms
	{
		FROSMeshTriangle Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MeshTriangle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MeshTriangleMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMeshTriangle, METADATA_PARAMS(0, nullptr) }; // 1102992721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MeshTriangleMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::ROS2MeshTriangleMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::ROS2MeshTriangleMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MeshTriangleMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMeshTriangle,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MeshTriangleMsg Function GetMsg ***************************************

// ********** Begin Class UROS2MeshTriangleMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics
{
	struct ROS2MeshTriangleMsg_eventSetMsg_Parms
	{
		FROSMeshTriangle Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2MeshTriangle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MeshTriangleMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMeshTriangle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1102992721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MeshTriangleMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::ROS2MeshTriangleMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::ROS2MeshTriangleMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MeshTriangleMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMeshTriangle,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MeshTriangleMsg Function SetMsg ***************************************

// ********** Begin Class UROS2MeshTriangleMsg *****************************************************
void UROS2MeshTriangleMsg::StaticRegisterNativesUROS2MeshTriangleMsg()
{
	UClass* Class = UROS2MeshTriangleMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2MeshTriangleMsg::execGetMsg },
		{ "SetMsg", &UROS2MeshTriangleMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MeshTriangleMsg;
UClass* UROS2MeshTriangleMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MeshTriangleMsg;
	if (!Z_Registration_Info_UClass_UROS2MeshTriangleMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MeshTriangleMsg"),
			Z_Registration_Info_UClass_UROS2MeshTriangleMsg.InnerSingleton,
			StaticRegisterNativesUROS2MeshTriangleMsg,
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
	return Z_Registration_Info_UClass_UROS2MeshTriangleMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MeshTriangleMsg_NoRegister()
{
	return UROS2MeshTriangleMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MeshTriangleMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2MeshTriangle.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2MeshTriangle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MeshTriangleMsg_GetMsg, "GetMsg" }, // 1543400794
		{ &Z_Construct_UFunction_UROS2MeshTriangleMsg_SetMsg, "SetMsg" }, // 4006565907
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MeshTriangleMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MeshTriangleMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MeshTriangleMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MeshTriangleMsg_Statics::ClassParams = {
	&UROS2MeshTriangleMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MeshTriangleMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MeshTriangleMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MeshTriangleMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MeshTriangleMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MeshTriangleMsg.OuterSingleton, Z_Construct_UClass_UROS2MeshTriangleMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MeshTriangleMsg.OuterSingleton;
}
UROS2MeshTriangleMsg::UROS2MeshTriangleMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MeshTriangleMsg);
UROS2MeshTriangleMsg::~UROS2MeshTriangleMsg() {}
// ********** End Class UROS2MeshTriangleMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMeshTriangle::StaticStruct, Z_Construct_UScriptStruct_FROSMeshTriangle_Statics::NewStructOps, TEXT("ROSMeshTriangle"), &Z_Registration_Info_UScriptStruct_FROSMeshTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMeshTriangle), 1102992721U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MeshTriangleMsg, UROS2MeshTriangleMsg::StaticClass, TEXT("UROS2MeshTriangleMsg"), &Z_Registration_Info_UClass_UROS2MeshTriangleMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MeshTriangleMsg), 2009621998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h__Script_rclUE_2791426096(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
