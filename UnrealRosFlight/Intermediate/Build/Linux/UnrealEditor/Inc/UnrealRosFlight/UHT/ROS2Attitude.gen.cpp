// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Msgs/ROS2Attitude.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Attitude() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2AttitudeMsg();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2AttitudeMsg_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSAttitude();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAttitude ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAttitude;
class UScriptStruct* FROSAttitude::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAttitude.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAttitude.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAttitude, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSAttitude"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAttitude.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAttitude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Attitude.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSAttitude" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Attitude.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attitude_MetaData[] = {
		{ "Category", "ROSAttitude" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Attitude.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "ROSAttitude" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Attitude.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAttitude>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAttitude_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAttitude, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAttitude_Statics::NewProp_Attitude = { "Attitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAttitude, Attitude), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attitude_MetaData), NewProp_Attitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSAttitude_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAttitude, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAttitude_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAttitude_Statics::NewProp_Attitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAttitude_Statics::NewProp_AngularVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAttitude_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSAttitude",
	Z_Construct_UScriptStruct_FROSAttitude_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttitude_Statics::PropPointers),
	sizeof(FROSAttitude),
	alignof(FROSAttitude),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttitude_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAttitude_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAttitude()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAttitude.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAttitude.InnerSingleton, Z_Construct_UScriptStruct_FROSAttitude_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAttitude.InnerSingleton;
}
// ********** End ScriptStruct FROSAttitude ********************************************************

// ********** Begin Class UROS2AttitudeMsg Function GetMsg *****************************************
struct Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics
{
	struct ROS2AttitudeMsg_eventGetMsg_Parms
	{
		FROSAttitude Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Attitude.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AttitudeMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSAttitude, METADATA_PARAMS(0, nullptr) }; // 573142067
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AttitudeMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::ROS2AttitudeMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::ROS2AttitudeMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AttitudeMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSAttitude,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2AttitudeMsg Function GetMsg *******************************************

// ********** Begin Class UROS2AttitudeMsg Function SetMsg *****************************************
struct Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics
{
	struct ROS2AttitudeMsg_eventSetMsg_Parms
	{
		FROSAttitude Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Attitude.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AttitudeMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 573142067
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AttitudeMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::ROS2AttitudeMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::ROS2AttitudeMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AttitudeMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSAttitude,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2AttitudeMsg Function SetMsg *******************************************

// ********** Begin Class UROS2AttitudeMsg *********************************************************
void UROS2AttitudeMsg::StaticRegisterNativesUROS2AttitudeMsg()
{
	UClass* Class = UROS2AttitudeMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2AttitudeMsg::execGetMsg },
		{ "SetMsg", &UROS2AttitudeMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AttitudeMsg;
UClass* UROS2AttitudeMsg::GetPrivateStaticClass()
{
	using TClass = UROS2AttitudeMsg;
	if (!Z_Registration_Info_UClass_UROS2AttitudeMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AttitudeMsg"),
			Z_Registration_Info_UClass_UROS2AttitudeMsg.InnerSingleton,
			StaticRegisterNativesUROS2AttitudeMsg,
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
	return Z_Registration_Info_UClass_UROS2AttitudeMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AttitudeMsg_NoRegister()
{
	return UROS2AttitudeMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AttitudeMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Attitude.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Attitude.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AttitudeMsg_GetMsg, "GetMsg" }, // 790360607
		{ &Z_Construct_UFunction_UROS2AttitudeMsg_SetMsg, "SetMsg" }, // 1520311846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AttitudeMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AttitudeMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AttitudeMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AttitudeMsg_Statics::ClassParams = {
	&UROS2AttitudeMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AttitudeMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AttitudeMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AttitudeMsg()
{
	if (!Z_Registration_Info_UClass_UROS2AttitudeMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AttitudeMsg.OuterSingleton, Z_Construct_UClass_UROS2AttitudeMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AttitudeMsg.OuterSingleton;
}
UROS2AttitudeMsg::UROS2AttitudeMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AttitudeMsg);
UROS2AttitudeMsg::~UROS2AttitudeMsg() {}
// ********** End Class UROS2AttitudeMsg ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Attitude_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAttitude::StaticStruct, Z_Construct_UScriptStruct_FROSAttitude_Statics::NewStructOps, TEXT("ROSAttitude"), &Z_Registration_Info_UScriptStruct_FROSAttitude, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAttitude), 573142067U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AttitudeMsg, UROS2AttitudeMsg::StaticClass, TEXT("UROS2AttitudeMsg"), &Z_Registration_Info_UClass_UROS2AttitudeMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AttitudeMsg), 630671601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Attitude_h__Script_UnrealRosFlight_2968629901(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Attitude_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Attitude_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Attitude_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Attitude_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
