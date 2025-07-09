// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Srvs/ROS2UpdateFilename.h"

#ifdef RCLUE_ROS2UpdateFilename_generated_h
#error "ROS2UpdateFilename.generated.h already included, missing '#pragma once' in ROS2UpdateFilename.h"
#endif
#define RCLUE_ROS2UpdateFilename_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FROSUpdateFilenameReq;
struct FROSUpdateFilenameRes;

// ********** Begin ScriptStruct FROSUpdateFilenameReq *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSUpdateFilenameReq;
// ********** End ScriptStruct FROSUpdateFilenameReq ***********************************************

// ********** Begin ScriptStruct FROSUpdateFilenameRes *********************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FROSUpdateFilenameRes;
// ********** End ScriptStruct FROSUpdateFilenameRes ***********************************************

// ********** Begin Class UROS2UpdateFilenameSrv ***************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResponse); \
	DECLARE_FUNCTION(execSetResponse); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execSetRequest); \
	DECLARE_FUNCTION(execFini); \
	DECLARE_FUNCTION(execInit);


RCLUE_API UClass* Z_Construct_UClass_UROS2UpdateFilenameSrv_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROS2UpdateFilenameSrv(); \
	friend struct Z_Construct_UClass_UROS2UpdateFilenameSrv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RCLUE_API UClass* Z_Construct_UClass_UROS2UpdateFilenameSrv_NoRegister(); \
public: \
	DECLARE_CLASS2(UROS2UpdateFilenameSrv, UROS2GenericSrv, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/rclUE"), Z_Construct_UClass_UROS2UpdateFilenameSrv_NoRegister) \
	DECLARE_SERIALIZER(UROS2UpdateFilenameSrv)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UROS2UpdateFilenameSrv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROS2UpdateFilenameSrv(UROS2UpdateFilenameSrv&&) = delete; \
	UROS2UpdateFilenameSrv(const UROS2UpdateFilenameSrv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROS2UpdateFilenameSrv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROS2UpdateFilenameSrv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROS2UpdateFilenameSrv) \
	NO_API virtual ~UROS2UpdateFilenameSrv();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_70_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_73_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROS2UpdateFilenameSrv;

// ********** End Class UROS2UpdateFilenameSrv *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
