// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2CompImg.h"

#ifdef RCLUE_ROS2CompImg_generated_h
#error "ROS2CompImg.generated.h already included, missing '#pragma once' in ROS2CompImg.h"
#endif
#define RCLUE_ROS2CompImg_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSCompImg;

// ********** Begin ScriptStruct FROSCompImg *******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSCompImg_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSCompImg;
// ********** End ScriptStruct FROSCompImg *********************************************************

// ********** Begin Class UROS2CompImgMsg **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2CompImgMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2CompImgMsg(); \
	friend struct Z_Construct_UClass_UROS2CompImgMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2CompImgMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2CompImgMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2CompImgMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2CompImgMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2CompImgMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2CompImgMsg(UROS2CompImgMsg&&) = delete; \
	UROS2CompImgMsg(const UROS2CompImgMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2CompImgMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2CompImgMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2CompImgMsg) \
	NO_API virtual ~UROS2CompImgMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_69_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_72_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2CompImgMsg;

// ********** End Class UROS2CompImgMsg ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2CompImg_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
