// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2ColorRGBA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ColorRGBA() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2ColorRGBAMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2ColorRGBAMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSColorRGBA();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSColorRGBA *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSColorRGBA;
class UScriptStruct* FROSColorRGBA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSColorRGBA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSColorRGBA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSColorRGBA, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSColorRGBA"));
	}
	return Z_Registration_Info_UScriptStruct_FROSColorRGBA.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSColorRGBA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ColorRGBA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
		{ "Category", "ROSColorRGBA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ColorRGBA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[] = {
		{ "Category", "ROSColorRGBA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ColorRGBA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "ROSColorRGBA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ColorRGBA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "ROSColorRGBA" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ColorRGBA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_G;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSColorRGBA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSColorRGBA, R), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_MetaData), NewProp_R_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSColorRGBA, G), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_G_MetaData), NewProp_G_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSColorRGBA, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSColorRGBA, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSColorRGBA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSColorRGBA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSColorRGBA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSColorRGBA",
	Z_Construct_UScriptStruct_FROSColorRGBA_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSColorRGBA_Statics::PropPointers),
	sizeof(FROSColorRGBA),
	alignof(FROSColorRGBA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSColorRGBA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSColorRGBA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSColorRGBA()
{
	if (!Z_Registration_Info_UScriptStruct_FROSColorRGBA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSColorRGBA.InnerSingleton, Z_Construct_UScriptStruct_FROSColorRGBA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSColorRGBA.InnerSingleton;
}
// ********** End ScriptStruct FROSColorRGBA *******************************************************

// ********** Begin Class UROS2ColorRGBAMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics
{
	struct ROS2ColorRGBAMsg_eventGetMsg_Parms
	{
		FROSColorRGBA Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ColorRGBA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ColorRGBAMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSColorRGBA, METADATA_PARAMS(0, nullptr) }; // 3909327250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ColorRGBAMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::ROS2ColorRGBAMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::ROS2ColorRGBAMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ColorRGBAMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSColorRGBA,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2ColorRGBAMsg Function GetMsg ******************************************

// ********** Begin Class UROS2ColorRGBAMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics
{
	struct ROS2ColorRGBAMsg_eventSetMsg_Parms
	{
		FROSColorRGBA Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ColorRGBA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ColorRGBAMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSColorRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3909327250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ColorRGBAMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::ROS2ColorRGBAMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::ROS2ColorRGBAMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ColorRGBAMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSColorRGBA,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2ColorRGBAMsg Function SetMsg ******************************************

// ********** Begin Class UROS2ColorRGBAMsg ********************************************************
void UROS2ColorRGBAMsg::StaticRegisterNativesUROS2ColorRGBAMsg()
{
	UClass* Class = UROS2ColorRGBAMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2ColorRGBAMsg::execGetMsg },
		{ "SetMsg", &UROS2ColorRGBAMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ColorRGBAMsg;
UClass* UROS2ColorRGBAMsg::GetPrivateStaticClass()
{
	using TClass = UROS2ColorRGBAMsg;
	if (!Z_Registration_Info_UClass_UROS2ColorRGBAMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ColorRGBAMsg"),
			Z_Registration_Info_UClass_UROS2ColorRGBAMsg.InnerSingleton,
			StaticRegisterNativesUROS2ColorRGBAMsg,
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
	return Z_Registration_Info_UClass_UROS2ColorRGBAMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ColorRGBAMsg_NoRegister()
{
	return UROS2ColorRGBAMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ColorRGBAMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2ColorRGBA.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ColorRGBA.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ColorRGBAMsg_GetMsg, "GetMsg" }, // 704831315
		{ &Z_Construct_UFunction_UROS2ColorRGBAMsg_SetMsg, "SetMsg" }, // 4284875942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ColorRGBAMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ColorRGBAMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ColorRGBAMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ColorRGBAMsg_Statics::ClassParams = {
	&UROS2ColorRGBAMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ColorRGBAMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ColorRGBAMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ColorRGBAMsg()
{
	if (!Z_Registration_Info_UClass_UROS2ColorRGBAMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ColorRGBAMsg.OuterSingleton, Z_Construct_UClass_UROS2ColorRGBAMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ColorRGBAMsg.OuterSingleton;
}
UROS2ColorRGBAMsg::UROS2ColorRGBAMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ColorRGBAMsg);
UROS2ColorRGBAMsg::~UROS2ColorRGBAMsg() {}
// ********** End Class UROS2ColorRGBAMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ColorRGBA_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSColorRGBA::StaticStruct, Z_Construct_UScriptStruct_FROSColorRGBA_Statics::NewStructOps, TEXT("ROSColorRGBA"), &Z_Registration_Info_UScriptStruct_FROSColorRGBA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSColorRGBA), 3909327250U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ColorRGBAMsg, UROS2ColorRGBAMsg::StaticClass, TEXT("UROS2ColorRGBAMsg"), &Z_Registration_Info_UClass_UROS2ColorRGBAMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ColorRGBAMsg), 108913857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ColorRGBA_h__Script_rclUE_2961234674(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ColorRGBA_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ColorRGBA_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ColorRGBA_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ColorRGBA_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
