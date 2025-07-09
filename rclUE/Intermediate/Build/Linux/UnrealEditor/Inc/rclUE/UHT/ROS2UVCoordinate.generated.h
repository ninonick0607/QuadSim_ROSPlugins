// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2UVCoordinate.h"

#ifdef RCLUE_ROS2UVCoordinate_generated_h
#error "ROS2UVCoordinate.generated.h already included, missing '#pragma once' in ROS2UVCoordinate.h"
#endif
#define RCLUE_ROS2UVCoordinate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSUVCoordinate;

// ********** Begin ScriptStruct FROSUVCoordinate **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSUVCoordinate_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSUVCoordinate;
// ********** End ScriptStruct FROSUVCoordinate ****************************************************

// ********** Begin Class UROS2UVCoordinateMsg *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2UVCoordinateMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2UVCoordinateMsg(); \
	friend struct Z_Construct_UClass_UROS2UVCoordinateMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2UVCoordinateMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2UVCoordinateMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2UVCoordinateMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2UVCoordinateMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2UVCoordinateMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2UVCoordinateMsg(UROS2UVCoordinateMsg&&) = delete; \
	UROS2UVCoordinateMsg(const UROS2UVCoordinateMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2UVCoordinateMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2UVCoordinateMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2UVCoordinateMsg) \
	NO_API virtual ~UROS2UVCoordinateMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_52_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_55_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2UVCoordinateMsg;

// ********** End Class UROS2UVCoordinateMsg *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2UVCoordinate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
