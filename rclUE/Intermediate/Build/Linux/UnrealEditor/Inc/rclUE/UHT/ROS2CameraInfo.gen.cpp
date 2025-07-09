// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2CameraInfo.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2RegionOfInterest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2CameraInfo() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2CameraInfoMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2CameraInfoMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSCameraInfo();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSRegionOfInterest();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSCameraInfo ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSCameraInfo;
class UScriptStruct* FROSCameraInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSCameraInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSCameraInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSCameraInfo, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSCameraInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FROSCameraInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSCameraInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistortionModel_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinningX_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinningY_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roi_MetaData[] = {
		{ "Category", "ROSCameraInfo" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DistortionModel;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_D_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_D;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_K_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_K;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_R_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_R;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_P_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_P;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_BinningX;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_BinningY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Roi;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSCameraInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_DistortionModel = { "DistortionModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, DistortionModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistortionModel_MetaData), NewProp_DistortionModel_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_D_Inner = { "D", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, D), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_D_MetaData), NewProp_D_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_K_Inner = { "K", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, K), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K_MetaData), NewProp_K_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_R_Inner = { "R", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, R), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_MetaData), NewProp_R_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_P_Inner = { "P", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, P), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P_MetaData), NewProp_P_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_BinningX = { "BinningX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, BinningX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinningX_MetaData), NewProp_BinningX_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_BinningY = { "BinningY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, BinningY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinningY_MetaData), NewProp_BinningY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_Roi = { "Roi", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCameraInfo, Roi), Z_Construct_UScriptStruct_FROSRegionOfInterest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roi_MetaData), NewProp_Roi_MetaData) }; // 3238538311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSCameraInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_DistortionModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_D_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_K_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_K,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_R_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_P_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_BinningX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_BinningY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewProp_Roi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCameraInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSCameraInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSCameraInfo",
	Z_Construct_UScriptStruct_FROSCameraInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCameraInfo_Statics::PropPointers),
	sizeof(FROSCameraInfo),
	alignof(FROSCameraInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCameraInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSCameraInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSCameraInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FROSCameraInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSCameraInfo.InnerSingleton, Z_Construct_UScriptStruct_FROSCameraInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSCameraInfo.InnerSingleton;
}
// ********** End ScriptStruct FROSCameraInfo ******************************************************

// ********** Begin Class UROS2CameraInfoMsg Function GetMsg ***************************************
struct Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics
{
	struct ROS2CameraInfoMsg_eventGetMsg_Parms
	{
		FROSCameraInfo Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CameraInfoMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSCameraInfo, METADATA_PARAMS(0, nullptr) }; // 2653271531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CameraInfoMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::ROS2CameraInfoMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::ROS2CameraInfoMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CameraInfoMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSCameraInfo,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2CameraInfoMsg Function GetMsg *****************************************

// ********** Begin Class UROS2CameraInfoMsg Function SetMsg ***************************************
struct Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics
{
	struct ROS2CameraInfoMsg_eventSetMsg_Parms
	{
		FROSCameraInfo Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CameraInfoMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSCameraInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2653271531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CameraInfoMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::ROS2CameraInfoMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::ROS2CameraInfoMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CameraInfoMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSCameraInfo,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2CameraInfoMsg Function SetMsg *****************************************

// ********** Begin Class UROS2CameraInfoMsg *******************************************************
void UROS2CameraInfoMsg::StaticRegisterNativesUROS2CameraInfoMsg()
{
	UClass* Class = UROS2CameraInfoMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2CameraInfoMsg::execGetMsg },
		{ "SetMsg", &UROS2CameraInfoMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2CameraInfoMsg;
UClass* UROS2CameraInfoMsg::GetPrivateStaticClass()
{
	using TClass = UROS2CameraInfoMsg;
	if (!Z_Registration_Info_UClass_UROS2CameraInfoMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2CameraInfoMsg"),
			Z_Registration_Info_UClass_UROS2CameraInfoMsg.InnerSingleton,
			StaticRegisterNativesUROS2CameraInfoMsg,
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
	return Z_Registration_Info_UClass_UROS2CameraInfoMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2CameraInfoMsg_NoRegister()
{
	return UROS2CameraInfoMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2CameraInfoMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2CameraInfo.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2CameraInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2CameraInfoMsg_GetMsg, "GetMsg" }, // 4050668584
		{ &Z_Construct_UFunction_UROS2CameraInfoMsg_SetMsg, "SetMsg" }, // 519547801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2CameraInfoMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2CameraInfoMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CameraInfoMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2CameraInfoMsg_Statics::ClassParams = {
	&UROS2CameraInfoMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CameraInfoMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2CameraInfoMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2CameraInfoMsg()
{
	if (!Z_Registration_Info_UClass_UROS2CameraInfoMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2CameraInfoMsg.OuterSingleton, Z_Construct_UClass_UROS2CameraInfoMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2CameraInfoMsg.OuterSingleton;
}
UROS2CameraInfoMsg::UROS2CameraInfoMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2CameraInfoMsg);
UROS2CameraInfoMsg::~UROS2CameraInfoMsg() {}
// ********** End Class UROS2CameraInfoMsg *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSCameraInfo::StaticStruct, Z_Construct_UScriptStruct_FROSCameraInfo_Statics::NewStructOps, TEXT("ROSCameraInfo"), &Z_Registration_Info_UScriptStruct_FROSCameraInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSCameraInfo), 2653271531U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2CameraInfoMsg, UROS2CameraInfoMsg::StaticClass, TEXT("UROS2CameraInfoMsg"), &Z_Registration_Info_UClass_UROS2CameraInfoMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2CameraInfoMsg), 1517713280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h__Script_rclUE_2316164051(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CameraInfo_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
