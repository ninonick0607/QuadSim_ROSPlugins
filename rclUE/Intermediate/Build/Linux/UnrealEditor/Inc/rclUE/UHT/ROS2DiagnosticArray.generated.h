// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2DiagnosticArray.h"

#ifdef RCLUE_ROS2DiagnosticArray_generated_h
#error "ROS2DiagnosticArray.generated.h already included, missing '#pragma once' in ROS2DiagnosticArray.h"
#endif
#define RCLUE_ROS2DiagnosticArray_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSDiagnosticArray;

// ********** Begin ScriptStruct FROSDiagnosticArray ***********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSDiagnosticArray_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSDiagnosticArray;
// ********** End ScriptStruct FROSDiagnosticArray *************************************************

// ********** Begin Class UROS2DiagnosticArrayMsg **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2DiagnosticArrayMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2DiagnosticArrayMsg(); \
	friend struct Z_Construct_UClass_UROS2DiagnosticArrayMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2DiagnosticArrayMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2DiagnosticArrayMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2DiagnosticArrayMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2DiagnosticArrayMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2DiagnosticArrayMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2DiagnosticArrayMsg(UROS2DiagnosticArrayMsg&&) = delete; \
	UROS2DiagnosticArrayMsg(const UROS2DiagnosticArrayMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2DiagnosticArrayMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2DiagnosticArrayMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2DiagnosticArrayMsg) \
	NO_API virtual ~UROS2DiagnosticArrayMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_65_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_68_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2DiagnosticArrayMsg;

// ********** End Class UROS2DiagnosticArrayMsg ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DiagnosticArray_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
