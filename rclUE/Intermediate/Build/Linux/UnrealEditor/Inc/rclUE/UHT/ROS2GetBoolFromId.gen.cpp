// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2GetBoolFromId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GetBoolFromId() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetBoolFromIdSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetBoolFromIdSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetBoolFromIdReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetBoolFromIdRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGetBoolFromIdReq **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdReq;
class UScriptStruct* FROSGetBoolFromIdReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetBoolFromIdReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetBoolFromIdReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ROSGetBoolFromIdReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetBoolFromIdReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetBoolFromIdReq, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetBoolFromIdReq",
	Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::PropPointers),
	sizeof(FROSGetBoolFromIdReq),
	alignof(FROSGetBoolFromIdReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetBoolFromIdReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdReq.InnerSingleton, Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdReq.InnerSingleton;
}
// ********** End ScriptStruct FROSGetBoolFromIdReq ************************************************

// ********** Begin ScriptStruct FROSGetBoolFromIdRes **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdRes;
class UScriptStruct* FROSGetBoolFromIdRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetBoolFromIdRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetBoolFromIdRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSGetBoolFromIdRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Remarks_MetaData[] = {
		{ "Category", "ROSGetBoolFromIdRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bData_MetaData[] = {
		{ "Category", "ROSGetBoolFromIdRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Remarks;
	static void NewProp_bData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetBoolFromIdRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSGetBoolFromIdRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSGetBoolFromIdRes), &Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_Remarks = { "Remarks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetBoolFromIdRes, Remarks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Remarks_MetaData), NewProp_Remarks_MetaData) };
void Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_bData_SetBit(void* Obj)
{
	((FROSGetBoolFromIdRes*)Obj)->bData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_bData = { "bData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSGetBoolFromIdRes), &Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_bData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bData_MetaData), NewProp_bData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_Remarks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewProp_bData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetBoolFromIdRes",
	Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::PropPointers),
	sizeof(FROSGetBoolFromIdRes),
	alignof(FROSGetBoolFromIdRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetBoolFromIdRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdRes.InnerSingleton, Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdRes.InnerSingleton;
}
// ********** End ScriptStruct FROSGetBoolFromIdRes ************************************************

// ********** Begin Class UROS2GetBoolFromIdSrv Function Fini **************************************
struct Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetBoolFromIdSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetBoolFromIdSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2GetBoolFromIdSrv Function Fini ****************************************

// ********** Begin Class UROS2GetBoolFromIdSrv Function GetRequest ********************************
struct Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics
{
	struct ROS2GetBoolFromIdSrv_eventGetRequest_Parms
	{
		FROSGetBoolFromIdReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetBoolFromIdSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetBoolFromIdReq, METADATA_PARAMS(0, nullptr) }; // 3548730934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetBoolFromIdSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::ROS2GetBoolFromIdSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::ROS2GetBoolFromIdSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetBoolFromIdSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSGetBoolFromIdReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetBoolFromIdSrv Function GetRequest **********************************

// ********** Begin Class UROS2GetBoolFromIdSrv Function GetResponse *******************************
struct Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics
{
	struct ROS2GetBoolFromIdSrv_eventGetResponse_Parms
	{
		FROSGetBoolFromIdRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetBoolFromIdSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetBoolFromIdRes, METADATA_PARAMS(0, nullptr) }; // 3458595393
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetBoolFromIdSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::ROS2GetBoolFromIdSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::ROS2GetBoolFromIdSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetBoolFromIdSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSGetBoolFromIdRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetBoolFromIdSrv Function GetResponse *********************************

// ********** Begin Class UROS2GetBoolFromIdSrv Function Init **************************************
struct Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetBoolFromIdSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetBoolFromIdSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2GetBoolFromIdSrv Function Init ****************************************

// ********** Begin Class UROS2GetBoolFromIdSrv Function SetRequest ********************************
struct Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics
{
	struct ROS2GetBoolFromIdSrv_eventSetRequest_Parms
	{
		FROSGetBoolFromIdReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetBoolFromIdSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetBoolFromIdReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3548730934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetBoolFromIdSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::ROS2GetBoolFromIdSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::ROS2GetBoolFromIdSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetBoolFromIdSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSGetBoolFromIdReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetBoolFromIdSrv Function SetRequest **********************************

// ********** Begin Class UROS2GetBoolFromIdSrv Function SetResponse *******************************
struct Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics
{
	struct ROS2GetBoolFromIdSrv_eventSetResponse_Parms
	{
		FROSGetBoolFromIdRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetBoolFromIdSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetBoolFromIdRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3458595393
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetBoolFromIdSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::ROS2GetBoolFromIdSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::ROS2GetBoolFromIdSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetBoolFromIdSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSGetBoolFromIdRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetBoolFromIdSrv Function SetResponse *********************************

// ********** Begin Class UROS2GetBoolFromIdSrv ****************************************************
void UROS2GetBoolFromIdSrv::StaticRegisterNativesUROS2GetBoolFromIdSrv()
{
	UClass* Class = UROS2GetBoolFromIdSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2GetBoolFromIdSrv::execFini },
		{ "GetRequest", &UROS2GetBoolFromIdSrv::execGetRequest },
		{ "GetResponse", &UROS2GetBoolFromIdSrv::execGetResponse },
		{ "Init", &UROS2GetBoolFromIdSrv::execInit },
		{ "SetRequest", &UROS2GetBoolFromIdSrv::execSetRequest },
		{ "SetResponse", &UROS2GetBoolFromIdSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GetBoolFromIdSrv;
UClass* UROS2GetBoolFromIdSrv::GetPrivateStaticClass()
{
	using TClass = UROS2GetBoolFromIdSrv;
	if (!Z_Registration_Info_UClass_UROS2GetBoolFromIdSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GetBoolFromIdSrv"),
			Z_Registration_Info_UClass_UROS2GetBoolFromIdSrv.InnerSingleton,
			StaticRegisterNativesUROS2GetBoolFromIdSrv,
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
	return Z_Registration_Info_UClass_UROS2GetBoolFromIdSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GetBoolFromIdSrv_NoRegister()
{
	return UROS2GetBoolFromIdSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GetBoolFromIdSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2GetBoolFromId.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetBoolFromId.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Fini, "Fini" }, // 4294745859
		{ &Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetRequest, "GetRequest" }, // 727555194
		{ &Z_Construct_UFunction_UROS2GetBoolFromIdSrv_GetResponse, "GetResponse" }, // 3678619345
		{ &Z_Construct_UFunction_UROS2GetBoolFromIdSrv_Init, "Init" }, // 2102757975
		{ &Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetRequest, "SetRequest" }, // 2689868768
		{ &Z_Construct_UFunction_UROS2GetBoolFromIdSrv_SetResponse, "SetResponse" }, // 56970027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GetBoolFromIdSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GetBoolFromIdSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetBoolFromIdSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GetBoolFromIdSrv_Statics::ClassParams = {
	&UROS2GetBoolFromIdSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetBoolFromIdSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GetBoolFromIdSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GetBoolFromIdSrv()
{
	if (!Z_Registration_Info_UClass_UROS2GetBoolFromIdSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GetBoolFromIdSrv.OuterSingleton, Z_Construct_UClass_UROS2GetBoolFromIdSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GetBoolFromIdSrv.OuterSingleton;
}
UROS2GetBoolFromIdSrv::UROS2GetBoolFromIdSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GetBoolFromIdSrv);
UROS2GetBoolFromIdSrv::~UROS2GetBoolFromIdSrv() {}
// ********** End Class UROS2GetBoolFromIdSrv ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGetBoolFromIdReq::StaticStruct, Z_Construct_UScriptStruct_FROSGetBoolFromIdReq_Statics::NewStructOps, TEXT("ROSGetBoolFromIdReq"), &Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetBoolFromIdReq), 3548730934U) },
		{ FROSGetBoolFromIdRes::StaticStruct, Z_Construct_UScriptStruct_FROSGetBoolFromIdRes_Statics::NewStructOps, TEXT("ROSGetBoolFromIdRes"), &Z_Registration_Info_UScriptStruct_FROSGetBoolFromIdRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetBoolFromIdRes), 3458595393U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GetBoolFromIdSrv, UROS2GetBoolFromIdSrv::StaticClass, TEXT("UROS2GetBoolFromIdSrv"), &Z_Registration_Info_UClass_UROS2GetBoolFromIdSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GetBoolFromIdSrv), 3489935078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h__Script_rclUE_2758297503(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetBoolFromId_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
