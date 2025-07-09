// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2Attach.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Attach() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2AttachSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2AttachSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAttachReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAttachRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAttachReq *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAttachReq;
class UScriptStruct* FROSAttachReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAttachReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAttachReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAttachReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAttachReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAttachReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAttachReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name1_MetaData[] = {
		{ "Category", "ROSAttachReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name2_MetaData[] = {
		{ "Category", "ROSAttachReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAttachReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSAttachReq_Statics::NewProp_Name1 = { "Name1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAttachReq, Name1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name1_MetaData), NewProp_Name1_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSAttachReq_Statics::NewProp_Name2 = { "Name2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAttachReq, Name2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name2_MetaData), NewProp_Name2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAttachReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAttachReq_Statics::NewProp_Name1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAttachReq_Statics::NewProp_Name2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttachReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAttachReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAttachReq",
	Z_Construct_UScriptStruct_FROSAttachReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttachReq_Statics::PropPointers),
	sizeof(FROSAttachReq),
	alignof(FROSAttachReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttachReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAttachReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAttachReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAttachReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAttachReq.InnerSingleton, Z_Construct_UScriptStruct_FROSAttachReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAttachReq.InnerSingleton;
}
// ********** End ScriptStruct FROSAttachReq *******************************************************

// ********** Begin ScriptStruct FROSAttachRes *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAttachRes;
class UScriptStruct* FROSAttachRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAttachRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAttachRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAttachRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAttachRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAttachRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAttachRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSAttachRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAttachRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSAttachRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSAttachRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSAttachRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSAttachRes), &Z_Construct_UScriptStruct_FROSAttachRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAttachRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAttachRes_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttachRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAttachRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAttachRes",
	Z_Construct_UScriptStruct_FROSAttachRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttachRes_Statics::PropPointers),
	sizeof(FROSAttachRes),
	alignof(FROSAttachRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAttachRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAttachRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAttachRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAttachRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAttachRes.InnerSingleton, Z_Construct_UScriptStruct_FROSAttachRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAttachRes.InnerSingleton;
}
// ********** End ScriptStruct FROSAttachRes *******************************************************

// ********** Begin Class UROS2AttachSrv Function Fini *********************************************
struct Z_Construct_UFunction_UROS2AttachSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AttachSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AttachSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AttachSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2AttachSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AttachSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AttachSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2AttachSrv Function Fini ***********************************************

// ********** Begin Class UROS2AttachSrv Function GetRequest ***************************************
struct Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics
{
	struct ROS2AttachSrv_eventGetRequest_Parms
	{
		FROSAttachReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AttachSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSAttachReq, METADATA_PARAMS(0, nullptr) }; // 743877995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AttachSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::ROS2AttachSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::ROS2AttachSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AttachSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AttachSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AttachSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSAttachReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2AttachSrv Function GetRequest *****************************************

// ********** Begin Class UROS2AttachSrv Function GetResponse **************************************
struct Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics
{
	struct ROS2AttachSrv_eventGetResponse_Parms
	{
		FROSAttachRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AttachSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSAttachRes, METADATA_PARAMS(0, nullptr) }; // 106097541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AttachSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::ROS2AttachSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::ROS2AttachSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AttachSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AttachSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AttachSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSAttachRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2AttachSrv Function GetResponse ****************************************

// ********** Begin Class UROS2AttachSrv Function Init *********************************************
struct Z_Construct_UFunction_UROS2AttachSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AttachSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AttachSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AttachSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2AttachSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AttachSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AttachSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2AttachSrv Function Init ***********************************************

// ********** Begin Class UROS2AttachSrv Function SetRequest ***************************************
struct Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics
{
	struct ROS2AttachSrv_eventSetRequest_Parms
	{
		FROSAttachReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AttachSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSAttachReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 743877995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AttachSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::ROS2AttachSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::ROS2AttachSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AttachSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AttachSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AttachSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSAttachReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2AttachSrv Function SetRequest *****************************************

// ********** Begin Class UROS2AttachSrv Function SetResponse **************************************
struct Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics
{
	struct ROS2AttachSrv_eventSetResponse_Parms
	{
		FROSAttachRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AttachSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSAttachRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 106097541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AttachSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::ROS2AttachSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::ROS2AttachSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AttachSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AttachSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AttachSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSAttachRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2AttachSrv Function SetResponse ****************************************

// ********** Begin Class UROS2AttachSrv ***********************************************************
void UROS2AttachSrv::StaticRegisterNativesUROS2AttachSrv()
{
	UClass* Class = UROS2AttachSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2AttachSrv::execFini },
		{ "GetRequest", &UROS2AttachSrv::execGetRequest },
		{ "GetResponse", &UROS2AttachSrv::execGetResponse },
		{ "Init", &UROS2AttachSrv::execInit },
		{ "SetRequest", &UROS2AttachSrv::execSetRequest },
		{ "SetResponse", &UROS2AttachSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AttachSrv;
UClass* UROS2AttachSrv::GetPrivateStaticClass()
{
	using TClass = UROS2AttachSrv;
	if (!Z_Registration_Info_UClass_UROS2AttachSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AttachSrv"),
			Z_Registration_Info_UClass_UROS2AttachSrv.InnerSingleton,
			StaticRegisterNativesUROS2AttachSrv,
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
	return Z_Registration_Info_UClass_UROS2AttachSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AttachSrv_NoRegister()
{
	return UROS2AttachSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AttachSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2Attach.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2Attach.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AttachSrv_Fini, "Fini" }, // 4067889623
		{ &Z_Construct_UFunction_UROS2AttachSrv_GetRequest, "GetRequest" }, // 385418479
		{ &Z_Construct_UFunction_UROS2AttachSrv_GetResponse, "GetResponse" }, // 466849354
		{ &Z_Construct_UFunction_UROS2AttachSrv_Init, "Init" }, // 1152763782
		{ &Z_Construct_UFunction_UROS2AttachSrv_SetRequest, "SetRequest" }, // 3610233803
		{ &Z_Construct_UFunction_UROS2AttachSrv_SetResponse, "SetResponse" }, // 193170862
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AttachSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AttachSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AttachSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AttachSrv_Statics::ClassParams = {
	&UROS2AttachSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AttachSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AttachSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AttachSrv()
{
	if (!Z_Registration_Info_UClass_UROS2AttachSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AttachSrv.OuterSingleton, Z_Construct_UClass_UROS2AttachSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AttachSrv.OuterSingleton;
}
UROS2AttachSrv::UROS2AttachSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AttachSrv);
UROS2AttachSrv::~UROS2AttachSrv() {}
// ********** End Class UROS2AttachSrv *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Attach_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAttachReq::StaticStruct, Z_Construct_UScriptStruct_FROSAttachReq_Statics::NewStructOps, TEXT("ROSAttachReq"), &Z_Registration_Info_UScriptStruct_FROSAttachReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAttachReq), 743877995U) },
		{ FROSAttachRes::StaticStruct, Z_Construct_UScriptStruct_FROSAttachRes_Statics::NewStructOps, TEXT("ROSAttachRes"), &Z_Registration_Info_UScriptStruct_FROSAttachRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAttachRes), 106097541U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AttachSrv, UROS2AttachSrv::StaticClass, TEXT("UROS2AttachSrv"), &Z_Registration_Info_UClass_UROS2AttachSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AttachSrv), 2720246871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Attach_h__Script_rclUE_2088759018(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Attach_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Attach_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Attach_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2Attach_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
