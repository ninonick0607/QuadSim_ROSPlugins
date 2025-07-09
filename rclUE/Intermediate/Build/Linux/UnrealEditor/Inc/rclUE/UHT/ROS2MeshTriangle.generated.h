// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MeshTriangle.h"

#ifdef RCLUE_ROS2MeshTriangle_generated_h
#error "ROS2MeshTriangle.generated.h already included, missing '#pragma once' in ROS2MeshTriangle.h"
#endif
#define RCLUE_ROS2MeshTriangle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMeshTriangle;

// ********** Begin ScriptStruct FROSMeshTriangle **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMeshTriangle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMeshTriangle;
// ********** End ScriptStruct FROSMeshTriangle ****************************************************

// ********** Begin Class UROS2MeshTriangleMsg *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MeshTriangleMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MeshTriangleMsg(); \
	friend struct Z_Construct_UClass_UROS2MeshTriangleMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MeshTriangleMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MeshTriangleMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MeshTriangleMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MeshTriangleMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MeshTriangleMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MeshTriangleMsg(UROS2MeshTriangleMsg&&) = delete; \
	UROS2MeshTriangleMsg(const UROS2MeshTriangleMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MeshTriangleMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MeshTriangleMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MeshTriangleMsg) \
	NO_API virtual ~UROS2MeshTriangleMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_47_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_50_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MeshTriangleMsg;

// ********** End Class UROS2MeshTriangleMsg *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshTriangle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
