// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2TwistCovStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2TwistCov.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2TwistCovStamped() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TwistCovStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TwistCovStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwistCov();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwistCovStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTwistCovStamped ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTwistCovStamped;
class UScriptStruct* FROSTwistCovStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTwistCovStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTwistCovStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTwistCovStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTwistCovStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTwistCovStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCovStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSTwistCovStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCovStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "ROSTwistCovStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCovStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTwistCovStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTwistCovStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTwistCovStamped, Twist), Z_Construct_UScriptStruct_FROSTwistCov, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) }; // 2843877648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::NewProp_Twist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTwistCovStamped",
	Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::PropPointers),
	sizeof(FROSTwistCovStamped),
	alignof(FROSTwistCovStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTwistCovStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTwistCovStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTwistCovStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTwistCovStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSTwistCovStamped *************************************************

// ********** Begin Class UROS2TwistCovStampedMsg Function GetMsg **********************************
struct Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics
{
	struct ROS2TwistCovStampedMsg_eventGetMsg_Parms
	{
		FROSTwistCovStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCovStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TwistCovStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTwistCovStamped, METADATA_PARAMS(0, nullptr) }; // 2696958979
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TwistCovStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::ROS2TwistCovStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::ROS2TwistCovStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TwistCovStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTwistCovStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TwistCovStampedMsg Function GetMsg ************************************

// ********** Begin Class UROS2TwistCovStampedMsg Function SetMsg **********************************
struct Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics
{
	struct ROS2TwistCovStampedMsg_eventSetMsg_Parms
	{
		FROSTwistCovStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCovStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TwistCovStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTwistCovStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2696958979
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TwistCovStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::ROS2TwistCovStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::ROS2TwistCovStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TwistCovStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTwistCovStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TwistCovStampedMsg Function SetMsg ************************************

// ********** Begin Class UROS2TwistCovStampedMsg **************************************************
void UROS2TwistCovStampedMsg::StaticRegisterNativesUROS2TwistCovStampedMsg()
{
	UClass* Class = UROS2TwistCovStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2TwistCovStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2TwistCovStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TwistCovStampedMsg;
UClass* UROS2TwistCovStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TwistCovStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2TwistCovStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TwistCovStampedMsg"),
			Z_Registration_Info_UClass_UROS2TwistCovStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2TwistCovStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2TwistCovStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TwistCovStampedMsg_NoRegister()
{
	return UROS2TwistCovStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TwistCovStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2TwistCovStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistCovStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TwistCovStampedMsg_GetMsg, "GetMsg" }, // 4131018504
		{ &Z_Construct_UFunction_UROS2TwistCovStampedMsg_SetMsg, "SetMsg" }, // 650294841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TwistCovStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TwistCovStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TwistCovStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TwistCovStampedMsg_Statics::ClassParams = {
	&UROS2TwistCovStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TwistCovStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TwistCovStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TwistCovStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TwistCovStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TwistCovStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2TwistCovStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TwistCovStampedMsg.OuterSingleton;
}
UROS2TwistCovStampedMsg::UROS2TwistCovStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TwistCovStampedMsg);
UROS2TwistCovStampedMsg::~UROS2TwistCovStampedMsg() {}
// ********** End Class UROS2TwistCovStampedMsg ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCovStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTwistCovStamped::StaticStruct, Z_Construct_UScriptStruct_FROSTwistCovStamped_Statics::NewStructOps, TEXT("ROSTwistCovStamped"), &Z_Registration_Info_UScriptStruct_FROSTwistCovStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTwistCovStamped), 2696958979U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TwistCovStampedMsg, UROS2TwistCovStampedMsg::StaticClass, TEXT("UROS2TwistCovStampedMsg"), &Z_Registration_Info_UClass_UROS2TwistCovStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TwistCovStampedMsg), 3491113452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCovStamped_h__Script_rclUE_2481872664(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCovStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCovStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCovStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistCovStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
