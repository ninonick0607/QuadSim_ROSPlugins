// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Pose2D.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Pose2D() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Pose2DMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Pose2DMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose2D();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPose2D ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPose2D;
class UScriptStruct* FROSPose2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPose2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPose2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPose2D, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPose2D"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPose2D.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPose2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Pose2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "ROSPose2D" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Pose2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "ROSPose2D" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Pose2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Theta_MetaData[] = {
		{ "Category", "ROSPose2D" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Pose2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Y;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Theta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPose2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSPose2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPose2D, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSPose2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPose2D, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSPose2D_Statics::NewProp_Theta = { "Theta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPose2D, Theta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Theta_MetaData), NewProp_Theta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPose2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPose2D_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPose2D_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPose2D_Statics::NewProp_Theta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPose2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPose2D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPose2D",
	Z_Construct_UScriptStruct_FROSPose2D_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPose2D_Statics::PropPointers),
	sizeof(FROSPose2D),
	alignof(FROSPose2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPose2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPose2D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPose2D()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPose2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPose2D.InnerSingleton, Z_Construct_UScriptStruct_FROSPose2D_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPose2D.InnerSingleton;
}
// ********** End ScriptStruct FROSPose2D **********************************************************

// ********** Begin Class UROS2Pose2DMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics
{
	struct ROS2Pose2DMsg_eventGetMsg_Parms
	{
		FROSPose2D Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Pose2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Pose2DMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPose2D, METADATA_PARAMS(0, nullptr) }; // 3804983499
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Pose2DMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::ROS2Pose2DMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::ROS2Pose2DMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Pose2DMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPose2D,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2Pose2DMsg Function GetMsg *********************************************

// ********** Begin Class UROS2Pose2DMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics
{
	struct ROS2Pose2DMsg_eventSetMsg_Parms
	{
		FROSPose2D Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Pose2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Pose2DMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPose2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3804983499
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Pose2DMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::ROS2Pose2DMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::ROS2Pose2DMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Pose2DMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPose2D,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2Pose2DMsg Function SetMsg *********************************************

// ********** Begin Class UROS2Pose2DMsg ***********************************************************
void UROS2Pose2DMsg::StaticRegisterNativesUROS2Pose2DMsg()
{
	UClass* Class = UROS2Pose2DMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2Pose2DMsg::execGetMsg },
		{ "SetMsg", &UROS2Pose2DMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Pose2DMsg;
UClass* UROS2Pose2DMsg::GetPrivateStaticClass()
{
	using TClass = UROS2Pose2DMsg;
	if (!Z_Registration_Info_UClass_UROS2Pose2DMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Pose2DMsg"),
			Z_Registration_Info_UClass_UROS2Pose2DMsg.InnerSingleton,
			StaticRegisterNativesUROS2Pose2DMsg,
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
	return Z_Registration_Info_UClass_UROS2Pose2DMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Pose2DMsg_NoRegister()
{
	return UROS2Pose2DMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Pose2DMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Pose2D.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Pose2D.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Pose2DMsg_GetMsg, "GetMsg" }, // 2725454329
		{ &Z_Construct_UFunction_UROS2Pose2DMsg_SetMsg, "SetMsg" }, // 2725298396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Pose2DMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2Pose2DMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Pose2DMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Pose2DMsg_Statics::ClassParams = {
	&UROS2Pose2DMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Pose2DMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Pose2DMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Pose2DMsg()
{
	if (!Z_Registration_Info_UClass_UROS2Pose2DMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Pose2DMsg.OuterSingleton, Z_Construct_UClass_UROS2Pose2DMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Pose2DMsg.OuterSingleton;
}
UROS2Pose2DMsg::UROS2Pose2DMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Pose2DMsg);
UROS2Pose2DMsg::~UROS2Pose2DMsg() {}
// ********** End Class UROS2Pose2DMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPose2D::StaticStruct, Z_Construct_UScriptStruct_FROSPose2D_Statics::NewStructOps, TEXT("ROSPose2D"), &Z_Registration_Info_UScriptStruct_FROSPose2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPose2D), 3804983499U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Pose2DMsg, UROS2Pose2DMsg::StaticClass, TEXT("UROS2Pose2DMsg"), &Z_Registration_Info_UClass_UROS2Pose2DMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Pose2DMsg), 2089939560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h__Script_rclUE_752274481(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Pose2D_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
