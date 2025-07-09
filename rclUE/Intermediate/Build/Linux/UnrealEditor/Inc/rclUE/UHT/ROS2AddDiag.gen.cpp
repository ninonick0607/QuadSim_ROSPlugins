// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2AddDiag.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2AddDiag() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2AddDiagSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2AddDiagSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAddDiagReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAddDiagRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAddDiagReq ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAddDiagReq;
class UScriptStruct* FROSAddDiagReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAddDiagReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAddDiagReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAddDiagReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAddDiagReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAddDiagReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAddDiagReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadNamespace_MetaData[] = {
		{ "Category", "ROSAddDiagReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LoadNamespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAddDiagReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::NewProp_LoadNamespace = { "LoadNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAddDiagReq, LoadNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadNamespace_MetaData), NewProp_LoadNamespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::NewProp_LoadNamespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAddDiagReq",
	Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::PropPointers),
	sizeof(FROSAddDiagReq),
	alignof(FROSAddDiagReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAddDiagReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAddDiagReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAddDiagReq.InnerSingleton, Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAddDiagReq.InnerSingleton;
}
// ********** End ScriptStruct FROSAddDiagReq ******************************************************

// ********** Begin ScriptStruct FROSAddDiagRes ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAddDiagRes;
class UScriptStruct* FROSAddDiagRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAddDiagRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAddDiagRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAddDiagRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAddDiagRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAddDiagRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAddDiagRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSAddDiagRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "ROSAddDiagRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAddDiagRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSAddDiagRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSAddDiagRes), &Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAddDiagRes, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAddDiagRes",
	Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::PropPointers),
	sizeof(FROSAddDiagRes),
	alignof(FROSAddDiagRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAddDiagRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAddDiagRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAddDiagRes.InnerSingleton, Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAddDiagRes.InnerSingleton;
}
// ********** End ScriptStruct FROSAddDiagRes ******************************************************

// ********** Begin Class UROS2AddDiagSrv Function Fini ********************************************
struct Z_Construct_UFunction_UROS2AddDiagSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddDiagSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddDiagSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddDiagSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2AddDiagSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddDiagSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddDiagSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2AddDiagSrv Function Fini **********************************************

// ********** Begin Class UROS2AddDiagSrv Function GetRequest **************************************
struct Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics
{
	struct ROS2AddDiagSrv_eventGetRequest_Parms
	{
		FROSAddDiagReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AddDiagSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSAddDiagReq, METADATA_PARAMS(0, nullptr) }; // 1661608105
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddDiagSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::ROS2AddDiagSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::ROS2AddDiagSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddDiagSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSAddDiagReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2AddDiagSrv Function GetRequest ****************************************

// ********** Begin Class UROS2AddDiagSrv Function GetResponse *************************************
struct Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics
{
	struct ROS2AddDiagSrv_eventGetResponse_Parms
	{
		FROSAddDiagRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AddDiagSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSAddDiagRes, METADATA_PARAMS(0, nullptr) }; // 3845532899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddDiagSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::ROS2AddDiagSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::ROS2AddDiagSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddDiagSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSAddDiagRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2AddDiagSrv Function GetResponse ***************************************

// ********** Begin Class UROS2AddDiagSrv Function Init ********************************************
struct Z_Construct_UFunction_UROS2AddDiagSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddDiagSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddDiagSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddDiagSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2AddDiagSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddDiagSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddDiagSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2AddDiagSrv Function Init **********************************************

// ********** Begin Class UROS2AddDiagSrv Function SetRequest **************************************
struct Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics
{
	struct ROS2AddDiagSrv_eventSetRequest_Parms
	{
		FROSAddDiagReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AddDiagSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSAddDiagReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1661608105
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddDiagSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::ROS2AddDiagSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::ROS2AddDiagSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddDiagSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSAddDiagReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2AddDiagSrv Function SetRequest ****************************************

// ********** Begin Class UROS2AddDiagSrv Function SetResponse *************************************
struct Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics
{
	struct ROS2AddDiagSrv_eventSetResponse_Parms
	{
		FROSAddDiagRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AddDiagSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSAddDiagRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3845532899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddDiagSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::ROS2AddDiagSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::ROS2AddDiagSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddDiagSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSAddDiagRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2AddDiagSrv Function SetResponse ***************************************

// ********** Begin Class UROS2AddDiagSrv **********************************************************
void UROS2AddDiagSrv::StaticRegisterNativesUROS2AddDiagSrv()
{
	UClass* Class = UROS2AddDiagSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2AddDiagSrv::execFini },
		{ "GetRequest", &UROS2AddDiagSrv::execGetRequest },
		{ "GetResponse", &UROS2AddDiagSrv::execGetResponse },
		{ "Init", &UROS2AddDiagSrv::execInit },
		{ "SetRequest", &UROS2AddDiagSrv::execSetRequest },
		{ "SetResponse", &UROS2AddDiagSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AddDiagSrv;
UClass* UROS2AddDiagSrv::GetPrivateStaticClass()
{
	using TClass = UROS2AddDiagSrv;
	if (!Z_Registration_Info_UClass_UROS2AddDiagSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AddDiagSrv"),
			Z_Registration_Info_UClass_UROS2AddDiagSrv.InnerSingleton,
			StaticRegisterNativesUROS2AddDiagSrv,
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
	return Z_Registration_Info_UClass_UROS2AddDiagSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AddDiagSrv_NoRegister()
{
	return UROS2AddDiagSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AddDiagSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2AddDiag.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddDiag.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AddDiagSrv_Fini, "Fini" }, // 1410707471
		{ &Z_Construct_UFunction_UROS2AddDiagSrv_GetRequest, "GetRequest" }, // 258174441
		{ &Z_Construct_UFunction_UROS2AddDiagSrv_GetResponse, "GetResponse" }, // 1802787284
		{ &Z_Construct_UFunction_UROS2AddDiagSrv_Init, "Init" }, // 3581447533
		{ &Z_Construct_UFunction_UROS2AddDiagSrv_SetRequest, "SetRequest" }, // 2371970721
		{ &Z_Construct_UFunction_UROS2AddDiagSrv_SetResponse, "SetResponse" }, // 3638054866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AddDiagSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AddDiagSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AddDiagSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AddDiagSrv_Statics::ClassParams = {
	&UROS2AddDiagSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AddDiagSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AddDiagSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AddDiagSrv()
{
	if (!Z_Registration_Info_UClass_UROS2AddDiagSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AddDiagSrv.OuterSingleton, Z_Construct_UClass_UROS2AddDiagSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AddDiagSrv.OuterSingleton;
}
UROS2AddDiagSrv::UROS2AddDiagSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AddDiagSrv);
UROS2AddDiagSrv::~UROS2AddDiagSrv() {}
// ********** End Class UROS2AddDiagSrv ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddDiag_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAddDiagReq::StaticStruct, Z_Construct_UScriptStruct_FROSAddDiagReq_Statics::NewStructOps, TEXT("ROSAddDiagReq"), &Z_Registration_Info_UScriptStruct_FROSAddDiagReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAddDiagReq), 1661608105U) },
		{ FROSAddDiagRes::StaticStruct, Z_Construct_UScriptStruct_FROSAddDiagRes_Statics::NewStructOps, TEXT("ROSAddDiagRes"), &Z_Registration_Info_UScriptStruct_FROSAddDiagRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAddDiagRes), 3845532899U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AddDiagSrv, UROS2AddDiagSrv::StaticClass, TEXT("UROS2AddDiagSrv"), &Z_Registration_Info_UClass_UROS2AddDiagSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AddDiagSrv), 1175086764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddDiag_h__Script_rclUE_3805542885(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddDiag_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddDiag_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddDiag_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddDiag_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
