// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2MapMetaData.h"

#ifdef RCLUE_ROS2MapMetaData_generated_h
#error "ROS2MapMetaData.generated.h already included, missing '#pragma once' in ROS2MapMetaData.h"
#endif
#define RCLUE_ROS2MapMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSMapMetaData;

// ********** Begin ScriptStruct FROSMapMetaData ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSMapMetaData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSMapMetaData;
// ********** End ScriptStruct FROSMapMetaData *****************************************************

// ********** Begin Class UROS2MapMetaDataMsg ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


RCLUE_API UClass* Z_Construct_UClass_UROS2MapMetaDataMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2MapMetaDataMsg(); \
	friend struct Z_Construct_UClass_UROS2MapMetaDataMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2MapMetaDataMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2MapMetaDataMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2MapMetaDataMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2MapMetaDataMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2MapMetaDataMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2MapMetaDataMsg(UROS2MapMetaDataMsg&&) = delete; \
	UROS2MapMetaDataMsg(const UROS2MapMetaDataMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2MapMetaDataMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2MapMetaDataMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2MapMetaDataMsg) \
	NO_API virtual ~UROS2MapMetaDataMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_75_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_78_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2MapMetaDataMsg;

// ********** End Class UROS2MapMetaDataMsg ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2MapMetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
