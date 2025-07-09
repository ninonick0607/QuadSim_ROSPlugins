// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "rclcUtilities.h"

#ifdef RCLUE_rclcUtilities_generated_h
#error "rclcUtilities.generated.h already included, missing '#pragma once' in rclcUtilities.h"
#endif
#define RCLUE_rclcUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URRTimerManager **********************************************************
RCLUE_API UClass* Z_Construct_UClass_URRTimerManager_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURRTimerManager(); \
	friend struct Z_Construct_UClass_URRTimerManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_URRTimerManager_NoRegister(); \
public: \
	DECLARE_CLASS2(URRTimerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_URRTimerManager_NoRegister) \
	DECLARE_SERIALIZER(URRTimerManager)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URRTimerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URRTimerManager(URRTimerManager&&) = delete; \
	URRTimerManager(const URRTimerManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URRTimerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URRTimerManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URRTimerManager) \
	NO_API virtual ~URRTimerManager();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_179_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_182_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URRTimerManager;

// ********** End Class URRTimerManager ************************************************************

// ********** Begin Class UROS2Utils ***************************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2Utils_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Utils(); \
	friend struct Z_Construct_UClass_UROS2Utils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Utils_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Utils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Utils_NoRegister) \
	DECLARE_SERIALIZER(UROS2Utils)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Utils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Utils(UROS2Utils&&) = delete; \
	UROS2Utils(const UROS2Utils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Utils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Utils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2Utils) \
	NO_API virtual ~UROS2Utils();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_274_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_277_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h_277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Utils;

// ********** End Class UROS2Utils *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_rclcUtilities_h

// ********** Begin Enum UROS2State ****************************************************************
#define FOREACH_ENUM_UROS2STATE(op) \
	op(Created) \
	op(Initialized) 
// ********** End Enum UROS2State ******************************************************************

// ********** Begin Enum UROS2QoS ******************************************************************
#define FOREACH_ENUM_UROS2QOS(op) \
	op(UROS2QoS::Default) \
	op(UROS2QoS::SensorData) \
	op(UROS2QoS::DynamicBroadcaster) \
	op(UROS2QoS::StaticBroadcaster) \
	op(UROS2QoS::ClockPub) \
	op(UROS2QoS::KeepLast) \
	op(UROS2QoS::Parameters) \
	op(UROS2QoS::Services) \
	op(UROS2QoS::ParameterEvents) \
	op(UROS2QoS::System) \
	op(UROS2QoS::UnknownQoS) 

enum class UROS2QoS : uint8;
template<> struct TIsUEnumClass<UROS2QoS> { enum { Value = true }; };
template<> RCLUE_API UEnum* StaticEnum<UROS2QoS>();
// ********** End Enum UROS2QoS ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
