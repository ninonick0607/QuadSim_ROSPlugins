// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2Trigger.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Trigger() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2TriggerSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2TriggerSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTriggerReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSTriggerRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSTriggerReq ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTriggerReq;
class UScriptStruct* FROSTriggerReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTriggerReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTriggerReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTriggerReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTriggerReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTriggerReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTriggerReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTriggerReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTriggerReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTriggerReq",
	nullptr,
	0,
	sizeof(FROSTriggerReq),
	alignof(FROSTriggerReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTriggerReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTriggerReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTriggerReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTriggerReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTriggerReq.InnerSingleton, Z_Construct_UScriptStruct_FROSTriggerReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTriggerReq.InnerSingleton;
}
// ********** End ScriptStruct FROSTriggerReq ******************************************************

// ********** Begin ScriptStruct FROSTriggerRes ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSTriggerRes;
class UScriptStruct* FROSTriggerRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTriggerRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSTriggerRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSTriggerRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSTriggerRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSTriggerRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSTriggerRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSTriggerRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "ROSTriggerRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSTriggerRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSTriggerRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSTriggerRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSTriggerRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSTriggerRes), &Z_Construct_UScriptStruct_FROSTriggerRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSTriggerRes_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSTriggerRes, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSTriggerRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTriggerRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSTriggerRes_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTriggerRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSTriggerRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSTriggerRes",
	Z_Construct_UScriptStruct_FROSTriggerRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTriggerRes_Statics::PropPointers),
	sizeof(FROSTriggerRes),
	alignof(FROSTriggerRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSTriggerRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSTriggerRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSTriggerRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSTriggerRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSTriggerRes.InnerSingleton, Z_Construct_UScriptStruct_FROSTriggerRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSTriggerRes.InnerSingleton;
}
// ********** End ScriptStruct FROSTriggerRes ******************************************************

// ********** Begin Class UROS2TriggerSrv Function Fini ********************************************
struct Z_Construct_UFunction_UROS2TriggerSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TriggerSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TriggerSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TriggerSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2TriggerSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TriggerSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TriggerSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2TriggerSrv Function Fini **********************************************

// ********** Begin Class UROS2TriggerSrv Function GetRequest **************************************
struct Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics
{
	struct ROS2TriggerSrv_eventGetRequest_Parms
	{
		FROSTriggerReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TriggerSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSTriggerReq, METADATA_PARAMS(0, nullptr) }; // 1416589934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TriggerSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::ROS2TriggerSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::ROS2TriggerSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TriggerSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TriggerSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TriggerSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSTriggerReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2TriggerSrv Function GetRequest ****************************************

// ********** Begin Class UROS2TriggerSrv Function GetResponse *************************************
struct Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics
{
	struct ROS2TriggerSrv_eventGetResponse_Parms
	{
		FROSTriggerRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TriggerSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSTriggerRes, METADATA_PARAMS(0, nullptr) }; // 4105095610
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TriggerSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::ROS2TriggerSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::ROS2TriggerSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TriggerSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TriggerSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TriggerSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSTriggerRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2TriggerSrv Function GetResponse ***************************************

// ********** Begin Class UROS2TriggerSrv Function Init ********************************************
struct Z_Construct_UFunction_UROS2TriggerSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TriggerSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TriggerSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TriggerSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2TriggerSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TriggerSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TriggerSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2TriggerSrv Function Init **********************************************

// ********** Begin Class UROS2TriggerSrv Function SetRequest **************************************
struct Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics
{
	struct ROS2TriggerSrv_eventSetRequest_Parms
	{
		FROSTriggerReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TriggerSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSTriggerReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1416589934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TriggerSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::ROS2TriggerSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::ROS2TriggerSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TriggerSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TriggerSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TriggerSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSTriggerReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2TriggerSrv Function SetRequest ****************************************

// ********** Begin Class UROS2TriggerSrv Function SetResponse *************************************
struct Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics
{
	struct ROS2TriggerSrv_eventSetResponse_Parms
	{
		FROSTriggerRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2TriggerSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSTriggerRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 4105095610
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2TriggerSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::ROS2TriggerSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::ROS2TriggerSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2TriggerSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2TriggerSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2TriggerSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSTriggerRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2TriggerSrv Function SetResponse ***************************************

// ********** Begin Class UROS2TriggerSrv **********************************************************
void UROS2TriggerSrv::StaticRegisterNativesUROS2TriggerSrv()
{
	UClass* Class = UROS2TriggerSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2TriggerSrv::execFini },
		{ "GetRequest", &UROS2TriggerSrv::execGetRequest },
		{ "GetResponse", &UROS2TriggerSrv::execGetResponse },
		{ "Init", &UROS2TriggerSrv::execInit },
		{ "SetRequest", &UROS2TriggerSrv::execSetRequest },
		{ "SetResponse", &UROS2TriggerSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2TriggerSrv;
UClass* UROS2TriggerSrv::GetPrivateStaticClass()
{
	using TClass = UROS2TriggerSrv;
	if (!Z_Registration_Info_UClass_UROS2TriggerSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2TriggerSrv"),
			Z_Registration_Info_UClass_UROS2TriggerSrv.InnerSingleton,
			StaticRegisterNativesUROS2TriggerSrv,
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
	return Z_Registration_Info_UClass_UROS2TriggerSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2TriggerSrv_NoRegister()
{
	return UROS2TriggerSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2TriggerSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2Trigger.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Trigger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2TriggerSrv_Fini, "Fini" }, // 4199703525
		{ &Z_Construct_UFunction_UROS2TriggerSrv_GetRequest, "GetRequest" }, // 3871526915
		{ &Z_Construct_UFunction_UROS2TriggerSrv_GetResponse, "GetResponse" }, // 4037626709
		{ &Z_Construct_UFunction_UROS2TriggerSrv_Init, "Init" }, // 889030710
		{ &Z_Construct_UFunction_UROS2TriggerSrv_SetRequest, "SetRequest" }, // 1433485818
		{ &Z_Construct_UFunction_UROS2TriggerSrv_SetResponse, "SetResponse" }, // 2780378628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2TriggerSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2TriggerSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TriggerSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2TriggerSrv_Statics::ClassParams = {
	&UROS2TriggerSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2TriggerSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2TriggerSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2TriggerSrv()
{
	if (!Z_Registration_Info_UClass_UROS2TriggerSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2TriggerSrv.OuterSingleton, Z_Construct_UClass_UROS2TriggerSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2TriggerSrv.OuterSingleton;
}
UROS2TriggerSrv::UROS2TriggerSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2TriggerSrv);
UROS2TriggerSrv::~UROS2TriggerSrv() {}
// ********** End Class UROS2TriggerSrv ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSTriggerReq::StaticStruct, Z_Construct_UScriptStruct_FROSTriggerReq_Statics::NewStructOps, TEXT("ROSTriggerReq"), &Z_Registration_Info_UScriptStruct_FROSTriggerReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTriggerReq), 1416589934U) },
		{ FROSTriggerRes::StaticStruct, Z_Construct_UScriptStruct_FROSTriggerRes_Statics::NewStructOps, TEXT("ROSTriggerRes"), &Z_Registration_Info_UScriptStruct_FROSTriggerRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSTriggerRes), 4105095610U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2TriggerSrv, UROS2TriggerSrv::StaticClass, TEXT("UROS2TriggerSrv"), &Z_Registration_Info_UClass_UROS2TriggerSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2TriggerSrv), 1551457046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h__Script_rclUE_1278726922(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Trigger_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
