// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2UVCoordinate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2UVCoordinate() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2UVCoordinateMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2UVCoordinateMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSUVCoordinate();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSUVCoordinate **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSUVCoordinate;
class UScriptStruct* FROSUVCoordinate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUVCoordinate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSUVCoordinate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSUVCoordinate, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSUVCoordinate"));
	}
	return Z_Registration_Info_UScriptStruct_FROSUVCoordinate.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSUVCoordinate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UVCoordinate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "ROSUVCoordinate" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UVCoordinate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "ROSUVCoordinate" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UVCoordinate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSUVCoordinate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSUVCoordinate, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSUVCoordinate, V), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::NewProp_V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSUVCoordinate",
	Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::PropPointers),
	sizeof(FROSUVCoordinate),
	alignof(FROSUVCoordinate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSUVCoordinate()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUVCoordinate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSUVCoordinate.InnerSingleton, Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSUVCoordinate.InnerSingleton;
}
// ********** End ScriptStruct FROSUVCoordinate ****************************************************

// ********** Begin Class UROS2UVCoordinateMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics
{
	struct ROS2UVCoordinateMsg_eventGetMsg_Parms
	{
		FROSUVCoordinate Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2UVCoordinate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UVCoordinateMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSUVCoordinate, METADATA_PARAMS(0, nullptr) }; // 1480199750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UVCoordinateMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::ROS2UVCoordinateMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::ROS2UVCoordinateMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UVCoordinateMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSUVCoordinate,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2UVCoordinateMsg Function GetMsg ***************************************

// ********** Begin Class UROS2UVCoordinateMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics
{
	struct ROS2UVCoordinateMsg_eventSetMsg_Parms
	{
		FROSUVCoordinate Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2UVCoordinate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UVCoordinateMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSUVCoordinate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1480199750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UVCoordinateMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::ROS2UVCoordinateMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::ROS2UVCoordinateMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UVCoordinateMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSUVCoordinate,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2UVCoordinateMsg Function SetMsg ***************************************

// ********** Begin Class UROS2UVCoordinateMsg *****************************************************
void UROS2UVCoordinateMsg::StaticRegisterNativesUROS2UVCoordinateMsg()
{
	UClass* Class = UROS2UVCoordinateMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2UVCoordinateMsg::execGetMsg },
		{ "SetMsg", &UROS2UVCoordinateMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2UVCoordinateMsg;
UClass* UROS2UVCoordinateMsg::GetPrivateStaticClass()
{
	using TClass = UROS2UVCoordinateMsg;
	if (!Z_Registration_Info_UClass_UROS2UVCoordinateMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2UVCoordinateMsg"),
			Z_Registration_Info_UClass_UROS2UVCoordinateMsg.InnerSingleton,
			StaticRegisterNativesUROS2UVCoordinateMsg,
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
	return Z_Registration_Info_UClass_UROS2UVCoordinateMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2UVCoordinateMsg_NoRegister()
{
	return UROS2UVCoordinateMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2UVCoordinateMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2UVCoordinate.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2UVCoordinate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2UVCoordinateMsg_GetMsg, "GetMsg" }, // 2613718116
		{ &Z_Construct_UFunction_UROS2UVCoordinateMsg_SetMsg, "SetMsg" }, // 2404625443
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2UVCoordinateMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2UVCoordinateMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UVCoordinateMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2UVCoordinateMsg_Statics::ClassParams = {
	&UROS2UVCoordinateMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UVCoordinateMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2UVCoordinateMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2UVCoordinateMsg()
{
	if (!Z_Registration_Info_UClass_UROS2UVCoordinateMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2UVCoordinateMsg.OuterSingleton, Z_Construct_UClass_UROS2UVCoordinateMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2UVCoordinateMsg.OuterSingleton;
}
UROS2UVCoordinateMsg::UROS2UVCoordinateMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2UVCoordinateMsg);
UROS2UVCoordinateMsg::~UROS2UVCoordinateMsg() {}
// ********** End Class UROS2UVCoordinateMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSUVCoordinate::StaticStruct, Z_Construct_UScriptStruct_FROSUVCoordinate_Statics::NewStructOps, TEXT("ROSUVCoordinate"), &Z_Registration_Info_UScriptStruct_FROSUVCoordinate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSUVCoordinate), 1480199750U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2UVCoordinateMsg, UROS2UVCoordinateMsg::StaticClass, TEXT("UROS2UVCoordinateMsg"), &Z_Registration_Info_UClass_UROS2UVCoordinateMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2UVCoordinateMsg), 4133176762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h__Script_rclUE_1125097503(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
