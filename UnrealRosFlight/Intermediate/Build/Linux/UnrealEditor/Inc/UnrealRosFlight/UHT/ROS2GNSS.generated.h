// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Msgs/ROS2GNSS.h"

#ifdef UNREALROSFLIGHT_ROS2GNSS_generated_h
#error "ROS2GNSS.generated.h already included, missing '#pragma once' in ROS2GNSS.h"
#endif
#define UNREALROSFLIGHT_ROS2GNSS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSGNSS;

// ********** Begin ScriptStruct FROSGNSS **********************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSGNSS_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSGNSS;
// ********** End ScriptStruct FROSGNSS ************************************************************

// ********** Begin Class UROS2GNSSMsg *************************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCONST_GNSS_FIX_TYPE_TIME_FIX_ONLY); \
	DECLARE_FUNCTION(execCONST_GNSS_FIX_TYPE_GNSS_PLUS_DEAD_RECKONING); \
	DECLARE_FUNCTION(execCONST_GNSS_FIX_TYPE_3D_FIX); \
	DECLARE_FUNCTION(execCONST_GNSS_FIX_TYPE_2D_FIX); \
	DECLARE_FUNCTION(execCONST_GNSS_FIX_TYPE_DEAD_RECKONING_ONLY); \
	DECLARE_FUNCTION(execCONST_GNSS_FIX_TYPE_NO_FIX); \
	DECLARE_FUNCTION(execGetMsg); \
	DECLARE_FUNCTION(execSetMsg);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2GNSSMsg_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2GNSSMsg(); \
	friend struct Z_Construct_UClass_UROS2GNSSMsg_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2GNSSMsg_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2GNSSMsg, UROS2GenericMsg, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROS2GNSSMsg_NoRegister) \
	DECLARE_SERIALIZER(UROS2GNSSMsg)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2GNSSMsg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2GNSSMsg(UROS2GNSSMsg&&) = delete; \
	UROS2GNSSMsg(const UROS2GNSSMsg&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2GNSSMsg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2GNSSMsg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2GNSSMsg) \
	NO_API virtual ~UROS2GNSSMsg();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_153_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_156_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2GNSSMsg;

// ********** End Class UROS2GNSSMsg ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Msgs_ROS2GNSS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
