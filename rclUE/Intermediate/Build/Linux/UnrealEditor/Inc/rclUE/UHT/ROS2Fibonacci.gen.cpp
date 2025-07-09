// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Actions/ROS2Fibonacci.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Fibonacci() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2FibonacciAction();
RCLUE_API UClass* Z_Construct_UClass_UROS2FibonacciAction_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericAction();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciFB();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciGRReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciGRRes();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciSGReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciSGRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSFibonacciSGReq ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSFibonacciSGReq;
class UScriptStruct* FROSFibonacciSGReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciSGReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSFibonacciSGReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSFibonacciSGReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSFibonacciSGReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciSGReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "Category", "ROSFibonacciSGReq" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSFibonacciSGReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFibonacciSGReq, Order), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::NewProp_Order,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSFibonacciSGReq",
	Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::PropPointers),
	sizeof(FROSFibonacciSGReq),
	alignof(FROSFibonacciSGReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciSGReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciSGReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSFibonacciSGReq.InnerSingleton, Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciSGReq.InnerSingleton;
}
// ********** End ScriptStruct FROSFibonacciSGReq **************************************************

// ********** Begin ScriptStruct FROSFibonacciSGRes ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSFibonacciSGRes;
class UScriptStruct* FROSFibonacciSGRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciSGRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSFibonacciSGRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSFibonacciSGRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSFibonacciSGRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciSGRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccepted_MetaData[] = {
		{ "Category", "ROSFibonacciSGRes" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamp_MetaData[] = {
		{ "Category", "ROSFibonacciSGRes" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAccepted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccepted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSFibonacciSGRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::NewProp_bAccepted_SetBit(void* Obj)
{
	((FROSFibonacciSGRes*)Obj)->bAccepted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::NewProp_bAccepted = { "bAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSFibonacciSGRes), &Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::NewProp_bAccepted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccepted_MetaData), NewProp_bAccepted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::NewProp_Stamp = { "Stamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFibonacciSGRes, Stamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamp_MetaData), NewProp_Stamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::NewProp_bAccepted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::NewProp_Stamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSFibonacciSGRes",
	Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::PropPointers),
	sizeof(FROSFibonacciSGRes),
	alignof(FROSFibonacciSGRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciSGRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciSGRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSFibonacciSGRes.InnerSingleton, Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciSGRes.InnerSingleton;
}
// ********** End ScriptStruct FROSFibonacciSGRes **************************************************

// ********** Begin ScriptStruct FROSFibonacciGRReq ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSFibonacciGRReq;
class UScriptStruct* FROSFibonacciGRReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciGRReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSFibonacciGRReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSFibonacciGRReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSFibonacciGRReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciGRReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSFibonacciGRReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSFibonacciGRReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSFibonacciGRReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSFibonacciGRReq",
	nullptr,
	0,
	sizeof(FROSFibonacciGRReq),
	alignof(FROSFibonacciGRReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciGRReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSFibonacciGRReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciGRReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciGRReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSFibonacciGRReq.InnerSingleton, Z_Construct_UScriptStruct_FROSFibonacciGRReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciGRReq.InnerSingleton;
}
// ********** End ScriptStruct FROSFibonacciGRReq **************************************************

// ********** Begin ScriptStruct FROSFibonacciGRRes ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSFibonacciGRRes;
class UScriptStruct* FROSFibonacciGRRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciGRRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSFibonacciGRRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSFibonacciGRRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSFibonacciGRRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciGRRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GRResStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "ROSFibonacciGRRes" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_GRResStatus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Sequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSFibonacciGRRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::NewProp_GRResStatus = { "GRResStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFibonacciGRRes, GRResStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GRResStatus_MetaData), NewProp_GRResStatus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::NewProp_Sequence_Inner = { "Sequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFibonacciGRRes, Sequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::NewProp_GRResStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::NewProp_Sequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::NewProp_Sequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSFibonacciGRRes",
	Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::PropPointers),
	sizeof(FROSFibonacciGRRes),
	alignof(FROSFibonacciGRRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciGRRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciGRRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSFibonacciGRRes.InnerSingleton, Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciGRRes.InnerSingleton;
}
// ********** End ScriptStruct FROSFibonacciGRRes **************************************************

// ********** Begin ScriptStruct FROSFibonacciFB ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSFibonacciFB;
class UScriptStruct* FROSFibonacciFB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciFB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSFibonacciFB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSFibonacciFB, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSFibonacciFB"));
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciFB.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSFibonacciFB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "ROSFibonacciFB" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Sequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSFibonacciFB>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::NewProp_Sequence_Inner = { "Sequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFibonacciFB, Sequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::NewProp_Sequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::NewProp_Sequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSFibonacciFB",
	Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::PropPointers),
	sizeof(FROSFibonacciFB),
	alignof(FROSFibonacciFB),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSFibonacciFB()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFibonacciFB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSFibonacciFB.InnerSingleton, Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSFibonacciFB.InnerSingleton;
}
// ********** End ScriptStruct FROSFibonacciFB *****************************************************

// ********** Begin Class UROS2FibonacciAction Function GetFeedback ********************************
struct Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics
{
	struct ROS2FibonacciAction_eventGetFeedback_Parms
	{
		FROSFibonacciFB Feedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventGetFeedback_Parms, Feedback), Z_Construct_UScriptStruct_FROSFibonacciFB, METADATA_PARAMS(0, nullptr) }; // 2019819478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::NewProp_Feedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "GetFeedback", Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::ROS2FibonacciAction_eventGetFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::ROS2FibonacciAction_eventGetFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execGetFeedback)
{
	P_GET_STRUCT_REF(FROSFibonacciFB,Z_Param_Out_Feedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFeedback(Z_Param_Out_Feedback);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function GetFeedback **********************************

// ********** Begin Class UROS2FibonacciAction Function GetGoalRequest *****************************
struct Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics
{
	struct ROS2FibonacciAction_eventGetGoalRequest_Parms
	{
		FROSFibonacciSGReq Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventGetGoalRequest_Parms, Goal), Z_Construct_UScriptStruct_FROSFibonacciSGReq, METADATA_PARAMS(0, nullptr) }; // 1016946620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "GetGoalRequest", Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::ROS2FibonacciAction_eventGetGoalRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::ROS2FibonacciAction_eventGetGoalRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execGetGoalRequest)
{
	P_GET_STRUCT_REF(FROSFibonacciSGReq,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGoalRequest(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function GetGoalRequest *******************************

// ********** Begin Class UROS2FibonacciAction Function GetGoalResponse ****************************
struct Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics
{
	struct ROS2FibonacciAction_eventGetGoalResponse_Parms
	{
		FROSFibonacciSGRes Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventGetGoalResponse_Parms, Goal), Z_Construct_UScriptStruct_FROSFibonacciSGRes, METADATA_PARAMS(0, nullptr) }; // 182077680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "GetGoalResponse", Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::ROS2FibonacciAction_eventGetGoalResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::ROS2FibonacciAction_eventGetGoalResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execGetGoalResponse)
{
	P_GET_STRUCT_REF(FROSFibonacciSGRes,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGoalResponse(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function GetGoalResponse ******************************

// ********** Begin Class UROS2FibonacciAction Function GetResultRequest ***************************
struct Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics
{
	struct ROS2FibonacciAction_eventGetResultRequest_Parms
	{
		FROSFibonacciGRReq Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventGetResultRequest_Parms, Result), Z_Construct_UScriptStruct_FROSFibonacciGRReq, METADATA_PARAMS(0, nullptr) }; // 521499342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "GetResultRequest", Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::ROS2FibonacciAction_eventGetResultRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::ROS2FibonacciAction_eventGetResultRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execGetResultRequest)
{
	P_GET_STRUCT_REF(FROSFibonacciGRReq,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResultRequest(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function GetResultRequest *****************************

// ********** Begin Class UROS2FibonacciAction Function GetResultResponse **************************
struct Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics
{
	struct ROS2FibonacciAction_eventGetResultResponse_Parms
	{
		FROSFibonacciGRRes Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventGetResultResponse_Parms, Result), Z_Construct_UScriptStruct_FROSFibonacciGRRes, METADATA_PARAMS(0, nullptr) }; // 1722136176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "GetResultResponse", Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::ROS2FibonacciAction_eventGetResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::ROS2FibonacciAction_eventGetResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execGetResultResponse)
{
	P_GET_STRUCT_REF(FROSFibonacciGRRes,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResultResponse(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function GetResultResponse ****************************

// ********** Begin Class UROS2FibonacciAction Function SetFeedback ********************************
struct Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics
{
	struct ROS2FibonacciAction_eventSetFeedback_Parms
	{
		FROSFibonacciFB Feedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventSetFeedback_Parms, Feedback), Z_Construct_UScriptStruct_FROSFibonacciFB, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feedback_MetaData), NewProp_Feedback_MetaData) }; // 2019819478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::NewProp_Feedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "SetFeedback", Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::ROS2FibonacciAction_eventSetFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::ROS2FibonacciAction_eventSetFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execSetFeedback)
{
	P_GET_STRUCT_REF(FROSFibonacciFB,Z_Param_Out_Feedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFeedback(Z_Param_Out_Feedback);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function SetFeedback **********************************

// ********** Begin Class UROS2FibonacciAction Function SetGoalIdToFeedback ************************
struct Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics
{
	struct ROS2FibonacciAction_eventSetGoalIdToFeedback_Parms
	{
		FROSFibonacciFB Feedback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventSetGoalIdToFeedback_Parms, Feedback), Z_Construct_UScriptStruct_FROSFibonacciFB, METADATA_PARAMS(0, nullptr) }; // 2019819478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::NewProp_Feedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "SetGoalIdToFeedback", Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::ROS2FibonacciAction_eventSetGoalIdToFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::ROS2FibonacciAction_eventSetGoalIdToFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execSetGoalIdToFeedback)
{
	P_GET_STRUCT_REF(FROSFibonacciFB,Z_Param_Out_Feedback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGoalIdToFeedback(Z_Param_Out_Feedback);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function SetGoalIdToFeedback **************************

// ********** Begin Class UROS2FibonacciAction Function SetGoalRequest *****************************
struct Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics
{
	struct ROS2FibonacciAction_eventSetGoalRequest_Parms
	{
		FROSFibonacciSGReq Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventSetGoalRequest_Parms, Goal), Z_Construct_UScriptStruct_FROSFibonacciSGReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) }; // 1016946620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "SetGoalRequest", Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::ROS2FibonacciAction_eventSetGoalRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::ROS2FibonacciAction_eventSetGoalRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execSetGoalRequest)
{
	P_GET_STRUCT_REF(FROSFibonacciSGReq,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGoalRequest(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function SetGoalRequest *******************************

// ********** Begin Class UROS2FibonacciAction Function SetGoalResponse ****************************
struct Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics
{
	struct ROS2FibonacciAction_eventSetGoalResponse_Parms
	{
		FROSFibonacciSGRes Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventSetGoalResponse_Parms, Goal), Z_Construct_UScriptStruct_FROSFibonacciSGRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) }; // 182077680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "SetGoalResponse", Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::ROS2FibonacciAction_eventSetGoalResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::ROS2FibonacciAction_eventSetGoalResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execSetGoalResponse)
{
	P_GET_STRUCT_REF(FROSFibonacciSGRes,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGoalResponse(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function SetGoalResponse ******************************

// ********** Begin Class UROS2FibonacciAction Function SetResultRequest ***************************
struct Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics
{
	struct ROS2FibonacciAction_eventSetResultRequest_Parms
	{
		FROSFibonacciGRReq Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventSetResultRequest_Parms, Result), Z_Construct_UScriptStruct_FROSFibonacciGRReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 521499342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "SetResultRequest", Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::ROS2FibonacciAction_eventSetResultRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::ROS2FibonacciAction_eventSetResultRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execSetResultRequest)
{
	P_GET_STRUCT_REF(FROSFibonacciGRReq,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResultRequest(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function SetResultRequest *****************************

// ********** Begin Class UROS2FibonacciAction Function SetResultResponse **************************
struct Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics
{
	struct ROS2FibonacciAction_eventSetResultResponse_Parms
	{
		FROSFibonacciGRRes Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FibonacciAction_eventSetResultResponse_Parms, Result), Z_Construct_UScriptStruct_FROSFibonacciGRRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1722136176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FibonacciAction, nullptr, "SetResultResponse", Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::ROS2FibonacciAction_eventSetResultResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::ROS2FibonacciAction_eventSetResultResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FibonacciAction::execSetResultResponse)
{
	P_GET_STRUCT_REF(FROSFibonacciGRRes,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResultResponse(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UROS2FibonacciAction Function SetResultResponse ****************************

// ********** Begin Class UROS2FibonacciAction *****************************************************
void UROS2FibonacciAction::StaticRegisterNativesUROS2FibonacciAction()
{
	UClass* Class = UROS2FibonacciAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFeedback", &UROS2FibonacciAction::execGetFeedback },
		{ "GetGoalRequest", &UROS2FibonacciAction::execGetGoalRequest },
		{ "GetGoalResponse", &UROS2FibonacciAction::execGetGoalResponse },
		{ "GetResultRequest", &UROS2FibonacciAction::execGetResultRequest },
		{ "GetResultResponse", &UROS2FibonacciAction::execGetResultResponse },
		{ "SetFeedback", &UROS2FibonacciAction::execSetFeedback },
		{ "SetGoalIdToFeedback", &UROS2FibonacciAction::execSetGoalIdToFeedback },
		{ "SetGoalRequest", &UROS2FibonacciAction::execSetGoalRequest },
		{ "SetGoalResponse", &UROS2FibonacciAction::execSetGoalResponse },
		{ "SetResultRequest", &UROS2FibonacciAction::execSetResultRequest },
		{ "SetResultResponse", &UROS2FibonacciAction::execSetResultResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2FibonacciAction;
UClass* UROS2FibonacciAction::GetPrivateStaticClass()
{
	using TClass = UROS2FibonacciAction;
	if (!Z_Registration_Info_UClass_UROS2FibonacciAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2FibonacciAction"),
			Z_Registration_Info_UClass_UROS2FibonacciAction.InnerSingleton,
			StaticRegisterNativesUROS2FibonacciAction,
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
	return Z_Registration_Info_UClass_UROS2FibonacciAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2FibonacciAction_NoRegister()
{
	return UROS2FibonacciAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2FibonacciAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/ROS2Fibonacci.h" },
		{ "ModuleRelativePath", "Public/Actions/ROS2Fibonacci.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2FibonacciAction_GetFeedback, "GetFeedback" }, // 3553835127
		{ &Z_Construct_UFunction_UROS2FibonacciAction_GetGoalRequest, "GetGoalRequest" }, // 3733445136
		{ &Z_Construct_UFunction_UROS2FibonacciAction_GetGoalResponse, "GetGoalResponse" }, // 2753001996
		{ &Z_Construct_UFunction_UROS2FibonacciAction_GetResultRequest, "GetResultRequest" }, // 1334610609
		{ &Z_Construct_UFunction_UROS2FibonacciAction_GetResultResponse, "GetResultResponse" }, // 2231911279
		{ &Z_Construct_UFunction_UROS2FibonacciAction_SetFeedback, "SetFeedback" }, // 2872675443
		{ &Z_Construct_UFunction_UROS2FibonacciAction_SetGoalIdToFeedback, "SetGoalIdToFeedback" }, // 1183425741
		{ &Z_Construct_UFunction_UROS2FibonacciAction_SetGoalRequest, "SetGoalRequest" }, // 2476620961
		{ &Z_Construct_UFunction_UROS2FibonacciAction_SetGoalResponse, "SetGoalResponse" }, // 2511545556
		{ &Z_Construct_UFunction_UROS2FibonacciAction_SetResultRequest, "SetResultRequest" }, // 2143666250
		{ &Z_Construct_UFunction_UROS2FibonacciAction_SetResultResponse, "SetResultResponse" }, // 1363440064
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2FibonacciAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2FibonacciAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericAction,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2FibonacciAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2FibonacciAction_Statics::ClassParams = {
	&UROS2FibonacciAction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2FibonacciAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2FibonacciAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2FibonacciAction()
{
	if (!Z_Registration_Info_UClass_UROS2FibonacciAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2FibonacciAction.OuterSingleton, Z_Construct_UClass_UROS2FibonacciAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2FibonacciAction.OuterSingleton;
}
UROS2FibonacciAction::UROS2FibonacciAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2FibonacciAction);
UROS2FibonacciAction::~UROS2FibonacciAction() {}
// ********** End Class UROS2FibonacciAction *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSFibonacciSGReq::StaticStruct, Z_Construct_UScriptStruct_FROSFibonacciSGReq_Statics::NewStructOps, TEXT("ROSFibonacciSGReq"), &Z_Registration_Info_UScriptStruct_FROSFibonacciSGReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSFibonacciSGReq), 1016946620U) },
		{ FROSFibonacciSGRes::StaticStruct, Z_Construct_UScriptStruct_FROSFibonacciSGRes_Statics::NewStructOps, TEXT("ROSFibonacciSGRes"), &Z_Registration_Info_UScriptStruct_FROSFibonacciSGRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSFibonacciSGRes), 182077680U) },
		{ FROSFibonacciGRReq::StaticStruct, Z_Construct_UScriptStruct_FROSFibonacciGRReq_Statics::NewStructOps, TEXT("ROSFibonacciGRReq"), &Z_Registration_Info_UScriptStruct_FROSFibonacciGRReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSFibonacciGRReq), 521499342U) },
		{ FROSFibonacciGRRes::StaticStruct, Z_Construct_UScriptStruct_FROSFibonacciGRRes_Statics::NewStructOps, TEXT("ROSFibonacciGRRes"), &Z_Registration_Info_UScriptStruct_FROSFibonacciGRRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSFibonacciGRRes), 1722136176U) },
		{ FROSFibonacciFB::StaticStruct, Z_Construct_UScriptStruct_FROSFibonacciFB_Statics::NewStructOps, TEXT("ROSFibonacciFB"), &Z_Registration_Info_UScriptStruct_FROSFibonacciFB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSFibonacciFB), 2019819478U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2FibonacciAction, UROS2FibonacciAction::StaticClass, TEXT("UROS2FibonacciAction"), &Z_Registration_Info_UClass_UROS2FibonacciAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2FibonacciAction), 2743113660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h__Script_rclUE_934607900(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Actions_ROS2Fibonacci_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
