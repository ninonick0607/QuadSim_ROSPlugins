// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MeshFile.h"

#ifdef RCLUE_ROS2MeshFile_generated_h
#error "ROS2MeshFile.generated.h already included, missing '#pragma once' in ROS2MeshFile.h"
#endif
#define RCLUE_ROS2MeshFile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMeshFile;

// ********** Begin ScriptStruct FROSMeshFile ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMeshFile_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMeshFile;
// ********** End ScriptStruct FROSMeshFile ********************************************************

// ********** Begin Class UROS2MeshFileMsg *********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MeshFileMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MeshFileMsg(); \
	friend struct Z_Construct_UClass_UROS2MeshFileMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MeshFileMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MeshFileMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MeshFileMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MeshFileMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MeshFileMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MeshFileMsg(UROS2MeshFileMsg&&) = delete; \
	UROS2MeshFileMsg(const UROS2MeshFileMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MeshFileMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MeshFileMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MeshFileMsg) \
	NO_API virtual ~UROS2MeshFileMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_61_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_64_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MeshFileMsg;

// ********** End Class UROS2MeshFileMsg ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MeshFile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
