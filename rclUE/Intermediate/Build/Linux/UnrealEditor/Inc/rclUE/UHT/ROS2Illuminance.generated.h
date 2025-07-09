// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2Illuminance.h"

#ifdef RCLUE_ROS2Illuminance_generated_h
#error "ROS2Illuminance.generated.h already included, missing '#pragma once' in ROS2Illuminance.h"
#endif
#define RCLUE_ROS2Illuminance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSIlluminance;

// ********** Begin ScriptStruct FROSIlluminance ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSIlluminance_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSIlluminance;
// ********** End ScriptStruct FROSIlluminance *****************************************************

// ********** Begin Class UROS2IlluminanceMsg ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2IlluminanceMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2IlluminanceMsg(); \
	friend struct Z_Construct_UClass_UROS2IlluminanceMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2IlluminanceMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2IlluminanceMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2IlluminanceMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2IlluminanceMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2IlluminanceMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2IlluminanceMsg(UROS2IlluminanceMsg&&) = delete; \
	UROS2IlluminanceMsg(const UROS2IlluminanceMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2IlluminanceMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2IlluminanceMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2IlluminanceMsg) \
	NO_API virtual ~UROS2IlluminanceMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_60_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_63_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2IlluminanceMsg;

// ********** End Class UROS2IlluminanceMsg ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Illuminance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
