// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2OccupancyGrid.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2MapMetaData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2OccupancyGrid() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OccupancyGridMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2OccupancyGridMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMapMetaData();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOccupancyGrid();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSOccupancyGrid *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSOccupancyGrid;
class UScriptStruct* FROSOccupancyGrid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOccupancyGrid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSOccupancyGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSOccupancyGrid, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSOccupancyGrid"));
	}
	return Z_Registration_Info_UScriptStruct_FROSOccupancyGrid.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OccupancyGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSOccupancyGrid" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OccupancyGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "Category", "ROSOccupancyGrid" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OccupancyGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSOccupancyGrid" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OccupancyGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSOccupancyGrid>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOccupancyGrid, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOccupancyGrid, Info), Z_Construct_UScriptStruct_FROSMapMetaData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2135100871
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSOccupancyGrid, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewProp_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSOccupancyGrid",
	Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::PropPointers),
	sizeof(FROSOccupancyGrid),
	alignof(FROSOccupancyGrid),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSOccupancyGrid()
{
	if (!Z_Registration_Info_UScriptStruct_FROSOccupancyGrid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSOccupancyGrid.InnerSingleton, Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSOccupancyGrid.InnerSingleton;
}
// ********** End ScriptStruct FROSOccupancyGrid ***************************************************

// ********** Begin Class UROS2OccupancyGridMsg Function GetMsg ************************************
struct Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics
{
	struct ROS2OccupancyGridMsg_eventGetMsg_Parms
	{
		FROSOccupancyGrid Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2OccupancyGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OccupancyGridMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSOccupancyGrid, METADATA_PARAMS(0, nullptr) }; // 3165919373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OccupancyGridMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::ROS2OccupancyGridMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::ROS2OccupancyGridMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OccupancyGridMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSOccupancyGrid,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2OccupancyGridMsg Function GetMsg **************************************

// ********** Begin Class UROS2OccupancyGridMsg Function SetMsg ************************************
struct Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics
{
	struct ROS2OccupancyGridMsg_eventSetMsg_Parms
	{
		FROSOccupancyGrid Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2OccupancyGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2OccupancyGridMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSOccupancyGrid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3165919373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2OccupancyGridMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::ROS2OccupancyGridMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::ROS2OccupancyGridMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2OccupancyGridMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSOccupancyGrid,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2OccupancyGridMsg Function SetMsg **************************************

// ********** Begin Class UROS2OccupancyGridMsg ****************************************************
void UROS2OccupancyGridMsg::StaticRegisterNativesUROS2OccupancyGridMsg()
{
	UClass* Class = UROS2OccupancyGridMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2OccupancyGridMsg::execGetMsg },
		{ "SetMsg", &UROS2OccupancyGridMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2OccupancyGridMsg;
UClass* UROS2OccupancyGridMsg::GetPrivateStaticClass()
{
	using TClass = UROS2OccupancyGridMsg;
	if (!Z_Registration_Info_UClass_UROS2OccupancyGridMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2OccupancyGridMsg"),
			Z_Registration_Info_UClass_UROS2OccupancyGridMsg.InnerSingleton,
			StaticRegisterNativesUROS2OccupancyGridMsg,
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
	return Z_Registration_Info_UClass_UROS2OccupancyGridMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2OccupancyGridMsg_NoRegister()
{
	return UROS2OccupancyGridMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2OccupancyGridMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2OccupancyGrid.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2OccupancyGrid.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2OccupancyGridMsg_GetMsg, "GetMsg" }, // 2136672313
		{ &Z_Construct_UFunction_UROS2OccupancyGridMsg_SetMsg, "SetMsg" }, // 2188729406
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2OccupancyGridMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2OccupancyGridMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OccupancyGridMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2OccupancyGridMsg_Statics::ClassParams = {
	&UROS2OccupancyGridMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2OccupancyGridMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2OccupancyGridMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2OccupancyGridMsg()
{
	if (!Z_Registration_Info_UClass_UROS2OccupancyGridMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2OccupancyGridMsg.OuterSingleton, Z_Construct_UClass_UROS2OccupancyGridMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2OccupancyGridMsg.OuterSingleton;
}
UROS2OccupancyGridMsg::UROS2OccupancyGridMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2OccupancyGridMsg);
UROS2OccupancyGridMsg::~UROS2OccupancyGridMsg() {}
// ********** End Class UROS2OccupancyGridMsg ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSOccupancyGrid::StaticStruct, Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics::NewStructOps, TEXT("ROSOccupancyGrid"), &Z_Registration_Info_UScriptStruct_FROSOccupancyGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSOccupancyGrid), 3165919373U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2OccupancyGridMsg, UROS2OccupancyGridMsg::StaticClass, TEXT("UROS2OccupancyGridMsg"), &Z_Registration_Info_UClass_UROS2OccupancyGridMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2OccupancyGridMsg), 3825068343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h__Script_rclUE_2842097763(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
