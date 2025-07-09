// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Clock.h"
#include "rclUE/Public/Msgs/ROS2Time.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Clock() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2ClockMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2ClockMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSClock();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTime();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSClock *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSClock;
class UScriptStruct* FROSClock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSClock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSClock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSClock, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSClock"));
	}
	return Z_Registration_Info_UScriptStruct_FROSClock.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSClock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Clock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clock_MetaData[] = {
		{ "Category", "ROSClock" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Clock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Clock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSClock>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSClock_Statics::NewProp_Clock = { "Clock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSClock, Clock), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clock_MetaData), NewProp_Clock_MetaData) }; // 3189130280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSClock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSClock_Statics::NewProp_Clock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSClock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSClock_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSClock",
	Z_Construct_UScriptStruct_FROSClock_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSClock_Statics::PropPointers),
	sizeof(FROSClock),
	alignof(FROSClock),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSClock_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSClock_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSClock()
{
	if (!Z_Registration_Info_UScriptStruct_FROSClock.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSClock.InnerSingleton, Z_Construct_UScriptStruct_FROSClock_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSClock.InnerSingleton;
}
// ********** End ScriptStruct FROSClock ***********************************************************

// ********** Begin Class UROS2ClockMsg Function GetMsg ********************************************
struct Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics
{
	struct ROS2ClockMsg_eventGetMsg_Parms
	{
		FROSClock Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Clock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ClockMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSClock, METADATA_PARAMS(0, nullptr) }; // 3829948244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ClockMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::ROS2ClockMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::ROS2ClockMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ClockMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ClockMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ClockMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSClock,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2ClockMsg Function GetMsg **********************************************

// ********** Begin Class UROS2ClockMsg Function SetMsg ********************************************
struct Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics
{
	struct ROS2ClockMsg_eventSetMsg_Parms
	{
		FROSClock Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Clock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ClockMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSClock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3829948244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ClockMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::ROS2ClockMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::ROS2ClockMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ClockMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ClockMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ClockMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSClock,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2ClockMsg Function SetMsg **********************************************

// ********** Begin Class UROS2ClockMsg ************************************************************
void UROS2ClockMsg::StaticRegisterNativesUROS2ClockMsg()
{
	UClass* Class = UROS2ClockMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2ClockMsg::execGetMsg },
		{ "SetMsg", &UROS2ClockMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ClockMsg;
UClass* UROS2ClockMsg::GetPrivateStaticClass()
{
	using TClass = UROS2ClockMsg;
	if (!Z_Registration_Info_UClass_UROS2ClockMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ClockMsg"),
			Z_Registration_Info_UClass_UROS2ClockMsg.InnerSingleton,
			StaticRegisterNativesUROS2ClockMsg,
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
	return Z_Registration_Info_UClass_UROS2ClockMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ClockMsg_NoRegister()
{
	return UROS2ClockMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ClockMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Clock.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Clock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ClockMsg_GetMsg, "GetMsg" }, // 2499294909
		{ &Z_Construct_UFunction_UROS2ClockMsg_SetMsg, "SetMsg" }, // 982422295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ClockMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ClockMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ClockMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ClockMsg_Statics::ClassParams = {
	&UROS2ClockMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ClockMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ClockMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ClockMsg()
{
	if (!Z_Registration_Info_UClass_UROS2ClockMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ClockMsg.OuterSingleton, Z_Construct_UClass_UROS2ClockMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ClockMsg.OuterSingleton;
}
UROS2ClockMsg::UROS2ClockMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ClockMsg);
UROS2ClockMsg::~UROS2ClockMsg() {}
// ********** End Class UROS2ClockMsg **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Clock_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSClock::StaticStruct, Z_Construct_UScriptStruct_FROSClock_Statics::NewStructOps, TEXT("ROSClock"), &Z_Registration_Info_UScriptStruct_FROSClock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSClock), 3829948244U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ClockMsg, UROS2ClockMsg::StaticClass, TEXT("UROS2ClockMsg"), &Z_Registration_Info_UClass_UROS2ClockMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ClockMsg), 2958597117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Clock_h__Script_rclUE_2815097106(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Clock_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Clock_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Clock_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Clock_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
