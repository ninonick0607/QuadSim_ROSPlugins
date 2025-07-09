// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ROSFlightControllerSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROSFlightControllerSource() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROSFlightControllerSource();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROSFlightControllerSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UROSFlightControllerSource Function GetDesiredPitch ******************
struct Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics
{
	struct ROSFlightControllerSource_eventGetDesiredPitch_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROSFlightControllerSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROSFlightControllerSource_eventGetDesiredPitch_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROSFlightControllerSource, nullptr, "GetDesiredPitch", Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::ROSFlightControllerSource_eventGetDesiredPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::ROSFlightControllerSource_eventGetDesiredPitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IROSFlightControllerSource::execGetDesiredPitch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDesiredPitch();
	P_NATIVE_END;
}
// ********** End Interface UROSFlightControllerSource Function GetDesiredPitch ********************

// ********** Begin Interface UROSFlightControllerSource Function GetDesiredRoll *******************
struct Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics
{
	struct ROSFlightControllerSource_eventGetDesiredRoll_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROSFlightControllerSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROSFlightControllerSource_eventGetDesiredRoll_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROSFlightControllerSource, nullptr, "GetDesiredRoll", Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::ROSFlightControllerSource_eventGetDesiredRoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::ROSFlightControllerSource_eventGetDesiredRoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IROSFlightControllerSource::execGetDesiredRoll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDesiredRoll();
	P_NATIVE_END;
}
// ********** End Interface UROSFlightControllerSource Function GetDesiredRoll *********************

// ********** Begin Interface UROSFlightControllerSource Function GetDesiredThrustNormalized *******
struct Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics
{
	struct ROSFlightControllerSource_eventGetDesiredThrustNormalized_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROSFlightControllerSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROSFlightControllerSource_eventGetDesiredThrustNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROSFlightControllerSource, nullptr, "GetDesiredThrustNormalized", Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::ROSFlightControllerSource_eventGetDesiredThrustNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::ROSFlightControllerSource_eventGetDesiredThrustNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IROSFlightControllerSource::execGetDesiredThrustNormalized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDesiredThrustNormalized();
	P_NATIVE_END;
}
// ********** End Interface UROSFlightControllerSource Function GetDesiredThrustNormalized *********

// ********** Begin Interface UROSFlightControllerSource Function GetDesiredYawRate ****************
struct Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics
{
	struct ROSFlightControllerSource_eventGetDesiredYawRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROSFlightControllerSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROSFlightControllerSource_eventGetDesiredYawRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROSFlightControllerSource, nullptr, "GetDesiredYawRate", Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::ROSFlightControllerSource_eventGetDesiredYawRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::ROSFlightControllerSource_eventGetDesiredYawRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IROSFlightControllerSource::execGetDesiredYawRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDesiredYawRate();
	P_NATIVE_END;
}
// ********** End Interface UROSFlightControllerSource Function GetDesiredYawRate ******************

// ********** Begin Interface UROSFlightControllerSource Function IsUsingROSflight *****************
struct Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics
{
	struct ROSFlightControllerSource_eventIsUsingROSflight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use the simplest UFUNCTION() specifier for a C++ only interface.\n" },
#endif
		{ "ModuleRelativePath", "Public/ROSFlightControllerSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the simplest UFUNCTION() specifier for a C++ only interface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROSFlightControllerSource_eventIsUsingROSflight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROSFlightControllerSource, nullptr, "IsUsingROSflight", Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::ROSFlightControllerSource_eventIsUsingROSflight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::ROSFlightControllerSource_eventIsUsingROSflight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IROSFlightControllerSource::execIsUsingROSflight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->IsUsingROSflight();
	P_NATIVE_END;
}
// ********** End Interface UROSFlightControllerSource Function IsUsingROSflight *******************

// ********** Begin Interface UROSFlightControllerSource *******************************************
void UROSFlightControllerSource::StaticRegisterNativesUROSFlightControllerSource()
{
	UClass* Class = UROSFlightControllerSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDesiredPitch", &IROSFlightControllerSource::execGetDesiredPitch },
		{ "GetDesiredRoll", &IROSFlightControllerSource::execGetDesiredRoll },
		{ "GetDesiredThrustNormalized", &IROSFlightControllerSource::execGetDesiredThrustNormalized },
		{ "GetDesiredYawRate", &IROSFlightControllerSource::execGetDesiredYawRate },
		{ "IsUsingROSflight", &IROSFlightControllerSource::execIsUsingROSflight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROSFlightControllerSource;
UClass* UROSFlightControllerSource::GetPrivateStaticClass()
{
	using TClass = UROSFlightControllerSource;
	if (!Z_Registration_Info_UClass_UROSFlightControllerSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROSFlightControllerSource"),
			Z_Registration_Info_UClass_UROSFlightControllerSource.InnerSingleton,
			StaticRegisterNativesUROSFlightControllerSource,
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
	return Z_Registration_Info_UClass_UROSFlightControllerSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UROSFlightControllerSource_NoRegister()
{
	return UROSFlightControllerSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROSFlightControllerSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ROSFlightControllerSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredPitch, "GetDesiredPitch" }, // 1781849062
		{ &Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredRoll, "GetDesiredRoll" }, // 4283129686
		{ &Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredThrustNormalized, "GetDesiredThrustNormalized" }, // 2706617442
		{ &Z_Construct_UFunction_UROSFlightControllerSource_GetDesiredYawRate, "GetDesiredYawRate" }, // 1663887063
		{ &Z_Construct_UFunction_UROSFlightControllerSource_IsUsingROSflight, "IsUsingROSflight" }, // 3181946823
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IROSFlightControllerSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROSFlightControllerSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROSFlightControllerSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROSFlightControllerSource_Statics::ClassParams = {
	&UROSFlightControllerSource::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROSFlightControllerSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UROSFlightControllerSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROSFlightControllerSource()
{
	if (!Z_Registration_Info_UClass_UROSFlightControllerSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROSFlightControllerSource.OuterSingleton, Z_Construct_UClass_UROSFlightControllerSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROSFlightControllerSource.OuterSingleton;
}
UROSFlightControllerSource::UROSFlightControllerSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROSFlightControllerSource);
// ********** End Interface UROSFlightControllerSource *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h__Script_UnrealRosFlight_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROSFlightControllerSource, UROSFlightControllerSource::StaticClass, TEXT("UROSFlightControllerSource"), &Z_Registration_Info_UClass_UROSFlightControllerSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROSFlightControllerSource), 2380811311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h__Script_UnrealRosFlight_3979401497(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h__Script_UnrealRosFlight_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
