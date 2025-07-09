// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Range.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Range() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2RangeMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2RangeMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSRange();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSRange *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSRange;
class UScriptStruct* FROSRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSRange, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSRange"));
	}
	return Z_Registration_Info_UScriptStruct_FROSRange.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSRange" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiationType_MetaData[] = {
		{ "Category", "ROSRange" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "ROSRange" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "Category", "ROSRange" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "ROSRange" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "ROSRange" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRange, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_RadiationType = { "RadiationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRange, RadiationType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiationType_MetaData), NewProp_RadiationType_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRange, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRange, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRange, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRange, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_RadiationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRange_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSRange",
	Z_Construct_UScriptStruct_FROSRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRange_Statics::PropPointers),
	sizeof(FROSRange),
	alignof(FROSRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSRange()
{
	if (!Z_Registration_Info_UScriptStruct_FROSRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSRange.InnerSingleton, Z_Construct_UScriptStruct_FROSRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSRange.InnerSingleton;
}
// ********** End ScriptStruct FROSRange ***********************************************************

// ********** Begin Class UROS2RangeMsg Function CONST_INFRARED ************************************
struct Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics
{
	struct ROS2RangeMsg_eventCONST_INFRARED_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RangeMsg_eventCONST_INFRARED_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RangeMsg, nullptr, "CONST_INFRARED", Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::ROS2RangeMsg_eventCONST_INFRARED_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::ROS2RangeMsg_eventCONST_INFRARED_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RangeMsg::execCONST_INFRARED)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2RangeMsg::CONST_INFRARED();
	P_NATIVE_END;
}
// ********** End Class UROS2RangeMsg Function CONST_INFRARED **************************************

// ********** Begin Class UROS2RangeMsg Function CONST_ULTRASOUND **********************************
struct Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics
{
	struct ROS2RangeMsg_eventCONST_ULTRASOUND_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RangeMsg_eventCONST_ULTRASOUND_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RangeMsg, nullptr, "CONST_ULTRASOUND", Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::ROS2RangeMsg_eventCONST_ULTRASOUND_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::ROS2RangeMsg_eventCONST_ULTRASOUND_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RangeMsg::execCONST_ULTRASOUND)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UROS2RangeMsg::CONST_ULTRASOUND();
	P_NATIVE_END;
}
// ********** End Class UROS2RangeMsg Function CONST_ULTRASOUND ************************************

// ********** Begin Class UROS2RangeMsg Function GetMsg ********************************************
struct Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics
{
	struct ROS2RangeMsg_eventGetMsg_Parms
	{
		FROSRange Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RangeMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSRange, METADATA_PARAMS(0, nullptr) }; // 1092026890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RangeMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::ROS2RangeMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::ROS2RangeMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RangeMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RangeMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RangeMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSRange,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2RangeMsg Function GetMsg **********************************************

// ********** Begin Class UROS2RangeMsg Function SetMsg ********************************************
struct Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics
{
	struct ROS2RangeMsg_eventSetMsg_Parms
	{
		FROSRange Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RangeMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1092026890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RangeMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::ROS2RangeMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::ROS2RangeMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RangeMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RangeMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RangeMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSRange,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2RangeMsg Function SetMsg **********************************************

// ********** Begin Class UROS2RangeMsg ************************************************************
void UROS2RangeMsg::StaticRegisterNativesUROS2RangeMsg()
{
	UClass* Class = UROS2RangeMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_INFRARED", &UROS2RangeMsg::execCONST_INFRARED },
		{ "CONST_ULTRASOUND", &UROS2RangeMsg::execCONST_ULTRASOUND },
		{ "GetMsg", &UROS2RangeMsg::execGetMsg },
		{ "SetMsg", &UROS2RangeMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2RangeMsg;
UClass* UROS2RangeMsg::GetPrivateStaticClass()
{
	using TClass = UROS2RangeMsg;
	if (!Z_Registration_Info_UClass_UROS2RangeMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2RangeMsg"),
			Z_Registration_Info_UClass_UROS2RangeMsg.InnerSingleton,
			StaticRegisterNativesUROS2RangeMsg,
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
	return Z_Registration_Info_UClass_UROS2RangeMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2RangeMsg_NoRegister()
{
	return UROS2RangeMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2RangeMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Range.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Range.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2RangeMsg_CONST_INFRARED, "CONST_INFRARED" }, // 2692704613
		{ &Z_Construct_UFunction_UROS2RangeMsg_CONST_ULTRASOUND, "CONST_ULTRASOUND" }, // 2061219487
		{ &Z_Construct_UFunction_UROS2RangeMsg_GetMsg, "GetMsg" }, // 1942127348
		{ &Z_Construct_UFunction_UROS2RangeMsg_SetMsg, "SetMsg" }, // 1607670692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2RangeMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2RangeMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2RangeMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2RangeMsg_Statics::ClassParams = {
	&UROS2RangeMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2RangeMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2RangeMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2RangeMsg()
{
	if (!Z_Registration_Info_UClass_UROS2RangeMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2RangeMsg.OuterSingleton, Z_Construct_UClass_UROS2RangeMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2RangeMsg.OuterSingleton;
}
UROS2RangeMsg::UROS2RangeMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2RangeMsg);
UROS2RangeMsg::~UROS2RangeMsg() {}
// ********** End Class UROS2RangeMsg **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Range_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSRange::StaticStruct, Z_Construct_UScriptStruct_FROSRange_Statics::NewStructOps, TEXT("ROSRange"), &Z_Registration_Info_UScriptStruct_FROSRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSRange), 1092026890U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2RangeMsg, UROS2RangeMsg::StaticClass, TEXT("UROS2RangeMsg"), &Z_Registration_Info_UClass_UROS2RangeMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2RangeMsg), 610576446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Range_h__Script_rclUE_2398680782(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Range_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Range_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Range_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Range_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
