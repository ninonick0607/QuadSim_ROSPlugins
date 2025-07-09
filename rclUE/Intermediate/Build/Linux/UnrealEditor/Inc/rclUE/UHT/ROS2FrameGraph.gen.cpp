// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2FrameGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2FrameGraph() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2FrameGraphSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2FrameGraphSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSFrameGraphReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSFrameGraphRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSFrameGraphReq *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSFrameGraphReq;
class UScriptStruct* FROSFrameGraphReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFrameGraphReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSFrameGraphReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSFrameGraphReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSFrameGraphReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSFrameGraphReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSFrameGraphReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSFrameGraphReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSFrameGraphReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSFrameGraphReq",
	nullptr,
	0,
	sizeof(FROSFrameGraphReq),
	alignof(FROSFrameGraphReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFrameGraphReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSFrameGraphReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSFrameGraphReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFrameGraphReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSFrameGraphReq.InnerSingleton, Z_Construct_UScriptStruct_FROSFrameGraphReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSFrameGraphReq.InnerSingleton;
}
// ********** End ScriptStruct FROSFrameGraphReq ***************************************************

// ********** Begin ScriptStruct FROSFrameGraphRes *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSFrameGraphRes;
class UScriptStruct* FROSFrameGraphRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFrameGraphRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSFrameGraphRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSFrameGraphRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSFrameGraphRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSFrameGraphRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameYaml_MetaData[] = {
		{ "Category", "ROSFrameGraphRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FrameYaml;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSFrameGraphRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::NewProp_FrameYaml = { "FrameYaml", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSFrameGraphRes, FrameYaml), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameYaml_MetaData), NewProp_FrameYaml_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::NewProp_FrameYaml,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSFrameGraphRes",
	Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::PropPointers),
	sizeof(FROSFrameGraphRes),
	alignof(FROSFrameGraphRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSFrameGraphRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSFrameGraphRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSFrameGraphRes.InnerSingleton, Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSFrameGraphRes.InnerSingleton;
}
// ********** End ScriptStruct FROSFrameGraphRes ***************************************************

// ********** Begin Class UROS2FrameGraphSrv Function Fini *****************************************
struct Z_Construct_UFunction_UROS2FrameGraphSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FrameGraphSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FrameGraphSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FrameGraphSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2FrameGraphSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FrameGraphSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FrameGraphSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2FrameGraphSrv Function Fini *******************************************

// ********** Begin Class UROS2FrameGraphSrv Function GetRequest ***********************************
struct Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics
{
	struct ROS2FrameGraphSrv_eventGetRequest_Parms
	{
		FROSFrameGraphReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FrameGraphSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSFrameGraphReq, METADATA_PARAMS(0, nullptr) }; // 2519909600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FrameGraphSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::ROS2FrameGraphSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::ROS2FrameGraphSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FrameGraphSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSFrameGraphReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2FrameGraphSrv Function GetRequest *************************************

// ********** Begin Class UROS2FrameGraphSrv Function GetResponse **********************************
struct Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics
{
	struct ROS2FrameGraphSrv_eventGetResponse_Parms
	{
		FROSFrameGraphRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FrameGraphSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSFrameGraphRes, METADATA_PARAMS(0, nullptr) }; // 397229014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FrameGraphSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::ROS2FrameGraphSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::ROS2FrameGraphSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FrameGraphSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSFrameGraphRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2FrameGraphSrv Function GetResponse ************************************

// ********** Begin Class UROS2FrameGraphSrv Function Init *****************************************
struct Z_Construct_UFunction_UROS2FrameGraphSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FrameGraphSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FrameGraphSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FrameGraphSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2FrameGraphSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FrameGraphSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FrameGraphSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2FrameGraphSrv Function Init *******************************************

// ********** Begin Class UROS2FrameGraphSrv Function SetRequest ***********************************
struct Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics
{
	struct ROS2FrameGraphSrv_eventSetRequest_Parms
	{
		FROSFrameGraphReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FrameGraphSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSFrameGraphReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2519909600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FrameGraphSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::ROS2FrameGraphSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::ROS2FrameGraphSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FrameGraphSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSFrameGraphReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2FrameGraphSrv Function SetRequest *************************************

// ********** Begin Class UROS2FrameGraphSrv Function SetResponse **********************************
struct Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics
{
	struct ROS2FrameGraphSrv_eventSetResponse_Parms
	{
		FROSFrameGraphRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2FrameGraphSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSFrameGraphRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 397229014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2FrameGraphSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::ROS2FrameGraphSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::ROS2FrameGraphSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2FrameGraphSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSFrameGraphRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2FrameGraphSrv Function SetResponse ************************************

// ********** Begin Class UROS2FrameGraphSrv *******************************************************
void UROS2FrameGraphSrv::StaticRegisterNativesUROS2FrameGraphSrv()
{
	UClass* Class = UROS2FrameGraphSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2FrameGraphSrv::execFini },
		{ "GetRequest", &UROS2FrameGraphSrv::execGetRequest },
		{ "GetResponse", &UROS2FrameGraphSrv::execGetResponse },
		{ "Init", &UROS2FrameGraphSrv::execInit },
		{ "SetRequest", &UROS2FrameGraphSrv::execSetRequest },
		{ "SetResponse", &UROS2FrameGraphSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2FrameGraphSrv;
UClass* UROS2FrameGraphSrv::GetPrivateStaticClass()
{
	using TClass = UROS2FrameGraphSrv;
	if (!Z_Registration_Info_UClass_UROS2FrameGraphSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2FrameGraphSrv"),
			Z_Registration_Info_UClass_UROS2FrameGraphSrv.InnerSingleton,
			StaticRegisterNativesUROS2FrameGraphSrv,
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
	return Z_Registration_Info_UClass_UROS2FrameGraphSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2FrameGraphSrv_NoRegister()
{
	return UROS2FrameGraphSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2FrameGraphSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2FrameGraph.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2FrameGraph.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2FrameGraphSrv_Fini, "Fini" }, // 224208446
		{ &Z_Construct_UFunction_UROS2FrameGraphSrv_GetRequest, "GetRequest" }, // 4077533197
		{ &Z_Construct_UFunction_UROS2FrameGraphSrv_GetResponse, "GetResponse" }, // 227522264
		{ &Z_Construct_UFunction_UROS2FrameGraphSrv_Init, "Init" }, // 1703323235
		{ &Z_Construct_UFunction_UROS2FrameGraphSrv_SetRequest, "SetRequest" }, // 1113243626
		{ &Z_Construct_UFunction_UROS2FrameGraphSrv_SetResponse, "SetResponse" }, // 4261818543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2FrameGraphSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2FrameGraphSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2FrameGraphSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2FrameGraphSrv_Statics::ClassParams = {
	&UROS2FrameGraphSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2FrameGraphSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2FrameGraphSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2FrameGraphSrv()
{
	if (!Z_Registration_Info_UClass_UROS2FrameGraphSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2FrameGraphSrv.OuterSingleton, Z_Construct_UClass_UROS2FrameGraphSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2FrameGraphSrv.OuterSingleton;
}
UROS2FrameGraphSrv::UROS2FrameGraphSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2FrameGraphSrv);
UROS2FrameGraphSrv::~UROS2FrameGraphSrv() {}
// ********** End Class UROS2FrameGraphSrv *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSFrameGraphReq::StaticStruct, Z_Construct_UScriptStruct_FROSFrameGraphReq_Statics::NewStructOps, TEXT("ROSFrameGraphReq"), &Z_Registration_Info_UScriptStruct_FROSFrameGraphReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSFrameGraphReq), 2519909600U) },
		{ FROSFrameGraphRes::StaticStruct, Z_Construct_UScriptStruct_FROSFrameGraphRes_Statics::NewStructOps, TEXT("ROSFrameGraphRes"), &Z_Registration_Info_UScriptStruct_FROSFrameGraphRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSFrameGraphRes), 397229014U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2FrameGraphSrv, UROS2FrameGraphSrv::StaticClass, TEXT("UROS2FrameGraphSrv"), &Z_Registration_Info_UClass_UROS2FrameGraphSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2FrameGraphSrv), 2173273956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h__Script_rclUE_4034467194(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2FrameGraph_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
