// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2RegionOfInterest.h"

#ifdef RCLUE_ROS2RegionOfInterest_generated_h
#error "ROS2RegionOfInterest.generated.h already included, missing '#pragma once' in ROS2RegionOfInterest.h"
#endif
#define RCLUE_ROS2RegionOfInterest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSRegionOfInterest;

// ********** Begin ScriptStruct FROSRegionOfInterest **********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSRegionOfInterest_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSRegionOfInterest;
// ********** End ScriptStruct FROSRegionOfInterest ************************************************

// ********** Begin Class UROS2RegionOfInterestMsg *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2RegionOfInterestMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2RegionOfInterestMsg(); \
	friend struct Z_Construct_UClass_UROS2RegionOfInterestMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2RegionOfInterestMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2RegionOfInterestMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2RegionOfInterestMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2RegionOfInterestMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2RegionOfInterestMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2RegionOfInterestMsg(UROS2RegionOfInterestMsg&&) = delete; \
	UROS2RegionOfInterestMsg(const UROS2RegionOfInterestMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2RegionOfInterestMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2RegionOfInterestMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2RegionOfInterestMsg) \
	NO_API virtual ~UROS2RegionOfInterestMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_73_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_76_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2RegionOfInterestMsg;

// ********** End Class UROS2RegionOfInterestMsg ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2RegionOfInterest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
