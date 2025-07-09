// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROSFlightControllerSource.h"

#ifdef UNREALROSFLIGHT_ROSFlightControllerSource_generated_h
#error "ROSFlightControllerSource.generated.h already included, missing '#pragma once' in ROSFlightControllerSource.h"
#endif
#define UNREALROSFLIGHT_ROSFlightControllerSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UROSFlightControllerSource *******************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDesiredThrustNormalized); \
	DECLARE_FUNCTION(execGetDesiredYawRate); \
	DECLARE_FUNCTION(execGetDesiredPitch); \
	DECLARE_FUNCTION(execGetDesiredRoll); \
	DECLARE_FUNCTION(execIsUsingROSflight);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROSFlightControllerSource_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALROSFLIGHT_API UROSFlightControllerSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROSFlightControllerSource(UROSFlightControllerSource&&) = delete; \
	UROSFlightControllerSource(const UROSFlightControllerSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALROSFLIGHT_API, UROSFlightControllerSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROSFlightControllerSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UROSFlightControllerSource) \
	virtual ~UROSFlightControllerSource() = default;


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUROSFlightControllerSource(); \
	friend struct Z_Construct_UClass_UROSFlightControllerSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROSFlightControllerSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UROSFlightControllerSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROSFlightControllerSource_NoRegister) \
	DECLARE_SERIALIZER(UROSFlightControllerSource)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IROSFlightControllerSource() {} \
public: \
	typedef UROSFlightControllerSource UClassType; \
	typedef IROSFlightControllerSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_9_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROSFlightControllerSource;

// ********** End Interface UROSFlightControllerSource *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightControllerSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
