// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PointCloud2.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2PointField.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PointCloud2() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointCloud2Msg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PointCloud2Msg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPointCloud2();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPointField();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPointCloud2 ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPointCloud2;
class UScriptStruct* FROSPointCloud2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointCloud2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPointCloud2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPointCloud2, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPointCloud2"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPointCloud2.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPointCloud2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBigendian_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointStep_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowStep_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDense_MetaData[] = {
		{ "Category", "ROSPointCloud2" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
	static void NewProp_bIsBigendian_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBigendian;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PointStep;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RowStep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bIsDense_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDense;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPointCloud2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud2, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud2, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud2, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSPointField, METADATA_PARAMS(0, nullptr) }; // 3070453670
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud2, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fields_MetaData), NewProp_Fields_MetaData) }; // 3070453670
void Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_bIsBigendian_SetBit(void* Obj)
{
	((FROSPointCloud2*)Obj)->bIsBigendian = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_bIsBigendian = { "bIsBigendian", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSPointCloud2), &Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_bIsBigendian_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBigendian_MetaData), NewProp_bIsBigendian_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_PointStep = { "PointStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud2, PointStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointStep_MetaData), NewProp_PointStep_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_RowStep = { "RowStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud2, RowStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowStep_MetaData), NewProp_RowStep_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPointCloud2, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_bIsDense_SetBit(void* Obj)
{
	((FROSPointCloud2*)Obj)->bIsDense = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_bIsDense = { "bIsDense", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSPointCloud2), &Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_bIsDense_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDense_MetaData), NewProp_bIsDense_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPointCloud2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Fields_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Fields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_bIsBigendian,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_PointStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_RowStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewProp_bIsDense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointCloud2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPointCloud2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPointCloud2",
	Z_Construct_UScriptStruct_FROSPointCloud2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointCloud2_Statics::PropPointers),
	sizeof(FROSPointCloud2),
	alignof(FROSPointCloud2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPointCloud2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPointCloud2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPointCloud2()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPointCloud2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPointCloud2.InnerSingleton, Z_Construct_UScriptStruct_FROSPointCloud2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPointCloud2.InnerSingleton;
}
// ********** End ScriptStruct FROSPointCloud2 *****************************************************

// ********** Begin Class UROS2PointCloud2Msg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics
{
	struct ROS2PointCloud2Msg_eventGetMsg_Parms
	{
		FROSPointCloud2 Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointCloud2Msg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPointCloud2, METADATA_PARAMS(0, nullptr) }; // 2798175414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointCloud2Msg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::ROS2PointCloud2Msg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::ROS2PointCloud2Msg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointCloud2Msg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPointCloud2,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PointCloud2Msg Function GetMsg ****************************************

// ********** Begin Class UROS2PointCloud2Msg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics
{
	struct ROS2PointCloud2Msg_eventSetMsg_Parms
	{
		FROSPointCloud2 Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PointCloud2Msg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPointCloud2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2798175414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PointCloud2Msg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::ROS2PointCloud2Msg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::ROS2PointCloud2Msg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PointCloud2Msg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPointCloud2,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PointCloud2Msg Function SetMsg ****************************************

// ********** Begin Class UROS2PointCloud2Msg ******************************************************
void UROS2PointCloud2Msg::StaticRegisterNativesUROS2PointCloud2Msg()
{
	UClass* Class = UROS2PointCloud2Msg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PointCloud2Msg::execGetMsg },
		{ "SetMsg", &UROS2PointCloud2Msg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PointCloud2Msg;
UClass* UROS2PointCloud2Msg::GetPrivateStaticClass()
{
	using TClass = UROS2PointCloud2Msg;
	if (!Z_Registration_Info_UClass_UROS2PointCloud2Msg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PointCloud2Msg"),
			Z_Registration_Info_UClass_UROS2PointCloud2Msg.InnerSingleton,
			StaticRegisterNativesUROS2PointCloud2Msg,
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
	return Z_Registration_Info_UClass_UROS2PointCloud2Msg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PointCloud2Msg_NoRegister()
{
	return UROS2PointCloud2Msg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PointCloud2Msg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PointCloud2.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PointCloud2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PointCloud2Msg_GetMsg, "GetMsg" }, // 3507788940
		{ &Z_Construct_UFunction_UROS2PointCloud2Msg_SetMsg, "SetMsg" }, // 1032512241
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PointCloud2Msg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PointCloud2Msg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointCloud2Msg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PointCloud2Msg_Statics::ClassParams = {
	&UROS2PointCloud2Msg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PointCloud2Msg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PointCloud2Msg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PointCloud2Msg()
{
	if (!Z_Registration_Info_UClass_UROS2PointCloud2Msg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PointCloud2Msg.OuterSingleton, Z_Construct_UClass_UROS2PointCloud2Msg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PointCloud2Msg.OuterSingleton;
}
UROS2PointCloud2Msg::UROS2PointCloud2Msg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PointCloud2Msg);
UROS2PointCloud2Msg::~UROS2PointCloud2Msg() {}
// ********** End Class UROS2PointCloud2Msg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPointCloud2::StaticStruct, Z_Construct_UScriptStruct_FROSPointCloud2_Statics::NewStructOps, TEXT("ROSPointCloud2"), &Z_Registration_Info_UScriptStruct_FROSPointCloud2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPointCloud2), 2798175414U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PointCloud2Msg, UROS2PointCloud2Msg::StaticClass, TEXT("UROS2PointCloud2Msg"), &Z_Registration_Info_UClass_UROS2PointCloud2Msg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PointCloud2Msg), 1020229082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h__Script_rclUE_2562035312(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PointCloud2_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
