// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Int8MA.h"

#ifdef RCLUE_ROS2Int8MA_generated_h
#error "ROS2Int8MA.generated.h already included, missing '#pragma once' in ROS2Int8MA.h"
#endif
#define RCLUE_ROS2Int8MA_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSInt8MA;

// ********** Begin ScriptStruct FROSInt8MA ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSInt8MA_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSInt8MA;
// ********** End ScriptStruct FROSInt8MA **********************************************************

// ********** Begin Class UROS2Int8MAMsg ***********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2Int8MAMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Int8MAMsg(); \
	friend struct Z_Construct_UClass_UROS2Int8MAMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Int8MAMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Int8MAMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Int8MAMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2Int8MAMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Int8MAMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Int8MAMsg(UROS2Int8MAMsg&&) = delete; \
	UROS2Int8MAMsg(const UROS2Int8MAMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Int8MAMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Int8MAMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2Int8MAMsg) \
	NO_API virtual ~UROS2Int8MAMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_62_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_65_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Int8MAMsg;

// ********** End Class UROS2Int8MAMsg *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Int8MA_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
