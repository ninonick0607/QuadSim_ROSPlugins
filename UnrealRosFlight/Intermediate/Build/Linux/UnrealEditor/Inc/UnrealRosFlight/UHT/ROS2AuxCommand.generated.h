// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2AuxCommand.h"

#ifdef UNREALROSFLIGHT_ROS2AuxCommand_generated_h
#error "ROS2AuxCommand.generated.h already included, missing '#pragma once' in ROS2AuxCommand.h"
#endif
#define UNREALROSFLIGHT_ROS2AuxCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSAuxCommand;

// ********** Begin ScriptStruct FROSAuxCommand ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSAuxCommand_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSAuxCommand;
// ********** End ScriptStruct FROSAuxCommand ******************************************************

// ********** Begin Class UROS2AuxCommandMsg *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_AUX_COMMAND_MOTOR); \
	DECLARE_FUNCTION(execCONST_AUX_COMMAND_SERVO); \
	DECLARE_FUNCTION(execCONST_AUX_COMMAND_DISABLED); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2AuxCommandMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2AuxCommandMsg(); \
	friend struct Z_Construct_UClass_UROS2AuxCommandMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2AuxCommandMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2AuxCommandMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2AuxCommandMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2AuxCommandMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2AuxCommandMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2AuxCommandMsg(UROS2AuxCommandMsg&&) = delete; \
	UROS2AuxCommandMsg(const UROS2AuxCommandMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2AuxCommandMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2AuxCommandMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2AuxCommandMsg) \
	NO_API virtual ~UROS2AuxCommandMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_79_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_82_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2AuxCommandMsg;

// ********** End Class UROS2AuxCommandMsg *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2AuxCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
