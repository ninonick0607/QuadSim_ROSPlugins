// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2Subsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Subsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
RCLUE_API UClass* Z_Construct_UClass_UROS2Subsystem();
RCLUE_API UClass* Z_Construct_UClass_UROS2Subsystem_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2Support_NoRegister();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2Subsystem Function GetSupport ***************************************
struct Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics
{
	struct ROS2Subsystem_eventGetSupport_Parms
	{
		UROS2Support* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ROS2" },
		{ "ModuleRelativePath", "Public/ROS2Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2Subsystem_eventGetSupport_Parms, ReturnValue), Z_Construct_UClass_UROS2Support_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Subsystem, nullptr, "GetSupport", Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::ROS2Subsystem_eventGetSupport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::ROS2Subsystem_eventGetSupport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2Subsystem_GetSupport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Subsystem_GetSupport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Subsystem::execGetSupport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UROS2Support**)Z_Param__Result=P_THIS->GetSupport();
	P_NATIVE_END;
}
// ********** End Class UROS2Subsystem Function GetSupport *****************************************

// ********** Begin Class UROS2Subsystem ***********************************************************
void UROS2Subsystem::StaticRegisterNativesUROS2Subsystem()
{
	UClass* Class = UROS2Subsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSupport", &UROS2Subsystem::execGetSupport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Subsystem;
UClass* UROS2Subsystem::GetPrivateStaticClass()
{
	using TClass = UROS2Subsystem;
	if (!Z_Registration_Info_UClass_UROS2Subsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Subsystem"),
			Z_Registration_Info_UClass_UROS2Subsystem.InnerSingleton,
			StaticRegisterNativesUROS2Subsystem,
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
	return Z_Registration_Info_UClass_UROS2Subsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Subsystem_NoRegister()
{
	return UROS2Subsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Subsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Game Instance Subsystem class used to maintain the rcl support object\n *   This class is automatically instanced.\n * @sa [Unreal Engine Subsystems](https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/Subsystems/)\n */" },
#endif
		{ "IncludePath", "ROS2Subsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Subsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Game Instance Subsystem class used to maintain the rcl support object\n  This class is automatically instanced.\n@sa [Unreal Engine Subsystems](https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/Subsystems/)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Support_MetaData[] = {
		{ "ModuleRelativePath", "Public/ROS2Subsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Support;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Subsystem_GetSupport, "GetSupport" }, // 332974811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Subsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UROS2Subsystem_Statics::NewProp_Support = { "Support", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UROS2Subsystem, Support), Z_Construct_UClass_UROS2Support_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Support_MetaData), NewProp_Support_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UROS2Subsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UROS2Subsystem_Statics::NewProp_Support,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Subsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UROS2Subsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Subsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Subsystem_Statics::ClassParams = {
	&UROS2Subsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UROS2Subsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Subsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Subsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Subsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Subsystem()
{
	if (!Z_Registration_Info_UClass_UROS2Subsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Subsystem.OuterSingleton, Z_Construct_UClass_UROS2Subsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Subsystem.OuterSingleton;
}
UROS2Subsystem::UROS2Subsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Subsystem);
UROS2Subsystem::~UROS2Subsystem() {}
// ********** End Class UROS2Subsystem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Subsystem, UROS2Subsystem::StaticClass, TEXT("UROS2Subsystem"), &Z_Registration_Info_UClass_UROS2Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Subsystem), 2276488786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h__Script_rclUE_1405604491(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Subsystem_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
