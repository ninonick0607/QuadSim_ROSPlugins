// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2DisparityImg.h"

#ifdef RCLUE_ROS2DisparityImg_generated_h
#error "ROS2DisparityImg.generated.h already included, missing '#pragma once' in ROS2DisparityImg.h"
#endif
#define RCLUE_ROS2DisparityImg_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSDisparityImg;

// ********** Begin ScriptStruct FROSDisparityImg **************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSDisparityImg_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSDisparityImg;
// ********** End ScriptStruct FROSDisparityImg ****************************************************

// ********** Begin Class UROS2DisparityImgMsg *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2DisparityImgMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2DisparityImgMsg(); \
	friend struct Z_Construct_UClass_UROS2DisparityImgMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2DisparityImgMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2DisparityImgMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2DisparityImgMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2DisparityImgMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2DisparityImgMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2DisparityImgMsg(UROS2DisparityImgMsg&&) = delete; \
	UROS2DisparityImgMsg(const UROS2DisparityImgMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2DisparityImgMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2DisparityImgMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2DisparityImgMsg) \
	NO_API virtual ~UROS2DisparityImgMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_97_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_100_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2DisparityImgMsg;

// ********** End Class UROS2DisparityImgMsg *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2DisparityImg_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
