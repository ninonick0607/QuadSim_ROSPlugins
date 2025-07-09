// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2StdSrvEmpty.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2StdSrvEmpty() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvEmptySrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvEmptySrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvEmptyReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvEmptyRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSStdSrvEmptyReq ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyReq;
class UScriptStruct* FROSStdSrvEmptyReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSStdSrvEmptyReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSStdSrvEmptyReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSStdSrvEmptyReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSStdSrvEmptyReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSStdSrvEmptyReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSStdSrvEmptyReq",
	nullptr,
	0,
	sizeof(FROSStdSrvEmptyReq),
	alignof(FROSStdSrvEmptyReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvEmptyReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSStdSrvEmptyReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvEmptyReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyReq.InnerSingleton, Z_Construct_UScriptStruct_FROSStdSrvEmptyReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyReq.InnerSingleton;
}
// ********** End ScriptStruct FROSStdSrvEmptyReq **************************************************

// ********** Begin ScriptStruct FROSStdSrvEmptyRes ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyRes;
class UScriptStruct* FROSStdSrvEmptyRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSStdSrvEmptyRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSStdSrvEmptyRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSStdSrvEmptyRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSStdSrvEmptyRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSStdSrvEmptyRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSStdSrvEmptyRes",
	nullptr,
	0,
	sizeof(FROSStdSrvEmptyRes),
	alignof(FROSStdSrvEmptyRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvEmptyRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSStdSrvEmptyRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvEmptyRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyRes.InnerSingleton, Z_Construct_UScriptStruct_FROSStdSrvEmptyRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyRes.InnerSingleton;
}
// ********** End ScriptStruct FROSStdSrvEmptyRes **************************************************

// ********** Begin Class UROS2StdSrvEmptySrv Function Fini ****************************************
struct Z_Construct_UFunction_UROS2StdSrvEmptySrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvEmptySrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvEmptySrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2StdSrvEmptySrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvEmptySrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvEmptySrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvEmptySrv Function Fini ******************************************

// ********** Begin Class UROS2StdSrvEmptySrv Function GetRequest **********************************
struct Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics
{
	struct ROS2StdSrvEmptySrv_eventGetRequest_Parms
	{
		FROSStdSrvEmptyReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvEmptySrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSStdSrvEmptyReq, METADATA_PARAMS(0, nullptr) }; // 3293098530
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvEmptySrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::ROS2StdSrvEmptySrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::ROS2StdSrvEmptySrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvEmptySrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSStdSrvEmptyReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvEmptySrv Function GetRequest ************************************

// ********** Begin Class UROS2StdSrvEmptySrv Function GetResponse *********************************
struct Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics
{
	struct ROS2StdSrvEmptySrv_eventGetResponse_Parms
	{
		FROSStdSrvEmptyRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvEmptySrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSStdSrvEmptyRes, METADATA_PARAMS(0, nullptr) }; // 2550239350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvEmptySrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::ROS2StdSrvEmptySrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::ROS2StdSrvEmptySrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvEmptySrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSStdSrvEmptyRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvEmptySrv Function GetResponse ***********************************

// ********** Begin Class UROS2StdSrvEmptySrv Function Init ****************************************
struct Z_Construct_UFunction_UROS2StdSrvEmptySrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvEmptySrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvEmptySrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2StdSrvEmptySrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvEmptySrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvEmptySrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvEmptySrv Function Init ******************************************

// ********** Begin Class UROS2StdSrvEmptySrv Function SetRequest **********************************
struct Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics
{
	struct ROS2StdSrvEmptySrv_eventSetRequest_Parms
	{
		FROSStdSrvEmptyReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvEmptySrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSStdSrvEmptyReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3293098530
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvEmptySrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::ROS2StdSrvEmptySrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::ROS2StdSrvEmptySrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvEmptySrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSStdSrvEmptyReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvEmptySrv Function SetRequest ************************************

// ********** Begin Class UROS2StdSrvEmptySrv Function SetResponse *********************************
struct Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics
{
	struct ROS2StdSrvEmptySrv_eventSetResponse_Parms
	{
		FROSStdSrvEmptyRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvEmptySrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSStdSrvEmptyRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2550239350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvEmptySrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::ROS2StdSrvEmptySrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::ROS2StdSrvEmptySrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvEmptySrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSStdSrvEmptyRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvEmptySrv Function SetResponse ***********************************

// ********** Begin Class UROS2StdSrvEmptySrv ******************************************************
void UROS2StdSrvEmptySrv::StaticRegisterNativesUROS2StdSrvEmptySrv()
{
	UClass* Class = UROS2StdSrvEmptySrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2StdSrvEmptySrv::execFini },
		{ "GetRequest", &UROS2StdSrvEmptySrv::execGetRequest },
		{ "GetResponse", &UROS2StdSrvEmptySrv::execGetResponse },
		{ "Init", &UROS2StdSrvEmptySrv::execInit },
		{ "SetRequest", &UROS2StdSrvEmptySrv::execSetRequest },
		{ "SetResponse", &UROS2StdSrvEmptySrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2StdSrvEmptySrv;
UClass* UROS2StdSrvEmptySrv::GetPrivateStaticClass()
{
	using TClass = UROS2StdSrvEmptySrv;
	if (!Z_Registration_Info_UClass_UROS2StdSrvEmptySrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2StdSrvEmptySrv"),
			Z_Registration_Info_UClass_UROS2StdSrvEmptySrv.InnerSingleton,
			StaticRegisterNativesUROS2StdSrvEmptySrv,
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
	return Z_Registration_Info_UClass_UROS2StdSrvEmptySrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2StdSrvEmptySrv_NoRegister()
{
	return UROS2StdSrvEmptySrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2StdSrvEmptySrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2StdSrvEmpty.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvEmpty.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2StdSrvEmptySrv_Fini, "Fini" }, // 568279578
		{ &Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetRequest, "GetRequest" }, // 3869112910
		{ &Z_Construct_UFunction_UROS2StdSrvEmptySrv_GetResponse, "GetResponse" }, // 1284835093
		{ &Z_Construct_UFunction_UROS2StdSrvEmptySrv_Init, "Init" }, // 3185228172
		{ &Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetRequest, "SetRequest" }, // 2400539206
		{ &Z_Construct_UFunction_UROS2StdSrvEmptySrv_SetResponse, "SetResponse" }, // 2572484826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2StdSrvEmptySrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2StdSrvEmptySrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2StdSrvEmptySrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2StdSrvEmptySrv_Statics::ClassParams = {
	&UROS2StdSrvEmptySrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2StdSrvEmptySrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2StdSrvEmptySrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2StdSrvEmptySrv()
{
	if (!Z_Registration_Info_UClass_UROS2StdSrvEmptySrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2StdSrvEmptySrv.OuterSingleton, Z_Construct_UClass_UROS2StdSrvEmptySrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2StdSrvEmptySrv.OuterSingleton;
}
UROS2StdSrvEmptySrv::UROS2StdSrvEmptySrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2StdSrvEmptySrv);
UROS2StdSrvEmptySrv::~UROS2StdSrvEmptySrv() {}
// ********** End Class UROS2StdSrvEmptySrv ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSStdSrvEmptyReq::StaticStruct, Z_Construct_UScriptStruct_FROSStdSrvEmptyReq_Statics::NewStructOps, TEXT("ROSStdSrvEmptyReq"), &Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSStdSrvEmptyReq), 3293098530U) },
		{ FROSStdSrvEmptyRes::StaticStruct, Z_Construct_UScriptStruct_FROSStdSrvEmptyRes_Statics::NewStructOps, TEXT("ROSStdSrvEmptyRes"), &Z_Registration_Info_UScriptStruct_FROSStdSrvEmptyRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSStdSrvEmptyRes), 2550239350U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2StdSrvEmptySrv, UROS2StdSrvEmptySrv::StaticClass, TEXT("UROS2StdSrvEmptySrv"), &Z_Registration_Info_UClass_UROS2StdSrvEmptySrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2StdSrvEmptySrv), 3574081421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h__Script_rclUE_2792913686(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvEmpty_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
