// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2NavSatStatus.h"

#ifdef RCLUE_ROS2NavSatStatus_generated_h
#error "ROS2NavSatStatus.generated.h already included, missing '#pragma once' in ROS2NavSatStatus.h"
#endif
#define RCLUE_ROS2NavSatStatus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSNavSatStatus;

// ********** Begin ScriptStruct FROSNavSatStatus **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSNavSatStatus_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSNavSatStatus;
// ********** End ScriptStruct FROSNavSatStatus ****************************************************

// ********** Begin Class UROS2NavSatStatusMsg *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2NavSatStatusMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2NavSatStatusMsg(); \
	friend struct Z_Construct_UClass_UROS2NavSatStatusMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2NavSatStatusMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2NavSatStatusMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2NavSatStatusMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2NavSatStatusMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2NavSatStatusMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2NavSatStatusMsg(UROS2NavSatStatusMsg&&) = delete; \
	UROS2NavSatStatusMsg(const UROS2NavSatStatusMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2NavSatStatusMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2NavSatStatusMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2NavSatStatusMsg) \
	NO_API virtual ~UROS2NavSatStatusMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_61_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_64_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2NavSatStatusMsg;

// ********** End Class UROS2NavSatStatusMsg *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2NavSatStatus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
