// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2CancelGoal.h"
#include "rclUE/Public/Msgs/ROS2GoalInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2CancelGoal() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2CancelGoalSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2CancelGoalSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSCancelGoalReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSCancelGoalRes();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGoalInfo();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSCancelGoalReq *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSCancelGoalReq;
class UScriptStruct* FROSCancelGoalReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSCancelGoalReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSCancelGoalReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSCancelGoalReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSCancelGoalReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSCancelGoalReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalInfo_MetaData[] = {
		{ "Category", "ROSCancelGoalReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSCancelGoalReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::NewProp_GoalInfo = { "GoalInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCancelGoalReq, GoalInfo), Z_Construct_UScriptStruct_FROSGoalInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalInfo_MetaData), NewProp_GoalInfo_MetaData) }; // 3781129582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::NewProp_GoalInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSCancelGoalReq",
	Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::PropPointers),
	sizeof(FROSCancelGoalReq),
	alignof(FROSCancelGoalReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSCancelGoalReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSCancelGoalReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSCancelGoalReq.InnerSingleton, Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSCancelGoalReq.InnerSingleton;
}
// ********** End ScriptStruct FROSCancelGoalReq ***************************************************

// ********** Begin ScriptStruct FROSCancelGoalRes *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSCancelGoalRes;
class UScriptStruct* FROSCancelGoalRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSCancelGoalRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSCancelGoalRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSCancelGoalRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSCancelGoalRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSCancelGoalRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnCode_MetaData[] = {
		{ "Category", "ROSCancelGoalRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalsCanceling_MetaData[] = {
		{ "Category", "ROSCancelGoalRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ReturnCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalsCanceling_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GoalsCanceling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSCancelGoalRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::NewProp_ReturnCode = { "ReturnCode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCancelGoalRes, ReturnCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnCode_MetaData), NewProp_ReturnCode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::NewProp_GoalsCanceling_Inner = { "GoalsCanceling", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSGoalInfo, METADATA_PARAMS(0, nullptr) }; // 3781129582
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::NewProp_GoalsCanceling = { "GoalsCanceling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSCancelGoalRes, GoalsCanceling), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalsCanceling_MetaData), NewProp_GoalsCanceling_MetaData) }; // 3781129582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::NewProp_ReturnCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::NewProp_GoalsCanceling_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::NewProp_GoalsCanceling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSCancelGoalRes",
	Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::PropPointers),
	sizeof(FROSCancelGoalRes),
	alignof(FROSCancelGoalRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSCancelGoalRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSCancelGoalRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSCancelGoalRes.InnerSingleton, Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSCancelGoalRes.InnerSingleton;
}
// ********** End ScriptStruct FROSCancelGoalRes ***************************************************

// ********** Begin Class UROS2CancelGoalSrv Function Fini *****************************************
struct Z_Construct_UFunction_UROS2CancelGoalSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CancelGoalSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CancelGoalSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CancelGoalSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2CancelGoalSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CancelGoalSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CancelGoalSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2CancelGoalSrv Function Fini *******************************************

// ********** Begin Class UROS2CancelGoalSrv Function GetRequest ***********************************
struct Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics
{
	struct ROS2CancelGoalSrv_eventGetRequest_Parms
	{
		FROSCancelGoalReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CancelGoalSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSCancelGoalReq, METADATA_PARAMS(0, nullptr) }; // 532128005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CancelGoalSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::ROS2CancelGoalSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::ROS2CancelGoalSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CancelGoalSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSCancelGoalReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2CancelGoalSrv Function GetRequest *************************************

// ********** Begin Class UROS2CancelGoalSrv Function GetResponse **********************************
struct Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics
{
	struct ROS2CancelGoalSrv_eventGetResponse_Parms
	{
		FROSCancelGoalRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CancelGoalSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSCancelGoalRes, METADATA_PARAMS(0, nullptr) }; // 3455893060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CancelGoalSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::ROS2CancelGoalSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::ROS2CancelGoalSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CancelGoalSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSCancelGoalRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2CancelGoalSrv Function GetResponse ************************************

// ********** Begin Class UROS2CancelGoalSrv Function Init *****************************************
struct Z_Construct_UFunction_UROS2CancelGoalSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CancelGoalSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CancelGoalSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CancelGoalSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2CancelGoalSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CancelGoalSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CancelGoalSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2CancelGoalSrv Function Init *******************************************

// ********** Begin Class UROS2CancelGoalSrv Function SetRequest ***********************************
struct Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics
{
	struct ROS2CancelGoalSrv_eventSetRequest_Parms
	{
		FROSCancelGoalReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CancelGoalSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSCancelGoalReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 532128005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CancelGoalSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::ROS2CancelGoalSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::ROS2CancelGoalSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CancelGoalSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSCancelGoalReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2CancelGoalSrv Function SetRequest *************************************

// ********** Begin Class UROS2CancelGoalSrv Function SetResponse **********************************
struct Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics
{
	struct ROS2CancelGoalSrv_eventSetResponse_Parms
	{
		FROSCancelGoalRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2CancelGoalSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSCancelGoalRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3455893060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2CancelGoalSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::ROS2CancelGoalSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::ROS2CancelGoalSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2CancelGoalSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSCancelGoalRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2CancelGoalSrv Function SetResponse ************************************

// ********** Begin Class UROS2CancelGoalSrv *******************************************************
void UROS2CancelGoalSrv::StaticRegisterNativesUROS2CancelGoalSrv()
{
	UClass* Class = UROS2CancelGoalSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2CancelGoalSrv::execFini },
		{ "GetRequest", &UROS2CancelGoalSrv::execGetRequest },
		{ "GetResponse", &UROS2CancelGoalSrv::execGetResponse },
		{ "Init", &UROS2CancelGoalSrv::execInit },
		{ "SetRequest", &UROS2CancelGoalSrv::execSetRequest },
		{ "SetResponse", &UROS2CancelGoalSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2CancelGoalSrv;
UClass* UROS2CancelGoalSrv::GetPrivateStaticClass()
{
	using TClass = UROS2CancelGoalSrv;
	if (!Z_Registration_Info_UClass_UROS2CancelGoalSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2CancelGoalSrv"),
			Z_Registration_Info_UClass_UROS2CancelGoalSrv.InnerSingleton,
			StaticRegisterNativesUROS2CancelGoalSrv,
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
	return Z_Registration_Info_UClass_UROS2CancelGoalSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2CancelGoalSrv_NoRegister()
{
	return UROS2CancelGoalSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2CancelGoalSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2CancelGoal.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2CancelGoal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2CancelGoalSrv_Fini, "Fini" }, // 749023450
		{ &Z_Construct_UFunction_UROS2CancelGoalSrv_GetRequest, "GetRequest" }, // 2712247243
		{ &Z_Construct_UFunction_UROS2CancelGoalSrv_GetResponse, "GetResponse" }, // 642490972
		{ &Z_Construct_UFunction_UROS2CancelGoalSrv_Init, "Init" }, // 2358546002
		{ &Z_Construct_UFunction_UROS2CancelGoalSrv_SetRequest, "SetRequest" }, // 479761022
		{ &Z_Construct_UFunction_UROS2CancelGoalSrv_SetResponse, "SetResponse" }, // 1439143047
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2CancelGoalSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2CancelGoalSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CancelGoalSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2CancelGoalSrv_Statics::ClassParams = {
	&UROS2CancelGoalSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2CancelGoalSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2CancelGoalSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2CancelGoalSrv()
{
	if (!Z_Registration_Info_UClass_UROS2CancelGoalSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2CancelGoalSrv.OuterSingleton, Z_Construct_UClass_UROS2CancelGoalSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2CancelGoalSrv.OuterSingleton;
}
UROS2CancelGoalSrv::UROS2CancelGoalSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2CancelGoalSrv);
UROS2CancelGoalSrv::~UROS2CancelGoalSrv() {}
// ********** End Class UROS2CancelGoalSrv *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSCancelGoalReq::StaticStruct, Z_Construct_UScriptStruct_FROSCancelGoalReq_Statics::NewStructOps, TEXT("ROSCancelGoalReq"), &Z_Registration_Info_UScriptStruct_FROSCancelGoalReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSCancelGoalReq), 532128005U) },
		{ FROSCancelGoalRes::StaticStruct, Z_Construct_UScriptStruct_FROSCancelGoalRes_Statics::NewStructOps, TEXT("ROSCancelGoalRes"), &Z_Registration_Info_UScriptStruct_FROSCancelGoalRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSCancelGoalRes), 3455893060U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2CancelGoalSrv, UROS2CancelGoalSrv::StaticClass, TEXT("UROS2CancelGoalSrv"), &Z_Registration_Info_UClass_UROS2CancelGoalSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2CancelGoalSrv), 1519056161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h__Script_rclUE_2957499342(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2CancelGoal_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
