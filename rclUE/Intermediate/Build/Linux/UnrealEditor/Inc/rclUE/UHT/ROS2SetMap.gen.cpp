// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SetMap.h"
#include "rclUE/Public/Msgs/ROS2OccupancyGrid.h"
#include "rclUE/Public/Msgs/ROS2PoseCovStamped.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SetMap() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetMapSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetMapSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSOccupancyGrid();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPoseCovStamped();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetMapReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetMapRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSetMapReq *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetMapReq;
class UScriptStruct* FROSSetMapReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetMapReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetMapReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetMapReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetMapReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetMapReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetMapReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "Category", "ROSSetMapReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPose_MetaData[] = {
		{ "Category", "ROSSetMapReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetMapReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSetMapReq_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetMapReq, Map), Z_Construct_UScriptStruct_FROSOccupancyGrid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) }; // 3165919373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSetMapReq_Statics::NewProp_InitialPose = { "InitialPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetMapReq, InitialPose), Z_Construct_UScriptStruct_FROSPoseCovStamped, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPose_MetaData), NewProp_InitialPose_MetaData) }; // 1210142651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetMapReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetMapReq_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetMapReq_Statics::NewProp_InitialPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetMapReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetMapReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetMapReq",
	Z_Construct_UScriptStruct_FROSSetMapReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetMapReq_Statics::PropPointers),
	sizeof(FROSSetMapReq),
	alignof(FROSSetMapReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetMapReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetMapReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetMapReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetMapReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetMapReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSetMapReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetMapReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSetMapReq *******************************************************

// ********** Begin ScriptStruct FROSSetMapRes *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetMapRes;
class UScriptStruct* FROSSetMapRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetMapRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetMapRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetMapRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetMapRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetMapRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetMapRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSetMapRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetMapRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSetMapRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSetMapRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSetMapRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSetMapRes), &Z_Construct_UScriptStruct_FROSSetMapRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetMapRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetMapRes_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetMapRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetMapRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetMapRes",
	Z_Construct_UScriptStruct_FROSSetMapRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetMapRes_Statics::PropPointers),
	sizeof(FROSSetMapRes),
	alignof(FROSSetMapRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetMapRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetMapRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetMapRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetMapRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetMapRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSetMapRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetMapRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSetMapRes *******************************************************

// ********** Begin Class UROS2SetMapSrv Function Fini *********************************************
struct Z_Construct_UFunction_UROS2SetMapSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetMapSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetMapSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetMapSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetMapSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetMapSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetMapSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SetMapSrv Function Fini ***********************************************

// ********** Begin Class UROS2SetMapSrv Function GetRequest ***************************************
struct Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics
{
	struct ROS2SetMapSrv_eventGetRequest_Parms
	{
		FROSSetMapReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetMapSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetMapReq, METADATA_PARAMS(0, nullptr) }; // 1780399128
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetMapSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::ROS2SetMapSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::ROS2SetMapSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetMapSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetMapSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetMapSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSetMapReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetMapSrv Function GetRequest *****************************************

// ********** Begin Class UROS2SetMapSrv Function GetResponse **************************************
struct Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics
{
	struct ROS2SetMapSrv_eventGetResponse_Parms
	{
		FROSSetMapRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetMapSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetMapRes, METADATA_PARAMS(0, nullptr) }; // 3050496057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetMapSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::ROS2SetMapSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::ROS2SetMapSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetMapSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetMapSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetMapSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSetMapRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetMapSrv Function GetResponse ****************************************

// ********** Begin Class UROS2SetMapSrv Function Init *********************************************
struct Z_Construct_UFunction_UROS2SetMapSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetMapSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetMapSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetMapSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetMapSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetMapSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetMapSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SetMapSrv Function Init ***********************************************

// ********** Begin Class UROS2SetMapSrv Function SetRequest ***************************************
struct Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics
{
	struct ROS2SetMapSrv_eventSetRequest_Parms
	{
		FROSSetMapReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetMapSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetMapReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1780399128
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetMapSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::ROS2SetMapSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::ROS2SetMapSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetMapSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetMapSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetMapSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSetMapReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetMapSrv Function SetRequest *****************************************

// ********** Begin Class UROS2SetMapSrv Function SetResponse **************************************
struct Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics
{
	struct ROS2SetMapSrv_eventSetResponse_Parms
	{
		FROSSetMapRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetMapSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetMapRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3050496057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetMapSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::ROS2SetMapSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::ROS2SetMapSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetMapSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetMapSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetMapSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSetMapRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetMapSrv Function SetResponse ****************************************

// ********** Begin Class UROS2SetMapSrv ***********************************************************
void UROS2SetMapSrv::StaticRegisterNativesUROS2SetMapSrv()
{
	UClass* Class = UROS2SetMapSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SetMapSrv::execFini },
		{ "GetRequest", &UROS2SetMapSrv::execGetRequest },
		{ "GetResponse", &UROS2SetMapSrv::execGetResponse },
		{ "Init", &UROS2SetMapSrv::execInit },
		{ "SetRequest", &UROS2SetMapSrv::execSetRequest },
		{ "SetResponse", &UROS2SetMapSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SetMapSrv;
UClass* UROS2SetMapSrv::GetPrivateStaticClass()
{
	using TClass = UROS2SetMapSrv;
	if (!Z_Registration_Info_UClass_UROS2SetMapSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SetMapSrv"),
			Z_Registration_Info_UClass_UROS2SetMapSrv.InnerSingleton,
			StaticRegisterNativesUROS2SetMapSrv,
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
	return Z_Registration_Info_UClass_UROS2SetMapSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SetMapSrv_NoRegister()
{
	return UROS2SetMapSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SetMapSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SetMap.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetMap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SetMapSrv_Fini, "Fini" }, // 1488225216
		{ &Z_Construct_UFunction_UROS2SetMapSrv_GetRequest, "GetRequest" }, // 3599137185
		{ &Z_Construct_UFunction_UROS2SetMapSrv_GetResponse, "GetResponse" }, // 2123205858
		{ &Z_Construct_UFunction_UROS2SetMapSrv_Init, "Init" }, // 1140988501
		{ &Z_Construct_UFunction_UROS2SetMapSrv_SetRequest, "SetRequest" }, // 1553076611
		{ &Z_Construct_UFunction_UROS2SetMapSrv_SetResponse, "SetResponse" }, // 117536776
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SetMapSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SetMapSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetMapSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SetMapSrv_Statics::ClassParams = {
	&UROS2SetMapSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetMapSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SetMapSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SetMapSrv()
{
	if (!Z_Registration_Info_UClass_UROS2SetMapSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SetMapSrv.OuterSingleton, Z_Construct_UClass_UROS2SetMapSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SetMapSrv.OuterSingleton;
}
UROS2SetMapSrv::UROS2SetMapSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SetMapSrv);
UROS2SetMapSrv::~UROS2SetMapSrv() {}
// ********** End Class UROS2SetMapSrv *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSetMapReq::StaticStruct, Z_Construct_UScriptStruct_FROSSetMapReq_Statics::NewStructOps, TEXT("ROSSetMapReq"), &Z_Registration_Info_UScriptStruct_FROSSetMapReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetMapReq), 1780399128U) },
		{ FROSSetMapRes::StaticStruct, Z_Construct_UScriptStruct_FROSSetMapRes_Statics::NewStructOps, TEXT("ROSSetMapRes"), &Z_Registration_Info_UScriptStruct_FROSSetMapRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetMapRes), 3050496057U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SetMapSrv, UROS2SetMapSrv::StaticClass, TEXT("UROS2SetMapSrv"), &Z_Registration_Info_UClass_UROS2SetMapSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SetMapSrv), 1608490531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h__Script_rclUE_2904353300(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetMap_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
