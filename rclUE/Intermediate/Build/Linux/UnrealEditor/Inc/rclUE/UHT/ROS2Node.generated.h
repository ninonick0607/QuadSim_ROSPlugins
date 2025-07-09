// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROS2Node.h"

#ifdef RCLUE_ROS2Node_generated_h
#error "ROS2Node.generated.h already included, missing '#pragma once' in ROS2Node.h"
#endif
#define RCLUE_ROS2Node_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UROS2ActionClient;
class UROS2ActionServer;
class UROS2GenericMsg;
class UROS2GenericSrv;
class UROS2Publisher;
class UROS2ServiceClient;

// ********** Begin ScriptStruct FSubscription *****************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubscription_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSubscription;
// ********** End ScriptStruct FSubscription *******************************************************

// ********** Begin ScriptStruct FService **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FService_Statics; \
	static class UScriptStruct* StaticStruct();


struct FService;
// ********** End ScriptStruct FService ************************************************************

// ********** Begin Class AROS2Node ****************************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddActionServer); \
	DECLARE_FUNCTION(execAddActionClient); \
	DECLARE_FUNCTION(execAddServiceServer); \
	DECLARE_FUNCTION(execAddServiceClient); \
	DECLARE_FUNCTION(execAddPublisher); \
	DECLARE_FUNCTION(execAddSubscription); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_AROS2Node_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAROS2Node(); \
	friend struct Z_Construct_UClass_AROS2Node_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_AROS2Node_NoRegister(); \
public: \
	DECLARE_CLASS2(AROS2Node, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_AROS2Node_NoRegister) \
	DECLARE_SERIALIZER(AROS2Node)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AROS2Node(AROS2Node&&) = delete; \
	AROS2Node(const AROS2Node&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AROS2Node); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AROS2Node); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AROS2Node) \
	NO_API virtual ~AROS2Node();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_91_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_94_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AROS2Node;

// ********** End Class AROS2Node ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_ROS2Node_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
