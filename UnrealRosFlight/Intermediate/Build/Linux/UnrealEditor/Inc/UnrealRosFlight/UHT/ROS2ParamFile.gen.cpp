// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Srvs/ROS2ParamFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ParamFile() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamFileSrv();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamFileSrv_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSParamFileReq();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSParamFileRes();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSParamFileReq **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSParamFileReq;
class UScriptStruct* FROSParamFileReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamFileReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSParamFileReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSParamFileReq, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSParamFileReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSParamFileReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSParamFileReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "Category", "ROSParamFileReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSParamFileReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSParamFileReq_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSParamFileReq, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSParamFileReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSParamFileReq_Statics::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamFileReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSParamFileReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSParamFileReq",
	Z_Construct_UScriptStruct_FROSParamFileReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamFileReq_Statics::PropPointers),
	sizeof(FROSParamFileReq),
	alignof(FROSParamFileReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamFileReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSParamFileReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSParamFileReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamFileReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSParamFileReq.InnerSingleton, Z_Construct_UScriptStruct_FROSParamFileReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSParamFileReq.InnerSingleton;
}
// ********** End ScriptStruct FROSParamFileReq ****************************************************

// ********** Begin ScriptStruct FROSParamFileRes **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSParamFileRes;
class UScriptStruct* FROSParamFileRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamFileRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSParamFileRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSParamFileRes, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSParamFileRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSParamFileRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSParamFileRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSParamFileRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSParamFileRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSParamFileRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSParamFileRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSParamFileRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSParamFileRes), &Z_Construct_UScriptStruct_FROSParamFileRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSParamFileRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSParamFileRes_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamFileRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSParamFileRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSParamFileRes",
	Z_Construct_UScriptStruct_FROSParamFileRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamFileRes_Statics::PropPointers),
	sizeof(FROSParamFileRes),
	alignof(FROSParamFileRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamFileRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSParamFileRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSParamFileRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamFileRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSParamFileRes.InnerSingleton, Z_Construct_UScriptStruct_FROSParamFileRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSParamFileRes.InnerSingleton;
}
// ********** End ScriptStruct FROSParamFileRes ****************************************************

// ********** Begin Class UROS2ParamFileSrv Function Fini ******************************************
struct Z_Construct_UFunction_UROS2ParamFileSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamFileSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamFileSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamFileSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ParamFileSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamFileSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamFileSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2ParamFileSrv Function Fini ********************************************

// ********** Begin Class UROS2ParamFileSrv Function GetRequest ************************************
struct Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics
{
	struct ROS2ParamFileSrv_eventGetRequest_Parms
	{
		FROSParamFileReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamFileSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSParamFileReq, METADATA_PARAMS(0, nullptr) }; // 648497296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamFileSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::ROS2ParamFileSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::ROS2ParamFileSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamFileSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSParamFileReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamFileSrv Function GetRequest **************************************

// ********** Begin Class UROS2ParamFileSrv Function GetResponse ***********************************
struct Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics
{
	struct ROS2ParamFileSrv_eventGetResponse_Parms
	{
		FROSParamFileRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamFileSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSParamFileRes, METADATA_PARAMS(0, nullptr) }; // 3214926310
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamFileSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::ROS2ParamFileSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::ROS2ParamFileSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamFileSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSParamFileRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamFileSrv Function GetResponse *************************************

// ********** Begin Class UROS2ParamFileSrv Function Init ******************************************
struct Z_Construct_UFunction_UROS2ParamFileSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamFileSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamFileSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamFileSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ParamFileSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamFileSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamFileSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2ParamFileSrv Function Init ********************************************

// ********** Begin Class UROS2ParamFileSrv Function SetRequest ************************************
struct Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics
{
	struct ROS2ParamFileSrv_eventSetRequest_Parms
	{
		FROSParamFileReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamFileSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSParamFileReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 648497296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamFileSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::ROS2ParamFileSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::ROS2ParamFileSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamFileSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSParamFileReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamFileSrv Function SetRequest **************************************

// ********** Begin Class UROS2ParamFileSrv Function SetResponse ***********************************
struct Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics
{
	struct ROS2ParamFileSrv_eventSetResponse_Parms
	{
		FROSParamFileRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamFileSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSParamFileRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3214926310
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamFileSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::ROS2ParamFileSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::ROS2ParamFileSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamFileSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSParamFileRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamFileSrv Function SetResponse *************************************

// ********** Begin Class UROS2ParamFileSrv ********************************************************
void UROS2ParamFileSrv::StaticRegisterNativesUROS2ParamFileSrv()
{
	UClass* Class = UROS2ParamFileSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2ParamFileSrv::execFini },
		{ "GetRequest", &UROS2ParamFileSrv::execGetRequest },
		{ "GetResponse", &UROS2ParamFileSrv::execGetResponse },
		{ "Init", &UROS2ParamFileSrv::execInit },
		{ "SetRequest", &UROS2ParamFileSrv::execSetRequest },
		{ "SetResponse", &UROS2ParamFileSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ParamFileSrv;
UClass* UROS2ParamFileSrv::GetPrivateStaticClass()
{
	using TClass = UROS2ParamFileSrv;
	if (!Z_Registration_Info_UClass_UROS2ParamFileSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ParamFileSrv"),
			Z_Registration_Info_UClass_UROS2ParamFileSrv.InnerSingleton,
			StaticRegisterNativesUROS2ParamFileSrv,
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
	return Z_Registration_Info_UClass_UROS2ParamFileSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ParamFileSrv_NoRegister()
{
	return UROS2ParamFileSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ParamFileSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2ParamFile.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamFile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ParamFileSrv_Fini, "Fini" }, // 3893364378
		{ &Z_Construct_UFunction_UROS2ParamFileSrv_GetRequest, "GetRequest" }, // 3971742520
		{ &Z_Construct_UFunction_UROS2ParamFileSrv_GetResponse, "GetResponse" }, // 171854293
		{ &Z_Construct_UFunction_UROS2ParamFileSrv_Init, "Init" }, // 2950362280
		{ &Z_Construct_UFunction_UROS2ParamFileSrv_SetRequest, "SetRequest" }, // 1752696872
		{ &Z_Construct_UFunction_UROS2ParamFileSrv_SetResponse, "SetResponse" }, // 513217077
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ParamFileSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ParamFileSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ParamFileSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ParamFileSrv_Statics::ClassParams = {
	&UROS2ParamFileSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ParamFileSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ParamFileSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ParamFileSrv()
{
	if (!Z_Registration_Info_UClass_UROS2ParamFileSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ParamFileSrv.OuterSingleton, Z_Construct_UClass_UROS2ParamFileSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ParamFileSrv.OuterSingleton;
}
UROS2ParamFileSrv::UROS2ParamFileSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ParamFileSrv);
UROS2ParamFileSrv::~UROS2ParamFileSrv() {}
// ********** End Class UROS2ParamFileSrv **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSParamFileReq::StaticStruct, Z_Construct_UScriptStruct_FROSParamFileReq_Statics::NewStructOps, TEXT("ROSParamFileReq"), &Z_Registration_Info_UScriptStruct_FROSParamFileReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSParamFileReq), 648497296U) },
		{ FROSParamFileRes::StaticStruct, Z_Construct_UScriptStruct_FROSParamFileRes_Statics::NewStructOps, TEXT("ROSParamFileRes"), &Z_Registration_Info_UScriptStruct_FROSParamFileRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSParamFileRes), 3214926310U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ParamFileSrv, UROS2ParamFileSrv::StaticClass, TEXT("UROS2ParamFileSrv"), &Z_Registration_Info_UClass_UROS2ParamFileSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ParamFileSrv), 706505686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h__Script_UnrealRosFlight_3392827926(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamFile_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
