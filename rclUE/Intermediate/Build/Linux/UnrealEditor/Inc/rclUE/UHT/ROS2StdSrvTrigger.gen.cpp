// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2StdSrvTrigger.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2StdSrvTrigger() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvTriggerSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvTriggerSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvTriggerReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvTriggerRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSStdSrvTriggerReq **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerReq;
class UScriptStruct* FROSStdSrvTriggerReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSStdSrvTriggerReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSStdSrvTriggerReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSStdSrvTriggerReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSStdSrvTriggerReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSStdSrvTriggerReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSStdSrvTriggerReq",
	nullptr,
	0,
	sizeof(FROSStdSrvTriggerReq),
	alignof(FROSStdSrvTriggerReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvTriggerReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSStdSrvTriggerReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvTriggerReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerReq.InnerSingleton, Z_Construct_UScriptStruct_FROSStdSrvTriggerReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerReq.InnerSingleton;
}
// ********** End ScriptStruct FROSStdSrvTriggerReq ************************************************

// ********** Begin ScriptStruct FROSStdSrvTriggerRes **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerRes;
class UScriptStruct* FROSStdSrvTriggerRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSStdSrvTriggerRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSStdSrvTriggerRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSStdSrvTriggerRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "ROSStdSrvTriggerRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSStdSrvTriggerRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSStdSrvTriggerRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSStdSrvTriggerRes), &Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSStdSrvTriggerRes, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSStdSrvTriggerRes",
	Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::PropPointers),
	sizeof(FROSStdSrvTriggerRes),
	alignof(FROSStdSrvTriggerRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvTriggerRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerRes.InnerSingleton, Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerRes.InnerSingleton;
}
// ********** End ScriptStruct FROSStdSrvTriggerRes ************************************************

// ********** Begin Class UROS2StdSrvTriggerSrv Function Fini **************************************
struct Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvTriggerSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvTriggerSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvTriggerSrv Function Fini ****************************************

// ********** Begin Class UROS2StdSrvTriggerSrv Function GetRequest ********************************
struct Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics
{
	struct ROS2StdSrvTriggerSrv_eventGetRequest_Parms
	{
		FROSStdSrvTriggerReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvTriggerSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSStdSrvTriggerReq, METADATA_PARAMS(0, nullptr) }; // 3282896382
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvTriggerSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::ROS2StdSrvTriggerSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::ROS2StdSrvTriggerSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvTriggerSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSStdSrvTriggerReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvTriggerSrv Function GetRequest **********************************

// ********** Begin Class UROS2StdSrvTriggerSrv Function GetResponse *******************************
struct Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics
{
	struct ROS2StdSrvTriggerSrv_eventGetResponse_Parms
	{
		FROSStdSrvTriggerRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvTriggerSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSStdSrvTriggerRes, METADATA_PARAMS(0, nullptr) }; // 373767103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvTriggerSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::ROS2StdSrvTriggerSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::ROS2StdSrvTriggerSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvTriggerSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSStdSrvTriggerRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvTriggerSrv Function GetResponse *********************************

// ********** Begin Class UROS2StdSrvTriggerSrv Function Init **************************************
struct Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvTriggerSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvTriggerSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvTriggerSrv Function Init ****************************************

// ********** Begin Class UROS2StdSrvTriggerSrv Function SetRequest ********************************
struct Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics
{
	struct ROS2StdSrvTriggerSrv_eventSetRequest_Parms
	{
		FROSStdSrvTriggerReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvTriggerSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSStdSrvTriggerReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3282896382
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvTriggerSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::ROS2StdSrvTriggerSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::ROS2StdSrvTriggerSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvTriggerSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSStdSrvTriggerReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvTriggerSrv Function SetRequest **********************************

// ********** Begin Class UROS2StdSrvTriggerSrv Function SetResponse *******************************
struct Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics
{
	struct ROS2StdSrvTriggerSrv_eventSetResponse_Parms
	{
		FROSStdSrvTriggerRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvTriggerSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSStdSrvTriggerRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 373767103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvTriggerSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::ROS2StdSrvTriggerSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::ROS2StdSrvTriggerSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvTriggerSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSStdSrvTriggerRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvTriggerSrv Function SetResponse *********************************

// ********** Begin Class UROS2StdSrvTriggerSrv ****************************************************
void UROS2StdSrvTriggerSrv::StaticRegisterNativesUROS2StdSrvTriggerSrv()
{
	UClass* Class = UROS2StdSrvTriggerSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2StdSrvTriggerSrv::execFini },
		{ "GetRequest", &UROS2StdSrvTriggerSrv::execGetRequest },
		{ "GetResponse", &UROS2StdSrvTriggerSrv::execGetResponse },
		{ "Init", &UROS2StdSrvTriggerSrv::execInit },
		{ "SetRequest", &UROS2StdSrvTriggerSrv::execSetRequest },
		{ "SetResponse", &UROS2StdSrvTriggerSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2StdSrvTriggerSrv;
UClass* UROS2StdSrvTriggerSrv::GetPrivateStaticClass()
{
	using TClass = UROS2StdSrvTriggerSrv;
	if (!Z_Registration_Info_UClass_UROS2StdSrvTriggerSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2StdSrvTriggerSrv"),
			Z_Registration_Info_UClass_UROS2StdSrvTriggerSrv.InnerSingleton,
			StaticRegisterNativesUROS2StdSrvTriggerSrv,
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
	return Z_Registration_Info_UClass_UROS2StdSrvTriggerSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2StdSrvTriggerSrv_NoRegister()
{
	return UROS2StdSrvTriggerSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2StdSrvTriggerSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2StdSrvTrigger.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvTrigger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Fini, "Fini" }, // 1107081531
		{ &Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetRequest, "GetRequest" }, // 3916178880
		{ &Z_Construct_UFunction_UROS2StdSrvTriggerSrv_GetResponse, "GetResponse" }, // 288780405
		{ &Z_Construct_UFunction_UROS2StdSrvTriggerSrv_Init, "Init" }, // 2536915138
		{ &Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetRequest, "SetRequest" }, // 2752112662
		{ &Z_Construct_UFunction_UROS2StdSrvTriggerSrv_SetResponse, "SetResponse" }, // 2003437176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2StdSrvTriggerSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2StdSrvTriggerSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2StdSrvTriggerSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2StdSrvTriggerSrv_Statics::ClassParams = {
	&UROS2StdSrvTriggerSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2StdSrvTriggerSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2StdSrvTriggerSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2StdSrvTriggerSrv()
{
	if (!Z_Registration_Info_UClass_UROS2StdSrvTriggerSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2StdSrvTriggerSrv.OuterSingleton, Z_Construct_UClass_UROS2StdSrvTriggerSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2StdSrvTriggerSrv.OuterSingleton;
}
UROS2StdSrvTriggerSrv::UROS2StdSrvTriggerSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2StdSrvTriggerSrv);
UROS2StdSrvTriggerSrv::~UROS2StdSrvTriggerSrv() {}
// ********** End Class UROS2StdSrvTriggerSrv ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSStdSrvTriggerReq::StaticStruct, Z_Construct_UScriptStruct_FROSStdSrvTriggerReq_Statics::NewStructOps, TEXT("ROSStdSrvTriggerReq"), &Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSStdSrvTriggerReq), 3282896382U) },
		{ FROSStdSrvTriggerRes::StaticStruct, Z_Construct_UScriptStruct_FROSStdSrvTriggerRes_Statics::NewStructOps, TEXT("ROSStdSrvTriggerRes"), &Z_Registration_Info_UScriptStruct_FROSStdSrvTriggerRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSStdSrvTriggerRes), 373767103U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2StdSrvTriggerSrv, UROS2StdSrvTriggerSrv::StaticClass, TEXT("UROS2StdSrvTriggerSrv"), &Z_Registration_Info_UClass_UROS2StdSrvTriggerSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2StdSrvTriggerSrv), 1323249415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h__Script_rclUE_3828718964(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvTrigger_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
