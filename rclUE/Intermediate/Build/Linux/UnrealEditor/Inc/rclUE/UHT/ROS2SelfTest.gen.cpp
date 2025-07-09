// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SelfTest.h"
#include "rclUE/Public/Msgs/ROS2DiagnosticStatus.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SelfTest() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SelfTestSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SelfTestSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDiagnosticStatus();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSelfTestReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSelfTestRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSelfTestReq ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSelfTestReq;
class UScriptStruct* FROSSelfTestReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSelfTestReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSelfTestReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSelfTestReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSelfTestReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSelfTestReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSelfTestReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSelfTestReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSelfTestReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSelfTestReq",
	nullptr,
	0,
	sizeof(FROSSelfTestReq),
	alignof(FROSSelfTestReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSelfTestReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSelfTestReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSelfTestReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSelfTestReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSelfTestReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSelfTestReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSelfTestReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSelfTestReq *****************************************************

// ********** Begin ScriptStruct FROSSelfTestRes ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSelfTestRes;
class UScriptStruct* FROSSelfTestRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSelfTestRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSelfTestRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSelfTestRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSelfTestRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSelfTestRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSelfTestRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ROSSelfTestRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Passed_MetaData[] = {
		{ "Category", "ROSSelfTestRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "ROSSelfTestRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Passed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Status_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSelfTestRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSelfTestRes, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewProp_Passed = { "Passed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSelfTestRes, Passed), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Passed_MetaData), NewProp_Passed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewProp_Status_Inner = { "Status", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSDiagnosticStatus, METADATA_PARAMS(0, nullptr) }; // 2497086417
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSelfTestRes, Status), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 2497086417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewProp_Passed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewProp_Status_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSelfTestRes",
	Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::PropPointers),
	sizeof(FROSSelfTestRes),
	alignof(FROSSelfTestRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSelfTestRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSelfTestRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSelfTestRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSelfTestRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSelfTestRes *****************************************************

// ********** Begin Class UROS2SelfTestSrv Function Fini *******************************************
struct Z_Construct_UFunction_UROS2SelfTestSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SelfTestSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SelfTestSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SelfTestSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SelfTestSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SelfTestSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SelfTestSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SelfTestSrv Function Fini *********************************************

// ********** Begin Class UROS2SelfTestSrv Function GetRequest *************************************
struct Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics
{
	struct ROS2SelfTestSrv_eventGetRequest_Parms
	{
		FROSSelfTestReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SelfTestSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSelfTestReq, METADATA_PARAMS(0, nullptr) }; // 655144892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SelfTestSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::ROS2SelfTestSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::ROS2SelfTestSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SelfTestSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSelfTestReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SelfTestSrv Function GetRequest ***************************************

// ********** Begin Class UROS2SelfTestSrv Function GetResponse ************************************
struct Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics
{
	struct ROS2SelfTestSrv_eventGetResponse_Parms
	{
		FROSSelfTestRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SelfTestSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSelfTestRes, METADATA_PARAMS(0, nullptr) }; // 1861406931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SelfTestSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::ROS2SelfTestSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::ROS2SelfTestSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SelfTestSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSelfTestRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SelfTestSrv Function GetResponse **************************************

// ********** Begin Class UROS2SelfTestSrv Function Init *******************************************
struct Z_Construct_UFunction_UROS2SelfTestSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SelfTestSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SelfTestSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SelfTestSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SelfTestSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SelfTestSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SelfTestSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SelfTestSrv Function Init *********************************************

// ********** Begin Class UROS2SelfTestSrv Function SetRequest *************************************
struct Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics
{
	struct ROS2SelfTestSrv_eventSetRequest_Parms
	{
		FROSSelfTestReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SelfTestSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSelfTestReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 655144892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SelfTestSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::ROS2SelfTestSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::ROS2SelfTestSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SelfTestSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSelfTestReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SelfTestSrv Function SetRequest ***************************************

// ********** Begin Class UROS2SelfTestSrv Function SetResponse ************************************
struct Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics
{
	struct ROS2SelfTestSrv_eventSetResponse_Parms
	{
		FROSSelfTestRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SelfTestSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSelfTestRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1861406931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SelfTestSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::ROS2SelfTestSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::ROS2SelfTestSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SelfTestSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSelfTestRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SelfTestSrv Function SetResponse **************************************

// ********** Begin Class UROS2SelfTestSrv *********************************************************
void UROS2SelfTestSrv::StaticRegisterNativesUROS2SelfTestSrv()
{
	UClass* Class = UROS2SelfTestSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SelfTestSrv::execFini },
		{ "GetRequest", &UROS2SelfTestSrv::execGetRequest },
		{ "GetResponse", &UROS2SelfTestSrv::execGetResponse },
		{ "Init", &UROS2SelfTestSrv::execInit },
		{ "SetRequest", &UROS2SelfTestSrv::execSetRequest },
		{ "SetResponse", &UROS2SelfTestSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SelfTestSrv;
UClass* UROS2SelfTestSrv::GetPrivateStaticClass()
{
	using TClass = UROS2SelfTestSrv;
	if (!Z_Registration_Info_UClass_UROS2SelfTestSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SelfTestSrv"),
			Z_Registration_Info_UClass_UROS2SelfTestSrv.InnerSingleton,
			StaticRegisterNativesUROS2SelfTestSrv,
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
	return Z_Registration_Info_UClass_UROS2SelfTestSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SelfTestSrv_NoRegister()
{
	return UROS2SelfTestSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SelfTestSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SelfTest.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SelfTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SelfTestSrv_Fini, "Fini" }, // 377698066
		{ &Z_Construct_UFunction_UROS2SelfTestSrv_GetRequest, "GetRequest" }, // 2819842387
		{ &Z_Construct_UFunction_UROS2SelfTestSrv_GetResponse, "GetResponse" }, // 1097184100
		{ &Z_Construct_UFunction_UROS2SelfTestSrv_Init, "Init" }, // 1650827170
		{ &Z_Construct_UFunction_UROS2SelfTestSrv_SetRequest, "SetRequest" }, // 1174284826
		{ &Z_Construct_UFunction_UROS2SelfTestSrv_SetResponse, "SetResponse" }, // 1113752801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SelfTestSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SelfTestSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SelfTestSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SelfTestSrv_Statics::ClassParams = {
	&UROS2SelfTestSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SelfTestSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SelfTestSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SelfTestSrv()
{
	if (!Z_Registration_Info_UClass_UROS2SelfTestSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SelfTestSrv.OuterSingleton, Z_Construct_UClass_UROS2SelfTestSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SelfTestSrv.OuterSingleton;
}
UROS2SelfTestSrv::UROS2SelfTestSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SelfTestSrv);
UROS2SelfTestSrv::~UROS2SelfTestSrv() {}
// ********** End Class UROS2SelfTestSrv ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSelfTestReq::StaticStruct, Z_Construct_UScriptStruct_FROSSelfTestReq_Statics::NewStructOps, TEXT("ROSSelfTestReq"), &Z_Registration_Info_UScriptStruct_FROSSelfTestReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSelfTestReq), 655144892U) },
		{ FROSSelfTestRes::StaticStruct, Z_Construct_UScriptStruct_FROSSelfTestRes_Statics::NewStructOps, TEXT("ROSSelfTestRes"), &Z_Registration_Info_UScriptStruct_FROSSelfTestRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSelfTestRes), 1861406931U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SelfTestSrv, UROS2SelfTestSrv::StaticClass, TEXT("UROS2SelfTestSrv"), &Z_Registration_Info_UClass_UROS2SelfTestSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SelfTestSrv), 1610271429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h__Script_rclUE_3627560089(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SelfTest_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
