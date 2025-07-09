// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2GetPlan.h"
#include "rclUE/Public/Msgs/ROS2Path.h"
#include "rclUE/Public/Msgs/ROS2PoseStamped.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GetPlan() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetPlanSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetPlanSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetPlanReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetPlanRes();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPath();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoseStamped();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGetPlanReq ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetPlanReq;
class UScriptStruct* FROSGetPlanReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetPlanReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetPlanReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetPlanReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetPlanReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetPlanReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetPlanReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "ROSGetPlanReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "Category", "ROSGetPlanReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "ROSGetPlanReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetPlanReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetPlanReq, Start), Z_Construct_UScriptStruct_FROSPoseStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) }; // 2341906365
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetPlanReq, Goal), Z_Construct_UScriptStruct_FROSPoseStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) }; // 2341906365
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetPlanReq, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetPlanReq",
	Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::PropPointers),
	sizeof(FROSGetPlanReq),
	alignof(FROSGetPlanReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetPlanReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetPlanReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetPlanReq.InnerSingleton, Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetPlanReq.InnerSingleton;
}
// ********** End ScriptStruct FROSGetPlanReq ******************************************************

// ********** Begin ScriptStruct FROSGetPlanRes ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetPlanRes;
class UScriptStruct* FROSGetPlanRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetPlanRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetPlanRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetPlanRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetPlanRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetPlanRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetPlanRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plan_MetaData[] = {
		{ "Category", "ROSGetPlanRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Plan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetPlanRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::NewProp_Plan = { "Plan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetPlanRes, Plan), Z_Construct_UScriptStruct_FROSPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plan_MetaData), NewProp_Plan_MetaData) }; // 170903436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::NewProp_Plan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetPlanRes",
	Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::PropPointers),
	sizeof(FROSGetPlanRes),
	alignof(FROSGetPlanRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetPlanRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetPlanRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetPlanRes.InnerSingleton, Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetPlanRes.InnerSingleton;
}
// ********** End ScriptStruct FROSGetPlanRes ******************************************************

// ********** Begin Class UROS2GetPlanSrv Function Fini ********************************************
struct Z_Construct_UFunction_UROS2GetPlanSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetPlanSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetPlanSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetPlanSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetPlanSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetPlanSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetPlanSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2GetPlanSrv Function Fini **********************************************

// ********** Begin Class UROS2GetPlanSrv Function GetRequest **************************************
struct Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics
{
	struct ROS2GetPlanSrv_eventGetRequest_Parms
	{
		FROSGetPlanReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetPlanSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetPlanReq, METADATA_PARAMS(0, nullptr) }; // 2143802785
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetPlanSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::ROS2GetPlanSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::ROS2GetPlanSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetPlanSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSGetPlanReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetPlanSrv Function GetRequest ****************************************

// ********** Begin Class UROS2GetPlanSrv Function GetResponse *************************************
struct Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics
{
	struct ROS2GetPlanSrv_eventGetResponse_Parms
	{
		FROSGetPlanRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetPlanSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetPlanRes, METADATA_PARAMS(0, nullptr) }; // 1268108538
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetPlanSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::ROS2GetPlanSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::ROS2GetPlanSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetPlanSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSGetPlanRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetPlanSrv Function GetResponse ***************************************

// ********** Begin Class UROS2GetPlanSrv Function Init ********************************************
struct Z_Construct_UFunction_UROS2GetPlanSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetPlanSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetPlanSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetPlanSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetPlanSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetPlanSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetPlanSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2GetPlanSrv Function Init **********************************************

// ********** Begin Class UROS2GetPlanSrv Function SetRequest **************************************
struct Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics
{
	struct ROS2GetPlanSrv_eventSetRequest_Parms
	{
		FROSGetPlanReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetPlanSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetPlanReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2143802785
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetPlanSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::ROS2GetPlanSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::ROS2GetPlanSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetPlanSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSGetPlanReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetPlanSrv Function SetRequest ****************************************

// ********** Begin Class UROS2GetPlanSrv Function SetResponse *************************************
struct Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics
{
	struct ROS2GetPlanSrv_eventSetResponse_Parms
	{
		FROSGetPlanRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetPlanSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetPlanRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1268108538
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetPlanSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::ROS2GetPlanSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::ROS2GetPlanSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetPlanSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSGetPlanRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetPlanSrv Function SetResponse ***************************************

// ********** Begin Class UROS2GetPlanSrv **********************************************************
void UROS2GetPlanSrv::StaticRegisterNativesUROS2GetPlanSrv()
{
	UClass* Class = UROS2GetPlanSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2GetPlanSrv::execFini },
		{ "GetRequest", &UROS2GetPlanSrv::execGetRequest },
		{ "GetResponse", &UROS2GetPlanSrv::execGetResponse },
		{ "Init", &UROS2GetPlanSrv::execInit },
		{ "SetRequest", &UROS2GetPlanSrv::execSetRequest },
		{ "SetResponse", &UROS2GetPlanSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GetPlanSrv;
UClass* UROS2GetPlanSrv::GetPrivateStaticClass()
{
	using TClass = UROS2GetPlanSrv;
	if (!Z_Registration_Info_UClass_UROS2GetPlanSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GetPlanSrv"),
			Z_Registration_Info_UClass_UROS2GetPlanSrv.InnerSingleton,
			StaticRegisterNativesUROS2GetPlanSrv,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UROS2GetPlanSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GetPlanSrv_NoRegister()
{
	return UROS2GetPlanSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GetPlanSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2GetPlan.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetPlan.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GetPlanSrv_Fini, "Fini" }, // 3432365092
		{ &Z_Construct_UFunction_UROS2GetPlanSrv_GetRequest, "GetRequest" }, // 3519346905
		{ &Z_Construct_UFunction_UROS2GetPlanSrv_GetResponse, "GetResponse" }, // 982608965
		{ &Z_Construct_UFunction_UROS2GetPlanSrv_Init, "Init" }, // 1523880630
		{ &Z_Construct_UFunction_UROS2GetPlanSrv_SetRequest, "SetRequest" }, // 2992345769
		{ &Z_Construct_UFunction_UROS2GetPlanSrv_SetResponse, "SetResponse" }, // 1282239713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GetPlanSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GetPlanSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetPlanSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GetPlanSrv_Statics::ClassParams = {
	&UROS2GetPlanSrv::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetPlanSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GetPlanSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GetPlanSrv()
{
	if (!Z_Registration_Info_UClass_UROS2GetPlanSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GetPlanSrv.OuterSingleton, Z_Construct_UClass_UROS2GetPlanSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GetPlanSrv.OuterSingleton;
}
UROS2GetPlanSrv::UROS2GetPlanSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GetPlanSrv);
UROS2GetPlanSrv::~UROS2GetPlanSrv() {}
// ********** End Class UROS2GetPlanSrv ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGetPlanReq::StaticStruct, Z_Construct_UScriptStruct_FROSGetPlanReq_Statics::NewStructOps, TEXT("ROSGetPlanReq"), &Z_Registration_Info_UScriptStruct_FROSGetPlanReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetPlanReq), 2143802785U) },
		{ FROSGetPlanRes::StaticStruct, Z_Construct_UScriptStruct_FROSGetPlanRes_Statics::NewStructOps, TEXT("ROSGetPlanRes"), &Z_Registration_Info_UScriptStruct_FROSGetPlanRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetPlanRes), 1268108538U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GetPlanSrv, UROS2GetPlanSrv::StaticClass, TEXT("UROS2GetPlanSrv"), &Z_Registration_Info_UClass_UROS2GetPlanSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GetPlanSrv), 2985523432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h__Script_rclUE_2384671181(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetPlan_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
