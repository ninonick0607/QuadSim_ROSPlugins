// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Vec3Stamped.h"
#include "rclUE/Public/Msgs/ROS2Header.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Vec3Stamped() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Vec3StampedMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2Vec3StampedMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSVec3Stamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSVec3Stamped ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSVec3Stamped;
class UScriptStruct* FROSVec3Stamped::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSVec3Stamped.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSVec3Stamped.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSVec3Stamped, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSVec3Stamped"));
	}
	return Z_Registration_Info_UScriptStruct_FROSVec3Stamped.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSVec3Stamped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vec3Stamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSVec3Stamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vec3Stamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "ROSVec3Stamped" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vec3Stamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSVec3Stamped>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSVec3Stamped, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSVec3Stamped, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSVec3Stamped",
	Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::PropPointers),
	sizeof(FROSVec3Stamped),
	alignof(FROSVec3Stamped),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSVec3Stamped()
{
	if (!Z_Registration_Info_UScriptStruct_FROSVec3Stamped.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSVec3Stamped.InnerSingleton, Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSVec3Stamped.InnerSingleton;
}
// ********** End ScriptStruct FROSVec3Stamped *****************************************************

// ********** Begin Class UROS2Vec3StampedMsg Function GetMsg **************************************
struct Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics
{
	struct ROS2Vec3StampedMsg_eventGetMsg_Parms
	{
		FROSVec3Stamped Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vec3Stamped.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Vec3StampedMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSVec3Stamped, METADATA_PARAMS(0, nullptr) }; // 3687087848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Vec3StampedMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::ROS2Vec3StampedMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::ROS2Vec3StampedMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Vec3StampedMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSVec3Stamped,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2Vec3StampedMsg Function GetMsg ****************************************

// ********** Begin Class UROS2Vec3StampedMsg Function SetMsg **************************************
struct Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics
{
	struct ROS2Vec3StampedMsg_eventSetMsg_Parms
	{
		FROSVec3Stamped Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vec3Stamped.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Vec3StampedMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSVec3Stamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3687087848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Vec3StampedMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::ROS2Vec3StampedMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::ROS2Vec3StampedMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Vec3StampedMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSVec3Stamped,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2Vec3StampedMsg Function SetMsg ****************************************

// ********** Begin Class UROS2Vec3StampedMsg ******************************************************
void UROS2Vec3StampedMsg::StaticRegisterNativesUROS2Vec3StampedMsg()
{
	UClass* Class = UROS2Vec3StampedMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMsg", &UROS2Vec3StampedMsg::execGetMsg },
		{ "SetMsg", &UROS2Vec3StampedMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Vec3StampedMsg;
UClass* UROS2Vec3StampedMsg::GetPrivateStaticClass()
{
	using TClass = UROS2Vec3StampedMsg;
	if (!Z_Registration_Info_UClass_UROS2Vec3StampedMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Vec3StampedMsg"),
			Z_Registration_Info_UClass_UROS2Vec3StampedMsg.InnerSingleton,
			StaticRegisterNativesUROS2Vec3StampedMsg,
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
	return Z_Registration_Info_UClass_UROS2Vec3StampedMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Vec3StampedMsg_NoRegister()
{
	return UROS2Vec3StampedMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Vec3StampedMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Vec3Stamped.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Vec3Stamped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Vec3StampedMsg_GetMsg, "GetMsg" }, // 2076815089
		{ &Z_Construct_UFunction_UROS2Vec3StampedMsg_SetMsg, "SetMsg" }, // 4236825406
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Vec3StampedMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2Vec3StampedMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Vec3StampedMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Vec3StampedMsg_Statics::ClassParams = {
	&UROS2Vec3StampedMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Vec3StampedMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Vec3StampedMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Vec3StampedMsg()
{
	if (!Z_Registration_Info_UClass_UROS2Vec3StampedMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Vec3StampedMsg.OuterSingleton, Z_Construct_UClass_UROS2Vec3StampedMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Vec3StampedMsg.OuterSingleton;
}
UROS2Vec3StampedMsg::UROS2Vec3StampedMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Vec3StampedMsg);
UROS2Vec3StampedMsg::~UROS2Vec3StampedMsg() {}
// ********** End Class UROS2Vec3StampedMsg ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSVec3Stamped::StaticStruct, Z_Construct_UScriptStruct_FROSVec3Stamped_Statics::NewStructOps, TEXT("ROSVec3Stamped"), &Z_Registration_Info_UScriptStruct_FROSVec3Stamped, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSVec3Stamped), 3687087848U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Vec3StampedMsg, UROS2Vec3StampedMsg::StaticClass, TEXT("UROS2Vec3StampedMsg"), &Z_Registration_Info_UClass_UROS2Vec3StampedMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Vec3StampedMsg), 2203265955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h__Script_rclUE_2409987707(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Vec3Stamped_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
