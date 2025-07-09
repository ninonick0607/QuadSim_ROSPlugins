// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2UpdateFilename.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2UpdateFilename() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2UpdateFilenameSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2UpdateFilenameSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSUpdateFilenameReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSUpdateFilenameRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSUpdateFilenameReq *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSUpdateFilenameReq;
class UScriptStruct* FROSUpdateFilenameReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUpdateFilenameReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSUpdateFilenameReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSUpdateFilenameReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSUpdateFilenameReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSUpdateFilenameReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "Category", "ROSUpdateFilenameReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSUpdateFilenameReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSUpdateFilenameReq, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSUpdateFilenameReq",
	Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::PropPointers),
	sizeof(FROSUpdateFilenameReq),
	alignof(FROSUpdateFilenameReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSUpdateFilenameReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUpdateFilenameReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSUpdateFilenameReq.InnerSingleton, Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSUpdateFilenameReq.InnerSingleton;
}
// ********** End ScriptStruct FROSUpdateFilenameReq ***********************************************

// ********** Begin ScriptStruct FROSUpdateFilenameRes *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSUpdateFilenameRes;
class UScriptStruct* FROSUpdateFilenameRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUpdateFilenameRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSUpdateFilenameRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSUpdateFilenameRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSUpdateFilenameRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSUpdateFilenameRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSUpdateFilenameRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSUpdateFilenameRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSUpdateFilenameRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSUpdateFilenameRes), &Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSUpdateFilenameRes",
	Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::PropPointers),
	sizeof(FROSUpdateFilenameRes),
	alignof(FROSUpdateFilenameRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSUpdateFilenameRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSUpdateFilenameRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSUpdateFilenameRes.InnerSingleton, Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSUpdateFilenameRes.InnerSingleton;
}
// ********** End ScriptStruct FROSUpdateFilenameRes ***********************************************

// ********** Begin Class UROS2UpdateFilenameSrv Function Fini *************************************
struct Z_Construct_UFunction_UROS2UpdateFilenameSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UpdateFilenameSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UpdateFilenameSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2UpdateFilenameSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UpdateFilenameSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UpdateFilenameSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2UpdateFilenameSrv Function Fini ***************************************

// ********** Begin Class UROS2UpdateFilenameSrv Function GetRequest *******************************
struct Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics
{
	struct ROS2UpdateFilenameSrv_eventGetRequest_Parms
	{
		FROSUpdateFilenameReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UpdateFilenameSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSUpdateFilenameReq, METADATA_PARAMS(0, nullptr) }; // 3562374291
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UpdateFilenameSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::ROS2UpdateFilenameSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::ROS2UpdateFilenameSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UpdateFilenameSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSUpdateFilenameReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2UpdateFilenameSrv Function GetRequest *********************************

// ********** Begin Class UROS2UpdateFilenameSrv Function GetResponse ******************************
struct Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics
{
	struct ROS2UpdateFilenameSrv_eventGetResponse_Parms
	{
		FROSUpdateFilenameRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UpdateFilenameSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSUpdateFilenameRes, METADATA_PARAMS(0, nullptr) }; // 845696992
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UpdateFilenameSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::ROS2UpdateFilenameSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::ROS2UpdateFilenameSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UpdateFilenameSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSUpdateFilenameRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2UpdateFilenameSrv Function GetResponse ********************************

// ********** Begin Class UROS2UpdateFilenameSrv Function Init *************************************
struct Z_Construct_UFunction_UROS2UpdateFilenameSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UpdateFilenameSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UpdateFilenameSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2UpdateFilenameSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UpdateFilenameSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UpdateFilenameSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2UpdateFilenameSrv Function Init ***************************************

// ********** Begin Class UROS2UpdateFilenameSrv Function SetRequest *******************************
struct Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics
{
	struct ROS2UpdateFilenameSrv_eventSetRequest_Parms
	{
		FROSUpdateFilenameReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UpdateFilenameSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSUpdateFilenameReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3562374291
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UpdateFilenameSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::ROS2UpdateFilenameSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::ROS2UpdateFilenameSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UpdateFilenameSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSUpdateFilenameReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2UpdateFilenameSrv Function SetRequest *********************************

// ********** Begin Class UROS2UpdateFilenameSrv Function SetResponse ******************************
struct Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics
{
	struct ROS2UpdateFilenameSrv_eventSetResponse_Parms
	{
		FROSUpdateFilenameRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2UpdateFilenameSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSUpdateFilenameRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 845696992
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2UpdateFilenameSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::ROS2UpdateFilenameSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::ROS2UpdateFilenameSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2UpdateFilenameSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSUpdateFilenameRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2UpdateFilenameSrv Function SetResponse ********************************

// ********** Begin Class UROS2UpdateFilenameSrv ***************************************************
void UROS2UpdateFilenameSrv::StaticRegisterNativesUROS2UpdateFilenameSrv()
{
	UClass* Class = UROS2UpdateFilenameSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2UpdateFilenameSrv::execFini },
		{ "GetRequest", &UROS2UpdateFilenameSrv::execGetRequest },
		{ "GetResponse", &UROS2UpdateFilenameSrv::execGetResponse },
		{ "Init", &UROS2UpdateFilenameSrv::execInit },
		{ "SetRequest", &UROS2UpdateFilenameSrv::execSetRequest },
		{ "SetResponse", &UROS2UpdateFilenameSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2UpdateFilenameSrv;
UClass* UROS2UpdateFilenameSrv::GetPrivateStaticClass()
{
	using TClass = UROS2UpdateFilenameSrv;
	if (!Z_Registration_Info_UClass_UROS2UpdateFilenameSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2UpdateFilenameSrv"),
			Z_Registration_Info_UClass_UROS2UpdateFilenameSrv.InnerSingleton,
			StaticRegisterNativesUROS2UpdateFilenameSrv,
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
	return Z_Registration_Info_UClass_UROS2UpdateFilenameSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2UpdateFilenameSrv_NoRegister()
{
	return UROS2UpdateFilenameSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2UpdateFilenameSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2UpdateFilename.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2UpdateFilename.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2UpdateFilenameSrv_Fini, "Fini" }, // 1016555836
		{ &Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetRequest, "GetRequest" }, // 2884311589
		{ &Z_Construct_UFunction_UROS2UpdateFilenameSrv_GetResponse, "GetResponse" }, // 3236430150
		{ &Z_Construct_UFunction_UROS2UpdateFilenameSrv_Init, "Init" }, // 1850172217
		{ &Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetRequest, "SetRequest" }, // 2174577621
		{ &Z_Construct_UFunction_UROS2UpdateFilenameSrv_SetResponse, "SetResponse" }, // 15672084
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2UpdateFilenameSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2UpdateFilenameSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UpdateFilenameSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2UpdateFilenameSrv_Statics::ClassParams = {
	&UROS2UpdateFilenameSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2UpdateFilenameSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2UpdateFilenameSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2UpdateFilenameSrv()
{
	if (!Z_Registration_Info_UClass_UROS2UpdateFilenameSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2UpdateFilenameSrv.OuterSingleton, Z_Construct_UClass_UROS2UpdateFilenameSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2UpdateFilenameSrv.OuterSingleton;
}
UROS2UpdateFilenameSrv::UROS2UpdateFilenameSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2UpdateFilenameSrv);
UROS2UpdateFilenameSrv::~UROS2UpdateFilenameSrv() {}
// ********** End Class UROS2UpdateFilenameSrv *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSUpdateFilenameReq::StaticStruct, Z_Construct_UScriptStruct_FROSUpdateFilenameReq_Statics::NewStructOps, TEXT("ROSUpdateFilenameReq"), &Z_Registration_Info_UScriptStruct_FROSUpdateFilenameReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSUpdateFilenameReq), 3562374291U) },
		{ FROSUpdateFilenameRes::StaticStruct, Z_Construct_UScriptStruct_FROSUpdateFilenameRes_Statics::NewStructOps, TEXT("ROSUpdateFilenameRes"), &Z_Registration_Info_UScriptStruct_FROSUpdateFilenameRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSUpdateFilenameRes), 845696992U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2UpdateFilenameSrv, UROS2UpdateFilenameSrv::StaticClass, TEXT("UROS2UpdateFilenameSrv"), &Z_Registration_Info_UClass_UROS2UpdateFilenameSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2UpdateFilenameSrv), 1233206487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h__Script_rclUE_2843090112(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2UpdateFilename_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
