// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2PolygonMesh.h"

#ifdef RCLUE_ROS2PolygonMesh_generated_h
#error "ROS2PolygonMesh.generated.h already included, missing '#pragma once' in ROS2PolygonMesh.h"
#endif
#define RCLUE_ROS2PolygonMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSPolygonMesh;

// ********** Begin ScriptStruct FROSPolygonMesh ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSPolygonMesh_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSPolygonMesh;
// ********** End ScriptStruct FROSPolygonMesh *****************************************************

// ********** Begin Class UROS2PolygonMeshMsg ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2PolygonMeshMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2PolygonMeshMsg(); \
	friend struct Z_Construct_UClass_UROS2PolygonMeshMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2PolygonMeshMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2PolygonMeshMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2PolygonMeshMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2PolygonMeshMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2PolygonMeshMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2PolygonMeshMsg(UROS2PolygonMeshMsg&&) = delete; \
	UROS2PolygonMeshMsg(const UROS2PolygonMeshMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2PolygonMeshMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2PolygonMeshMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2PolygonMeshMsg) \
	NO_API virtual ~UROS2PolygonMeshMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_73_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_76_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2PolygonMeshMsg;

// ********** End Class UROS2PolygonMeshMsg ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2PolygonMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
