// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Command.h"

#ifdef UNREALROSFLIGHT_ROS2Command_generated_h
#error "ROS2Command.generated.h already included, missing '#pragma once' in ROS2Command.h"
#endif
#define UNREALROSFLIGHT_ROS2Command_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSCommand;

// ********** Begin ScriptStruct FROSCommand *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSCommand_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSCommand;
// ********** End ScriptStruct FROSCommand *********************************************************

// ********** Begin Class UROS2CommandMsg **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_IGNORE_FZ); \
	DECLARE_FUNCTION(execCONST_IGNORE_FY); \
	DECLARE_FUNCTION(execCONST_IGNORE_FX); \
	DECLARE_FUNCTION(execCONST_IGNORE_QZ); \
	DECLARE_FUNCTION(execCONST_IGNORE_QY); \
	DECLARE_FUNCTION(execCONST_IGNORE_QX); \
	DECLARE_FUNCTION(execCONST_IGNORE_NONE); \
	DECLARE_FUNCTION(execCONST_MODE_ROLL_PITCH_YAWRATE_THROTTLE); \
	DECLARE_FUNCTION(execCONST_MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE); \
	DECLARE_FUNCTION(execCONST_MODE_PASS_THROUGH); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2CommandMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2CommandMsg(); \
	friend struct Z_Construct_UClass_UROS2CommandMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2CommandMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2CommandMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2CommandMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2CommandMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2CommandMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2CommandMsg(UROS2CommandMsg&&) = delete; \
	UROS2CommandMsg(const UROS2CommandMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2CommandMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2CommandMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2CommandMsg) \
	NO_API virtual ~UROS2CommandMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_122_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_125_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2CommandMsg;

// ********** End Class UROS2CommandMsg ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2Command_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
