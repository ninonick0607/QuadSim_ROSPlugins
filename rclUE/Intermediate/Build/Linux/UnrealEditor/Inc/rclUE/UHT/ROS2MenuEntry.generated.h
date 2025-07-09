// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MenuEntry.h"

#ifdef RCLUE_ROS2MenuEntry_generated_h
#error "ROS2MenuEntry.generated.h already included, missing '#pragma once' in ROS2MenuEntry.h"
#endif
#define RCLUE_ROS2MenuEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMenuEntry;

// ********** Begin ScriptStruct FROSMenuEntry *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMenuEntry_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMenuEntry;
// ********** End ScriptStruct FROSMenuEntry *******************************************************

// ********** Begin Class UROS2MenuEntryMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_ROSLAUNCH); \
	DECLARE_FUNCTION(execCONST_ROSRUN); \
	DECLARE_FUNCTION(execCONST_FEEDBACK); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MenuEntryMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MenuEntryMsg(); \
	friend struct Z_Construct_UClass_UROS2MenuEntryMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MenuEntryMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MenuEntryMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MenuEntryMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MenuEntryMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MenuEntryMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MenuEntryMsg(UROS2MenuEntryMsg&&) = delete; \
	UROS2MenuEntryMsg(const UROS2MenuEntryMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MenuEntryMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MenuEntryMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MenuEntryMsg) \
	NO_API virtual ~UROS2MenuEntryMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_77_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_80_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MenuEntryMsg;

// ********** End Class UROS2MenuEntryMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MenuEntry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
