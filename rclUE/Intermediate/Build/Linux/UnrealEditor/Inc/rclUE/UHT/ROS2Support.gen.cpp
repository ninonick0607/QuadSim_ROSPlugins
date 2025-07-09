// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/ROS2Support.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Support() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RCLUE_API UClass* Z_Construct_UClass_UROS2Support();
RCLUE_API UClass* Z_Construct_UClass_UROS2Support_NoRegister();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UROS2Support Function Fini ***********************************************
struct Z_Construct_UFunction_UROS2Support_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Wrapper of rclc_support_fini\n     * \n     */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Support.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Wrapper of rclc_support_fini" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Support_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Support, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Support_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Support_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Support_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Support_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Support::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2Support Function Fini *************************************************

// ********** Begin Class UROS2Support Function Init ***********************************************
struct Z_Construct_UFunction_UROS2Support_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * @brief Wrapper of rclc_support_init\n    * \n    */" },
#endif
		{ "ModuleRelativePath", "Public/ROS2Support.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Wrapper of rclc_support_init" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2Support_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2Support, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2Support_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2Support_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2Support_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2Support_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2Support::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2Support Function Init *************************************************

// ********** Begin Class UROS2Support *************************************************************
void UROS2Support::StaticRegisterNativesUROS2Support()
{
	UClass* Class = UROS2Support::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2Support::execFini },
		{ "Init", &UROS2Support::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Support;
UClass* UROS2Support::GetPrivateStaticClass()
{
	using TClass = UROS2Support;
	if (!Z_Registration_Info_UClass_UROS2Support.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Support"),
			Z_Registration_Info_UClass_UROS2Support.InnerSingleton,
			StaticRegisterNativesUROS2Support,
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
	return Z_Registration_Info_UClass_UROS2Support.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Support_NoRegister()
{
	return UROS2Support::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Support_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief  class that tracks rclc_support_t (see rclc/types.h)\n * this object is used to initialized ROS2 nodes.\n */" },
#endif
		{ "IncludePath", "ROS2Support.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ROS2Support.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief  class that tracks rclc_support_t (see rclc/types.h)\nthis object is used to initialized ROS2 nodes." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2Support_Fini, "Fini" }, // 2051962815
		{ &Z_Construct_UFunction_UROS2Support_Init, "Init" }, // 3586818714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Support>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2Support_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Support_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Support_Statics::ClassParams = {
	&UROS2Support::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Support_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Support_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Support()
{
	if (!Z_Registration_Info_UClass_UROS2Support.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Support.OuterSingleton, Z_Construct_UClass_UROS2Support_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Support.OuterSingleton;
}
UROS2Support::UROS2Support(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Support);
UROS2Support::~UROS2Support() {}
// ********** End Class UROS2Support ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Support_h__Script_rclUE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2Support, UROS2Support::StaticClass, TEXT("UROS2Support"), &Z_Registration_Info_UClass_UROS2Support, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Support), 3845859551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Support_h__Script_rclUE_3166231427(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Support_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Support_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
