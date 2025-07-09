// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2StdSrvSetBool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2StdSrvSetBool() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvSetBoolSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2StdSrvSetBoolSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSStdSrvSetBoolReq **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolReq;
class UScriptStruct* FROSStdSrvSetBoolReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSStdSrvSetBoolReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bData_MetaData[] = {
		{ "Category", "ROSStdSrvSetBoolReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSStdSrvSetBoolReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::NewProp_bData_SetBit(void* Obj)
{
	((FROSStdSrvSetBoolReq*)Obj)->bData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::NewProp_bData = { "bData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSStdSrvSetBoolReq), &Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::NewProp_bData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bData_MetaData), NewProp_bData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::NewProp_bData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSStdSrvSetBoolReq",
	Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::PropPointers),
	sizeof(FROSStdSrvSetBoolReq),
	alignof(FROSStdSrvSetBoolReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolReq.InnerSingleton, Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolReq.InnerSingleton;
}
// ********** End ScriptStruct FROSStdSrvSetBoolReq ************************************************

// ********** Begin ScriptStruct FROSStdSrvSetBoolRes **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolRes;
class UScriptStruct* FROSStdSrvSetBoolRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSStdSrvSetBoolRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSStdSrvSetBoolRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "ROSStdSrvSetBoolRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSStdSrvSetBoolRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSStdSrvSetBoolRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSStdSrvSetBoolRes), &Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSStdSrvSetBoolRes, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSStdSrvSetBoolRes",
	Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::PropPointers),
	sizeof(FROSStdSrvSetBoolRes),
	alignof(FROSStdSrvSetBoolRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolRes.InnerSingleton, Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolRes.InnerSingleton;
}
// ********** End ScriptStruct FROSStdSrvSetBoolRes ************************************************

// ********** Begin Class UROS2StdSrvSetBoolSrv Function Fini **************************************
struct Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvSetBoolSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvSetBoolSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvSetBoolSrv Function Fini ****************************************

// ********** Begin Class UROS2StdSrvSetBoolSrv Function GetRequest ********************************
struct Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics
{
	struct ROS2StdSrvSetBoolSrv_eventGetRequest_Parms
	{
		FROSStdSrvSetBoolReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvSetBoolSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq, METADATA_PARAMS(0, nullptr) }; // 427281339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvSetBoolSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::ROS2StdSrvSetBoolSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::ROS2StdSrvSetBoolSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvSetBoolSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSStdSrvSetBoolReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvSetBoolSrv Function GetRequest **********************************

// ********** Begin Class UROS2StdSrvSetBoolSrv Function GetResponse *******************************
struct Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics
{
	struct ROS2StdSrvSetBoolSrv_eventGetResponse_Parms
	{
		FROSStdSrvSetBoolRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvSetBoolSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes, METADATA_PARAMS(0, nullptr) }; // 1536838957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvSetBoolSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::ROS2StdSrvSetBoolSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::ROS2StdSrvSetBoolSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvSetBoolSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSStdSrvSetBoolRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvSetBoolSrv Function GetResponse *********************************

// ********** Begin Class UROS2StdSrvSetBoolSrv Function Init **************************************
struct Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvSetBoolSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvSetBoolSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvSetBoolSrv Function Init ****************************************

// ********** Begin Class UROS2StdSrvSetBoolSrv Function SetRequest ********************************
struct Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics
{
	struct ROS2StdSrvSetBoolSrv_eventSetRequest_Parms
	{
		FROSStdSrvSetBoolReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvSetBoolSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 427281339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvSetBoolSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::ROS2StdSrvSetBoolSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::ROS2StdSrvSetBoolSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvSetBoolSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSStdSrvSetBoolReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvSetBoolSrv Function SetRequest **********************************

// ********** Begin Class UROS2StdSrvSetBoolSrv Function SetResponse *******************************
struct Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics
{
	struct ROS2StdSrvSetBoolSrv_eventSetResponse_Parms
	{
		FROSStdSrvSetBoolRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2StdSrvSetBoolSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1536838957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2StdSrvSetBoolSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::ROS2StdSrvSetBoolSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::ROS2StdSrvSetBoolSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2StdSrvSetBoolSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSStdSrvSetBoolRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2StdSrvSetBoolSrv Function SetResponse *********************************

// ********** Begin Class UROS2StdSrvSetBoolSrv ****************************************************
void UROS2StdSrvSetBoolSrv::StaticRegisterNativesUROS2StdSrvSetBoolSrv()
{
	UClass* Class = UROS2StdSrvSetBoolSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2StdSrvSetBoolSrv::execFini },
		{ "GetRequest", &UROS2StdSrvSetBoolSrv::execGetRequest },
		{ "GetResponse", &UROS2StdSrvSetBoolSrv::execGetResponse },
		{ "Init", &UROS2StdSrvSetBoolSrv::execInit },
		{ "SetRequest", &UROS2StdSrvSetBoolSrv::execSetRequest },
		{ "SetResponse", &UROS2StdSrvSetBoolSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2StdSrvSetBoolSrv;
UClass* UROS2StdSrvSetBoolSrv::GetPrivateStaticClass()
{
	using TClass = UROS2StdSrvSetBoolSrv;
	if (!Z_Registration_Info_UClass_UROS2StdSrvSetBoolSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2StdSrvSetBoolSrv"),
			Z_Registration_Info_UClass_UROS2StdSrvSetBoolSrv.InnerSingleton,
			StaticRegisterNativesUROS2StdSrvSetBoolSrv,
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
	return Z_Registration_Info_UClass_UROS2StdSrvSetBoolSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2StdSrvSetBoolSrv_NoRegister()
{
	return UROS2StdSrvSetBoolSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2StdSrvSetBoolSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2StdSrvSetBool.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2StdSrvSetBool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Fini, "Fini" }, // 1726212221
		{ &Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetRequest, "GetRequest" }, // 2489942453
		{ &Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_GetResponse, "GetResponse" }, // 1165209746
		{ &Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_Init, "Init" }, // 207625364
		{ &Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetRequest, "SetRequest" }, // 3922182933
		{ &Z_Construct_UFunction_UROS2StdSrvSetBoolSrv_SetResponse, "SetResponse" }, // 3657814281
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2StdSrvSetBoolSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2StdSrvSetBoolSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2StdSrvSetBoolSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2StdSrvSetBoolSrv_Statics::ClassParams = {
	&UROS2StdSrvSetBoolSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2StdSrvSetBoolSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2StdSrvSetBoolSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2StdSrvSetBoolSrv()
{
	if (!Z_Registration_Info_UClass_UROS2StdSrvSetBoolSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2StdSrvSetBoolSrv.OuterSingleton, Z_Construct_UClass_UROS2StdSrvSetBoolSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2StdSrvSetBoolSrv.OuterSingleton;
}
UROS2StdSrvSetBoolSrv::UROS2StdSrvSetBoolSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2StdSrvSetBoolSrv);
UROS2StdSrvSetBoolSrv::~UROS2StdSrvSetBoolSrv() {}
// ********** End Class UROS2StdSrvSetBoolSrv ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSStdSrvSetBoolReq::StaticStruct, Z_Construct_UScriptStruct_FROSStdSrvSetBoolReq_Statics::NewStructOps, TEXT("ROSStdSrvSetBoolReq"), &Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSStdSrvSetBoolReq), 427281339U) },
		{ FROSStdSrvSetBoolRes::StaticStruct, Z_Construct_UScriptStruct_FROSStdSrvSetBoolRes_Statics::NewStructOps, TEXT("ROSStdSrvSetBoolRes"), &Z_Registration_Info_UScriptStruct_FROSStdSrvSetBoolRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSStdSrvSetBoolRes), 1536838957U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2StdSrvSetBoolSrv, UROS2StdSrvSetBoolSrv::StaticClass, TEXT("UROS2StdSrvSetBoolSrv"), &Z_Registration_Info_UClass_UROS2StdSrvSetBoolSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2StdSrvSetBoolSrv), 1317939288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h__Script_rclUE_3690069948(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2StdSrvSetBool_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
