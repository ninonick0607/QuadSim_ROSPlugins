// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ROSFlightComponent.h"

#ifdef UNREALROSFLIGHT_ROSFlightComponent_generated_h
#error "ROSFlightComponent.generated.h already included, missing '#pragma once' in ROSFlightComponent.h"
#endif
#define UNREALROSFLIGHT_ROSFlightComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UROS2GenericMsg;
class UROS2GenericSrv;

// ********** Begin Class UROSFlightComponent ******************************************************
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleRunService); \
	DECLARE_FUNCTION(execHandlePWMOutputMsg); \
	DECLARE_FUNCTION(execHandleWrenchMsg);


UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROSFlightComponent_NoRegister();

#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUROSFlightComponent(); \
	friend struct Z_Construct_UClass_UROSFlightComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROSFlightComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UROSFlightComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealRosFlight"), Z_Construct_UClass_UROSFlightComponent_NoRegister) \
	DECLARE_SERIALIZER(UROSFlightComponent)


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UROSFlightComponent(UROSFlightComponent&&) = delete; \
	UROSFlightComponent(const UROSFlightComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UROSFlightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UROSFlightComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UROSFlightComponent) \
	NO_API virtual ~UROSFlightComponent();


#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h_21_PROLOG
#define FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UROSFlightComponent;

// ********** End Class UROSFlightComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_ROSFlightComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
