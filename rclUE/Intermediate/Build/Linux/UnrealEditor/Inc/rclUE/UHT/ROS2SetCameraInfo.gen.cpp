// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SetCameraInfo.h"
#include "rclUE/Public/Msgs/ROS2CameraInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SetCameraInfo() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetCameraInfoSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetCameraInfoSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSCameraInfo();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetCameraInfoReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetCameraInfoRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSetCameraInfoReq **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetCameraInfoReq;
class UScriptStruct* FROSSetCameraInfoReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetCameraInfoReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetCameraInfoReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetCameraInfoReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetCameraInfoReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetCameraInfoReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInfo_MetaData[] = {
		{ "Category", "ROSSetCameraInfoReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetCameraInfoReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::NewProp_CameraInfo = { "CameraInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetCameraInfoReq, CameraInfo), Z_Construct_UScriptStruct_FROSCameraInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInfo_MetaData), NewProp_CameraInfo_MetaData) }; // 2653271531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::NewProp_CameraInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetCameraInfoReq",
	Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::PropPointers),
	sizeof(FROSSetCameraInfoReq),
	alignof(FROSSetCameraInfoReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetCameraInfoReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetCameraInfoReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetCameraInfoReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetCameraInfoReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSetCameraInfoReq ************************************************

// ********** Begin ScriptStruct FROSSetCameraInfoRes **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetCameraInfoRes;
class UScriptStruct* FROSSetCameraInfoRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetCameraInfoRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetCameraInfoRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetCameraInfoRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetCameraInfoRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetCameraInfoRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSetCameraInfoRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusMessage_MetaData[] = {
		{ "Category", "ROSSetCameraInfoRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatusMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetCameraInfoRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSetCameraInfoRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSetCameraInfoRes), &Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::NewProp_StatusMessage = { "StatusMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetCameraInfoRes, StatusMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusMessage_MetaData), NewProp_StatusMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::NewProp_StatusMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetCameraInfoRes",
	Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::PropPointers),
	sizeof(FROSSetCameraInfoRes),
	alignof(FROSSetCameraInfoRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetCameraInfoRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetCameraInfoRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetCameraInfoRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetCameraInfoRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSetCameraInfoRes ************************************************

// ********** Begin Class UROS2SetCameraInfoSrv Function Fini **************************************
struct Z_Construct_UFunction_UROS2SetCameraInfoSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetCameraInfoSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetCameraInfoSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetCameraInfoSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetCameraInfoSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetCameraInfoSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SetCameraInfoSrv Function Fini ****************************************

// ********** Begin Class UROS2SetCameraInfoSrv Function GetRequest ********************************
struct Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics
{
	struct ROS2SetCameraInfoSrv_eventGetRequest_Parms
	{
		FROSSetCameraInfoReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetCameraInfoSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetCameraInfoReq, METADATA_PARAMS(0, nullptr) }; // 1792367911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetCameraInfoSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::ROS2SetCameraInfoSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::ROS2SetCameraInfoSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetCameraInfoSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSetCameraInfoReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetCameraInfoSrv Function GetRequest **********************************

// ********** Begin Class UROS2SetCameraInfoSrv Function GetResponse *******************************
struct Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics
{
	struct ROS2SetCameraInfoSrv_eventGetResponse_Parms
	{
		FROSSetCameraInfoRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetCameraInfoSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetCameraInfoRes, METADATA_PARAMS(0, nullptr) }; // 2201108234
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetCameraInfoSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::ROS2SetCameraInfoSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::ROS2SetCameraInfoSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetCameraInfoSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSetCameraInfoRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetCameraInfoSrv Function GetResponse *********************************

// ********** Begin Class UROS2SetCameraInfoSrv Function Init **************************************
struct Z_Construct_UFunction_UROS2SetCameraInfoSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetCameraInfoSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetCameraInfoSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetCameraInfoSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetCameraInfoSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetCameraInfoSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SetCameraInfoSrv Function Init ****************************************

// ********** Begin Class UROS2SetCameraInfoSrv Function SetRequest ********************************
struct Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics
{
	struct ROS2SetCameraInfoSrv_eventSetRequest_Parms
	{
		FROSSetCameraInfoReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetCameraInfoSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetCameraInfoReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1792367911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetCameraInfoSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::ROS2SetCameraInfoSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::ROS2SetCameraInfoSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetCameraInfoSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSetCameraInfoReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetCameraInfoSrv Function SetRequest **********************************

// ********** Begin Class UROS2SetCameraInfoSrv Function SetResponse *******************************
struct Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics
{
	struct ROS2SetCameraInfoSrv_eventSetResponse_Parms
	{
		FROSSetCameraInfoRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetCameraInfoSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetCameraInfoRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2201108234
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetCameraInfoSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::ROS2SetCameraInfoSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::ROS2SetCameraInfoSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetCameraInfoSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSetCameraInfoRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetCameraInfoSrv Function SetResponse *********************************

// ********** Begin Class UROS2SetCameraInfoSrv ****************************************************
void UROS2SetCameraInfoSrv::StaticRegisterNativesUROS2SetCameraInfoSrv()
{
	UClass* Class = UROS2SetCameraInfoSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SetCameraInfoSrv::execFini },
		{ "GetRequest", &UROS2SetCameraInfoSrv::execGetRequest },
		{ "GetResponse", &UROS2SetCameraInfoSrv::execGetResponse },
		{ "Init", &UROS2SetCameraInfoSrv::execInit },
		{ "SetRequest", &UROS2SetCameraInfoSrv::execSetRequest },
		{ "SetResponse", &UROS2SetCameraInfoSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SetCameraInfoSrv;
UClass* UROS2SetCameraInfoSrv::GetPrivateStaticClass()
{
	using TClass = UROS2SetCameraInfoSrv;
	if (!Z_Registration_Info_UClass_UROS2SetCameraInfoSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SetCameraInfoSrv"),
			Z_Registration_Info_UClass_UROS2SetCameraInfoSrv.InnerSingleton,
			StaticRegisterNativesUROS2SetCameraInfoSrv,
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
	return Z_Registration_Info_UClass_UROS2SetCameraInfoSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SetCameraInfoSrv_NoRegister()
{
	return UROS2SetCameraInfoSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SetCameraInfoSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SetCameraInfo.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetCameraInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SetCameraInfoSrv_Fini, "Fini" }, // 3447772708
		{ &Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetRequest, "GetRequest" }, // 2895650725
		{ &Z_Construct_UFunction_UROS2SetCameraInfoSrv_GetResponse, "GetResponse" }, // 36115181
		{ &Z_Construct_UFunction_UROS2SetCameraInfoSrv_Init, "Init" }, // 1659442168
		{ &Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetRequest, "SetRequest" }, // 1715295912
		{ &Z_Construct_UFunction_UROS2SetCameraInfoSrv_SetResponse, "SetResponse" }, // 1112039169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SetCameraInfoSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SetCameraInfoSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetCameraInfoSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SetCameraInfoSrv_Statics::ClassParams = {
	&UROS2SetCameraInfoSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetCameraInfoSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SetCameraInfoSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SetCameraInfoSrv()
{
	if (!Z_Registration_Info_UClass_UROS2SetCameraInfoSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SetCameraInfoSrv.OuterSingleton, Z_Construct_UClass_UROS2SetCameraInfoSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SetCameraInfoSrv.OuterSingleton;
}
UROS2SetCameraInfoSrv::UROS2SetCameraInfoSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SetCameraInfoSrv);
UROS2SetCameraInfoSrv::~UROS2SetCameraInfoSrv() {}
// ********** End Class UROS2SetCameraInfoSrv ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetCameraInfo_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSetCameraInfoReq::StaticStruct, Z_Construct_UScriptStruct_FROSSetCameraInfoReq_Statics::NewStructOps, TEXT("ROSSetCameraInfoReq"), &Z_Registration_Info_UScriptStruct_FROSSetCameraInfoReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetCameraInfoReq), 1792367911U) },
		{ FROSSetCameraInfoRes::StaticStruct, Z_Construct_UScriptStruct_FROSSetCameraInfoRes_Statics::NewStructOps, TEXT("ROSSetCameraInfoRes"), &Z_Registration_Info_UScriptStruct_FROSSetCameraInfoRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetCameraInfoRes), 2201108234U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SetCameraInfoSrv, UROS2SetCameraInfoSrv::StaticClass, TEXT("UROS2SetCameraInfoSrv"), &Z_Registration_Info_UClass_UROS2SetCameraInfoSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SetCameraInfoSrv), 4083419029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetCameraInfo_h__Script_rclUE_2101272606(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetCameraInfo_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetCameraInfo_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetCameraInfo_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetCameraInfo_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
