// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2GridCells.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GridCells() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GridCellsMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2GridCellsMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGridCells();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGridCells *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGridCells;
class UScriptStruct* FROSGridCells::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGridCells.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGridCells.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGridCells, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGridCells"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGridCells.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGridCells_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GridCells.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSGridCells" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GridCells.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellWidth_MetaData[] = {
		{ "Category", "ROSGridCells" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GridCells.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[] = {
		{ "Category", "ROSGridCells" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GridCells.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "Category", "ROSGridCells" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GridCells.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGridCells>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGridCells, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_CellWidth = { "CellWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGridCells, CellWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellWidth_MetaData), NewProp_CellWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGridCells, CellHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellHeight_MetaData), NewProp_CellHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGridCells, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGridCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_CellWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_CellHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGridCells_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGridCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGridCells_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGridCells",
	Z_Construct_UScriptStruct_FROSGridCells_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGridCells_Statics::PropPointers),
	sizeof(FROSGridCells),
	alignof(FROSGridCells),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGridCells_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGridCells_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGridCells()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGridCells.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGridCells.InnerSingleton, Z_Construct_UScriptStruct_FROSGridCells_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGridCells.InnerSingleton;
}
// ********** End ScriptStruct FROSGridCells *******************************************************

// ********** Begin Class UROS2GridCellsMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics
{
	struct ROS2GridCellsMsg_eventGetMsg_Parms
	{
		FROSGridCells Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GridCells.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GridCellsMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSGridCells, METADATA_PARAMS(0, nullptr) }; // 3089007678
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GridCellsMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::ROS2GridCellsMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::ROS2GridCellsMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GridCellsMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSGridCells,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2GridCellsMsg Function GetMsg ******************************************

// ********** Begin Class UROS2GridCellsMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics
{
	struct ROS2GridCellsMsg_eventSetMsg_Parms
	{
		FROSGridCells Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2GridCells.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GridCellsMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSGridCells, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3089007678
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GridCellsMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::ROS2GridCellsMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::ROS2GridCellsMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GridCellsMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSGridCells,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2GridCellsMsg Function SetMsg ******************************************

// ********** Begin Class UROS2GridCellsMsg ********************************************************
void UROS2GridCellsMsg::StaticRegisterNativesUROS2GridCellsMsg()
{
	UClass* Class = UROS2GridCellsMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2GridCellsMsg::execGetMsg },
		{ "SetMsg", &UROS2GridCellsMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GridCellsMsg;
UClass* UROS2GridCellsMsg::GetPrivateStaticClass()
{
	using TClass = UROS2GridCellsMsg;
	if (!Z_Registration_Info_UClass_UROS2GridCellsMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GridCellsMsg"),
			Z_Registration_Info_UClass_UROS2GridCellsMsg.InnerSingleton,
			StaticRegisterNativesUROS2GridCellsMsg,
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
	return Z_Registration_Info_UClass_UROS2GridCellsMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GridCellsMsg_NoRegister()
{
	return UROS2GridCellsMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GridCellsMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2GridCells.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2GridCells.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GridCellsMsg_GetMsg, "GetMsg" }, // 1179474148
		{ &Z_Construct_UFunction_UROS2GridCellsMsg_SetMsg, "SetMsg" }, // 806949672
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GridCellsMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GridCellsMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GridCellsMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GridCellsMsg_Statics::ClassParams = {
	&UROS2GridCellsMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GridCellsMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GridCellsMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GridCellsMsg()
{
	if (!Z_Registration_Info_UClass_UROS2GridCellsMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GridCellsMsg.OuterSingleton, Z_Construct_UClass_UROS2GridCellsMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GridCellsMsg.OuterSingleton;
}
UROS2GridCellsMsg::UROS2GridCellsMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GridCellsMsg);
UROS2GridCellsMsg::~UROS2GridCellsMsg() {}
// ********** End Class UROS2GridCellsMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GridCells_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGridCells::StaticStruct, Z_Construct_UScriptStruct_FROSGridCells_Statics::NewStructOps, TEXT("ROSGridCells"), &Z_Registration_Info_UScriptStruct_FROSGridCells, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGridCells), 3089007678U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GridCellsMsg, UROS2GridCellsMsg::StaticClass, TEXT("UROS2GridCellsMsg"), &Z_Registration_Info_UClass_UROS2GridCellsMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GridCellsMsg), 3707478554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GridCells_h__Script_rclUE_3695521896(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GridCells_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GridCells_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GridCells_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GridCells_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
