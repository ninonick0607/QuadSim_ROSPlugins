// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2GetInt32FromId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GetInt32FromId() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetInt32FromIdSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetInt32FromIdSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetInt32FromIdReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetInt32FromIdRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGetInt32FromIdReq *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdReq;
class UScriptStruct* FROSGetInt32FromIdReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetInt32FromIdReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetInt32FromIdReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ROSGetInt32FromIdReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetInt32FromIdReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetInt32FromIdReq, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetInt32FromIdReq",
	Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::PropPointers),
	sizeof(FROSGetInt32FromIdReq),
	alignof(FROSGetInt32FromIdReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetInt32FromIdReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdReq.InnerSingleton, Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdReq.InnerSingleton;
}
// ********** End ScriptStruct FROSGetInt32FromIdReq ***********************************************

// ********** Begin ScriptStruct FROSGetInt32FromIdRes *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdRes;
class UScriptStruct* FROSGetInt32FromIdRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetInt32FromIdRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetInt32FromIdRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSGetInt32FromIdRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Remarks_MetaData[] = {
		{ "Category", "ROSGetInt32FromIdRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ROSGetInt32FromIdRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Remarks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetInt32FromIdRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSGetInt32FromIdRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSGetInt32FromIdRes), &Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewProp_Remarks = { "Remarks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetInt32FromIdRes, Remarks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Remarks_MetaData), NewProp_Remarks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetInt32FromIdRes, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewProp_Remarks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetInt32FromIdRes",
	Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::PropPointers),
	sizeof(FROSGetInt32FromIdRes),
	alignof(FROSGetInt32FromIdRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetInt32FromIdRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdRes.InnerSingleton, Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdRes.InnerSingleton;
}
// ********** End ScriptStruct FROSGetInt32FromIdRes ***********************************************

// ********** Begin Class UROS2GetInt32FromIdSrv Function Fini *************************************
struct Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetInt32FromIdSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetInt32FromIdSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2GetInt32FromIdSrv Function Fini ***************************************

// ********** Begin Class UROS2GetInt32FromIdSrv Function GetRequest *******************************
struct Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics
{
	struct ROS2GetInt32FromIdSrv_eventGetRequest_Parms
	{
		FROSGetInt32FromIdReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetInt32FromIdSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetInt32FromIdReq, METADATA_PARAMS(0, nullptr) }; // 2877581731
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetInt32FromIdSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::ROS2GetInt32FromIdSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::ROS2GetInt32FromIdSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetInt32FromIdSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSGetInt32FromIdReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetInt32FromIdSrv Function GetRequest *********************************

// ********** Begin Class UROS2GetInt32FromIdSrv Function GetResponse ******************************
struct Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics
{
	struct ROS2GetInt32FromIdSrv_eventGetResponse_Parms
	{
		FROSGetInt32FromIdRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetInt32FromIdSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetInt32FromIdRes, METADATA_PARAMS(0, nullptr) }; // 286527960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetInt32FromIdSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::ROS2GetInt32FromIdSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::ROS2GetInt32FromIdSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetInt32FromIdSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSGetInt32FromIdRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetInt32FromIdSrv Function GetResponse ********************************

// ********** Begin Class UROS2GetInt32FromIdSrv Function Init *************************************
struct Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetInt32FromIdSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetInt32FromIdSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2GetInt32FromIdSrv Function Init ***************************************

// ********** Begin Class UROS2GetInt32FromIdSrv Function SetRequest *******************************
struct Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics
{
	struct ROS2GetInt32FromIdSrv_eventSetRequest_Parms
	{
		FROSGetInt32FromIdReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetInt32FromIdSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetInt32FromIdReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2877581731
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetInt32FromIdSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::ROS2GetInt32FromIdSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::ROS2GetInt32FromIdSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetInt32FromIdSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSGetInt32FromIdReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetInt32FromIdSrv Function SetRequest *********************************

// ********** Begin Class UROS2GetInt32FromIdSrv Function SetResponse ******************************
struct Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics
{
	struct ROS2GetInt32FromIdSrv_eventSetResponse_Parms
	{
		FROSGetInt32FromIdRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetInt32FromIdSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetInt32FromIdRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 286527960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetInt32FromIdSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::ROS2GetInt32FromIdSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::ROS2GetInt32FromIdSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetInt32FromIdSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSGetInt32FromIdRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetInt32FromIdSrv Function SetResponse ********************************

// ********** Begin Class UROS2GetInt32FromIdSrv ***************************************************
void UROS2GetInt32FromIdSrv::StaticRegisterNativesUROS2GetInt32FromIdSrv()
{
	UClass* Class = UROS2GetInt32FromIdSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2GetInt32FromIdSrv::execFini },
		{ "GetRequest", &UROS2GetInt32FromIdSrv::execGetRequest },
		{ "GetResponse", &UROS2GetInt32FromIdSrv::execGetResponse },
		{ "Init", &UROS2GetInt32FromIdSrv::execInit },
		{ "SetRequest", &UROS2GetInt32FromIdSrv::execSetRequest },
		{ "SetResponse", &UROS2GetInt32FromIdSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GetInt32FromIdSrv;
UClass* UROS2GetInt32FromIdSrv::GetPrivateStaticClass()
{
	using TClass = UROS2GetInt32FromIdSrv;
	if (!Z_Registration_Info_UClass_UROS2GetInt32FromIdSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GetInt32FromIdSrv"),
			Z_Registration_Info_UClass_UROS2GetInt32FromIdSrv.InnerSingleton,
			StaticRegisterNativesUROS2GetInt32FromIdSrv,
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
	return Z_Registration_Info_UClass_UROS2GetInt32FromIdSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GetInt32FromIdSrv_NoRegister()
{
	return UROS2GetInt32FromIdSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GetInt32FromIdSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2GetInt32FromId.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetInt32FromId.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Fini, "Fini" }, // 1994274323
		{ &Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetRequest, "GetRequest" }, // 2115153857
		{ &Z_Construct_UFunction_UROS2GetInt32FromIdSrv_GetResponse, "GetResponse" }, // 3856215796
		{ &Z_Construct_UFunction_UROS2GetInt32FromIdSrv_Init, "Init" }, // 3729075084
		{ &Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetRequest, "SetRequest" }, // 388881637
		{ &Z_Construct_UFunction_UROS2GetInt32FromIdSrv_SetResponse, "SetResponse" }, // 552906841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GetInt32FromIdSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GetInt32FromIdSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetInt32FromIdSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GetInt32FromIdSrv_Statics::ClassParams = {
	&UROS2GetInt32FromIdSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetInt32FromIdSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GetInt32FromIdSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GetInt32FromIdSrv()
{
	if (!Z_Registration_Info_UClass_UROS2GetInt32FromIdSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GetInt32FromIdSrv.OuterSingleton, Z_Construct_UClass_UROS2GetInt32FromIdSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GetInt32FromIdSrv.OuterSingleton;
}
UROS2GetInt32FromIdSrv::UROS2GetInt32FromIdSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GetInt32FromIdSrv);
UROS2GetInt32FromIdSrv::~UROS2GetInt32FromIdSrv() {}
// ********** End Class UROS2GetInt32FromIdSrv *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGetInt32FromIdReq::StaticStruct, Z_Construct_UScriptStruct_FROSGetInt32FromIdReq_Statics::NewStructOps, TEXT("ROSGetInt32FromIdReq"), &Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetInt32FromIdReq), 2877581731U) },
		{ FROSGetInt32FromIdRes::StaticStruct, Z_Construct_UScriptStruct_FROSGetInt32FromIdRes_Statics::NewStructOps, TEXT("ROSGetInt32FromIdRes"), &Z_Registration_Info_UScriptStruct_FROSGetInt32FromIdRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetInt32FromIdRes), 286527960U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GetInt32FromIdSrv, UROS2GetInt32FromIdSrv::StaticClass, TEXT("UROS2GetInt32FromIdSrv"), &Z_Registration_Info_UClass_UROS2GetInt32FromIdSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GetInt32FromIdSrv), 1966806310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h__Script_rclUE_321272757(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetInt32FromId_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
