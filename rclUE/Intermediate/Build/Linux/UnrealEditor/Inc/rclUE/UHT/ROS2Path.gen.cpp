// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Path.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2PoseStamped.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Path() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PathMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2PathMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPath();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoseStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSPath **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSPath;
class UScriptStruct* FROSPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSPath, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSPath"));
	}
	return Z_Registration_Info_UScriptStruct_FROSPath.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Path.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSPath" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Path.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[] = {
		{ "Category", "ROSPath" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Path.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPath_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPath, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSPath_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSPoseStamped, METADATA_PARAMS(0, nullptr) }; // 2341906365
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSPath_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSPath, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Poses_MetaData), NewProp_Poses_MetaData) }; // 2341906365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPath_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPath_Statics::NewProp_Poses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSPath_Statics::NewProp_Poses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSPath",
	Z_Construct_UScriptStruct_FROSPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPath_Statics::PropPointers),
	sizeof(FROSPath),
	alignof(FROSPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSPath()
{
	if (!Z_Registration_Info_UScriptStruct_FROSPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSPath.InnerSingleton, Z_Construct_UScriptStruct_FROSPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSPath.InnerSingleton;
}
// ********** End ScriptStruct FROSPath ************************************************************

// ********** Begin Class UROS2PathMsg Function GetMsg *********************************************
struct Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics
{
	struct ROS2PathMsg_eventGetMsg_Parms
	{
		FROSPath Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Path.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PathMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSPath, METADATA_PARAMS(0, nullptr) }; // 170903436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PathMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::ROS2PathMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::ROS2PathMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PathMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PathMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PathMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSPath,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2PathMsg Function GetMsg ***********************************************

// ********** Begin Class UROS2PathMsg Function SetMsg *********************************************
struct Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics
{
	struct ROS2PathMsg_eventSetMsg_Parms
	{
		FROSPath Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Path.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2PathMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 170903436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2PathMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::ROS2PathMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::ROS2PathMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2PathMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2PathMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2PathMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSPath,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2PathMsg Function SetMsg ***********************************************

// ********** Begin Class UROS2PathMsg *************************************************************
void UROS2PathMsg::StaticRegisterNativesUROS2PathMsg()
{
	UClass* Class = UROS2PathMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2PathMsg::execGetMsg },
		{ "SetMsg", &UROS2PathMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2PathMsg;
UClass* UROS2PathMsg::GetPrivateStaticClass()
{
	using TClass = UROS2PathMsg;
	if (!Z_Registration_Info_UClass_UROS2PathMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2PathMsg"),
			Z_Registration_Info_UClass_UROS2PathMsg.InnerSingleton,
			StaticRegisterNativesUROS2PathMsg,
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
	return Z_Registration_Info_UClass_UROS2PathMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2PathMsg_NoRegister()
{
	return UROS2PathMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2PathMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Path.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Path.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2PathMsg_GetMsg, "GetMsg" }, // 2547466328
		{ &Z_Construct_UFunction_UROS2PathMsg_SetMsg, "SetMsg" }, // 881053489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2PathMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2PathMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PathMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2PathMsg_Statics::ClassParams = {
	&UROS2PathMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2PathMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2PathMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2PathMsg()
{
	if (!Z_Registration_Info_UClass_UROS2PathMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2PathMsg.OuterSingleton, Z_Construct_UClass_UROS2PathMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2PathMsg.OuterSingleton;
}
UROS2PathMsg::UROS2PathMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2PathMsg);
UROS2PathMsg::~UROS2PathMsg() {}
// ********** End Class UROS2PathMsg ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Path_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSPath::StaticStruct, Z_Construct_UScriptStruct_FROSPath_Statics::NewStructOps, TEXT("ROSPath"), &Z_Registration_Info_UScriptStruct_FROSPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSPath), 170903436U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2PathMsg, UROS2PathMsg::StaticClass, TEXT("UROS2PathMsg"), &Z_Registration_Info_UClass_UROS2PathMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2PathMsg), 524318634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Path_h__Script_rclUE_2339644573(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Path_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Path_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Path_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Path_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
