// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2IMCtrl.h"
#include "rclUE/Public/Msgs/ROS2Marker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2IMCtrl() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMCtrlMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2IMCtrlMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIMCtrl();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMarker();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSIMCtrl ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSIMCtrl;
class UScriptStruct* FROSIMCtrl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMCtrl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSIMCtrl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSIMCtrl, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSIMCtrl"));
	}
	return Z_Registration_Info_UScriptStruct_FROSIMCtrl.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSIMCtrl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSIMCtrl" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "ROSIMCtrl" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationMode_MetaData[] = {
		{ "Category", "ROSIMCtrl" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionMode_MetaData[] = {
		{ "Category", "ROSIMCtrl" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysVisible_MetaData[] = {
		{ "Category", "ROSIMCtrl" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[] = {
		{ "Category", "ROSIMCtrl" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIndependentMarkerOrientation_MetaData[] = {
		{ "Category", "ROSIMCtrl" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ROSIMCtrl" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrientationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionMode;
	static void NewProp_bAlwaysVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysVisible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
	static void NewProp_bIndependentMarkerOrientation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndependentMarkerOrientation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSIMCtrl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMCtrl, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMCtrl, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_OrientationMode = { "OrientationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMCtrl, OrientationMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationMode_MetaData), NewProp_OrientationMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_InteractionMode = { "InteractionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMCtrl, InteractionMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionMode_MetaData), NewProp_InteractionMode_MetaData) };
void Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_bAlwaysVisible_SetBit(void* Obj)
{
	((FROSIMCtrl*)Obj)->bAlwaysVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_bAlwaysVisible = { "bAlwaysVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSIMCtrl), &Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_bAlwaysVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysVisible_MetaData), NewProp_bAlwaysVisible_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSMarker, METADATA_PARAMS(0, nullptr) }; // 158721406
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMCtrl, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Markers_MetaData), NewProp_Markers_MetaData) }; // 158721406
void Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_bIndependentMarkerOrientation_SetBit(void* Obj)
{
	((FROSIMCtrl*)Obj)->bIndependentMarkerOrientation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_bIndependentMarkerOrientation = { "bIndependentMarkerOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSIMCtrl), &Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_bIndependentMarkerOrientation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIndependentMarkerOrientation_MetaData), NewProp_bIndependentMarkerOrientation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSIMCtrl, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSIMCtrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_OrientationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_InteractionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_bAlwaysVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Markers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Markers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_bIndependentMarkerOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMCtrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSIMCtrl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSIMCtrl",
	Z_Construct_UScriptStruct_FROSIMCtrl_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMCtrl_Statics::PropPointers),
	sizeof(FROSIMCtrl),
	alignof(FROSIMCtrl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSIMCtrl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSIMCtrl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSIMCtrl()
{
	if (!Z_Registration_Info_UScriptStruct_FROSIMCtrl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSIMCtrl.InnerSingleton, Z_Construct_UScriptStruct_FROSIMCtrl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSIMCtrl.InnerSingleton;
}
// ********** End ScriptStruct FROSIMCtrl **********************************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_BUTTON *************************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_BUTTON_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_BUTTON_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_BUTTON", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::ROS2IMCtrlMsg_eventCONST_BUTTON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::ROS2IMCtrlMsg_eventCONST_BUTTON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_BUTTON)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_BUTTON();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_BUTTON ***************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_FIXED **************************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_FIXED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_FIXED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_FIXED", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::ROS2IMCtrlMsg_eventCONST_FIXED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::ROS2IMCtrlMsg_eventCONST_FIXED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_FIXED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_FIXED();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_FIXED ****************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_INHERIT ************************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_INHERIT_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_INHERIT_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_INHERIT", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::ROS2IMCtrlMsg_eventCONST_INHERIT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::ROS2IMCtrlMsg_eventCONST_INHERIT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_INHERIT)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_INHERIT();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_INHERIT **************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_MENU ***************************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_MENU_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_MENU_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_MENU", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::ROS2IMCtrlMsg_eventCONST_MENU_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::ROS2IMCtrlMsg_eventCONST_MENU_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_MENU)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_MENU();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_MENU *****************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_MOVE_3D ************************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_MOVE_3D_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_MOVE_3D_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_MOVE_3D", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_MOVE_3D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_MOVE_3D();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_MOVE_3D **************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_MOVE_AXIS **********************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_MOVE_AXIS_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_MOVE_AXIS_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_MOVE_AXIS", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_AXIS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_AXIS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_MOVE_AXIS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_MOVE_AXIS();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_MOVE_AXIS ************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_MOVE_PLANE *********************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_MOVE_PLANE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_MOVE_PLANE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_MOVE_PLANE", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_PLANE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_PLANE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_MOVE_PLANE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_MOVE_PLANE();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_MOVE_PLANE ***********************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_MOVE_ROTATE ********************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_MOVE_ROTATE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_MOVE_ROTATE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_MOVE_ROTATE", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_ROTATE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_ROTATE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_MOVE_ROTATE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_MOVE_ROTATE();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_MOVE_ROTATE **********************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_MOVE_ROTATE_3D *****************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_MOVE_ROTATE_3D_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_MOVE_ROTATE_3D_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_MOVE_ROTATE_3D", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_ROTATE_3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::ROS2IMCtrlMsg_eventCONST_MOVE_ROTATE_3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_MOVE_ROTATE_3D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_MOVE_ROTATE_3D();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_MOVE_ROTATE_3D *******************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_NONE ***************************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_NONE_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_NONE_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_NONE", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::ROS2IMCtrlMsg_eventCONST_NONE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::ROS2IMCtrlMsg_eventCONST_NONE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_NONE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_NONE();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_NONE *****************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_ROTATE_3D **********************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_ROTATE_3D_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_ROTATE_3D_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_ROTATE_3D", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::ROS2IMCtrlMsg_eventCONST_ROTATE_3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::ROS2IMCtrlMsg_eventCONST_ROTATE_3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_ROTATE_3D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_ROTATE_3D();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_ROTATE_3D ************************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_ROTATE_AXIS ********************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_ROTATE_AXIS_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_ROTATE_AXIS_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_ROTATE_AXIS", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::ROS2IMCtrlMsg_eventCONST_ROTATE_AXIS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::ROS2IMCtrlMsg_eventCONST_ROTATE_AXIS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_ROTATE_AXIS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_ROTATE_AXIS();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_ROTATE_AXIS **********************************

// ********** Begin Class UROS2IMCtrlMsg Function CONST_VIEW_FACING ********************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics
{
	struct ROS2IMCtrlMsg_eventCONST_VIEW_FACING_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventCONST_VIEW_FACING_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "CONST_VIEW_FACING", Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::ROS2IMCtrlMsg_eventCONST_VIEW_FACING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::ROS2IMCtrlMsg_eventCONST_VIEW_FACING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execCONST_VIEW_FACING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2IMCtrlMsg::CONST_VIEW_FACING();
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function CONST_VIEW_FACING **********************************

// ********** Begin Class UROS2IMCtrlMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics
{
	struct ROS2IMCtrlMsg_eventGetMsg_Parms
	{
		FROSIMCtrl Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSIMCtrl, METADATA_PARAMS(0, nullptr) }; // 3572111892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::ROS2IMCtrlMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::ROS2IMCtrlMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSIMCtrl,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function GetMsg *********************************************

// ********** Begin Class UROS2IMCtrlMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics
{
	struct ROS2IMCtrlMsg_eventSetMsg_Parms
	{
		FROSIMCtrl Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2IMCtrlMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSIMCtrl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3572111892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2IMCtrlMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::ROS2IMCtrlMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::ROS2IMCtrlMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2IMCtrlMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSIMCtrl,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2IMCtrlMsg Function SetMsg *********************************************

// ********** Begin Class UROS2IMCtrlMsg ***********************************************************
void UROS2IMCtrlMsg::StaticRegisterNativesUROS2IMCtrlMsg()
{
	UClass* Class = UROS2IMCtrlMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_BUTTON", &UROS2IMCtrlMsg::execCONST_BUTTON },
		{ "CONST_FIXED", &UROS2IMCtrlMsg::execCONST_FIXED },
		{ "CONST_INHERIT", &UROS2IMCtrlMsg::execCONST_INHERIT },
		{ "CONST_MENU", &UROS2IMCtrlMsg::execCONST_MENU },
		{ "CONST_MOVE_3D", &UROS2IMCtrlMsg::execCONST_MOVE_3D },
		{ "CONST_MOVE_AXIS", &UROS2IMCtrlMsg::execCONST_MOVE_AXIS },
		{ "CONST_MOVE_PLANE", &UROS2IMCtrlMsg::execCONST_MOVE_PLANE },
		{ "CONST_MOVE_ROTATE", &UROS2IMCtrlMsg::execCONST_MOVE_ROTATE },
		{ "CONST_MOVE_ROTATE_3D", &UROS2IMCtrlMsg::execCONST_MOVE_ROTATE_3D },
		{ "CONST_NONE", &UROS2IMCtrlMsg::execCONST_NONE },
		{ "CONST_ROTATE_3D", &UROS2IMCtrlMsg::execCONST_ROTATE_3D },
		{ "CONST_ROTATE_AXIS", &UROS2IMCtrlMsg::execCONST_ROTATE_AXIS },
		{ "CONST_VIEW_FACING", &UROS2IMCtrlMsg::execCONST_VIEW_FACING },
		{ "GetMsg", &UROS2IMCtrlMsg::execGetMsg },
		{ "SetMsg", &UROS2IMCtrlMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2IMCtrlMsg;
UClass* UROS2IMCtrlMsg::GetPrivateStaticClass()
{
	using TClass = UROS2IMCtrlMsg;
	if (!Z_Registration_Info_UClass_UROS2IMCtrlMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2IMCtrlMsg"),
			Z_Registration_Info_UClass_UROS2IMCtrlMsg.InnerSingleton,
			StaticRegisterNativesUROS2IMCtrlMsg,
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
	return Z_Registration_Info_UClass_UROS2IMCtrlMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2IMCtrlMsg_NoRegister()
{
	return UROS2IMCtrlMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2IMCtrlMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2IMCtrl.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2IMCtrl.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_BUTTON, "CONST_BUTTON" }, // 2619452639
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_FIXED, "CONST_FIXED" }, // 1002073034
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_INHERIT, "CONST_INHERIT" }, // 3608653944
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MENU, "CONST_MENU" }, // 1210474826
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_3D, "CONST_MOVE_3D" }, // 492478897
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_AXIS, "CONST_MOVE_AXIS" }, // 120295877
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_PLANE, "CONST_MOVE_PLANE" }, // 2419945549
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE, "CONST_MOVE_ROTATE" }, // 1339914733
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_MOVE_ROTATE_3D, "CONST_MOVE_ROTATE_3D" }, // 2776397060
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_NONE, "CONST_NONE" }, // 3179451818
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_3D, "CONST_ROTATE_3D" }, // 29478311
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_ROTATE_AXIS, "CONST_ROTATE_AXIS" }, // 1411926898
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_CONST_VIEW_FACING, "CONST_VIEW_FACING" }, // 2863801774
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_GetMsg, "GetMsg" }, // 1213812630
		{ &Z_Construct_UFunction_UROS2IMCtrlMsg_SetMsg, "SetMsg" }, // 4039662402
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2IMCtrlMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2IMCtrlMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMCtrlMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2IMCtrlMsg_Statics::ClassParams = {
	&UROS2IMCtrlMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2IMCtrlMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2IMCtrlMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2IMCtrlMsg()
{
	if (!Z_Registration_Info_UClass_UROS2IMCtrlMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2IMCtrlMsg.OuterSingleton, Z_Construct_UClass_UROS2IMCtrlMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2IMCtrlMsg.OuterSingleton;
}
UROS2IMCtrlMsg::UROS2IMCtrlMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2IMCtrlMsg);
UROS2IMCtrlMsg::~UROS2IMCtrlMsg() {}
// ********** End Class UROS2IMCtrlMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSIMCtrl::StaticStruct, Z_Construct_UScriptStruct_FROSIMCtrl_Statics::NewStructOps, TEXT("ROSIMCtrl"), &Z_Registration_Info_UScriptStruct_FROSIMCtrl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSIMCtrl), 3572111892U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2IMCtrlMsg, UROS2IMCtrlMsg::StaticClass, TEXT("UROS2IMCtrlMsg"), &Z_Registration_Info_UClass_UROS2IMCtrlMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2IMCtrlMsg), 810834682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h__Script_rclUE_2685469101(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2IMCtrl_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
