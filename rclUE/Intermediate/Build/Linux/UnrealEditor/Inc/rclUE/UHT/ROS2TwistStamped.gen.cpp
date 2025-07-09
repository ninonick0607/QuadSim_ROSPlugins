// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2TwistStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Twist.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2TwistStamped() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TwistStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TwistStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwist();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTwistStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTwistStamped **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTwistStamped;
class UScriptStruct* FROSTwistStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTwistStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTwistStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTwistStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTwistStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTwistStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTwistStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSTwistStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "ROSTwistStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTwistStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTwistStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTwistStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTwistStamped_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTwistStamped, Twist), Z_Construct_UScriptStruct_FROSTwist, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) }; // 3641426361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTwistStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTwistStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTwistStamped_Statics::NewProp_Twist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTwistStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTwistStamped",
	Z_Construct_UScriptStruct_FROSTwistStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistStamped_Statics::PropPointers),
	sizeof(FROSTwistStamped),
	alignof(FROSTwistStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTwistStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTwistStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTwistStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTwistStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTwistStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSTwistStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTwistStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSTwistStamped ****************************************************

// ********** Begin Class UROS2TwistStampedMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics
{
	struct ROS2TwistStampedMsg_eventGetMsg_Parms
	{
		FROSTwistStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TwistStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTwistStamped, METADATA_PARAMS(0, nullptr) }; // 2256487625
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TwistStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::ROS2TwistStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::ROS2TwistStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TwistStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTwistStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TwistStampedMsg Function GetMsg ***************************************

// ********** Begin Class UROS2TwistStampedMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics
{
	struct ROS2TwistStampedMsg_eventSetMsg_Parms
	{
		FROSTwistStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TwistStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTwistStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2256487625
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TwistStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::ROS2TwistStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::ROS2TwistStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TwistStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTwistStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TwistStampedMsg Function SetMsg ***************************************

// ********** Begin Class UROS2TwistStampedMsg *****************************************************
void UROS2TwistStampedMsg::StaticRegisterNativesUROS2TwistStampedMsg()
{
	UClass* Class = UROS2TwistStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2TwistStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2TwistStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TwistStampedMsg;
UClass* UROS2TwistStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TwistStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2TwistStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TwistStampedMsg"),
			Z_Registration_Info_UClass_UROS2TwistStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2TwistStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2TwistStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TwistStampedMsg_NoRegister()
{
	return UROS2TwistStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TwistStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2TwistStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TwistStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TwistStampedMsg_GetMsg, "GetMsg" }, // 2981143169
		{ &Z_Construct_UFunction_UROS2TwistStampedMsg_SetMsg, "SetMsg" }, // 1375686403
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TwistStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TwistStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TwistStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TwistStampedMsg_Statics::ClassParams = {
	&UROS2TwistStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TwistStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TwistStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TwistStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TwistStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TwistStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2TwistStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TwistStampedMsg.OuterSingleton;
}
UROS2TwistStampedMsg::UROS2TwistStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TwistStampedMsg);
UROS2TwistStampedMsg::~UROS2TwistStampedMsg() {}
// ********** End Class UROS2TwistStampedMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTwistStamped::StaticStruct, Z_Construct_UScriptStruct_FROSTwistStamped_Statics::NewStructOps, TEXT("ROSTwistStamped"), &Z_Registration_Info_UScriptStruct_FROSTwistStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTwistStamped), 2256487625U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TwistStampedMsg, UROS2TwistStampedMsg::StaticClass, TEXT("UROS2TwistStampedMsg"), &Z_Registration_Info_UClass_UROS2TwistStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TwistStampedMsg), 4021358311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistStamped_h__Script_rclUE_262409136(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TwistStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
