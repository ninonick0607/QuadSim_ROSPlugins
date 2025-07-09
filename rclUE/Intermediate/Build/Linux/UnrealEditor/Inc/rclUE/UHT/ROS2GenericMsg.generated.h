// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2GenericMsg.h"

#ifdef RCLUE_ROS2GenericMsg_generated_h
#error "ROS2GenericMsg.generated.h already included, missing '#pragma once' in ROS2GenericMsg.h"
#endif
#define RCLUE_ROS2GenericMsg_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UROS2GenericMsg **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMsgToString); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GenericMsg(); \
	friend struct Z_Construct_UClass_UROS2GenericMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GenericMsg, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2GenericMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2GenericMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GenericMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GenericMsg(UROS2GenericMsg&&) = delete; \
	UROS2GenericMsg(const UROS2GenericMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GenericMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GenericMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GenericMsg) \
	NO_API virtual ~UROS2GenericMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h_21_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h_24_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GenericMsg;

// ********** End Class UROS2GenericMsg ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2GenericMsg_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
