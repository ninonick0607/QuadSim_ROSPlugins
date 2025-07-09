// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2OccupancyGrid.h"

#ifdef RCLUE_ROS2OccupancyGrid_generated_h
#error "ROS2OccupancyGrid.generated.h already included, missing '#pragma once' in ROS2OccupancyGrid.h"
#endif
#define RCLUE_ROS2OccupancyGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSOccupancyGrid;

// ********** Begin ScriptStruct FROSOccupancyGrid *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSOccupancyGrid_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSOccupancyGrid;
// ********** End ScriptStruct FROSOccupancyGrid ***************************************************

// ********** Begin Class UROS2OccupancyGridMsg ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2OccupancyGridMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2OccupancyGridMsg(); \
	friend struct Z_Construct_UClass_UROS2OccupancyGridMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2OccupancyGridMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2OccupancyGridMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2OccupancyGridMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2OccupancyGridMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2OccupancyGridMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2OccupancyGridMsg(UROS2OccupancyGridMsg&&) = delete; \
	UROS2OccupancyGridMsg(const UROS2OccupancyGridMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2OccupancyGridMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2OccupancyGridMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2OccupancyGridMsg) \
	NO_API virtual ~UROS2OccupancyGridMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_70_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_73_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2OccupancyGridMsg;

// ********** End Class UROS2OccupancyGridMsg ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2OccupancyGrid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
