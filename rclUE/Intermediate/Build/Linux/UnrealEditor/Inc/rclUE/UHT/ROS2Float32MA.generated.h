// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Float32MA.h"

#ifdef RCLUE_ROS2Float32MA_generated_h
#error "ROS2Float32MA.generated.h already included, missing '#pragma once' in ROS2Float32MA.h"
#endif
#define RCLUE_ROS2Float32MA_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSFloat32MA;

// ********** Begin ScriptStruct FROSFloat32MA *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSFloat32MA_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSFloat32MA;
// ********** End ScriptStruct FROSFloat32MA *******************************************************

// ********** Begin Class UROS2Float32MAMsg ********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2Float32MAMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2Float32MAMsg(); \
	friend struct Z_Construct_UClass_UROS2Float32MAMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2Float32MAMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2Float32MAMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2Float32MAMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2Float32MAMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2Float32MAMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2Float32MAMsg(UROS2Float32MAMsg&&) = delete; \
	UROS2Float32MAMsg(const UROS2Float32MAMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2Float32MAMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2Float32MAMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2Float32MAMsg) \
	NO_API virtual ~UROS2Float32MAMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_62_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_65_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2Float32MAMsg;

// ********** End Class UROS2Float32MAMsg **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Float32MA_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
