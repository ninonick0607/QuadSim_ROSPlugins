// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2PwmOutput.h"

#ifdef UNREALROSFLIGHT_ROS2PwmOutput_generated_h
#error "ROS2PwmOutput.generated.h already included, missing '#pragma once' in ROS2PwmOutput.h"
#endif
#define UNREALROSFLIGHT_ROS2PwmOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPwmOutput;

// ********** Begin ScriptStruct FROSPwmOutput *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPwmOutput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPwmOutput;
// ********** End ScriptStruct FROSPwmOutput *******************************************************

// ********** Begin Class UROS2PwmOutputMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2PwmOutputMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PwmOutputMsg(); \
	friend struct Z_Construct_UClass_UROS2PwmOutputMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2PwmOutputMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PwmOutputMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2PwmOutputMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PwmOutputMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PwmOutputMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PwmOutputMsg(UROS2PwmOutputMsg&&) = delete; \
	UROS2PwmOutputMsg(const UROS2PwmOutputMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PwmOutputMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PwmOutputMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PwmOutputMsg) \
	NO_API virtual ~UROS2PwmOutputMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_66_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_69_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PwmOutputMsg;

// ********** End Class UROS2PwmOutputMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2PwmOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
