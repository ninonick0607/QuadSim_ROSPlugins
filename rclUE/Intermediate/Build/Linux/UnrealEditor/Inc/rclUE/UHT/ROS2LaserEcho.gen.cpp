// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2LaserEcho.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2LaserEcho() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2LaserEchoMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2LaserEchoMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLaserEcho();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSLaserEcho *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSLaserEcho;
class UScriptStruct* FROSLaserEcho::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLaserEcho.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSLaserEcho.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSLaserEcho, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSLaserEcho"));
	}
	return Z_Registration_Info_UScriptStruct_FROSLaserEcho.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSLaserEcho_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2LaserEcho.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Echoes_MetaData[] = {
		{ "Category", "ROSLaserEcho" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2LaserEcho.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Echoes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Echoes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSLaserEcho>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSLaserEcho_Statics::NewProp_Echoes_Inner = { "Echoes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSLaserEcho_Statics::NewProp_Echoes = { "Echoes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLaserEcho, Echoes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Echoes_MetaData), NewProp_Echoes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSLaserEcho_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLaserEcho_Statics::NewProp_Echoes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLaserEcho_Statics::NewProp_Echoes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLaserEcho_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSLaserEcho_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSLaserEcho",
	Z_Construct_UScriptStruct_FROSLaserEcho_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLaserEcho_Statics::PropPointers),
	sizeof(FROSLaserEcho),
	alignof(FROSLaserEcho),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLaserEcho_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSLaserEcho_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSLaserEcho()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLaserEcho.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSLaserEcho.InnerSingleton, Z_Construct_UScriptStruct_FROSLaserEcho_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSLaserEcho.InnerSingleton;
}
// ********** End ScriptStruct FROSLaserEcho *******************************************************

// ********** Begin Class UROS2LaserEchoMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics
{
	struct ROS2LaserEchoMsg_eventGetMsg_Parms
	{
		FROSLaserEcho Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2LaserEcho.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LaserEchoMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSLaserEcho, METADATA_PARAMS(0, nullptr) }; // 103261659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LaserEchoMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::ROS2LaserEchoMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::ROS2LaserEchoMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LaserEchoMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSLaserEcho,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2LaserEchoMsg Function GetMsg ******************************************

// ********** Begin Class UROS2LaserEchoMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics
{
	struct ROS2LaserEchoMsg_eventSetMsg_Parms
	{
		FROSLaserEcho Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2LaserEcho.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LaserEchoMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSLaserEcho, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 103261659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LaserEchoMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::ROS2LaserEchoMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::ROS2LaserEchoMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LaserEchoMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSLaserEcho,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2LaserEchoMsg Function SetMsg ******************************************

// ********** Begin Class UROS2LaserEchoMsg ********************************************************
void UROS2LaserEchoMsg::StaticRegisterNativesUROS2LaserEchoMsg()
{
	UClass* Class = UROS2LaserEchoMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2LaserEchoMsg::execGetMsg },
		{ "SetMsg", &UROS2LaserEchoMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2LaserEchoMsg;
UClass* UROS2LaserEchoMsg::GetPrivateStaticClass()
{
	using TClass = UROS2LaserEchoMsg;
	if (!Z_Registration_Info_UClass_UROS2LaserEchoMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2LaserEchoMsg"),
			Z_Registration_Info_UClass_UROS2LaserEchoMsg.InnerSingleton,
			StaticRegisterNativesUROS2LaserEchoMsg,
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
	return Z_Registration_Info_UClass_UROS2LaserEchoMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2LaserEchoMsg_NoRegister()
{
	return UROS2LaserEchoMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2LaserEchoMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2LaserEcho.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2LaserEcho.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2LaserEchoMsg_GetMsg, "GetMsg" }, // 3706167292
		{ &Z_Construct_UFunction_UROS2LaserEchoMsg_SetMsg, "SetMsg" }, // 3339041293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2LaserEchoMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2LaserEchoMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2LaserEchoMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2LaserEchoMsg_Statics::ClassParams = {
	&UROS2LaserEchoMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2LaserEchoMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2LaserEchoMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2LaserEchoMsg()
{
	if (!Z_Registration_Info_UClass_UROS2LaserEchoMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2LaserEchoMsg.OuterSingleton, Z_Construct_UClass_UROS2LaserEchoMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2LaserEchoMsg.OuterSingleton;
}
UROS2LaserEchoMsg::UROS2LaserEchoMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2LaserEchoMsg);
UROS2LaserEchoMsg::~UROS2LaserEchoMsg() {}
// ********** End Class UROS2LaserEchoMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSLaserEcho::StaticStruct, Z_Construct_UScriptStruct_FROSLaserEcho_Statics::NewStructOps, TEXT("ROSLaserEcho"), &Z_Registration_Info_UScriptStruct_FROSLaserEcho, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSLaserEcho), 103261659U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2LaserEchoMsg, UROS2LaserEchoMsg::StaticClass, TEXT("UROS2LaserEchoMsg"), &Z_Registration_Info_UClass_UROS2LaserEchoMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2LaserEchoMsg), 799642358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h__Script_rclUE_470986013(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2LaserEcho_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
