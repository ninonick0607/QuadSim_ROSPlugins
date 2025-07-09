// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MagneticField.h"

#ifdef RCLUE_ROS2MagneticField_generated_h
#error "ROS2MagneticField.generated.h already included, missing '#pragma once' in ROS2MagneticField.h"
#endif
#define RCLUE_ROS2MagneticField_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMagneticField;

// ********** Begin ScriptStruct FROSMagneticField *************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMagneticField_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMagneticField;
// ********** End ScriptStruct FROSMagneticField ***************************************************

// ********** Begin Class UROS2MagneticFieldMsg ****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MagneticFieldMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MagneticFieldMsg(); \
	friend struct Z_Construct_UClass_UROS2MagneticFieldMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MagneticFieldMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MagneticFieldMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MagneticFieldMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MagneticFieldMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MagneticFieldMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MagneticFieldMsg(UROS2MagneticFieldMsg&&) = delete; \
	UROS2MagneticFieldMsg(const UROS2MagneticFieldMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MagneticFieldMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MagneticFieldMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MagneticFieldMsg) \
	NO_API virtual ~UROS2MagneticFieldMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_62_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_65_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MagneticFieldMsg;

// ********** End Class UROS2MagneticFieldMsg ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MagneticField_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
