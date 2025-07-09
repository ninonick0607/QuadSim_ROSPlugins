// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2SolidPrimitive.h"

#ifdef RCLUE_ROS2SolidPrimitive_generated_h
#error "ROS2SolidPrimitive.generated.h already included, missing '#pragma once' in ROS2SolidPrimitive.h"
#endif
#define RCLUE_ROS2SolidPrimitive_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSSolidPrimitive;

// ********** Begin ScriptStruct FROSSolidPrimitive ************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSSolidPrimitive_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSSolidPrimitive;
// ********** End ScriptStruct FROSSolidPrimitive **************************************************

// ********** Begin Class UROS2SolidPrimitiveMsg ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_PRISM_HEIGHT); \
	DECLARE_FUNCTION(execCONST_CONE_RADIUS); \
	DECLARE_FUNCTION(execCONST_CONE_HEIGHT); \
	DECLARE_FUNCTION(execCONST_CYLINDER_RADIUS); \
	DECLARE_FUNCTION(execCONST_CYLINDER_HEIGHT); \
	DECLARE_FUNCTION(execCONST_SPHERE_RADIUS); \
	DECLARE_FUNCTION(execCONST_BOX_Z); \
	DECLARE_FUNCTION(execCONST_BOX_Y); \
	DECLARE_FUNCTION(execCONST_BOX_X); \
	DECLARE_FUNCTION(execCONST_PRISM); \
	DECLARE_FUNCTION(execCONST_CONE); \
	DECLARE_FUNCTION(execCONST_CYLINDER); \
	DECLARE_FUNCTION(execCONST_SPHERE); \
	DECLARE_FUNCTION(execCONST_BOX); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2SolidPrimitiveMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2SolidPrimitiveMsg(); \
	friend struct Z_Construct_UClass_UROS2SolidPrimitiveMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2SolidPrimitiveMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2SolidPrimitiveMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2SolidPrimitiveMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2SolidPrimitiveMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2SolidPrimitiveMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2SolidPrimitiveMsg(UROS2SolidPrimitiveMsg&&) = delete; \
	UROS2SolidPrimitiveMsg(const UROS2SolidPrimitiveMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2SolidPrimitiveMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2SolidPrimitiveMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2SolidPrimitiveMsg) \
	NO_API virtual ~UROS2SolidPrimitiveMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_77_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_80_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2SolidPrimitiveMsg;

// ********** End Class UROS2SolidPrimitiveMsg *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2SolidPrimitive_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
