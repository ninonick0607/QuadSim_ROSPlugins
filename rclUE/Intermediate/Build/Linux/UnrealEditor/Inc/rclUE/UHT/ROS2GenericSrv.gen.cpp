// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2GenericSrv.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GenericSrv() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv_NoRegister();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2GenericSrv Function SrvRequestToString ******************************
struct Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics
{
	struct ROS2GenericSrv_eventSrvRequestToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GenericSrv.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GenericSrv_eventSrvRequestToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericSrv, nullptr, "SrvRequestToString", Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::ROS2GenericSrv_eventSrvRequestToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::ROS2GenericSrv_eventSrvRequestToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericSrv::execSrvRequestToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SrvRequestToString();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericSrv Function SrvRequestToString ********************************

// ********** Begin Class UROS2GenericSrv Function SrvResponseToString *****************************
struct Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics
{
	struct ROS2GenericSrv_eventSrvResponseToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GenericSrv.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GenericSrv_eventSrvResponseToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GenericSrv, nullptr, "SrvResponseToString", Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::ROS2GenericSrv_eventSrvResponseToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::ROS2GenericSrv_eventSrvResponseToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GenericSrv::execSrvResponseToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SrvResponseToString();
	P_NATIVE_END;
}
// ********** End Class UROS2GenericSrv Function SrvResponseToString *******************************

// ********** Begin Class UROS2GenericSrv **********************************************************
void UROS2GenericSrv::StaticRegisterNativesUROS2GenericSrv()
{
	UClass* Class = UROS2GenericSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SrvRequestToString", &UROS2GenericSrv::execSrvRequestToString },
		{ "SrvResponseToString", &UROS2GenericSrv::execSrvResponseToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GenericSrv;
UClass* UROS2GenericSrv::GetPrivateStaticClass()
{
	using TClass = UROS2GenericSrv;
	if (!Z_Registration_Info_UClass_UROS2GenericSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GenericSrv"),
			Z_Registration_Info_UClass_UROS2GenericSrv.InnerSingleton,
			StaticRegisterNativesUROS2GenericSrv,
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
	return Z_Registration_Info_UClass_UROS2GenericSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GenericSrv_NoRegister()
{
	return UROS2GenericSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GenericSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions).\n * @todo  Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not\n * bottlenecks and control flow inside them should be fine)\n */" },
#endif
		{ "IncludePath", "Srvs/ROS2GenericSrv.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GenericSrv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief This should be refactored with other generic ROS2 types (Msgs, Sensors, Actions).\n@todo  Get/Print/ToString methods should be merged into a single of each with a parameter to switch versions (these are not\nbottlenecks and control flow inside them should be fine)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GenericSrv_SrvRequestToString, "SrvRequestToString" }, // 2783255024
		{ &Z_Construct_UFunction_UROS2GenericSrv_SrvResponseToString, "SrvResponseToString" }, // 1883315105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GenericSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GenericSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GenericSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GenericSrv_Statics::ClassParams = {
	&UROS2GenericSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GenericSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GenericSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GenericSrv()
{
	if (!Z_Registration_Info_UClass_UROS2GenericSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GenericSrv.OuterSingleton, Z_Construct_UClass_UROS2GenericSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GenericSrv.OuterSingleton;
}
UROS2GenericSrv::UROS2GenericSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GenericSrv);
UROS2GenericSrv::~UROS2GenericSrv() {}
// ********** End Class UROS2GenericSrv ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GenericSrv_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GenericSrv, UROS2GenericSrv::StaticClass, TEXT("UROS2GenericSrv"), &Z_Registration_Info_UClass_UROS2GenericSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GenericSrv), 2489193267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GenericSrv_h__Script_rclUE_3427813520(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GenericSrv_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GenericSrv_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
