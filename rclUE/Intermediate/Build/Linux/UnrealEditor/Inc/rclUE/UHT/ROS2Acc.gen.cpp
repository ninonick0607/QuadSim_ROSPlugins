// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Acc.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Acc() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2AccMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2AccMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAcc();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAcc ***********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAcc;
class UScriptStruct* FROSAcc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAcc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAcc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAcc, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAcc"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAcc.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAcc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Acc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Linear_MetaData[] = {
		{ "Category", "ROSAcc" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Acc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angular_MetaData[] = {
		{ "Category", "ROSAcc" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Acc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Linear;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Angular;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAcc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAcc_Statics::NewProp_Linear = { "Linear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAcc, Linear), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Linear_MetaData), NewProp_Linear_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAcc_Statics::NewProp_Angular = { "Angular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAcc, Angular), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angular_MetaData), NewProp_Angular_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAcc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAcc_Statics::NewProp_Linear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAcc_Statics::NewProp_Angular,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAcc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAcc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAcc",
	Z_Construct_UScriptStruct_FROSAcc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAcc_Statics::PropPointers),
	sizeof(FROSAcc),
	alignof(FROSAcc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAcc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAcc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAcc()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAcc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAcc.InnerSingleton, Z_Construct_UScriptStruct_FROSAcc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAcc.InnerSingleton;
}
// ********** End ScriptStruct FROSAcc *************************************************************

// ********** Begin Class UROS2AccMsg Function GetMsg **********************************************
struct Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics
{
	struct ROS2AccMsg_eventGetMsg_Parms
	{
		FROSAcc Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Acc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AccMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSAcc, METADATA_PARAMS(0, nullptr) }; // 404115498
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AccMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::ROS2AccMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::ROS2AccMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AccMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AccMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AccMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSAcc,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2AccMsg Function GetMsg ************************************************

// ********** Begin Class UROS2AccMsg Function SetMsg **********************************************
struct Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics
{
	struct ROS2AccMsg_eventSetMsg_Parms
	{
		FROSAcc Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Acc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AccMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSAcc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 404115498
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AccMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::ROS2AccMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::ROS2AccMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AccMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AccMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AccMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSAcc,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2AccMsg Function SetMsg ************************************************

// ********** Begin Class UROS2AccMsg **************************************************************
void UROS2AccMsg::StaticRegisterNativesUROS2AccMsg()
{
	UClass* Class = UROS2AccMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2AccMsg::execGetMsg },
		{ "SetMsg", &UROS2AccMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AccMsg;
UClass* UROS2AccMsg::GetPrivateStaticClass()
{
	using TClass = UROS2AccMsg;
	if (!Z_Registration_Info_UClass_UROS2AccMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AccMsg"),
			Z_Registration_Info_UClass_UROS2AccMsg.InnerSingleton,
			StaticRegisterNativesUROS2AccMsg,
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
	return Z_Registration_Info_UClass_UROS2AccMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AccMsg_NoRegister()
{
	return UROS2AccMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AccMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Acc.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Acc.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AccMsg_GetMsg, "GetMsg" }, // 1626735911
		{ &Z_Construct_UFunction_UROS2AccMsg_SetMsg, "SetMsg" }, // 3836142629
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AccMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AccMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AccMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AccMsg_Statics::ClassParams = {
	&UROS2AccMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AccMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AccMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AccMsg()
{
	if (!Z_Registration_Info_UClass_UROS2AccMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AccMsg.OuterSingleton, Z_Construct_UClass_UROS2AccMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AccMsg.OuterSingleton;
}
UROS2AccMsg::UROS2AccMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AccMsg);
UROS2AccMsg::~UROS2AccMsg() {}
// ********** End Class UROS2AccMsg ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Acc_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAcc::StaticStruct, Z_Construct_UScriptStruct_FROSAcc_Statics::NewStructOps, TEXT("ROSAcc"), &Z_Registration_Info_UScriptStruct_FROSAcc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAcc), 404115498U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AccMsg, UROS2AccMsg::StaticClass, TEXT("UROS2AccMsg"), &Z_Registration_Info_UClass_UROS2AccMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AccMsg), 2515676001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Acc_h__Script_rclUE_2344209831(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Acc_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Acc_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Acc_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Acc_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
