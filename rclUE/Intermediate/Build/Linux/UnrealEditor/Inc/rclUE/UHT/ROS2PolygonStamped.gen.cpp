// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2PolygonStamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2Polygon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2PolygonStamped() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PolygonStampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PolygonStampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPolygon();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPolygonStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPolygonStamped ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPolygonStamped;
class UScriptStruct* FROSPolygonStamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPolygonStamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPolygonStamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPolygonStamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPolygonStamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPolygonStamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPolygonStamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPolygonStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[] = {
		{ "Category", "ROSPolygonStamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPolygonStamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPolygonStamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPolygonStamped, Polygon), Z_Construct_UScriptStruct_FROSPolygon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Polygon_MetaData), NewProp_Polygon_MetaData) }; // 2627027150
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::NewProp_Polygon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPolygonStamped",
	Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::PropPointers),
	sizeof(FROSPolygonStamped),
	alignof(FROSPolygonStamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPolygonStamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPolygonStamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPolygonStamped.InnerSingleton, Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPolygonStamped.InnerSingleton;
}
// ********** End ScriptStruct FROSPolygonStamped **************************************************

// ********** Begin Class UROS2PolygonStampedMsg Function GetMsg ***********************************
struct Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics
{
	struct ROS2PolygonStampedMsg_eventGetMsg_Parms
	{
		FROSPolygonStamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonStamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PolygonStampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPolygonStamped, METADATA_PARAMS(0, nullptr) }; // 3121670987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PolygonStampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::ROS2PolygonStampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::ROS2PolygonStampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PolygonStampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPolygonStamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PolygonStampedMsg Function GetMsg *************************************

// ********** Begin Class UROS2PolygonStampedMsg Function SetMsg ***********************************
struct Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics
{
	struct ROS2PolygonStampedMsg_eventSetMsg_Parms
	{
		FROSPolygonStamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonStamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PolygonStampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPolygonStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3121670987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PolygonStampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::ROS2PolygonStampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::ROS2PolygonStampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PolygonStampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPolygonStamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PolygonStampedMsg Function SetMsg *************************************

// ********** Begin Class UROS2PolygonStampedMsg ***************************************************
void UROS2PolygonStampedMsg::StaticRegisterNativesUROS2PolygonStampedMsg()
{
	UClass* Class = UROS2PolygonStampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PolygonStampedMsg::execGetMsg },
		{ "SetMsg", &UROS2PolygonStampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PolygonStampedMsg;
UClass* UROS2PolygonStampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PolygonStampedMsg;
	if (!Z_Registration_Info_UClass_UROS2PolygonStampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PolygonStampedMsg"),
			Z_Registration_Info_UClass_UROS2PolygonStampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2PolygonStampedMsg,
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
	return Z_Registration_Info_UClass_UROS2PolygonStampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PolygonStampedMsg_NoRegister()
{
	return UROS2PolygonStampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PolygonStampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2PolygonStamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2PolygonStamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PolygonStampedMsg_GetMsg, "GetMsg" }, // 701127774
		{ &Z_Construct_UFunction_UROS2PolygonStampedMsg_SetMsg, "SetMsg" }, // 1625129255
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PolygonStampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PolygonStampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PolygonStampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PolygonStampedMsg_Statics::ClassParams = {
	&UROS2PolygonStampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PolygonStampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PolygonStampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PolygonStampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PolygonStampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PolygonStampedMsg.OuterSingleton, Z_Construct_UClass_UROS2PolygonStampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PolygonStampedMsg.OuterSingleton;
}
UROS2PolygonStampedMsg::UROS2PolygonStampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PolygonStampedMsg);
UROS2PolygonStampedMsg::~UROS2PolygonStampedMsg() {}
// ********** End Class UROS2PolygonStampedMsg *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPolygonStamped::StaticStruct, Z_Construct_UScriptStruct_FROSPolygonStamped_Statics::NewStructOps, TEXT("ROSPolygonStamped"), &Z_Registration_Info_UScriptStruct_FROSPolygonStamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPolygonStamped), 3121670987U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PolygonStampedMsg, UROS2PolygonStampedMsg::StaticClass, TEXT("UROS2PolygonStampedMsg"), &Z_Registration_Info_UClass_UROS2PolygonStampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PolygonStampedMsg), 3239584080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h__Script_rclUE_4038183370(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonStamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
