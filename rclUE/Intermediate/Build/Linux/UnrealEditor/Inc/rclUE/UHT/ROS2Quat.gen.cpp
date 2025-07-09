// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Quat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Quat() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2QuatMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2QuatMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSQuat();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSQuat **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSQuat;
class UScriptStruct* FROSQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSQuat, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSQuat"));
	}
	return Z_Registration_Info_UScriptStruct_FROSQuat.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSQuat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Quat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "ROSQuat" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Quat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "ROSQuat" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Quat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "ROSQuat" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Quat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "Category", "ROSQuat" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Quat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Y;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_W;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSQuat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSQuat_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSQuat, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSQuat_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSQuat, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSQuat_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSQuat, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSQuat_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSQuat, W), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSQuat_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSQuat_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSQuat_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSQuat_Statics::NewProp_W,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSQuat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSQuat",
	Z_Construct_UScriptStruct_FROSQuat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSQuat_Statics::PropPointers),
	sizeof(FROSQuat),
	alignof(FROSQuat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSQuat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSQuat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSQuat()
{
	if (!Z_Registration_Info_UScriptStruct_FROSQuat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSQuat.InnerSingleton, Z_Construct_UScriptStruct_FROSQuat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSQuat.InnerSingleton;
}
// ********** End ScriptStruct FROSQuat ************************************************************

// ********** Begin Class UROS2QuatMsg Function GetMsg *********************************************
struct Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics
{
	struct ROS2QuatMsg_eventGetMsg_Parms
	{
		FROSQuat Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Quat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2QuatMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSQuat, METADATA_PARAMS(0, nullptr) }; // 1842451244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2QuatMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::ROS2QuatMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::ROS2QuatMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2QuatMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2QuatMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2QuatMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSQuat,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2QuatMsg Function GetMsg ***********************************************

// ********** Begin Class UROS2QuatMsg Function SetMsg *********************************************
struct Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics
{
	struct ROS2QuatMsg_eventSetMsg_Parms
	{
		FROSQuat Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Quat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2QuatMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1842451244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2QuatMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::ROS2QuatMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::ROS2QuatMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2QuatMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2QuatMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2QuatMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSQuat,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2QuatMsg Function SetMsg ***********************************************

// ********** Begin Class UROS2QuatMsg *************************************************************
void UROS2QuatMsg::StaticRegisterNativesUROS2QuatMsg()
{
	UClass* Class = UROS2QuatMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2QuatMsg::execGetMsg },
		{ "SetMsg", &UROS2QuatMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2QuatMsg;
UClass* UROS2QuatMsg::GetPrivateStaticClass()
{
	using TClass = UROS2QuatMsg;
	if (!Z_Registration_Info_UClass_UROS2QuatMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2QuatMsg"),
			Z_Registration_Info_UClass_UROS2QuatMsg.InnerSingleton,
			StaticRegisterNativesUROS2QuatMsg,
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
	return Z_Registration_Info_UClass_UROS2QuatMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2QuatMsg_NoRegister()
{
	return UROS2QuatMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2QuatMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Quat.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Quat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2QuatMsg_GetMsg, "GetMsg" }, // 3011085360
		{ &Z_Construct_UFunction_UROS2QuatMsg_SetMsg, "SetMsg" }, // 3812810371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2QuatMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2QuatMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2QuatMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2QuatMsg_Statics::ClassParams = {
	&UROS2QuatMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2QuatMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2QuatMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2QuatMsg()
{
	if (!Z_Registration_Info_UClass_UROS2QuatMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2QuatMsg.OuterSingleton, Z_Construct_UClass_UROS2QuatMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2QuatMsg.OuterSingleton;
}
UROS2QuatMsg::UROS2QuatMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2QuatMsg);
UROS2QuatMsg::~UROS2QuatMsg() {}
// ********** End Class UROS2QuatMsg ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Quat_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSQuat::StaticStruct, Z_Construct_UScriptStruct_FROSQuat_Statics::NewStructOps, TEXT("ROSQuat"), &Z_Registration_Info_UScriptStruct_FROSQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSQuat), 1842451244U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2QuatMsg, UROS2QuatMsg::StaticClass, TEXT("UROS2QuatMsg"), &Z_Registration_Info_UClass_UROS2QuatMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2QuatMsg), 1968491657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Quat_h__Script_rclUE_1196767269(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Quat_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Quat_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Quat_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Quat_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
