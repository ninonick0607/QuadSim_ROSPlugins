// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PointCloud.h"
#include "rclUE/Public/Msgs/ROS2ChannelFloat32.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Point32.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PointCloud() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointCloudMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointCloudMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSChannelFloat32();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoint32();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPointCloud();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPointCloud ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPointCloud;
class UScriptStruct* FROSPointCloud::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointCloud.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPointCloud.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPointCloud, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPointCloud"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPointCloud.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPointCloud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPointCloud" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "ROSPointCloud" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
		{ "Category", "ROSPointCloud" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPointCloud>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSPoint32, METADATA_PARAMS(0, nullptr) }; // 1868964832
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 1868964832
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSChannelFloat32, METADATA_PARAMS(0, nullptr) }; // 3296316203
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channels_MetaData), NewProp_Channels_MetaData) }; // 3296316203
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPointCloud_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Channels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewProp_Channels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointCloud_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPointCloud_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPointCloud",
	Z_Construct_UScriptStruct_FROSPointCloud_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointCloud_Statics::PropPointers),
	sizeof(FROSPointCloud),
	alignof(FROSPointCloud),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointCloud_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPointCloud_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPointCloud()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointCloud.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPointCloud.InnerSingleton, Z_Construct_UScriptStruct_FROSPointCloud_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPointCloud.InnerSingleton;
}
// ********** End ScriptStruct FROSPointCloud ******************************************************

// ********** Begin Class UROS2PointCloudMsg Function GetMsg ***************************************
struct Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics
{
	struct ROS2PointCloudMsg_eventGetMsg_Parms
	{
		FROSPointCloud Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointCloudMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPointCloud, METADATA_PARAMS(0, nullptr) }; // 3764909384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointCloudMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::ROS2PointCloudMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::ROS2PointCloudMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointCloudMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPointCloud,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PointCloudMsg Function GetMsg *****************************************

// ********** Begin Class UROS2PointCloudMsg Function SetMsg ***************************************
struct Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics
{
	struct ROS2PointCloudMsg_eventSetMsg_Parms
	{
		FROSPointCloud Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointCloudMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPointCloud, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3764909384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointCloudMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::ROS2PointCloudMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::ROS2PointCloudMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointCloudMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPointCloud,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PointCloudMsg Function SetMsg *****************************************

// ********** Begin Class UROS2PointCloudMsg *******************************************************
void UROS2PointCloudMsg::StaticRegisterNativesUROS2PointCloudMsg()
{
	UClass* Class = UROS2PointCloudMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PointCloudMsg::execGetMsg },
		{ "SetMsg", &UROS2PointCloudMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PointCloudMsg;
UClass* UROS2PointCloudMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PointCloudMsg;
	if (!Z_Registration_Info_UClass_UROS2PointCloudMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PointCloudMsg"),
			Z_Registration_Info_UClass_UROS2PointCloudMsg.InnerSingleton,
			StaticRegisterNativesUROS2PointCloudMsg,
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
	return Z_Registration_Info_UClass_UROS2PointCloudMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PointCloudMsg_NoRegister()
{
	return UROS2PointCloudMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PointCloudMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PointCloud.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PointCloudMsg_GetMsg, "GetMsg" }, // 1988363475
		{ &Z_Construct_UFunction_UROS2PointCloudMsg_SetMsg, "SetMsg" }, // 735632716
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PointCloudMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PointCloudMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointCloudMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PointCloudMsg_Statics::ClassParams = {
	&UROS2PointCloudMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointCloudMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PointCloudMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PointCloudMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PointCloudMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PointCloudMsg.OuterSingleton, Z_Construct_UClass_UROS2PointCloudMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PointCloudMsg.OuterSingleton;
}
UROS2PointCloudMsg::UROS2PointCloudMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PointCloudMsg);
UROS2PointCloudMsg::~UROS2PointCloudMsg() {}
// ********** End Class UROS2PointCloudMsg *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPointCloud::StaticStruct, Z_Construct_UScriptStruct_FROSPointCloud_Statics::NewStructOps, TEXT("ROSPointCloud"), &Z_Registration_Info_UScriptStruct_FROSPointCloud, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPointCloud), 3764909384U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PointCloudMsg, UROS2PointCloudMsg::StaticClass, TEXT("UROS2PointCloudMsg"), &Z_Registration_Info_UClass_UROS2PointCloudMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PointCloudMsg), 940841519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h__Script_rclUE_2628619530(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
