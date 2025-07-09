// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2DisparityImg.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Img.h"
#include "rclUE/Public/Msgs/ROS2RegionOfInterest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2DisparityImg() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2DisparityImgMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2DisparityImgMsg_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDisparityImg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSImg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSRegionOfInterest();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSDisparityImg **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSDisparityImg;
class UScriptStruct* FROSDisparityImg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDisparityImg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSDisparityImg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSDisparityImg, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSDisparityImg"));
	}
	return Z_Registration_Info_UScriptStruct_FROSDisparityImg.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSDisparityImg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSDisparityImg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "ROSDisparityImg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[] = {
		{ "Category", "ROSDisparityImg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[] = {
		{ "Category", "ROSDisparityImg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidWindow_MetaData[] = {
		{ "Category", "ROSDisparityImg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDisparity_MetaData[] = {
		{ "Category", "ROSDisparityImg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDisparity_MetaData[] = {
		{ "Category", "ROSDisparityImg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaD_MetaData[] = {
		{ "Category", "ROSDisparityImg" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDisparity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDisparity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSDisparityImg>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDisparityImg, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDisparityImg, Image), Z_Construct_UScriptStruct_FROSImg, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1373885623
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDisparityImg, F), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_F_MetaData), NewProp_F_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDisparityImg, T), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_MetaData), NewProp_T_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_ValidWindow = { "ValidWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDisparityImg, ValidWindow), Z_Construct_UScriptStruct_FROSRegionOfInterest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidWindow_MetaData), NewProp_ValidWindow_MetaData) }; // 3238538311
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_MinDisparity = { "MinDisparity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDisparityImg, MinDisparity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDisparity_MetaData), NewProp_MinDisparity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_MaxDisparity = { "MaxDisparity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDisparityImg, MaxDisparity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDisparity_MetaData), NewProp_MaxDisparity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_DeltaD = { "DeltaD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDisparityImg, DeltaD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaD_MetaData), NewProp_DeltaD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSDisparityImg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_F,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_T,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_ValidWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_MinDisparity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_MaxDisparity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewProp_DeltaD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDisparityImg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSDisparityImg_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSDisparityImg",
	Z_Construct_UScriptStruct_FROSDisparityImg_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDisparityImg_Statics::PropPointers),
	sizeof(FROSDisparityImg),
	alignof(FROSDisparityImg),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDisparityImg_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSDisparityImg_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSDisparityImg()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDisparityImg.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSDisparityImg.InnerSingleton, Z_Construct_UScriptStruct_FROSDisparityImg_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSDisparityImg.InnerSingleton;
}
// ********** End ScriptStruct FROSDisparityImg ****************************************************

// ********** Begin Class UROS2DisparityImgMsg Function GetMsg *************************************
struct Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics
{
	struct ROS2DisparityImgMsg_eventGetMsg_Parms
	{
		FROSDisparityImg Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DisparityImgMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSDisparityImg, METADATA_PARAMS(0, nullptr) }; // 2480839665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DisparityImgMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::ROS2DisparityImgMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::ROS2DisparityImgMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DisparityImgMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSDisparityImg,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2DisparityImgMsg Function GetMsg ***************************************

// ********** Begin Class UROS2DisparityImgMsg Function SetMsg *************************************
struct Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics
{
	struct ROS2DisparityImgMsg_eventSetMsg_Parms
	{
		FROSDisparityImg Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DisparityImgMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSDisparityImg, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2480839665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DisparityImgMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::ROS2DisparityImgMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::ROS2DisparityImgMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DisparityImgMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSDisparityImg,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2DisparityImgMsg Function SetMsg ***************************************

// ********** Begin Class UROS2DisparityImgMsg *****************************************************
void UROS2DisparityImgMsg::StaticRegisterNativesUROS2DisparityImgMsg()
{
	UClass* Class = UROS2DisparityImgMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2DisparityImgMsg::execGetMsg },
		{ "SetMsg", &UROS2DisparityImgMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2DisparityImgMsg;
UClass* UROS2DisparityImgMsg::GetPrivateStaticClass()
{
	using TClass = UROS2DisparityImgMsg;
	if (!Z_Registration_Info_UClass_UROS2DisparityImgMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2DisparityImgMsg"),
			Z_Registration_Info_UClass_UROS2DisparityImgMsg.InnerSingleton,
			StaticRegisterNativesUROS2DisparityImgMsg,
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
	return Z_Registration_Info_UClass_UROS2DisparityImgMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2DisparityImgMsg_NoRegister()
{
	return UROS2DisparityImgMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2DisparityImgMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2DisparityImg.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2DisparityImg.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2DisparityImgMsg_GetMsg, "GetMsg" }, // 1356307210
		{ &Z_Construct_UFunction_UROS2DisparityImgMsg_SetMsg, "SetMsg" }, // 961334084
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2DisparityImgMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2DisparityImgMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DisparityImgMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2DisparityImgMsg_Statics::ClassParams = {
	&UROS2DisparityImgMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DisparityImgMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2DisparityImgMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2DisparityImgMsg()
{
	if (!Z_Registration_Info_UClass_UROS2DisparityImgMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2DisparityImgMsg.OuterSingleton, Z_Construct_UClass_UROS2DisparityImgMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2DisparityImgMsg.OuterSingleton;
}
UROS2DisparityImgMsg::UROS2DisparityImgMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2DisparityImgMsg);
UROS2DisparityImgMsg::~UROS2DisparityImgMsg() {}
// ********** End Class UROS2DisparityImgMsg *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSDisparityImg::StaticStruct, Z_Construct_UScriptStruct_FROSDisparityImg_Statics::NewStructOps, TEXT("ROSDisparityImg"), &Z_Registration_Info_UScriptStruct_FROSDisparityImg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSDisparityImg), 2480839665U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2DisparityImgMsg, UROS2DisparityImgMsg::StaticClass, TEXT("UROS2DisparityImgMsg"), &Z_Registration_Info_UClass_UROS2DisparityImgMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2DisparityImgMsg), 2325554373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h__Script_rclUE_2474234487(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
