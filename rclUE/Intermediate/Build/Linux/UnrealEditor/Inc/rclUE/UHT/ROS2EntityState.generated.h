// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2EntityState.h"

#ifdef RCLUE_ROS2EntityState_generated_h
#error "ROS2EntityState.generated.h already included, missing '#pragma once' in ROS2EntityState.h"
#endif
#define RCLUE_ROS2EntityState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSEntityState;

// ********** Begin ScriptStruct FROSEntityState ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSEntityState_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSEntityState;
// ********** End ScriptStruct FROSEntityState *****************************************************

// ********** Begin Class UROS2EntityStateMsg ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2EntityStateMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2EntityStateMsg(); \
	friend struct Z_Construct_UClass_UROS2EntityStateMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2EntityStateMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2EntityStateMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2EntityStateMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2EntityStateMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2EntityStateMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2EntityStateMsg(UROS2EntityStateMsg&&) = delete; \
	UROS2EntityStateMsg(const UROS2EntityStateMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2EntityStateMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2EntityStateMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2EntityStateMsg) \
	NO_API virtual ~UROS2EntityStateMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_68_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_71_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2EntityStateMsg;

// ********** End Class UROS2EntityStateMsg ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2EntityState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
