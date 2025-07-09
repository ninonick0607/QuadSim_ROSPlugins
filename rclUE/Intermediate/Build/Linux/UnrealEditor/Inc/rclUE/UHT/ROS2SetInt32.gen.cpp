// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SetInt32.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SetInt32() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetInt32Srv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetInt32Srv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetInt32Req();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetInt32Res();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSetInt32Req ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetInt32Req;
class UScriptStruct* FROSSetInt32Req::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetInt32Req.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetInt32Req.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetInt32Req, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetInt32Req"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetInt32Req.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetInt32Req_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSSetInt32Req" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetInt32Req>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetInt32Req, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetInt32Req",
	Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::PropPointers),
	sizeof(FROSSetInt32Req),
	alignof(FROSSetInt32Req),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetInt32Req()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetInt32Req.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetInt32Req.InnerSingleton, Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetInt32Req.InnerSingleton;
}
// ********** End ScriptStruct FROSSetInt32Req *****************************************************

// ********** Begin ScriptStruct FROSSetInt32Res ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetInt32Res;
class UScriptStruct* FROSSetInt32Res::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetInt32Res.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetInt32Res.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetInt32Res, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetInt32Res"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetInt32Res.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetInt32Res_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSetInt32Res" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Remarks_MetaData[] = {
		{ "Category", "ROSSetInt32Res" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Remarks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetInt32Res>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSetInt32Res*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSetInt32Res), &Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::NewProp_Remarks = { "Remarks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetInt32Res, Remarks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Remarks_MetaData), NewProp_Remarks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::NewProp_Remarks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetInt32Res",
	Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::PropPointers),
	sizeof(FROSSetInt32Res),
	alignof(FROSSetInt32Res),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetInt32Res()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetInt32Res.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetInt32Res.InnerSingleton, Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetInt32Res.InnerSingleton;
}
// ********** End ScriptStruct FROSSetInt32Res *****************************************************

// ********** Begin Class UROS2SetInt32Srv Function Fini *******************************************
struct Z_Construct_UFunction_UROS2SetInt32Srv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetInt32Srv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetInt32Srv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetInt32Srv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetInt32Srv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetInt32Srv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetInt32Srv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SetInt32Srv Function Fini *********************************************

// ********** Begin Class UROS2SetInt32Srv Function GetRequest *************************************
struct Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics
{
	struct ROS2SetInt32Srv_eventGetRequest_Parms
	{
		FROSSetInt32Req Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetInt32Srv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetInt32Req, METADATA_PARAMS(0, nullptr) }; // 1500252703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetInt32Srv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::ROS2SetInt32Srv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::ROS2SetInt32Srv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetInt32Srv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSetInt32Req,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetInt32Srv Function GetRequest ***************************************

// ********** Begin Class UROS2SetInt32Srv Function GetResponse ************************************
struct Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics
{
	struct ROS2SetInt32Srv_eventGetResponse_Parms
	{
		FROSSetInt32Res Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetInt32Srv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetInt32Res, METADATA_PARAMS(0, nullptr) }; // 3911396845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetInt32Srv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::ROS2SetInt32Srv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::ROS2SetInt32Srv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetInt32Srv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSetInt32Res,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetInt32Srv Function GetResponse **************************************

// ********** Begin Class UROS2SetInt32Srv Function Init *******************************************
struct Z_Construct_UFunction_UROS2SetInt32Srv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetInt32Srv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetInt32Srv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetInt32Srv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetInt32Srv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetInt32Srv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetInt32Srv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SetInt32Srv Function Init *********************************************

// ********** Begin Class UROS2SetInt32Srv Function SetRequest *************************************
struct Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics
{
	struct ROS2SetInt32Srv_eventSetRequest_Parms
	{
		FROSSetInt32Req Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetInt32Srv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetInt32Req, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1500252703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetInt32Srv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::ROS2SetInt32Srv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::ROS2SetInt32Srv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetInt32Srv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSetInt32Req,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetInt32Srv Function SetRequest ***************************************

// ********** Begin Class UROS2SetInt32Srv Function SetResponse ************************************
struct Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics
{
	struct ROS2SetInt32Srv_eventSetResponse_Parms
	{
		FROSSetInt32Res Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetInt32Srv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetInt32Res, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3911396845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetInt32Srv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::ROS2SetInt32Srv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::ROS2SetInt32Srv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetInt32Srv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSetInt32Res,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetInt32Srv Function SetResponse **************************************

// ********** Begin Class UROS2SetInt32Srv *********************************************************
void UROS2SetInt32Srv::StaticRegisterNativesUROS2SetInt32Srv()
{
	UClass* Class = UROS2SetInt32Srv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SetInt32Srv::execFini },
		{ "GetRequest", &UROS2SetInt32Srv::execGetRequest },
		{ "GetResponse", &UROS2SetInt32Srv::execGetResponse },
		{ "Init", &UROS2SetInt32Srv::execInit },
		{ "SetRequest", &UROS2SetInt32Srv::execSetRequest },
		{ "SetResponse", &UROS2SetInt32Srv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SetInt32Srv;
UClass* UROS2SetInt32Srv::GetPrivateStaticClass()
{
	using TClass = UROS2SetInt32Srv;
	if (!Z_Registration_Info_UClass_UROS2SetInt32Srv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SetInt32Srv"),
			Z_Registration_Info_UClass_UROS2SetInt32Srv.InnerSingleton,
			StaticRegisterNativesUROS2SetInt32Srv,
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
	return Z_Registration_Info_UClass_UROS2SetInt32Srv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SetInt32Srv_NoRegister()
{
	return UROS2SetInt32Srv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SetInt32Srv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SetInt32.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetInt32.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SetInt32Srv_Fini, "Fini" }, // 697901746
		{ &Z_Construct_UFunction_UROS2SetInt32Srv_GetRequest, "GetRequest" }, // 854327599
		{ &Z_Construct_UFunction_UROS2SetInt32Srv_GetResponse, "GetResponse" }, // 1857257870
		{ &Z_Construct_UFunction_UROS2SetInt32Srv_Init, "Init" }, // 1358544732
		{ &Z_Construct_UFunction_UROS2SetInt32Srv_SetRequest, "SetRequest" }, // 2576085578
		{ &Z_Construct_UFunction_UROS2SetInt32Srv_SetResponse, "SetResponse" }, // 2506636237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SetInt32Srv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SetInt32Srv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetInt32Srv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SetInt32Srv_Statics::ClassParams = {
	&UROS2SetInt32Srv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetInt32Srv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SetInt32Srv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SetInt32Srv()
{
	if (!Z_Registration_Info_UClass_UROS2SetInt32Srv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SetInt32Srv.OuterSingleton, Z_Construct_UClass_UROS2SetInt32Srv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SetInt32Srv.OuterSingleton;
}
UROS2SetInt32Srv::UROS2SetInt32Srv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SetInt32Srv);
UROS2SetInt32Srv::~UROS2SetInt32Srv() {}
// ********** End Class UROS2SetInt32Srv ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSetInt32Req::StaticStruct, Z_Construct_UScriptStruct_FROSSetInt32Req_Statics::NewStructOps, TEXT("ROSSetInt32Req"), &Z_Registration_Info_UScriptStruct_FROSSetInt32Req, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetInt32Req), 1500252703U) },
		{ FROSSetInt32Res::StaticStruct, Z_Construct_UScriptStruct_FROSSetInt32Res_Statics::NewStructOps, TEXT("ROSSetInt32Res"), &Z_Registration_Info_UScriptStruct_FROSSetInt32Res, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetInt32Res), 3911396845U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SetInt32Srv, UROS2SetInt32Srv::StaticClass, TEXT("UROS2SetInt32Srv"), &Z_Registration_Info_UClass_UROS2SetInt32Srv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SetInt32Srv), 472843692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h__Script_rclUE_890963447(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetInt32_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
