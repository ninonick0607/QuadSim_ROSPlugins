// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/rclcUtilities.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCoderclcUtilities() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
RCLUE_API UClass* Z_Construct_UClass_UROS2Utils();
RCLUE_API UClass* Z_Construct_UClass_UROS2Utils_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_URRTimerManager();
RCLUE_API UClass* Z_Construct_UClass_URRTimerManager_NoRegister();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2QoS();
RCLUE_API UEnum* Z_Construct_UEnum_rclUE_UROS2State();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum UROS2State ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_UROS2State;
static UEnum* UROS2State_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_UROS2State.OuterSingleton)
	{
		Z_Registration_Info_UEnum_UROS2State.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_rclUE_UROS2State, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("UROS2State"));
	}
	return Z_Registration_Info_UEnum_UROS2State.OuterSingleton;
}
template<> RCLUE_API UEnum* StaticEnum<UROS2State>()
{
	return UROS2State_StaticEnum();
}
struct Z_Construct_UEnum_rclUE_UROS2State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief used to add states to classes (e.g. to avoid double initializations)\n *\n */" },
#endif
		{ "Created.DisplayName", "Created" },
		{ "Created.Name", "Created" },
		{ "Initialized.DisplayName", "Initialized" },
		{ "Initialized.Name", "Initialized" },
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief used to add states to classes (e.g. to avoid double initializations)" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Created", (int64)Created },
		{ "Initialized", (int64)Initialized },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_rclUE_UROS2State_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	"UROS2State",
	"UROS2State",
	Z_Construct_UEnum_rclUE_UROS2State_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_rclUE_UROS2State_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_rclUE_UROS2State_Statics::Enum_MetaDataParams), Z_Construct_UEnum_rclUE_UROS2State_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_rclUE_UROS2State()
{
	if (!Z_Registration_Info_UEnum_UROS2State.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UROS2State.InnerSingleton, Z_Construct_UEnum_rclUE_UROS2State_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_UROS2State.InnerSingleton;
}
// ********** End Enum UROS2State ******************************************************************

// ********** Begin Enum UROS2QoS ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_UROS2QoS;
static UEnum* UROS2QoS_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_UROS2QoS.OuterSingleton)
	{
		Z_Registration_Info_UEnum_UROS2QoS.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_rclUE_UROS2QoS, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("UROS2QoS"));
	}
	return Z_Registration_Info_UEnum_UROS2QoS.OuterSingleton;
}
template<> RCLUE_API UEnum* StaticEnum<UROS2QoS>()
{
	return UROS2QoS_StaticEnum();
}
struct Z_Construct_UEnum_rclUE_UROS2QoS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClockPub.DisplayName", "ClockPub" },
		{ "ClockPub.Name", "UROS2QoS::ClockPub" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief used to set [QoS policies](https://docs.ros.org/en/foxy/Concepts/About-Quality-of-Service-Settings.html)\n * also check rmw/types.h for details\n */" },
#endif
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "UROS2QoS::Default" },
		{ "DynamicBroadcaster.DisplayName", "DynamicBroadcaster" },
		{ "DynamicBroadcaster.Name", "UROS2QoS::DynamicBroadcaster" },
		{ "KeepLast.DisplayName", "KeepLast" },
		{ "KeepLast.Name", "UROS2QoS::KeepLast" },
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
		{ "ParameterEvents.DisplayName", "ParameterEvents" },
		{ "ParameterEvents.Name", "UROS2QoS::ParameterEvents" },
		{ "Parameters.DisplayName", "Parameters" },
		{ "Parameters.Name", "UROS2QoS::Parameters" },
		{ "SensorData.DisplayName", "SensorData" },
		{ "SensorData.Name", "UROS2QoS::SensorData" },
		{ "Services.DisplayName", "Services" },
		{ "Services.Name", "UROS2QoS::Services" },
		{ "StaticBroadcaster.DisplayName", "StaticBroadcaster" },
		{ "StaticBroadcaster.Name", "UROS2QoS::StaticBroadcaster" },
		{ "System.DisplayName", "System" },
		{ "System.Name", "UROS2QoS::System" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief used to set [QoS policies](https://docs.ros.org/en/foxy/Concepts/About-Quality-of-Service-Settings.html)\nalso check rmw/types.h for details" },
#endif
		{ "UnknownQoS.DisplayName", "UnknownQoS" },
		{ "UnknownQoS.Name", "UROS2QoS::UnknownQoS" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "UROS2QoS::Default", (int64)UROS2QoS::Default },
		{ "UROS2QoS::SensorData", (int64)UROS2QoS::SensorData },
		{ "UROS2QoS::DynamicBroadcaster", (int64)UROS2QoS::DynamicBroadcaster },
		{ "UROS2QoS::StaticBroadcaster", (int64)UROS2QoS::StaticBroadcaster },
		{ "UROS2QoS::ClockPub", (int64)UROS2QoS::ClockPub },
		{ "UROS2QoS::KeepLast", (int64)UROS2QoS::KeepLast },
		{ "UROS2QoS::Parameters", (int64)UROS2QoS::Parameters },
		{ "UROS2QoS::Services", (int64)UROS2QoS::Services },
		{ "UROS2QoS::ParameterEvents", (int64)UROS2QoS::ParameterEvents },
		{ "UROS2QoS::System", (int64)UROS2QoS::System },
		{ "UROS2QoS::UnknownQoS", (int64)UROS2QoS::UnknownQoS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_rclUE_UROS2QoS_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	"UROS2QoS",
	"UROS2QoS",
	Z_Construct_UEnum_rclUE_UROS2QoS_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_rclUE_UROS2QoS_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_rclUE_UROS2QoS_Statics::Enum_MetaDataParams), Z_Construct_UEnum_rclUE_UROS2QoS_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_rclUE_UROS2QoS()
{
	if (!Z_Registration_Info_UEnum_UROS2QoS.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UROS2QoS.InnerSingleton, Z_Construct_UEnum_rclUE_UROS2QoS_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_UROS2QoS.InnerSingleton;
}
// ********** End Enum UROS2QoS ********************************************************************

// ********** Begin Class URRTimerManager **********************************************************
void URRTimerManager::StaticRegisterNativesURRTimerManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URRTimerManager;
UClass* URRTimerManager::GetPrivateStaticClass()
{
	using TClass = URRTimerManager;
	if (!Z_Registration_Info_UClass_URRTimerManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RRTimerManager"),
			Z_Registration_Info_UClass_URRTimerManager.InnerSingleton,
			StaticRegisterNativesURRTimerManager,
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
	return Z_Registration_Info_UClass_URRTimerManager.InnerSingleton;
}
UClass* Z_Construct_UClass_URRTimerManager_NoRegister()
{
	return URRTimerManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URRTimerManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Custom timer manager.  This try to execute delegate at a given fixed rate.\n * Default timer wait given rate from last execution, this timer wait given rate from desired execution time.\n */" },
#endif
		{ "IncludePath", "rclcUtilities.h" },
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Custom timer manager.  This try to execute delegate at a given fixed rate.\nDefault timer wait given rate from last execution, this timer wait given rate from desired execution time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[] = {
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[] = {
		{ "Category", "RRTimerManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! Timer handler for periodic publisher\n" },
#endif
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! Timer handler for periodic publisher" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogLastHit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//! internal property used to log throttle.\n" },
#endif
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! internal property used to log throttle." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogLastHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URRTimerManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URRTimerManager_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((URRTimerManager*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URRTimerManager_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URRTimerManager), &Z_Construct_UClass_URRTimerManager_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URRTimerManager_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URRTimerManager, Rate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rate_MetaData), NewProp_Rate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URRTimerManager_Statics::NewProp_DesiredTime = { "DesiredTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URRTimerManager, DesiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredTime_MetaData), NewProp_DesiredTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URRTimerManager_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URRTimerManager, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_MetaData), NewProp_TimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URRTimerManager_Statics::NewProp_LogLastHit = { "LogLastHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URRTimerManager, LogLastHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogLastHit_MetaData), NewProp_LogLastHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URRTimerManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRTimerManager_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRTimerManager_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRTimerManager_Statics::NewProp_DesiredTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRTimerManager_Statics::NewProp_TimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URRTimerManager_Statics::NewProp_LogLastHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URRTimerManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URRTimerManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URRTimerManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URRTimerManager_Statics::ClassParams = {
	&URRTimerManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URRTimerManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URRTimerManager_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URRTimerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_URRTimerManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URRTimerManager()
{
	if (!Z_Registration_Info_UClass_URRTimerManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URRTimerManager.OuterSingleton, Z_Construct_UClass_URRTimerManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URRTimerManager.OuterSingleton;
}
URRTimerManager::URRTimerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URRTimerManager);
URRTimerManager::~URRTimerManager() {}
// ********** End Class URRTimerManager ************************************************************

// ********** Begin Class UROS2Utils ***************************************************************
void UROS2Utils::StaticRegisterNativesUROS2Utils()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2Utils;
UClass* UROS2Utils::GetPrivateStaticClass()
{
	using TClass = UROS2Utils;
	if (!Z_Registration_Info_UClass_UROS2Utils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2Utils"),
			Z_Registration_Info_UClass_UROS2Utils.InnerSingleton,
			StaticRegisterNativesUROS2Utils,
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
	return Z_Registration_Info_UClass_UROS2Utils.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2Utils_NoRegister()
{
	return UROS2Utils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2Utils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "rclcUtilities.h" },
		{ "ModuleRelativePath", "Public/rclcUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2Utils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2Utils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Utils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2Utils_Statics::ClassParams = {
	&UROS2Utils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2Utils_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2Utils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2Utils()
{
	if (!Z_Registration_Info_UClass_UROS2Utils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2Utils.OuterSingleton, Z_Construct_UClass_UROS2Utils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2Utils.OuterSingleton;
}
UROS2Utils::UROS2Utils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2Utils);
UROS2Utils::~UROS2Utils() {}
// ********** End Class UROS2Utils *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h__Script_rclUE_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ UROS2State_StaticEnum, TEXT("UROS2State"), &Z_Registration_Info_UEnum_UROS2State, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 478657319U) },
		{ UROS2QoS_StaticEnum, TEXT("UROS2QoS"), &Z_Registration_Info_UEnum_UROS2QoS, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 314065690U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URRTimerManager, URRTimerManager::StaticClass, TEXT("URRTimerManager"), &Z_Registration_Info_UClass_URRTimerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URRTimerManager), 3617859669U) },
		{ Z_Construct_UClass_UROS2Utils, UROS2Utils::StaticClass, TEXT("UROS2Utils"), &Z_Registration_Info_UClass_UROS2Utils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2Utils), 51701509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h__Script_rclUE_2350257655(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h__Script_rclUE_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h__Script_rclUE_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h__Script_rclUE_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
