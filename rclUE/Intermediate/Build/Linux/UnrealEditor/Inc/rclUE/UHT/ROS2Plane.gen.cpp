// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Plane.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Plane() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PlaneMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PlaneMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPlane();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPlane *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPlane;
class UScriptStruct* FROSPlane::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPlane.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPlane.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPlane, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPlane"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPlane.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Plane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coef_MetaData[] = {
		{ "Category", "ROSPlane" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Plane.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Coef_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Coef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPlane>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSPlane_Statics::NewProp_Coef_Inner = { "Coef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPlane_Statics::NewProp_Coef = { "Coef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPlane, Coef), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coef_MetaData), NewProp_Coef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPlane_Statics::NewProp_Coef_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPlane_Statics::NewProp_Coef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPlane_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPlane",
	Z_Construct_UScriptStruct_FROSPlane_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPlane_Statics::PropPointers),
	sizeof(FROSPlane),
	alignof(FROSPlane),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPlane_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPlane_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPlane()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPlane.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPlane.InnerSingleton, Z_Construct_UScriptStruct_FROSPlane_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPlane.InnerSingleton;
}
// ********** End ScriptStruct FROSPlane ***********************************************************

// ********** Begin Class UROS2PlaneMsg Function GetMsg ********************************************
struct Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics
{
	struct ROS2PlaneMsg_eventGetMsg_Parms
	{
		FROSPlane Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Plane.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PlaneMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPlane, METADATA_PARAMS(0, nullptr) }; // 3555916747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PlaneMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::ROS2PlaneMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::ROS2PlaneMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PlaneMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PlaneMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PlaneMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPlane,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PlaneMsg Function GetMsg **********************************************

// ********** Begin Class UROS2PlaneMsg Function SetMsg ********************************************
struct Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics
{
	struct ROS2PlaneMsg_eventSetMsg_Parms
	{
		FROSPlane Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Plane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PlaneMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPlane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3555916747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PlaneMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::ROS2PlaneMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::ROS2PlaneMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PlaneMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PlaneMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PlaneMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPlane,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PlaneMsg Function SetMsg **********************************************

// ********** Begin Class UROS2PlaneMsg ************************************************************
void UROS2PlaneMsg::StaticRegisterNativesUROS2PlaneMsg()
{
	UClass* Class = UROS2PlaneMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PlaneMsg::execGetMsg },
		{ "SetMsg", &UROS2PlaneMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PlaneMsg;
UClass* UROS2PlaneMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PlaneMsg;
	if (!Z_Registration_Info_UClass_UROS2PlaneMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PlaneMsg"),
			Z_Registration_Info_UClass_UROS2PlaneMsg.InnerSingleton,
			StaticRegisterNativesUROS2PlaneMsg,
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
	return Z_Registration_Info_UClass_UROS2PlaneMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PlaneMsg_NoRegister()
{
	return UROS2PlaneMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PlaneMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Plane.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Plane.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PlaneMsg_GetMsg, "GetMsg" }, // 1964749898
		{ &Z_Construct_UFunction_UROS2PlaneMsg_SetMsg, "SetMsg" }, // 3582992555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PlaneMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PlaneMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PlaneMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PlaneMsg_Statics::ClassParams = {
	&UROS2PlaneMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PlaneMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PlaneMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PlaneMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PlaneMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PlaneMsg.OuterSingleton, Z_Construct_UClass_UROS2PlaneMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PlaneMsg.OuterSingleton;
}
UROS2PlaneMsg::UROS2PlaneMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PlaneMsg);
UROS2PlaneMsg::~UROS2PlaneMsg() {}
// ********** End Class UROS2PlaneMsg **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Plane_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPlane::StaticStruct, Z_Construct_UScriptStruct_FROSPlane_Statics::NewStructOps, TEXT("ROSPlane"), &Z_Registration_Info_UScriptStruct_FROSPlane, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPlane), 3555916747U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PlaneMsg, UROS2PlaneMsg::StaticClass, TEXT("UROS2PlaneMsg"), &Z_Registration_Info_UClass_UROS2PlaneMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PlaneMsg), 4160639909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Plane_h__Script_rclUE_2624695912(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Plane_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Plane_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Plane_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Plane_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
