// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2TFStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2TFStamped() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TFStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2TFStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTFStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTFStamped *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTFStamped;
class UScriptStruct* FROSTFStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTFStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTFStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTFStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTFStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTFStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTFStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSTFStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildFrameId_MetaData[] = {
		{ "Category", "ROSTFStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "ROSTFStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChildFrameId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTFStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTFStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTFStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSTFStamped_Statics::NewProp_ChildFrameId = { "ChildFrameId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTFStamped, ChildFrameId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildFrameId_MetaData), NewProp_ChildFrameId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSTFStamped_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTFStamped, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTFStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTFStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTFStamped_Statics::NewProp_ChildFrameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTFStamped_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTFStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTFStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTFStamped",
	Z_Construct_UScriptStruct_FROSTFStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTFStamped_Statics::PropPointers),
	sizeof(FROSTFStamped),
	alignof(FROSTFStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTFStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTFStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTFStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTFStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTFStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSTFStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTFStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSTFStamped *******************************************************

// ********** Begin Class UROS2TFStampedMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics
{
	struct ROS2TFStampedMsg_eventGetMsg_Parms
	{
		FROSTFStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TFStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSTFStamped, METADATA_PARAMS(0, nullptr) }; // 1072931543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TFStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::ROS2TFStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::ROS2TFStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TFStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSTFStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2TFStampedMsg Function GetMsg ******************************************

// ********** Begin Class UROS2TFStampedMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics
{
	struct ROS2TFStampedMsg_eventSetMsg_Parms
	{
		FROSTFStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TFStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSTFStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1072931543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TFStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::ROS2TFStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::ROS2TFStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TFStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSTFStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2TFStampedMsg Function SetMsg ******************************************

// ********** Begin Class UROS2TFStampedMsg ********************************************************
void UROS2TFStampedMsg::StaticRegisterNativesUROS2TFStampedMsg()
{
	UClass* Class = UROS2TFStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2TFStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2TFStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TFStampedMsg;
UClass* UROS2TFStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2TFStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2TFStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TFStampedMsg"),
			Z_Registration_Info_UClass_UROS2TFStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2TFStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2TFStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TFStampedMsg_NoRegister()
{
	return UROS2TFStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TFStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2TFStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2TFStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TFStampedMsg_GetMsg, "GetMsg" }, // 719538509
		{ &Z_Construct_UFunction_UROS2TFStampedMsg_SetMsg, "SetMsg" }, // 1863369996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TFStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TFStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TFStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TFStampedMsg_Statics::ClassParams = {
	&UROS2TFStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TFStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TFStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TFStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2TFStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TFStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2TFStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TFStampedMsg.OuterSingleton;
}
UROS2TFStampedMsg::UROS2TFStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TFStampedMsg);
UROS2TFStampedMsg::~UROS2TFStampedMsg() {}
// ********** End Class UROS2TFStampedMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTFStamped::StaticStruct, Z_Construct_UScriptStruct_FROSTFStamped_Statics::NewStructOps, TEXT("ROSTFStamped"), &Z_Registration_Info_UScriptStruct_FROSTFStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTFStamped), 1072931543U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TFStampedMsg, UROS2TFStampedMsg::StaticClass, TEXT("UROS2TFStampedMsg"), &Z_Registration_Info_UClass_UROS2TFStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TFStampedMsg), 3870336954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h__Script_rclUE_2809332278(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2TFStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
