// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2UInt16MA.h"

#ifdef RCLUE_ROS2UInt16MA_generated_h
#error "ROS2UInt16MA.generated.h already included, missing '#pragma once' in ROS2UInt16MA.h"
#endif
#define RCLUE_ROS2UInt16MA_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSUInt16MA;

// ********** Begin ScriptStruct FROSUInt16MA ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSUInt16MA_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSUInt16MA;
// ********** End ScriptStruct FROSUInt16MA ********************************************************

// ********** Begin Class UROS2UInt16MAMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2UInt16MAMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2UInt16MAMsg(); \
	friend struct Z_Construct_UClass_UROS2UInt16MAMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2UInt16MAMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2UInt16MAMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2UInt16MAMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2UInt16MAMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2UInt16MAMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2UInt16MAMsg(UROS2UInt16MAMsg&&) = delete; \
	UROS2UInt16MAMsg(const UROS2UInt16MAMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2UInt16MAMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2UInt16MAMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2UInt16MAMsg) \
	NO_API virtual ~UROS2UInt16MAMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_62_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_65_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2UInt16MAMsg;

// ********** End Class UROS2UInt16MAMsg ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UInt16MA_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
