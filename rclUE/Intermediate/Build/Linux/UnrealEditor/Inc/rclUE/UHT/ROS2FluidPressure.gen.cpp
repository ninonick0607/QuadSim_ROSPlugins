// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2FluidPressure.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2FluidPressure() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2FluidPressureMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2FluidPressureMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSFluidPressure();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSFluidPressure *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSFluidPressure;
class UScriptStruct* FROSFluidPressure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFluidPressure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSFluidPressure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSFluidPressure, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSFluidPressure"));
	}
	return Z_Registration_Info_UScriptStruct_FROSFluidPressure.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSFluidPressure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2FluidPressure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSFluidPressure" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2FluidPressure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FluidPressure_MetaData[] = {
		{ "Category", "ROSFluidPressure" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2FluidPressure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variance_MetaData[] = {
		{ "Category", "ROSFluidPressure" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2FluidPressure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FluidPressure;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Variance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSFluidPressure>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSFluidPressure_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFluidPressure, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSFluidPressure_Statics::NewProp_FluidPressure = { "FluidPressure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFluidPressure, FluidPressure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FluidPressure_MetaData), NewProp_FluidPressure_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSFluidPressure_Statics::NewProp_Variance = { "Variance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFluidPressure, Variance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variance_MetaData), NewProp_Variance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSFluidPressure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFluidPressure_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFluidPressure_Statics::NewProp_FluidPressure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFluidPressure_Statics::NewProp_Variance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFluidPressure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSFluidPressure_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSFluidPressure",
	Z_Construct_UScriptStruct_FROSFluidPressure_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFluidPressure_Statics::PropPointers),
	sizeof(FROSFluidPressure),
	alignof(FROSFluidPressure),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFluidPressure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSFluidPressure_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSFluidPressure()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFluidPressure.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSFluidPressure.InnerSingleton, Z_Construct_UScriptStruct_FROSFluidPressure_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSFluidPressure.InnerSingleton;
}
// ********** End ScriptStruct FROSFluidPressure ***************************************************

// ********** Begin Class UROS2FluidPressureMsg Function GetMsg ************************************
struct Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics
{
	struct ROS2FluidPressureMsg_eventGetMsg_Parms
	{
		FROSFluidPressure Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2FluidPressure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FluidPressureMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSFluidPressure, METADATA_PARAMS(0, nullptr) }; // 1812983629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FluidPressureMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::ROS2FluidPressureMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::ROS2FluidPressureMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FluidPressureMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSFluidPressure,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2FluidPressureMsg Function GetMsg **************************************

// ********** Begin Class UROS2FluidPressureMsg Function SetMsg ************************************
struct Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics
{
	struct ROS2FluidPressureMsg_eventSetMsg_Parms
	{
		FROSFluidPressure Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2FluidPressure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FluidPressureMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSFluidPressure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1812983629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FluidPressureMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::ROS2FluidPressureMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::ROS2FluidPressureMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FluidPressureMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSFluidPressure,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2FluidPressureMsg Function SetMsg **************************************

// ********** Begin Class UROS2FluidPressureMsg ****************************************************
void UROS2FluidPressureMsg::StaticRegisterNativesUROS2FluidPressureMsg()
{
	UClass* Class = UROS2FluidPressureMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2FluidPressureMsg::execGetMsg },
		{ "SetMsg", &UROS2FluidPressureMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2FluidPressureMsg;
UClass* UROS2FluidPressureMsg::GetPrivateStaticClass()
{
	using TClass = UROS2FluidPressureMsg;
	if (!Z_Registration_Info_UClass_UROS2FluidPressureMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2FluidPressureMsg"),
			Z_Registration_Info_UClass_UROS2FluidPressureMsg.InnerSingleton,
			StaticRegisterNativesUROS2FluidPressureMsg,
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
	return Z_Registration_Info_UClass_UROS2FluidPressureMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2FluidPressureMsg_NoRegister()
{
	return UROS2FluidPressureMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2FluidPressureMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2FluidPressure.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2FluidPressure.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2FluidPressureMsg_GetMsg, "GetMsg" }, // 1328940376
		{ &Z_Construct_UFunction_UROS2FluidPressureMsg_SetMsg, "SetMsg" }, // 464893014
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2FluidPressureMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2FluidPressureMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2FluidPressureMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2FluidPressureMsg_Statics::ClassParams = {
	&UROS2FluidPressureMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2FluidPressureMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2FluidPressureMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2FluidPressureMsg()
{
	if (!Z_Registration_Info_UClass_UROS2FluidPressureMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2FluidPressureMsg.OuterSingleton, Z_Construct_UClass_UROS2FluidPressureMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2FluidPressureMsg.OuterSingleton;
}
UROS2FluidPressureMsg::UROS2FluidPressureMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2FluidPressureMsg);
UROS2FluidPressureMsg::~UROS2FluidPressureMsg() {}
// ********** End Class UROS2FluidPressureMsg ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2FluidPressure_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSFluidPressure::StaticStruct, Z_Construct_UScriptStruct_FROSFluidPressure_Statics::NewStructOps, TEXT("ROSFluidPressure"), &Z_Registration_Info_UScriptStruct_FROSFluidPressure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSFluidPressure), 1812983629U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2FluidPressureMsg, UROS2FluidPressureMsg::StaticClass, TEXT("UROS2FluidPressureMsg"), &Z_Registration_Info_UClass_UROS2FluidPressureMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2FluidPressureMsg), 228510060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2FluidPressure_h__Script_rclUE_3366361198(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2FluidPressure_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2FluidPressure_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2FluidPressure_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2FluidPressure_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
