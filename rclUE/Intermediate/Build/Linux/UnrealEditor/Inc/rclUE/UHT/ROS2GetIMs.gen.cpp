// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2GetIMs.h"
#include "rclUE/Public/Msgs/ROS2IM.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GetIMs() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetIMsSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetIMsSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetIMsReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetIMsRes();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSIM();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGetIMsReq *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetIMsReq;
class UScriptStruct* FROSGetIMsReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetIMsReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetIMsReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetIMsReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetIMsReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetIMsReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetIMsReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetIMsReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetIMsReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetIMsReq",
	nullptr,
	0,
	sizeof(FROSGetIMsReq),
	alignof(FROSGetIMsReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetIMsReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetIMsReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetIMsReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetIMsReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetIMsReq.InnerSingleton, Z_Construct_UScriptStruct_FROSGetIMsReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetIMsReq.InnerSingleton;
}
// ********** End ScriptStruct FROSGetIMsReq *******************************************************

// ********** Begin ScriptStruct FROSGetIMsRes *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetIMsRes;
class UScriptStruct* FROSGetIMsRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetIMsRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetIMsRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetIMsRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetIMsRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetIMsRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetIMsRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[] = {
		{ "Category", "ROSGetIMsRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[] = {
		{ "Category", "ROSGetIMsRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_SequenceNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetIMsRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetIMsRes, SequenceNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceNumber_MetaData), NewProp_SequenceNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSIM, METADATA_PARAMS(0, nullptr) }; // 3626302721
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetIMsRes, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Markers_MetaData), NewProp_Markers_MetaData) }; // 3626302721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::NewProp_SequenceNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::NewProp_Markers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::NewProp_Markers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetIMsRes",
	Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::PropPointers),
	sizeof(FROSGetIMsRes),
	alignof(FROSGetIMsRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetIMsRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetIMsRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetIMsRes.InnerSingleton, Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetIMsRes.InnerSingleton;
}
// ********** End ScriptStruct FROSGetIMsRes *******************************************************

// ********** Begin Class UROS2GetIMsSrv Function Fini *********************************************
struct Z_Construct_UFunction_UROS2GetIMsSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetIMsSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetIMsSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetIMsSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetIMsSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetIMsSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetIMsSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2GetIMsSrv Function Fini ***********************************************

// ********** Begin Class UROS2GetIMsSrv Function GetRequest ***************************************
struct Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics
{
	struct ROS2GetIMsSrv_eventGetRequest_Parms
	{
		FROSGetIMsReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetIMsSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetIMsReq, METADATA_PARAMS(0, nullptr) }; // 1556408162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetIMsSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::ROS2GetIMsSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::ROS2GetIMsSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetIMsSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSGetIMsReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetIMsSrv Function GetRequest *****************************************

// ********** Begin Class UROS2GetIMsSrv Function GetResponse **************************************
struct Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics
{
	struct ROS2GetIMsSrv_eventGetResponse_Parms
	{
		FROSGetIMsRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetIMsSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetIMsRes, METADATA_PARAMS(0, nullptr) }; // 1737782916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetIMsSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::ROS2GetIMsSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::ROS2GetIMsSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetIMsSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSGetIMsRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetIMsSrv Function GetResponse ****************************************

// ********** Begin Class UROS2GetIMsSrv Function Init *********************************************
struct Z_Construct_UFunction_UROS2GetIMsSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetIMsSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetIMsSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetIMsSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetIMsSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetIMsSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetIMsSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2GetIMsSrv Function Init ***********************************************

// ********** Begin Class UROS2GetIMsSrv Function SetRequest ***************************************
struct Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics
{
	struct ROS2GetIMsSrv_eventSetRequest_Parms
	{
		FROSGetIMsReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetIMsSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetIMsReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1556408162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetIMsSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::ROS2GetIMsSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::ROS2GetIMsSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetIMsSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSGetIMsReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetIMsSrv Function SetRequest *****************************************

// ********** Begin Class UROS2GetIMsSrv Function SetResponse **************************************
struct Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics
{
	struct ROS2GetIMsSrv_eventSetResponse_Parms
	{
		FROSGetIMsRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetIMsSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetIMsRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1737782916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetIMsSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::ROS2GetIMsSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::ROS2GetIMsSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetIMsSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSGetIMsRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetIMsSrv Function SetResponse ****************************************

// ********** Begin Class UROS2GetIMsSrv ***********************************************************
void UROS2GetIMsSrv::StaticRegisterNativesUROS2GetIMsSrv()
{
	UClass* Class = UROS2GetIMsSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2GetIMsSrv::execFini },
		{ "GetRequest", &UROS2GetIMsSrv::execGetRequest },
		{ "GetResponse", &UROS2GetIMsSrv::execGetResponse },
		{ "Init", &UROS2GetIMsSrv::execInit },
		{ "SetRequest", &UROS2GetIMsSrv::execSetRequest },
		{ "SetResponse", &UROS2GetIMsSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GetIMsSrv;
UClass* UROS2GetIMsSrv::GetPrivateStaticClass()
{
	using TClass = UROS2GetIMsSrv;
	if (!Z_Registration_Info_UClass_UROS2GetIMsSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GetIMsSrv"),
			Z_Registration_Info_UClass_UROS2GetIMsSrv.InnerSingleton,
			StaticRegisterNativesUROS2GetIMsSrv,
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
	return Z_Registration_Info_UClass_UROS2GetIMsSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GetIMsSrv_NoRegister()
{
	return UROS2GetIMsSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GetIMsSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2GetIMs.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetIMs.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GetIMsSrv_Fini, "Fini" }, // 1511307085
		{ &Z_Construct_UFunction_UROS2GetIMsSrv_GetRequest, "GetRequest" }, // 1452175105
		{ &Z_Construct_UFunction_UROS2GetIMsSrv_GetResponse, "GetResponse" }, // 2985540121
		{ &Z_Construct_UFunction_UROS2GetIMsSrv_Init, "Init" }, // 892727630
		{ &Z_Construct_UFunction_UROS2GetIMsSrv_SetRequest, "SetRequest" }, // 3243364752
		{ &Z_Construct_UFunction_UROS2GetIMsSrv_SetResponse, "SetResponse" }, // 3184630456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GetIMsSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GetIMsSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetIMsSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GetIMsSrv_Statics::ClassParams = {
	&UROS2GetIMsSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetIMsSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GetIMsSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GetIMsSrv()
{
	if (!Z_Registration_Info_UClass_UROS2GetIMsSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GetIMsSrv.OuterSingleton, Z_Construct_UClass_UROS2GetIMsSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GetIMsSrv.OuterSingleton;
}
UROS2GetIMsSrv::UROS2GetIMsSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GetIMsSrv);
UROS2GetIMsSrv::~UROS2GetIMsSrv() {}
// ********** End Class UROS2GetIMsSrv *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGetIMsReq::StaticStruct, Z_Construct_UScriptStruct_FROSGetIMsReq_Statics::NewStructOps, TEXT("ROSGetIMsReq"), &Z_Registration_Info_UScriptStruct_FROSGetIMsReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetIMsReq), 1556408162U) },
		{ FROSGetIMsRes::StaticStruct, Z_Construct_UScriptStruct_FROSGetIMsRes_Statics::NewStructOps, TEXT("ROSGetIMsRes"), &Z_Registration_Info_UScriptStruct_FROSGetIMsRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetIMsRes), 1737782916U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GetIMsSrv, UROS2GetIMsSrv::StaticClass, TEXT("UROS2GetIMsSrv"), &Z_Registration_Info_UClass_UROS2GetIMsSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GetIMsSrv), 554665723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h__Script_rclUE_2209570225(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetIMs_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
