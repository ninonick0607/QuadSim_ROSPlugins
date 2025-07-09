// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2OutputRaw.h"

#ifdef UNREALROSFLIGHT_ROS2OutputRaw_generated_h
#error "ROS2OutputRaw.generated.h already included, missing '#pragma once' in ROS2OutputRaw.h"
#endif
#define UNREALROSFLIGHT_ROS2OutputRaw_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSOutputRaw;

// ********** Begin ScriptStruct FROSOutputRaw *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSOutputRaw_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSOutputRaw;
// ********** End ScriptStruct FROSOutputRaw *******************************************************

// ********** Begin Class UROS2OutputRawMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2OutputRawMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2OutputRawMsg(); \
	friend struct Z_Construct_UClass_UROS2OutputRawMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2OutputRawMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2OutputRawMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2OutputRawMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2OutputRawMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2OutputRawMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2OutputRawMsg(UROS2OutputRawMsg&&) = delete; \
	UROS2OutputRawMsg(const UROS2OutputRawMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2OutputRawMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2OutputRawMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2OutputRawMsg) \
	NO_API virtual ~UROS2OutputRawMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_66_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_69_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2OutputRawMsg;

// ********** End Class UROS2OutputRawMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2OutputRaw_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
