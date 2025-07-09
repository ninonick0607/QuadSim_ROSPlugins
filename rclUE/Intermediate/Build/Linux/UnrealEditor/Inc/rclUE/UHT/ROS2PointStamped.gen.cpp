// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PointStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PointStamped() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPointStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPointStamped **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPointStamped;
class UScriptStruct* FROSPointStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPointStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPointStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPointStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPointStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPointStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPointStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "ROSPointStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPointStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPointStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPointStamped_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointStamped, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPointStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointStamped_Statics::NewProp_Point,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPointStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPointStamped",
	Z_Construct_UScriptStruct_FROSPointStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointStamped_Statics::PropPointers),
	sizeof(FROSPointStamped),
	alignof(FROSPointStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPointStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPointStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPointStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSPointStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPointStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSPointStamped ****************************************************

// ********** Begin Class UROS2PointStampedMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics
{
	struct ROS2PointStampedMsg_eventGetMsg_Parms
	{
		FROSPointStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPointStamped, METADATA_PARAMS(0, nullptr) }; // 1171843978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::ROS2PointStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::ROS2PointStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPointStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PointStampedMsg Function GetMsg ***************************************

// ********** Begin Class UROS2PointStampedMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics
{
	struct ROS2PointStampedMsg_eventSetMsg_Parms
	{
		FROSPointStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPointStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1171843978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::ROS2PointStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::ROS2PointStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPointStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PointStampedMsg Function SetMsg ***************************************

// ********** Begin Class UROS2PointStampedMsg *****************************************************
void UROS2PointStampedMsg::StaticRegisterNativesUROS2PointStampedMsg()
{
	UClass* Class = UROS2PointStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PointStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2PointStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PointStampedMsg;
UClass* UROS2PointStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PointStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2PointStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PointStampedMsg"),
			Z_Registration_Info_UClass_UROS2PointStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2PointStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2PointStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PointStampedMsg_NoRegister()
{
	return UROS2PointStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PointStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PointStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PointStampedMsg_GetMsg, "GetMsg" }, // 2357865135
		{ &Z_Construct_UFunction_UROS2PointStampedMsg_SetMsg, "SetMsg" }, // 4137005253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PointStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PointStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PointStampedMsg_Statics::ClassParams = {
	&UROS2PointStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PointStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PointStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PointStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PointStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2PointStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PointStampedMsg.OuterSingleton;
}
UROS2PointStampedMsg::UROS2PointStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PointStampedMsg);
UROS2PointStampedMsg::~UROS2PointStampedMsg() {}
// ********** End Class UROS2PointStampedMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPointStamped::StaticStruct, Z_Construct_UScriptStruct_FROSPointStamped_Statics::NewStructOps, TEXT("ROSPointStamped"), &Z_Registration_Info_UScriptStruct_FROSPointStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPointStamped), 1171843978U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PointStampedMsg, UROS2PointStampedMsg::StaticClass, TEXT("UROS2PointStampedMsg"), &Z_Registration_Info_UClass_UROS2PointStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PointStampedMsg), 4037610532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h__Script_rclUE_1815297767(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
