// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2GetMap.h"
#include "rclUE/Public/Msgs/ROS2OccupancyGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GetMap() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetMapSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetMapSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetMapReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetMapRes();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOccupancyGrid();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGetMapReq *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetMapReq;
class UScriptStruct* FROSGetMapReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetMapReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetMapReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetMapReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetMapReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetMapReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetMapReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetMapReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetMapReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetMapReq",
	nullptr,
	0,
	sizeof(FROSGetMapReq),
	alignof(FROSGetMapReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetMapReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetMapReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetMapReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetMapReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetMapReq.InnerSingleton, Z_Construct_UScriptStruct_FROSGetMapReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetMapReq.InnerSingleton;
}
// ********** End ScriptStruct FROSGetMapReq *******************************************************

// ********** Begin ScriptStruct FROSGetMapRes *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetMapRes;
class UScriptStruct* FROSGetMapRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetMapRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetMapRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetMapRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetMapRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetMapRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetMapRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "Category", "ROSGetMapRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetMapRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGetMapRes_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetMapRes, Map), Z_Construct_UScriptStruct_FROSOccupancyGrid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) }; // 3165919373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetMapRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetMapRes_Statics::NewProp_Map,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetMapRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetMapRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetMapRes",
	Z_Construct_UScriptStruct_FROSGetMapRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetMapRes_Statics::PropPointers),
	sizeof(FROSGetMapRes),
	alignof(FROSGetMapRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetMapRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetMapRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetMapRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetMapRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetMapRes.InnerSingleton, Z_Construct_UScriptStruct_FROSGetMapRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetMapRes.InnerSingleton;
}
// ********** End ScriptStruct FROSGetMapRes *******************************************************

// ********** Begin Class UROS2GetMapSrv Function Fini *********************************************
struct Z_Construct_UFunction_UROS2GetMapSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetMapSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetMapSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetMapSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetMapSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetMapSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetMapSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2GetMapSrv Function Fini ***********************************************

// ********** Begin Class UROS2GetMapSrv Function GetRequest ***************************************
struct Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics
{
	struct ROS2GetMapSrv_eventGetRequest_Parms
	{
		FROSGetMapReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetMapSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetMapReq, METADATA_PARAMS(0, nullptr) }; // 3561687668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetMapSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::ROS2GetMapSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::ROS2GetMapSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetMapSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetMapSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetMapSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSGetMapReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetMapSrv Function GetRequest *****************************************

// ********** Begin Class UROS2GetMapSrv Function GetResponse **************************************
struct Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics
{
	struct ROS2GetMapSrv_eventGetResponse_Parms
	{
		FROSGetMapRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetMapSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetMapRes, METADATA_PARAMS(0, nullptr) }; // 3075617535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetMapSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::ROS2GetMapSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::ROS2GetMapSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetMapSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetMapSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetMapSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSGetMapRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetMapSrv Function GetResponse ****************************************

// ********** Begin Class UROS2GetMapSrv Function Init *********************************************
struct Z_Construct_UFunction_UROS2GetMapSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetMapSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetMapSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetMapSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetMapSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetMapSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetMapSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2GetMapSrv Function Init ***********************************************

// ********** Begin Class UROS2GetMapSrv Function SetRequest ***************************************
struct Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics
{
	struct ROS2GetMapSrv_eventSetRequest_Parms
	{
		FROSGetMapReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetMapSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetMapReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3561687668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetMapSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::ROS2GetMapSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::ROS2GetMapSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetMapSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetMapSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetMapSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSGetMapReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetMapSrv Function SetRequest *****************************************

// ********** Begin Class UROS2GetMapSrv Function SetResponse **************************************
struct Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics
{
	struct ROS2GetMapSrv_eventSetResponse_Parms
	{
		FROSGetMapRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetMapSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetMapRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3075617535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetMapSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::ROS2GetMapSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::ROS2GetMapSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetMapSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetMapSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetMapSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSGetMapRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetMapSrv Function SetResponse ****************************************

// ********** Begin Class UROS2GetMapSrv ***********************************************************
void UROS2GetMapSrv::StaticRegisterNativesUROS2GetMapSrv()
{
	UClass* Class = UROS2GetMapSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2GetMapSrv::execFini },
		{ "GetRequest", &UROS2GetMapSrv::execGetRequest },
		{ "GetResponse", &UROS2GetMapSrv::execGetResponse },
		{ "Init", &UROS2GetMapSrv::execInit },
		{ "SetRequest", &UROS2GetMapSrv::execSetRequest },
		{ "SetResponse", &UROS2GetMapSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GetMapSrv;
UClass* UROS2GetMapSrv::GetPrivateStaticClass()
{
	using TClass = UROS2GetMapSrv;
	if (!Z_Registration_Info_UClass_UROS2GetMapSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GetMapSrv"),
			Z_Registration_Info_UClass_UROS2GetMapSrv.InnerSingleton,
			StaticRegisterNativesUROS2GetMapSrv,
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
	return Z_Registration_Info_UClass_UROS2GetMapSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GetMapSrv_NoRegister()
{
	return UROS2GetMapSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GetMapSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2GetMap.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetMap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GetMapSrv_Fini, "Fini" }, // 2122738375
		{ &Z_Construct_UFunction_UROS2GetMapSrv_GetRequest, "GetRequest" }, // 4064278413
		{ &Z_Construct_UFunction_UROS2GetMapSrv_GetResponse, "GetResponse" }, // 4278287264
		{ &Z_Construct_UFunction_UROS2GetMapSrv_Init, "Init" }, // 3548593062
		{ &Z_Construct_UFunction_UROS2GetMapSrv_SetRequest, "SetRequest" }, // 592463100
		{ &Z_Construct_UFunction_UROS2GetMapSrv_SetResponse, "SetResponse" }, // 1192003088
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GetMapSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GetMapSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetMapSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GetMapSrv_Statics::ClassParams = {
	&UROS2GetMapSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetMapSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GetMapSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GetMapSrv()
{
	if (!Z_Registration_Info_UClass_UROS2GetMapSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GetMapSrv.OuterSingleton, Z_Construct_UClass_UROS2GetMapSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GetMapSrv.OuterSingleton;
}
UROS2GetMapSrv::UROS2GetMapSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GetMapSrv);
UROS2GetMapSrv::~UROS2GetMapSrv() {}
// ********** End Class UROS2GetMapSrv *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGetMapReq::StaticStruct, Z_Construct_UScriptStruct_FROSGetMapReq_Statics::NewStructOps, TEXT("ROSGetMapReq"), &Z_Registration_Info_UScriptStruct_FROSGetMapReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetMapReq), 3561687668U) },
		{ FROSGetMapRes::StaticStruct, Z_Construct_UScriptStruct_FROSGetMapRes_Statics::NewStructOps, TEXT("ROSGetMapRes"), &Z_Registration_Info_UScriptStruct_FROSGetMapRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetMapRes), 3075617535U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GetMapSrv, UROS2GetMapSrv::StaticClass, TEXT("UROS2GetMapSrv"), &Z_Registration_Info_UClass_UROS2GetMapSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GetMapSrv), 1667330249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h__Script_rclUE_1086704009(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetMap_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
