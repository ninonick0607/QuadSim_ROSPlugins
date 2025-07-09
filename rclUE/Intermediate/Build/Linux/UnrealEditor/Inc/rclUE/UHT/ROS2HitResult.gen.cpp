// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2HitResult() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2HitResultMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2HitResultMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHitResult();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSHitResult *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSHitResult;
class UScriptStruct* FROSHitResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSHitResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSHitResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSHitResult, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSHitResult"));
	}
	return Z_Registration_Info_UScriptStruct_FROSHitResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSHitResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartPenetrating_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementIndex_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndex_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyBoneName_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyItem_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepth_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsMaterialName_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceEnd_MetaData[] = {
		{ "Category", "ROSHitResult" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bBlockingHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static void NewProp_bStartPenetrating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartPenetrating;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MyBoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyItem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PhysicsMaterialName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSHitResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
{
	((FROSHitResult*)Obj)->bBlockingHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSHitResult), &Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockingHit_MetaData), NewProp_bBlockingHit_MetaData) };
void Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_bStartPenetrating_SetBit(void* Obj)
{
	((FROSHitResult*)Obj)->bStartPenetrating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_bStartPenetrating = { "bStartPenetrating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSHitResult), &Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_bStartPenetrating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartPenetrating_MetaData), NewProp_bStartPenetrating_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ElementIndex = { "ElementIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, ElementIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementIndex_MetaData), NewProp_ElementIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, FaceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceIndex_MetaData), NewProp_FaceIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, Item), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_MyBoneName = { "MyBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, MyBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyBoneName_MetaData), NewProp_MyBoneName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_MyItem = { "MyItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, MyItem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyItem_MetaData), NewProp_MyItem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, PenetrationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationDepth_MetaData), NewProp_PenetrationDepth_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_PhysicsMaterialName = { "PhysicsMaterialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, PhysicsMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsMaterialName_MetaData), NewProp_PhysicsMaterialName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactNormal_MetaData), NewProp_ImpactNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPoint_MetaData), NewProp_ImpactPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStart_MetaData), NewProp_TraceStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSHitResult, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceEnd_MetaData), NewProp_TraceEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_bBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_bStartPenetrating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ElementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_FaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_MyBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_MyItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_PenetrationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_PhysicsMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ImpactNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_ImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSHitResult_Statics::NewProp_TraceEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSHitResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSHitResult",
	Z_Construct_UScriptStruct_FROSHitResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSHitResult_Statics::PropPointers),
	sizeof(FROSHitResult),
	alignof(FROSHitResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSHitResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSHitResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSHitResult()
{
	if (!Z_Registration_Info_UScriptStruct_FROSHitResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSHitResult.InnerSingleton, Z_Construct_UScriptStruct_FROSHitResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSHitResult.InnerSingleton;
}
// ********** End ScriptStruct FROSHitResult *******************************************************

// ********** Begin Class UROS2HitResultMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics
{
	struct ROS2HitResultMsg_eventGetMsg_Parms
	{
		FROSHitResult Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2HitResultMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSHitResult, METADATA_PARAMS(0, nullptr) }; // 130609294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2HitResultMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::ROS2HitResultMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::ROS2HitResultMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2HitResultMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2HitResultMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2HitResultMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSHitResult,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2HitResultMsg Function GetMsg ******************************************

// ********** Begin Class UROS2HitResultMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics
{
	struct ROS2HitResultMsg_eventSetMsg_Parms
	{
		FROSHitResult Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2HitResultMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 130609294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2HitResultMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::ROS2HitResultMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::ROS2HitResultMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2HitResultMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2HitResultMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2HitResultMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSHitResult,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2HitResultMsg Function SetMsg ******************************************

// ********** Begin Class UROS2HitResultMsg ********************************************************
void UROS2HitResultMsg::StaticRegisterNativesUROS2HitResultMsg()
{
	UClass* Class = UROS2HitResultMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2HitResultMsg::execGetMsg },
		{ "SetMsg", &UROS2HitResultMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2HitResultMsg;
UClass* UROS2HitResultMsg::GetPrivateStaticClass()
{
	using TClass = UROS2HitResultMsg;
	if (!Z_Registration_Info_UClass_UROS2HitResultMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2HitResultMsg"),
			Z_Registration_Info_UClass_UROS2HitResultMsg.InnerSingleton,
			StaticRegisterNativesUROS2HitResultMsg,
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
	return Z_Registration_Info_UClass_UROS2HitResultMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2HitResultMsg_NoRegister()
{
	return UROS2HitResultMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2HitResultMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2HitResult.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2HitResult.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2HitResultMsg_GetMsg, "GetMsg" }, // 27179912
		{ &Z_Construct_UFunction_UROS2HitResultMsg_SetMsg, "SetMsg" }, // 3594867965
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2HitResultMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2HitResultMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2HitResultMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2HitResultMsg_Statics::ClassParams = {
	&UROS2HitResultMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2HitResultMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2HitResultMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2HitResultMsg()
{
	if (!Z_Registration_Info_UClass_UROS2HitResultMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2HitResultMsg.OuterSingleton, Z_Construct_UClass_UROS2HitResultMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2HitResultMsg.OuterSingleton;
}
UROS2HitResultMsg::UROS2HitResultMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2HitResultMsg);
UROS2HitResultMsg::~UROS2HitResultMsg() {}
// ********** End Class UROS2HitResultMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSHitResult::StaticStruct, Z_Construct_UScriptStruct_FROSHitResult_Statics::NewStructOps, TEXT("ROSHitResult"), &Z_Registration_Info_UScriptStruct_FROSHitResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSHitResult), 130609294U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2HitResultMsg, UROS2HitResultMsg::StaticClass, TEXT("UROS2HitResultMsg"), &Z_Registration_Info_UClass_UROS2HitResultMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2HitResultMsg), 3714500420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h__Script_rclUE_2094573244(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2HitResult_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
