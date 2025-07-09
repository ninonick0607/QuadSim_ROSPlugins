// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2RCRaw.h"

#ifdef UNREALROSFLIGHT_ROS2RCRaw_generated_h
#error "ROS2RCRaw.generated.h already included, missing '#pragma once' in ROS2RCRaw.h"
#endif
#define UNREALROSFLIGHT_ROS2RCRaw_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSRCRaw;

// ********** Begin ScriptStruct FROSRCRaw *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSRCRaw_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSRCRaw;
// ********** End ScriptStruct FROSRCRaw ***********************************************************

// ********** Begin Class UROS2RCRawMsg ************************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2RCRawMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2RCRawMsg(); \
	friend struct Z_Construct_UClass_UROS2RCRawMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2RCRawMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2RCRawMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2RCRawMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2RCRawMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2RCRawMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2RCRawMsg(UROS2RCRawMsg&&) = delete; \
	UROS2RCRawMsg(const UROS2RCRawMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2RCRawMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2RCRawMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2RCRawMsg) \
	NO_API virtual ~UROS2RCRawMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_66_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_69_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2RCRawMsg;

// ********** End Class UROS2RCRawMsg **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2RCRaw_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
