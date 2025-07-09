// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2RegionOfInterest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2RegionOfInterest() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2RegionOfInterestMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2RegionOfInterestMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSRegionOfInterest();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSRegionOfInterest **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSRegionOfInterest;
class UScriptStruct* FROSRegionOfInterest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSRegionOfInterest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSRegionOfInterest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSRegionOfInterest, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSRegionOfInterest"));
	}
	return Z_Registration_Info_UScriptStruct_FROSRegionOfInterest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XOffset_MetaData[] = {
		{ "Category", "ROSRegionOfInterest" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YOffset_MetaData[] = {
		{ "Category", "ROSRegionOfInterest" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "ROSRegionOfInterest" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "ROSRegionOfInterest" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoRectify_MetaData[] = {
		{ "Category", "ROSRegionOfInterest" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_XOffset;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_YOffset;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
	static void NewProp_bDoRectify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoRectify;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSRegionOfInterest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_XOffset = { "XOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRegionOfInterest, XOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XOffset_MetaData), NewProp_XOffset_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_YOffset = { "YOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRegionOfInterest, YOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YOffset_MetaData), NewProp_YOffset_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRegionOfInterest, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSRegionOfInterest, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
void Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_bDoRectify_SetBit(void* Obj)
{
	((FROSRegionOfInterest*)Obj)->bDoRectify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_bDoRectify = { "bDoRectify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSRegionOfInterest), &Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_bDoRectify_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoRectify_MetaData), NewProp_bDoRectify_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_XOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_YOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewProp_bDoRectify,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSRegionOfInterest",
	Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::PropPointers),
	sizeof(FROSRegionOfInterest),
	alignof(FROSRegionOfInterest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSRegionOfInterest()
{
	if (!Z_Registration_Info_UScriptStruct_FROSRegionOfInterest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSRegionOfInterest.InnerSingleton, Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSRegionOfInterest.InnerSingleton;
}
// ********** End ScriptStruct FROSRegionOfInterest ************************************************

// ********** Begin Class UROS2RegionOfInterestMsg Function GetMsg *********************************
struct Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics
{
	struct ROS2RegionOfInterestMsg_eventGetMsg_Parms
	{
		FROSRegionOfInterest Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RegionOfInterestMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSRegionOfInterest, METADATA_PARAMS(0, nullptr) }; // 3238538311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RegionOfInterestMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::ROS2RegionOfInterestMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::ROS2RegionOfInterestMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RegionOfInterestMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSRegionOfInterest,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2RegionOfInterestMsg Function GetMsg ***********************************

// ********** Begin Class UROS2RegionOfInterestMsg Function SetMsg *********************************
struct Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics
{
	struct ROS2RegionOfInterestMsg_eventSetMsg_Parms
	{
		FROSRegionOfInterest Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2RegionOfInterestMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSRegionOfInterest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3238538311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2RegionOfInterestMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::ROS2RegionOfInterestMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::ROS2RegionOfInterestMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2RegionOfInterestMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSRegionOfInterest,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2RegionOfInterestMsg Function SetMsg ***********************************

// ********** Begin Class UROS2RegionOfInterestMsg *************************************************
void UROS2RegionOfInterestMsg::StaticRegisterNativesUROS2RegionOfInterestMsg()
{
	UClass* Class = UROS2RegionOfInterestMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2RegionOfInterestMsg::execGetMsg },
		{ "SetMsg", &UROS2RegionOfInterestMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2RegionOfInterestMsg;
UClass* UROS2RegionOfInterestMsg::GetPrivateStaticClass()
{
	using TClass = UROS2RegionOfInterestMsg;
	if (!Z_Registration_Info_UClass_UROS2RegionOfInterestMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2RegionOfInterestMsg"),
			Z_Registration_Info_UClass_UROS2RegionOfInterestMsg.InnerSingleton,
			StaticRegisterNativesUROS2RegionOfInterestMsg,
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
	return Z_Registration_Info_UClass_UROS2RegionOfInterestMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2RegionOfInterestMsg_NoRegister()
{
	return UROS2RegionOfInterestMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2RegionOfInterestMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2RegionOfInterest.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2RegionOfInterest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2RegionOfInterestMsg_GetMsg, "GetMsg" }, // 1989056233
		{ &Z_Construct_UFunction_UROS2RegionOfInterestMsg_SetMsg, "SetMsg" }, // 3596449112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2RegionOfInterestMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2RegionOfInterestMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2RegionOfInterestMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2RegionOfInterestMsg_Statics::ClassParams = {
	&UROS2RegionOfInterestMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2RegionOfInterestMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2RegionOfInterestMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2RegionOfInterestMsg()
{
	if (!Z_Registration_Info_UClass_UROS2RegionOfInterestMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2RegionOfInterestMsg.OuterSingleton, Z_Construct_UClass_UROS2RegionOfInterestMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2RegionOfInterestMsg.OuterSingleton;
}
UROS2RegionOfInterestMsg::UROS2RegionOfInterestMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2RegionOfInterestMsg);
UROS2RegionOfInterestMsg::~UROS2RegionOfInterestMsg() {}
// ********** End Class UROS2RegionOfInterestMsg ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSRegionOfInterest::StaticStruct, Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics::NewStructOps, TEXT("ROSRegionOfInterest"), &Z_Registration_Info_UScriptStruct_FROSRegionOfInterest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSRegionOfInterest), 3238538311U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2RegionOfInterestMsg, UROS2RegionOfInterestMsg::StaticClass, TEXT("UROS2RegionOfInterestMsg"), &Z_Registration_Info_UClass_UROS2RegionOfInterestMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2RegionOfInterestMsg), 313745840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h__Script_rclUE_2497922839(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
