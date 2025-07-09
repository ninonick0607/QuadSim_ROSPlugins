// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PolygonMesh.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2PointCloud2.h"
#include "rclUE/Public/Msgs/ROS2Vertices.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PolygonMesh() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PolygonMeshMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PolygonMeshMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPointCloud2();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPolygonMesh();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSVertices();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPolygonMesh ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPolygonMesh;
class UScriptStruct* FROSPolygonMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPolygonMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPolygonMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPolygonMesh, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPolygonMesh"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPolygonMesh.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPolygonMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPolygonMesh" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cloud_MetaData[] = {
		{ "Category", "ROSPolygonMesh" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Polygons_MetaData[] = {
		{ "Category", "ROSPolygonMesh" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cloud;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Polygons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPolygonMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPolygonMesh, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewProp_Cloud = { "Cloud", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPolygonMesh, Cloud), Z_Construct_UScriptStruct_FROSPointCloud2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cloud_MetaData), NewProp_Cloud_MetaData) }; // 2798175414
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewProp_Polygons_Inner = { "Polygons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSVertices, METADATA_PARAMS(0, nullptr) }; // 4170961386
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewProp_Polygons = { "Polygons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPolygonMesh, Polygons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Polygons_MetaData), NewProp_Polygons_MetaData) }; // 4170961386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewProp_Cloud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewProp_Polygons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewProp_Polygons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPolygonMesh",
	Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::PropPointers),
	sizeof(FROSPolygonMesh),
	alignof(FROSPolygonMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPolygonMesh()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPolygonMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPolygonMesh.InnerSingleton, Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPolygonMesh.InnerSingleton;
}
// ********** End ScriptStruct FROSPolygonMesh *****************************************************

// ********** Begin Class UROS2PolygonMeshMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics
{
	struct ROS2PolygonMeshMsg_eventGetMsg_Parms
	{
		FROSPolygonMesh Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PolygonMeshMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPolygonMesh, METADATA_PARAMS(0, nullptr) }; // 1961898845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PolygonMeshMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::ROS2PolygonMeshMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::ROS2PolygonMeshMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PolygonMeshMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPolygonMesh,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PolygonMeshMsg Function GetMsg ****************************************

// ********** Begin Class UROS2PolygonMeshMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics
{
	struct ROS2PolygonMeshMsg_eventSetMsg_Parms
	{
		FROSPolygonMesh Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PolygonMeshMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPolygonMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1961898845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PolygonMeshMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::ROS2PolygonMeshMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::ROS2PolygonMeshMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PolygonMeshMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPolygonMesh,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PolygonMeshMsg Function SetMsg ****************************************

// ********** Begin Class UROS2PolygonMeshMsg ******************************************************
void UROS2PolygonMeshMsg::StaticRegisterNativesUROS2PolygonMeshMsg()
{
	UClass* Class = UROS2PolygonMeshMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PolygonMeshMsg::execGetMsg },
		{ "SetMsg", &UROS2PolygonMeshMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PolygonMeshMsg;
UClass* UROS2PolygonMeshMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PolygonMeshMsg;
	if (!Z_Registration_Info_UClass_UROS2PolygonMeshMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PolygonMeshMsg"),
			Z_Registration_Info_UClass_UROS2PolygonMeshMsg.InnerSingleton,
			StaticRegisterNativesUROS2PolygonMeshMsg,
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
	return Z_Registration_Info_UClass_UROS2PolygonMeshMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PolygonMeshMsg_NoRegister()
{
	return UROS2PolygonMeshMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PolygonMeshMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PolygonMesh.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonMesh.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PolygonMeshMsg_GetMsg, "GetMsg" }, // 3304094405
		{ &Z_Construct_UFunction_UROS2PolygonMeshMsg_SetMsg, "SetMsg" }, // 2633798394
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PolygonMeshMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PolygonMeshMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PolygonMeshMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PolygonMeshMsg_Statics::ClassParams = {
	&UROS2PolygonMeshMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PolygonMeshMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PolygonMeshMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PolygonMeshMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PolygonMeshMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PolygonMeshMsg.OuterSingleton, Z_Construct_UClass_UROS2PolygonMeshMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PolygonMeshMsg.OuterSingleton;
}
UROS2PolygonMeshMsg::UROS2PolygonMeshMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PolygonMeshMsg);
UROS2PolygonMeshMsg::~UROS2PolygonMeshMsg() {}
// ********** End Class UROS2PolygonMeshMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPolygonMesh::StaticStruct, Z_Construct_UScriptStruct_FROSPolygonMesh_Statics::NewStructOps, TEXT("ROSPolygonMesh"), &Z_Registration_Info_UScriptStruct_FROSPolygonMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPolygonMesh), 1961898845U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PolygonMeshMsg, UROS2PolygonMeshMsg::StaticClass, TEXT("UROS2PolygonMeshMsg"), &Z_Registration_Info_UClass_UROS2PolygonMeshMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PolygonMeshMsg), 3458149174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h__Script_rclUE_191761742(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
