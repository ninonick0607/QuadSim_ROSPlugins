// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2ImgMarker.h"
#include "rclUE/Public/Msgs/ROS2ColorRGBA.h"
#include "rclUE/Public/Msgs/ROS2Duration.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ImgMarker() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2ImgMarkerMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2ImgMarkerMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSColorRGBA();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDuration();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSImgMarker();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSImgMarker *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSImgMarker;
class UScriptStruct* FROSImgMarker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSImgMarker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSImgMarker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSImgMarker, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSImgMarker"));
	}
	return Z_Registration_Info_UScriptStruct_FROSImgMarker.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSImgMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ns_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filled_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColors_MetaData[] = {
		{ "Category", "ROSImgMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Filled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutlineColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSImgMarker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Ns = { "Ns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Ns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ns_MetaData), NewProp_Ns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Action), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, OutlineColor), Z_Construct_UScriptStruct_FROSColorRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineColor_MetaData), NewProp_OutlineColor_MetaData) }; // 3909327250
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Filled = { "Filled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Filled), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filled_MetaData), NewProp_Filled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, FillColor), Z_Construct_UScriptStruct_FROSColorRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColor_MetaData), NewProp_FillColor_MetaData) }; // 3909327250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Lifetime), Z_Construct_UScriptStruct_FROSDuration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) }; // 3152230835
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_OutlineColors_Inner = { "OutlineColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSColorRGBA, METADATA_PARAMS(0, nullptr) }; // 3909327250
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_OutlineColors = { "OutlineColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSImgMarker, OutlineColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineColors_MetaData), NewProp_OutlineColors_MetaData) }; // 3909327250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSImgMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Ns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_OutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Filled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_FillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_OutlineColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewProp_OutlineColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSImgMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSImgMarker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSImgMarker",
	Z_Construct_UScriptStruct_FROSImgMarker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSImgMarker_Statics::PropPointers),
	sizeof(FROSImgMarker),
	alignof(FROSImgMarker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSImgMarker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSImgMarker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSImgMarker()
{
	if (!Z_Registration_Info_UScriptStruct_FROSImgMarker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSImgMarker.InnerSingleton, Z_Construct_UScriptStruct_FROSImgMarker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSImgMarker.InnerSingleton;
}
// ********** End ScriptStruct FROSImgMarker *******************************************************

// ********** Begin Class UROS2ImgMarkerMsg Function CONST_ADD *************************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics
{
	struct ROS2ImgMarkerMsg_eventCONST_ADD_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventCONST_ADD_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "CONST_ADD", Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::ROS2ImgMarkerMsg_eventCONST_ADD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::ROS2ImgMarkerMsg_eventCONST_ADD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execCONST_ADD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2ImgMarkerMsg::CONST_ADD();
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function CONST_ADD ***************************************

// ********** Begin Class UROS2ImgMarkerMsg Function CONST_CIRCLE **********************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics
{
	struct ROS2ImgMarkerMsg_eventCONST_CIRCLE_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventCONST_CIRCLE_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "CONST_CIRCLE", Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::ROS2ImgMarkerMsg_eventCONST_CIRCLE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::ROS2ImgMarkerMsg_eventCONST_CIRCLE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execCONST_CIRCLE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2ImgMarkerMsg::CONST_CIRCLE();
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function CONST_CIRCLE ************************************

// ********** Begin Class UROS2ImgMarkerMsg Function CONST_LINE_LIST *******************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics
{
	struct ROS2ImgMarkerMsg_eventCONST_LINE_LIST_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventCONST_LINE_LIST_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "CONST_LINE_LIST", Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::ROS2ImgMarkerMsg_eventCONST_LINE_LIST_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::ROS2ImgMarkerMsg_eventCONST_LINE_LIST_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execCONST_LINE_LIST)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2ImgMarkerMsg::CONST_LINE_LIST();
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function CONST_LINE_LIST *********************************

// ********** Begin Class UROS2ImgMarkerMsg Function CONST_LINE_STRIP ******************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics
{
	struct ROS2ImgMarkerMsg_eventCONST_LINE_STRIP_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventCONST_LINE_STRIP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "CONST_LINE_STRIP", Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::ROS2ImgMarkerMsg_eventCONST_LINE_STRIP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::ROS2ImgMarkerMsg_eventCONST_LINE_STRIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execCONST_LINE_STRIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2ImgMarkerMsg::CONST_LINE_STRIP();
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function CONST_LINE_STRIP ********************************

// ********** Begin Class UROS2ImgMarkerMsg Function CONST_POINTS **********************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics
{
	struct ROS2ImgMarkerMsg_eventCONST_POINTS_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventCONST_POINTS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "CONST_POINTS", Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::ROS2ImgMarkerMsg_eventCONST_POINTS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::ROS2ImgMarkerMsg_eventCONST_POINTS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execCONST_POINTS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2ImgMarkerMsg::CONST_POINTS();
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function CONST_POINTS ************************************

// ********** Begin Class UROS2ImgMarkerMsg Function CONST_POLYGON *********************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics
{
	struct ROS2ImgMarkerMsg_eventCONST_POLYGON_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventCONST_POLYGON_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "CONST_POLYGON", Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::ROS2ImgMarkerMsg_eventCONST_POLYGON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::ROS2ImgMarkerMsg_eventCONST_POLYGON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execCONST_POLYGON)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2ImgMarkerMsg::CONST_POLYGON();
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function CONST_POLYGON ***********************************

// ********** Begin Class UROS2ImgMarkerMsg Function CONST_REMOVE **********************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics
{
	struct ROS2ImgMarkerMsg_eventCONST_REMOVE_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventCONST_REMOVE_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "CONST_REMOVE", Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::ROS2ImgMarkerMsg_eventCONST_REMOVE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::ROS2ImgMarkerMsg_eventCONST_REMOVE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execCONST_REMOVE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2ImgMarkerMsg::CONST_REMOVE();
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function CONST_REMOVE ************************************

// ********** Begin Class UROS2ImgMarkerMsg Function GetMsg ****************************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics
{
	struct ROS2ImgMarkerMsg_eventGetMsg_Parms
	{
		FROSImgMarker Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSImgMarker, METADATA_PARAMS(0, nullptr) }; // 3047303302
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::ROS2ImgMarkerMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::ROS2ImgMarkerMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSImgMarker,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function GetMsg ******************************************

// ********** Begin Class UROS2ImgMarkerMsg Function SetMsg ****************************************
struct Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics
{
	struct ROS2ImgMarkerMsg_eventSetMsg_Parms
	{
		FROSImgMarker Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ImgMarkerMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSImgMarker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3047303302
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ImgMarkerMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::ROS2ImgMarkerMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::ROS2ImgMarkerMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ImgMarkerMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSImgMarker,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2ImgMarkerMsg Function SetMsg ******************************************

// ********** Begin Class UROS2ImgMarkerMsg ********************************************************
void UROS2ImgMarkerMsg::StaticRegisterNativesUROS2ImgMarkerMsg()
{
	UClass* Class = UROS2ImgMarkerMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_ADD", &UROS2ImgMarkerMsg::execCONST_ADD },
		{ "CONST_CIRCLE", &UROS2ImgMarkerMsg::execCONST_CIRCLE },
		{ "CONST_LINE_LIST", &UROS2ImgMarkerMsg::execCONST_LINE_LIST },
		{ "CONST_LINE_STRIP", &UROS2ImgMarkerMsg::execCONST_LINE_STRIP },
		{ "CONST_POINTS", &UROS2ImgMarkerMsg::execCONST_POINTS },
		{ "CONST_POLYGON", &UROS2ImgMarkerMsg::execCONST_POLYGON },
		{ "CONST_REMOVE", &UROS2ImgMarkerMsg::execCONST_REMOVE },
		{ "GetMsg", &UROS2ImgMarkerMsg::execGetMsg },
		{ "SetMsg", &UROS2ImgMarkerMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ImgMarkerMsg;
UClass* UROS2ImgMarkerMsg::GetPrivateStaticClass()
{
	using TClass = UROS2ImgMarkerMsg;
	if (!Z_Registration_Info_UClass_UROS2ImgMarkerMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ImgMarkerMsg"),
			Z_Registration_Info_UClass_UROS2ImgMarkerMsg.InnerSingleton,
			StaticRegisterNativesUROS2ImgMarkerMsg,
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
	return Z_Registration_Info_UClass_UROS2ImgMarkerMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ImgMarkerMsg_NoRegister()
{
	return UROS2ImgMarkerMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ImgMarkerMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2ImgMarker.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2ImgMarker.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_ADD, "CONST_ADD" }, // 1544947595
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_CIRCLE, "CONST_CIRCLE" }, // 1389956558
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_LIST, "CONST_LINE_LIST" }, // 2607840462
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_LINE_STRIP, "CONST_LINE_STRIP" }, // 1267301476
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POINTS, "CONST_POINTS" }, // 3043412501
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_POLYGON, "CONST_POLYGON" }, // 1259331797
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_CONST_REMOVE, "CONST_REMOVE" }, // 2076188324
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_GetMsg, "GetMsg" }, // 4079062077
		{ &Z_Construct_UFunction_UROS2ImgMarkerMsg_SetMsg, "SetMsg" }, // 1754442532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ImgMarkerMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ImgMarkerMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ImgMarkerMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ImgMarkerMsg_Statics::ClassParams = {
	&UROS2ImgMarkerMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ImgMarkerMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ImgMarkerMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ImgMarkerMsg()
{
	if (!Z_Registration_Info_UClass_UROS2ImgMarkerMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ImgMarkerMsg.OuterSingleton, Z_Construct_UClass_UROS2ImgMarkerMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ImgMarkerMsg.OuterSingleton;
}
UROS2ImgMarkerMsg::UROS2ImgMarkerMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ImgMarkerMsg);
UROS2ImgMarkerMsg::~UROS2ImgMarkerMsg() {}
// ********** End Class UROS2ImgMarkerMsg **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSImgMarker::StaticStruct, Z_Construct_UScriptStruct_FROSImgMarker_Statics::NewStructOps, TEXT("ROSImgMarker"), &Z_Registration_Info_UScriptStruct_FROSImgMarker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSImgMarker), 3047303302U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ImgMarkerMsg, UROS2ImgMarkerMsg::StaticClass, TEXT("UROS2ImgMarkerMsg"), &Z_Registration_Info_UClass_UROS2ImgMarkerMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ImgMarkerMsg), 3518170990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h__Script_rclUE_1590597076(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2ImgMarker_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
