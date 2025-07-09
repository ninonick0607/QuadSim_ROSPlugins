// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Actions/ROS2LookupTF.h"
#include "rclUE/Public/Msgs/ROS2Duration.h"
#include "rclUE/Public/Msgs/ROS2TF2Err.h"
#include "rclUE/Public/Msgs/ROS2TFStamped.h"
#include "rclUE/Public/Msgs/ROS2Time.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2LookupTF() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction();
RCLUE_API UClass* Z_Construct_UClass_UROS2LookupTFAction();
RCLUE_API UClass* Z_Construct_UClass_UROS2LookupTFAction_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDuration();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFFB();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFGRReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFGRRes();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFSGReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFSGRes();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTF2Err();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTFStamped();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTime();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSLookupTFSGReq *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSLookupTFSGReq;
class UScriptStruct* FROSLookupTFSGReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFSGReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSLookupTFSGReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSLookupTFSGReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSLookupTFSGReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFSGReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFrame_MetaData[] = {
		{ "Category", "ROSLookupTFSGReq" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFrame_MetaData[] = {
		{ "Category", "ROSLookupTFSGReq" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTime_MetaData[] = {
		{ "Category", "ROSLookupTFSGReq" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[] = {
		{ "Category", "ROSLookupTFSGReq" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTime_MetaData[] = {
		{ "Category", "ROSLookupTFSGReq" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedFrame_MetaData[] = {
		{ "Category", "ROSLookupTFSGReq" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdvanced_MetaData[] = {
		{ "Category", "ROSLookupTFSGReq" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetFrame;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FixedFrame;
	static void NewProp_bAdvanced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvanced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSLookupTFSGReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_TargetFrame = { "TargetFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFSGReq, TargetFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFrame_MetaData), NewProp_TargetFrame_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_SourceFrame = { "SourceFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFSGReq, SourceFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFrame_MetaData), NewProp_SourceFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_SourceTime = { "SourceTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFSGReq, SourceTime), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTime_MetaData), NewProp_SourceTime_MetaData) }; // 3189130280
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFSGReq, Timeout), Z_Construct_UScriptStruct_FROSDuration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeout_MetaData), NewProp_Timeout_MetaData) }; // 3152230835
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_TargetTime = { "TargetTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFSGReq, TargetTime), Z_Construct_UScriptStruct_FROSTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTime_MetaData), NewProp_TargetTime_MetaData) }; // 3189130280
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_FixedFrame = { "FixedFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFSGReq, FixedFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedFrame_MetaData), NewProp_FixedFrame_MetaData) };
void Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_bAdvanced_SetBit(void* Obj)
{
	((FROSLookupTFSGReq*)Obj)->bAdvanced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_bAdvanced = { "bAdvanced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSLookupTFSGReq), &Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_bAdvanced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdvanced_MetaData), NewProp_bAdvanced_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_TargetFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_SourceFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_SourceTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_TargetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_FixedFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewProp_bAdvanced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSLookupTFSGReq",
	Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::PropPointers),
	sizeof(FROSLookupTFSGReq),
	alignof(FROSLookupTFSGReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFSGReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFSGReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSLookupTFSGReq.InnerSingleton, Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFSGReq.InnerSingleton;
}
// ********** End ScriptStruct FROSLookupTFSGReq ***************************************************

// ********** Begin ScriptStruct FROSLookupTFSGRes *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSLookupTFSGRes;
class UScriptStruct* FROSLookupTFSGRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFSGRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSLookupTFSGRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSLookupTFSGRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSLookupTFSGRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFSGRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccepted_MetaData[] = {
		{ "Category", "ROSLookupTFSGRes" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamp_MetaData[] = {
		{ "Category", "ROSLookupTFSGRes" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAccepted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccepted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSLookupTFSGRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::NewProp_bAccepted_SetBit(void* Obj)
{
	((FROSLookupTFSGRes*)Obj)->bAccepted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::NewProp_bAccepted = { "bAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSLookupTFSGRes), &Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::NewProp_bAccepted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccepted_MetaData), NewProp_bAccepted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::NewProp_Stamp = { "Stamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFSGRes, Stamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamp_MetaData), NewProp_Stamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::NewProp_bAccepted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::NewProp_Stamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSLookupTFSGRes",
	Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::PropPointers),
	sizeof(FROSLookupTFSGRes),
	alignof(FROSLookupTFSGRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFSGRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFSGRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSLookupTFSGRes.InnerSingleton, Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFSGRes.InnerSingleton;
}
// ********** End ScriptStruct FROSLookupTFSGRes ***************************************************

// ********** Begin ScriptStruct FROSLookupTFGRReq *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSLookupTFGRReq;
class UScriptStruct* FROSLookupTFGRReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFGRReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSLookupTFGRReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSLookupTFGRReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSLookupTFGRReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFGRReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSLookupTFGRReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSLookupTFGRReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSLookupTFGRReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSLookupTFGRReq",
	nullptr,
	0,
	sizeof(FROSLookupTFGRReq),
	alignof(FROSLookupTFGRReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFGRReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSLookupTFGRReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFGRReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFGRReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSLookupTFGRReq.InnerSingleton, Z_Construct_UScriptStruct_FROSLookupTFGRReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFGRReq.InnerSingleton;
}
// ********** End ScriptStruct FROSLookupTFGRReq ***************************************************

// ********** Begin ScriptStruct FROSLookupTFGRRes *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSLookupTFGRRes;
class UScriptStruct* FROSLookupTFGRRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFGRRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSLookupTFGRRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSLookupTFGRRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSLookupTFGRRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFGRRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GRResStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "ROSLookupTFGRRes" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "Category", "ROSLookupTFGRRes" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_GRResStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSLookupTFGRRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::NewProp_GRResStatus = { "GRResStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFGRRes, GRResStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GRResStatus_MetaData), NewProp_GRResStatus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFGRRes, Transform), Z_Construct_UScriptStruct_FROSTFStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) }; // 1072931543
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSLookupTFGRRes, Error), Z_Construct_UScriptStruct_FROSTF2Err, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) }; // 422028527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::NewProp_GRResStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSLookupTFGRRes",
	Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::PropPointers),
	sizeof(FROSLookupTFGRRes),
	alignof(FROSLookupTFGRRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFGRRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFGRRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSLookupTFGRRes.InnerSingleton, Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFGRRes.InnerSingleton;
}
// ********** End ScriptStruct FROSLookupTFGRRes ***************************************************

// ********** Begin ScriptStruct FROSLookupTFFB ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSLookupTFFB;
class UScriptStruct* FROSLookupTFFB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFFB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSLookupTFFB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSLookupTFFB, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSLookupTFFB"));
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFFB.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSLookupTFFB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSLookupTFFB>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSLookupTFFB_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSLookupTFFB",
	nullptr,
	0,
	sizeof(FROSLookupTFFB),
	alignof(FROSLookupTFFB),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSLookupTFFB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSLookupTFFB_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSLookupTFFB()
{
	if (!Z_Registration_Info_UScriptStruct_FROSLookupTFFB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSLookupTFFB.InnerSingleton, Z_Construct_UScriptStruct_FROSLookupTFFB_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSLookupTFFB.InnerSingleton;
}
// ********** End ScriptStruct FROSLookupTFFB ******************************************************

// ********** Begin Class UROS2LookupTFAction Function GetFeedback *********************************
struct Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics
{
	struct ROS2LookupTFAction_eventGetFeedback_Parms
	{
		FROSLookupTFFB Feedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventGetFeedback_Parms, Feedback), Z_Construct_UScriptStruct_FROSLookupTFFB, METADATA_PARAMS(0, nullptr) }; // 4149667971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::NewProp_Feedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "GetFeedback", Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::ROS2LookupTFAction_eventGetFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::ROS2LookupTFAction_eventGetFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execGetFeedback)
{
	P_GET_STRUCT_REF(FROSLookupTFFB,Z_Param_Out_Feedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFeedback(Z_Param_Out_Feedback);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function GetFeedback ***********************************

// ********** Begin Class UROS2LookupTFAction Function GetGoalRequest ******************************
struct Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics
{
	struct ROS2LookupTFAction_eventGetGoalRequest_Parms
	{
		FROSLookupTFSGReq Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventGetGoalRequest_Parms, Goal), Z_Construct_UScriptStruct_FROSLookupTFSGReq, METADATA_PARAMS(0, nullptr) }; // 4095997372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "GetGoalRequest", Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::ROS2LookupTFAction_eventGetGoalRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::ROS2LookupTFAction_eventGetGoalRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execGetGoalRequest)
{
	P_GET_STRUCT_REF(FROSLookupTFSGReq,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGoalRequest(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function GetGoalRequest ********************************

// ********** Begin Class UROS2LookupTFAction Function GetGoalResponse *****************************
struct Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics
{
	struct ROS2LookupTFAction_eventGetGoalResponse_Parms
	{
		FROSLookupTFSGRes Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventGetGoalResponse_Parms, Goal), Z_Construct_UScriptStruct_FROSLookupTFSGRes, METADATA_PARAMS(0, nullptr) }; // 990698899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "GetGoalResponse", Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::ROS2LookupTFAction_eventGetGoalResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::ROS2LookupTFAction_eventGetGoalResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execGetGoalResponse)
{
	P_GET_STRUCT_REF(FROSLookupTFSGRes,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGoalResponse(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function GetGoalResponse *******************************

// ********** Begin Class UROS2LookupTFAction Function GetResultRequest ****************************
struct Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics
{
	struct ROS2LookupTFAction_eventGetResultRequest_Parms
	{
		FROSLookupTFGRReq Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventGetResultRequest_Parms, Result), Z_Construct_UScriptStruct_FROSLookupTFGRReq, METADATA_PARAMS(0, nullptr) }; // 2377495306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "GetResultRequest", Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::ROS2LookupTFAction_eventGetResultRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::ROS2LookupTFAction_eventGetResultRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execGetResultRequest)
{
	P_GET_STRUCT_REF(FROSLookupTFGRReq,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResultRequest(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function GetResultRequest ******************************

// ********** Begin Class UROS2LookupTFAction Function GetResultResponse ***************************
struct Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics
{
	struct ROS2LookupTFAction_eventGetResultResponse_Parms
	{
		FROSLookupTFGRRes Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventGetResultResponse_Parms, Result), Z_Construct_UScriptStruct_FROSLookupTFGRRes, METADATA_PARAMS(0, nullptr) }; // 1319868684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "GetResultResponse", Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::ROS2LookupTFAction_eventGetResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::ROS2LookupTFAction_eventGetResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execGetResultResponse)
{
	P_GET_STRUCT_REF(FROSLookupTFGRRes,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResultResponse(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function GetResultResponse *****************************

// ********** Begin Class UROS2LookupTFAction Function SetFeedback *********************************
struct Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics
{
	struct ROS2LookupTFAction_eventSetFeedback_Parms
	{
		FROSLookupTFFB Feedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventSetFeedback_Parms, Feedback), Z_Construct_UScriptStruct_FROSLookupTFFB, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feedback_MetaData), NewProp_Feedback_MetaData) }; // 4149667971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::NewProp_Feedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "SetFeedback", Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::ROS2LookupTFAction_eventSetFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::ROS2LookupTFAction_eventSetFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execSetFeedback)
{
	P_GET_STRUCT_REF(FROSLookupTFFB,Z_Param_Out_Feedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFeedback(Z_Param_Out_Feedback);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function SetFeedback ***********************************

// ********** Begin Class UROS2LookupTFAction Function SetGoalIdToFeedback *************************
struct Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics
{
	struct ROS2LookupTFAction_eventSetGoalIdToFeedback_Parms
	{
		FROSLookupTFFB Feedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventSetGoalIdToFeedback_Parms, Feedback), Z_Construct_UScriptStruct_FROSLookupTFFB, METADATA_PARAMS(0, nullptr) }; // 4149667971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::NewProp_Feedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "SetGoalIdToFeedback", Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::ROS2LookupTFAction_eventSetGoalIdToFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::ROS2LookupTFAction_eventSetGoalIdToFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execSetGoalIdToFeedback)
{
	P_GET_STRUCT_REF(FROSLookupTFFB,Z_Param_Out_Feedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGoalIdToFeedback(Z_Param_Out_Feedback);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function SetGoalIdToFeedback ***************************

// ********** Begin Class UROS2LookupTFAction Function SetGoalRequest ******************************
struct Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics
{
	struct ROS2LookupTFAction_eventSetGoalRequest_Parms
	{
		FROSLookupTFSGReq Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventSetGoalRequest_Parms, Goal), Z_Construct_UScriptStruct_FROSLookupTFSGReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) }; // 4095997372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "SetGoalRequest", Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::ROS2LookupTFAction_eventSetGoalRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::ROS2LookupTFAction_eventSetGoalRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execSetGoalRequest)
{
	P_GET_STRUCT_REF(FROSLookupTFSGReq,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGoalRequest(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function SetGoalRequest ********************************

// ********** Begin Class UROS2LookupTFAction Function SetGoalResponse *****************************
struct Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics
{
	struct ROS2LookupTFAction_eventSetGoalResponse_Parms
	{
		FROSLookupTFSGRes Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventSetGoalResponse_Parms, Goal), Z_Construct_UScriptStruct_FROSLookupTFSGRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) }; // 990698899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "SetGoalResponse", Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::ROS2LookupTFAction_eventSetGoalResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::ROS2LookupTFAction_eventSetGoalResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execSetGoalResponse)
{
	P_GET_STRUCT_REF(FROSLookupTFSGRes,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGoalResponse(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function SetGoalResponse *******************************

// ********** Begin Class UROS2LookupTFAction Function SetResultRequest ****************************
struct Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics
{
	struct ROS2LookupTFAction_eventSetResultRequest_Parms
	{
		FROSLookupTFGRReq Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventSetResultRequest_Parms, Result), Z_Construct_UScriptStruct_FROSLookupTFGRReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2377495306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "SetResultRequest", Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::ROS2LookupTFAction_eventSetResultRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::ROS2LookupTFAction_eventSetResultRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execSetResultRequest)
{
	P_GET_STRUCT_REF(FROSLookupTFGRReq,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResultRequest(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function SetResultRequest ******************************

// ********** Begin Class UROS2LookupTFAction Function SetResultResponse ***************************
struct Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics
{
	struct ROS2LookupTFAction_eventSetResultResponse_Parms
	{
		FROSLookupTFGRRes Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2LookupTFAction_eventSetResultResponse_Parms, Result), Z_Construct_UScriptStruct_FROSLookupTFGRRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1319868684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2LookupTFAction, nullptr, "SetResultResponse", Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::ROS2LookupTFAction_eventSetResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::ROS2LookupTFAction_eventSetResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2LookupTFAction::execSetResultResponse)
{
	P_GET_STRUCT_REF(FROSLookupTFGRRes,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResultResponse(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UROS2LookupTFAction Function SetResultResponse *****************************

// ********** Begin Class UROS2LookupTFAction ******************************************************
void UROS2LookupTFAction::StaticRegisterNativesUROS2LookupTFAction()
{
	UClass* Class = UROS2LookupTFAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFeedback", &UROS2LookupTFAction::execGetFeedback },
		{ "GetGoalRequest", &UROS2LookupTFAction::execGetGoalRequest },
		{ "GetGoalResponse", &UROS2LookupTFAction::execGetGoalResponse },
		{ "GetResultRequest", &UROS2LookupTFAction::execGetResultRequest },
		{ "GetResultResponse", &UROS2LookupTFAction::execGetResultResponse },
		{ "SetFeedback", &UROS2LookupTFAction::execSetFeedback },
		{ "SetGoalIdToFeedback", &UROS2LookupTFAction::execSetGoalIdToFeedback },
		{ "SetGoalRequest", &UROS2LookupTFAction::execSetGoalRequest },
		{ "SetGoalResponse", &UROS2LookupTFAction::execSetGoalResponse },
		{ "SetResultRequest", &UROS2LookupTFAction::execSetResultRequest },
		{ "SetResultResponse", &UROS2LookupTFAction::execSetResultResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2LookupTFAction;
UClass* UROS2LookupTFAction::GetPrivateStaticClass()
{
	using TClass = UROS2LookupTFAction;
	if (!Z_Registration_Info_UClass_UROS2LookupTFAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2LookupTFAction"),
			Z_Registration_Info_UClass_UROS2LookupTFAction.InnerSingleton,
			StaticRegisterNativesUROS2LookupTFAction,
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
	return Z_Registration_Info_UClass_UROS2LookupTFAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2LookupTFAction_NoRegister()
{
	return UROS2LookupTFAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2LookupTFAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/ROS2LookupTF.h" },
		{ "ModuleRelativePath", "Public/Actions/ROS2LookupTF.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2LookupTFAction_GetFeedback, "GetFeedback" }, // 1518565219
		{ &Z_Construct_UFunction_UROS2LookupTFAction_GetGoalRequest, "GetGoalRequest" }, // 2488748928
		{ &Z_Construct_UFunction_UROS2LookupTFAction_GetGoalResponse, "GetGoalResponse" }, // 3684357625
		{ &Z_Construct_UFunction_UROS2LookupTFAction_GetResultRequest, "GetResultRequest" }, // 1301443481
		{ &Z_Construct_UFunction_UROS2LookupTFAction_GetResultResponse, "GetResultResponse" }, // 3929299406
		{ &Z_Construct_UFunction_UROS2LookupTFAction_SetFeedback, "SetFeedback" }, // 1991059099
		{ &Z_Construct_UFunction_UROS2LookupTFAction_SetGoalIdToFeedback, "SetGoalIdToFeedback" }, // 3164346101
		{ &Z_Construct_UFunction_UROS2LookupTFAction_SetGoalRequest, "SetGoalRequest" }, // 1776143670
		{ &Z_Construct_UFunction_UROS2LookupTFAction_SetGoalResponse, "SetGoalResponse" }, // 2585911035
		{ &Z_Construct_UFunction_UROS2LookupTFAction_SetResultRequest, "SetResultRequest" }, // 2226546237
		{ &Z_Construct_UFunction_UROS2LookupTFAction_SetResultResponse, "SetResultResponse" }, // 715754941
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2LookupTFAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2LookupTFAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericAction,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2LookupTFAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2LookupTFAction_Statics::ClassParams = {
	&UROS2LookupTFAction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2LookupTFAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2LookupTFAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2LookupTFAction()
{
	if (!Z_Registration_Info_UClass_UROS2LookupTFAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2LookupTFAction.OuterSingleton, Z_Construct_UClass_UROS2LookupTFAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2LookupTFAction.OuterSingleton;
}
UROS2LookupTFAction::UROS2LookupTFAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2LookupTFAction);
UROS2LookupTFAction::~UROS2LookupTFAction() {}
// ********** End Class UROS2LookupTFAction ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSLookupTFSGReq::StaticStruct, Z_Construct_UScriptStruct_FROSLookupTFSGReq_Statics::NewStructOps, TEXT("ROSLookupTFSGReq"), &Z_Registration_Info_UScriptStruct_FROSLookupTFSGReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSLookupTFSGReq), 4095997372U) },
		{ FROSLookupTFSGRes::StaticStruct, Z_Construct_UScriptStruct_FROSLookupTFSGRes_Statics::NewStructOps, TEXT("ROSLookupTFSGRes"), &Z_Registration_Info_UScriptStruct_FROSLookupTFSGRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSLookupTFSGRes), 990698899U) },
		{ FROSLookupTFGRReq::StaticStruct, Z_Construct_UScriptStruct_FROSLookupTFGRReq_Statics::NewStructOps, TEXT("ROSLookupTFGRReq"), &Z_Registration_Info_UScriptStruct_FROSLookupTFGRReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSLookupTFGRReq), 2377495306U) },
		{ FROSLookupTFGRRes::StaticStruct, Z_Construct_UScriptStruct_FROSLookupTFGRRes_Statics::NewStructOps, TEXT("ROSLookupTFGRRes"), &Z_Registration_Info_UScriptStruct_FROSLookupTFGRRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSLookupTFGRRes), 1319868684U) },
		{ FROSLookupTFFB::StaticStruct, Z_Construct_UScriptStruct_FROSLookupTFFB_Statics::NewStructOps, TEXT("ROSLookupTFFB"), &Z_Registration_Info_UScriptStruct_FROSLookupTFFB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSLookupTFFB), 4149667971U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2LookupTFAction, UROS2LookupTFAction::StaticClass, TEXT("UROS2LookupTFAction"), &Z_Registration_Info_UClass_UROS2LookupTFAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2LookupTFAction), 496166534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h__Script_rclUE_3800881961(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2LookupTF_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
