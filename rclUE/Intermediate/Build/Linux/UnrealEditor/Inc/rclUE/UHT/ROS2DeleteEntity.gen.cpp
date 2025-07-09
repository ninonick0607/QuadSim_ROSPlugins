// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2DeleteEntity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2DeleteEntity() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2DeleteEntitySrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2DeleteEntitySrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDeleteEntityReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDeleteEntityRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSDeleteEntityReq ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSDeleteEntityReq;
class UScriptStruct* FROSDeleteEntityReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDeleteEntityReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSDeleteEntityReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSDeleteEntityReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSDeleteEntityReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSDeleteEntityReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSDeleteEntityReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSDeleteEntityReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDeleteEntityReq, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSDeleteEntityReq",
	Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::PropPointers),
	sizeof(FROSDeleteEntityReq),
	alignof(FROSDeleteEntityReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSDeleteEntityReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDeleteEntityReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSDeleteEntityReq.InnerSingleton, Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSDeleteEntityReq.InnerSingleton;
}
// ********** End ScriptStruct FROSDeleteEntityReq *************************************************

// ********** Begin ScriptStruct FROSDeleteEntityRes ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSDeleteEntityRes;
class UScriptStruct* FROSDeleteEntityRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDeleteEntityRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSDeleteEntityRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSDeleteEntityRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSDeleteEntityRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSDeleteEntityRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSDeleteEntityRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusMessage_MetaData[] = {
		{ "Category", "ROSDeleteEntityRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatusMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSDeleteEntityRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSDeleteEntityRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSDeleteEntityRes), &Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::NewProp_StatusMessage = { "StatusMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSDeleteEntityRes, StatusMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusMessage_MetaData), NewProp_StatusMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::NewProp_StatusMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSDeleteEntityRes",
	Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::PropPointers),
	sizeof(FROSDeleteEntityRes),
	alignof(FROSDeleteEntityRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSDeleteEntityRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSDeleteEntityRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSDeleteEntityRes.InnerSingleton, Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSDeleteEntityRes.InnerSingleton;
}
// ********** End ScriptStruct FROSDeleteEntityRes *************************************************

// ********** Begin Class UROS2DeleteEntitySrv Function Fini ***************************************
struct Z_Construct_UFunction_UROS2DeleteEntitySrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DeleteEntitySrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DeleteEntitySrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DeleteEntitySrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2DeleteEntitySrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DeleteEntitySrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DeleteEntitySrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2DeleteEntitySrv Function Fini *****************************************

// ********** Begin Class UROS2DeleteEntitySrv Function GetRequest *********************************
struct Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics
{
	struct ROS2DeleteEntitySrv_eventGetRequest_Parms
	{
		FROSDeleteEntityReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DeleteEntitySrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSDeleteEntityReq, METADATA_PARAMS(0, nullptr) }; // 677023152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DeleteEntitySrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::ROS2DeleteEntitySrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::ROS2DeleteEntitySrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DeleteEntitySrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSDeleteEntityReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2DeleteEntitySrv Function GetRequest ***********************************

// ********** Begin Class UROS2DeleteEntitySrv Function GetResponse ********************************
struct Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics
{
	struct ROS2DeleteEntitySrv_eventGetResponse_Parms
	{
		FROSDeleteEntityRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DeleteEntitySrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSDeleteEntityRes, METADATA_PARAMS(0, nullptr) }; // 1601960032
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DeleteEntitySrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::ROS2DeleteEntitySrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::ROS2DeleteEntitySrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DeleteEntitySrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSDeleteEntityRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2DeleteEntitySrv Function GetResponse **********************************

// ********** Begin Class UROS2DeleteEntitySrv Function Init ***************************************
struct Z_Construct_UFunction_UROS2DeleteEntitySrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DeleteEntitySrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DeleteEntitySrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DeleteEntitySrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2DeleteEntitySrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DeleteEntitySrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DeleteEntitySrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2DeleteEntitySrv Function Init *****************************************

// ********** Begin Class UROS2DeleteEntitySrv Function SetRequest *********************************
struct Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics
{
	struct ROS2DeleteEntitySrv_eventSetRequest_Parms
	{
		FROSDeleteEntityReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DeleteEntitySrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSDeleteEntityReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 677023152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DeleteEntitySrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::ROS2DeleteEntitySrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::ROS2DeleteEntitySrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DeleteEntitySrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSDeleteEntityReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2DeleteEntitySrv Function SetRequest ***********************************

// ********** Begin Class UROS2DeleteEntitySrv Function SetResponse ********************************
struct Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics
{
	struct ROS2DeleteEntitySrv_eventSetResponse_Parms
	{
		FROSDeleteEntityRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2DeleteEntitySrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSDeleteEntityRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1601960032
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2DeleteEntitySrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::ROS2DeleteEntitySrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::ROS2DeleteEntitySrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2DeleteEntitySrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSDeleteEntityRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2DeleteEntitySrv Function SetResponse **********************************

// ********** Begin Class UROS2DeleteEntitySrv *****************************************************
void UROS2DeleteEntitySrv::StaticRegisterNativesUROS2DeleteEntitySrv()
{
	UClass* Class = UROS2DeleteEntitySrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2DeleteEntitySrv::execFini },
		{ "GetRequest", &UROS2DeleteEntitySrv::execGetRequest },
		{ "GetResponse", &UROS2DeleteEntitySrv::execGetResponse },
		{ "Init", &UROS2DeleteEntitySrv::execInit },
		{ "SetRequest", &UROS2DeleteEntitySrv::execSetRequest },
		{ "SetResponse", &UROS2DeleteEntitySrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2DeleteEntitySrv;
UClass* UROS2DeleteEntitySrv::GetPrivateStaticClass()
{
	using TClass = UROS2DeleteEntitySrv;
	if (!Z_Registration_Info_UClass_UROS2DeleteEntitySrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2DeleteEntitySrv"),
			Z_Registration_Info_UClass_UROS2DeleteEntitySrv.InnerSingleton,
			StaticRegisterNativesUROS2DeleteEntitySrv,
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
	return Z_Registration_Info_UClass_UROS2DeleteEntitySrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2DeleteEntitySrv_NoRegister()
{
	return UROS2DeleteEntitySrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2DeleteEntitySrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2DeleteEntity.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2DeleteEntity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2DeleteEntitySrv_Fini, "Fini" }, // 3628332359
		{ &Z_Construct_UFunction_UROS2DeleteEntitySrv_GetRequest, "GetRequest" }, // 3771061030
		{ &Z_Construct_UFunction_UROS2DeleteEntitySrv_GetResponse, "GetResponse" }, // 3072380791
		{ &Z_Construct_UFunction_UROS2DeleteEntitySrv_Init, "Init" }, // 1629031019
		{ &Z_Construct_UFunction_UROS2DeleteEntitySrv_SetRequest, "SetRequest" }, // 4119913093
		{ &Z_Construct_UFunction_UROS2DeleteEntitySrv_SetResponse, "SetResponse" }, // 2833378660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2DeleteEntitySrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2DeleteEntitySrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DeleteEntitySrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2DeleteEntitySrv_Statics::ClassParams = {
	&UROS2DeleteEntitySrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2DeleteEntitySrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2DeleteEntitySrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2DeleteEntitySrv()
{
	if (!Z_Registration_Info_UClass_UROS2DeleteEntitySrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2DeleteEntitySrv.OuterSingleton, Z_Construct_UClass_UROS2DeleteEntitySrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2DeleteEntitySrv.OuterSingleton;
}
UROS2DeleteEntitySrv::UROS2DeleteEntitySrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2DeleteEntitySrv);
UROS2DeleteEntitySrv::~UROS2DeleteEntitySrv() {}
// ********** End Class UROS2DeleteEntitySrv *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2DeleteEntity_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSDeleteEntityReq::StaticStruct, Z_Construct_UScriptStruct_FROSDeleteEntityReq_Statics::NewStructOps, TEXT("ROSDeleteEntityReq"), &Z_Registration_Info_UScriptStruct_FROSDeleteEntityReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSDeleteEntityReq), 677023152U) },
		{ FROSDeleteEntityRes::StaticStruct, Z_Construct_UScriptStruct_FROSDeleteEntityRes_Statics::NewStructOps, TEXT("ROSDeleteEntityRes"), &Z_Registration_Info_UScriptStruct_FROSDeleteEntityRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSDeleteEntityRes), 1601960032U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2DeleteEntitySrv, UROS2DeleteEntitySrv::StaticClass, TEXT("UROS2DeleteEntitySrv"), &Z_Registration_Info_UClass_UROS2DeleteEntitySrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2DeleteEntitySrv), 2619597033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2DeleteEntity_h__Script_rclUE_3367147897(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2DeleteEntity_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2DeleteEntity_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2DeleteEntity_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2DeleteEntity_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
