// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Inertia.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Inertia() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2InertiaMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2InertiaMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSInertia();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSInertia *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSInertia;
class UScriptStruct* FROSInertia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInertia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSInertia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSInertia, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSInertia"));
	}
	return Z_Registration_Info_UScriptStruct_FROSInertia.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSInertia_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_MetaData[] = {
		{ "Category", "ROSInertia" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Com_MetaData[] = {
		{ "Category", "ROSInertia" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ixx_MetaData[] = {
		{ "Category", "ROSInertia" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ixy_MetaData[] = {
		{ "Category", "ROSInertia" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ixz_MetaData[] = {
		{ "Category", "ROSInertia" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iyy_MetaData[] = {
		{ "Category", "ROSInertia" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iyz_MetaData[] = {
		{ "Category", "ROSInertia" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Izz_MetaData[] = {
		{ "Category", "ROSInertia" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_M;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Com;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Ixx;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Ixy;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Ixz;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Iyy;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Iyz;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Izz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSInertia>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertia, M), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_MetaData), NewProp_M_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Com = { "Com", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertia, Com), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Com_MetaData), NewProp_Com_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Ixx = { "Ixx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertia, Ixx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ixx_MetaData), NewProp_Ixx_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Ixy = { "Ixy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertia, Ixy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ixy_MetaData), NewProp_Ixy_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Ixz = { "Ixz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertia, Ixz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ixz_MetaData), NewProp_Ixz_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Iyy = { "Iyy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertia, Iyy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iyy_MetaData), NewProp_Iyy_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Iyz = { "Iyz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertia, Iyz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iyz_MetaData), NewProp_Iyz_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Izz = { "Izz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSInertia, Izz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Izz_MetaData), NewProp_Izz_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSInertia_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_M,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Com,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Ixx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Ixy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Ixz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Iyy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Iyz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSInertia_Statics::NewProp_Izz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInertia_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSInertia_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSInertia",
	Z_Construct_UScriptStruct_FROSInertia_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInertia_Statics::PropPointers),
	sizeof(FROSInertia),
	alignof(FROSInertia),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSInertia_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSInertia_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSInertia()
{
	if (!Z_Registration_Info_UScriptStruct_FROSInertia.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSInertia.InnerSingleton, Z_Construct_UScriptStruct_FROSInertia_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSInertia.InnerSingleton;
}
// ********** End ScriptStruct FROSInertia *********************************************************

// ********** Begin Class UROS2InertiaMsg Function GetMsg ******************************************
struct Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics
{
	struct ROS2InertiaMsg_eventGetMsg_Parms
	{
		FROSInertia Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2InertiaMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSInertia, METADATA_PARAMS(0, nullptr) }; // 329516648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2InertiaMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::ROS2InertiaMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::ROS2InertiaMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2InertiaMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2InertiaMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2InertiaMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSInertia,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2InertiaMsg Function GetMsg ********************************************

// ********** Begin Class UROS2InertiaMsg Function SetMsg ******************************************
struct Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics
{
	struct ROS2InertiaMsg_eventSetMsg_Parms
	{
		FROSInertia Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2InertiaMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSInertia, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 329516648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2InertiaMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::ROS2InertiaMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::ROS2InertiaMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2InertiaMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2InertiaMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2InertiaMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSInertia,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2InertiaMsg Function SetMsg ********************************************

// ********** Begin Class UROS2InertiaMsg **********************************************************
void UROS2InertiaMsg::StaticRegisterNativesUROS2InertiaMsg()
{
	UClass* Class = UROS2InertiaMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2InertiaMsg::execGetMsg },
		{ "SetMsg", &UROS2InertiaMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2InertiaMsg;
UClass* UROS2InertiaMsg::GetPrivateStaticClass()
{
	using TClass = UROS2InertiaMsg;
	if (!Z_Registration_Info_UClass_UROS2InertiaMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2InertiaMsg"),
			Z_Registration_Info_UClass_UROS2InertiaMsg.InnerSingleton,
			StaticRegisterNativesUROS2InertiaMsg,
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
	return Z_Registration_Info_UClass_UROS2InertiaMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2InertiaMsg_NoRegister()
{
	return UROS2InertiaMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2InertiaMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Inertia.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Inertia.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2InertiaMsg_GetMsg, "GetMsg" }, // 1468459297
		{ &Z_Construct_UFunction_UROS2InertiaMsg_SetMsg, "SetMsg" }, // 3428279303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2InertiaMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2InertiaMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2InertiaMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2InertiaMsg_Statics::ClassParams = {
	&UROS2InertiaMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2InertiaMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2InertiaMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2InertiaMsg()
{
	if (!Z_Registration_Info_UClass_UROS2InertiaMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2InertiaMsg.OuterSingleton, Z_Construct_UClass_UROS2InertiaMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2InertiaMsg.OuterSingleton;
}
UROS2InertiaMsg::UROS2InertiaMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2InertiaMsg);
UROS2InertiaMsg::~UROS2InertiaMsg() {}
// ********** End Class UROS2InertiaMsg ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSInertia::StaticStruct, Z_Construct_UScriptStruct_FROSInertia_Statics::NewStructOps, TEXT("ROSInertia"), &Z_Registration_Info_UScriptStruct_FROSInertia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSInertia), 329516648U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2InertiaMsg, UROS2InertiaMsg::StaticClass, TEXT("UROS2InertiaMsg"), &Z_Registration_Info_UClass_UROS2InertiaMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2InertiaMsg), 2475599508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h__Script_rclUE_4145374266(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Inertia_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
