// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Srvs/ROS2ParamGet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ParamGet() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamGetSrv();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamGetSrv_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSParamGetReq();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSParamGetRes();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSParamGetReq ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSParamGetReq;
class UScriptStruct* FROSParamGetReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamGetReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSParamGetReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSParamGetReq, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSParamGetReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSParamGetReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSParamGetReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSParamGetReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSParamGetReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSParamGetReq_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSParamGetReq, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSParamGetReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSParamGetReq_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamGetReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSParamGetReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSParamGetReq",
	Z_Construct_UScriptStruct_FROSParamGetReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamGetReq_Statics::PropPointers),
	sizeof(FROSParamGetReq),
	alignof(FROSParamGetReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamGetReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSParamGetReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSParamGetReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamGetReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSParamGetReq.InnerSingleton, Z_Construct_UScriptStruct_FROSParamGetReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSParamGetReq.InnerSingleton;
}
// ********** End ScriptStruct FROSParamGetReq *****************************************************

// ********** Begin ScriptStruct FROSParamGetRes ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSParamGetRes;
class UScriptStruct* FROSParamGetRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamGetRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSParamGetRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSParamGetRes, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSParamGetRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSParamGetRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSParamGetRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExists_MetaData[] = {
		{ "Category", "ROSParamGetRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "ROSParamGetRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExists;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSParamGetRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSParamGetRes_Statics::NewProp_bExists_SetBit(void* Obj)
{
	((FROSParamGetRes*)Obj)->bExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSParamGetRes_Statics::NewProp_bExists = { "bExists", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSParamGetRes), &Z_Construct_UScriptStruct_FROSParamGetRes_Statics::NewProp_bExists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExists_MetaData), NewProp_bExists_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSParamGetRes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSParamGetRes, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSParamGetRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSParamGetRes_Statics::NewProp_bExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSParamGetRes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamGetRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSParamGetRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSParamGetRes",
	Z_Construct_UScriptStruct_FROSParamGetRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamGetRes_Statics::PropPointers),
	sizeof(FROSParamGetRes),
	alignof(FROSParamGetRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamGetRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSParamGetRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSParamGetRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamGetRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSParamGetRes.InnerSingleton, Z_Construct_UScriptStruct_FROSParamGetRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSParamGetRes.InnerSingleton;
}
// ********** End ScriptStruct FROSParamGetRes *****************************************************

// ********** Begin Class UROS2ParamGetSrv Function Fini *******************************************
struct Z_Construct_UFunction_UROS2ParamGetSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamGetSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamGetSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamGetSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ParamGetSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamGetSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamGetSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2ParamGetSrv Function Fini *********************************************

// ********** Begin Class UROS2ParamGetSrv Function GetRequest *************************************
struct Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics
{
	struct ROS2ParamGetSrv_eventGetRequest_Parms
	{
		FROSParamGetReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamGetSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSParamGetReq, METADATA_PARAMS(0, nullptr) }; // 3087218184
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamGetSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::ROS2ParamGetSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::ROS2ParamGetSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamGetSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSParamGetReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamGetSrv Function GetRequest ***************************************

// ********** Begin Class UROS2ParamGetSrv Function GetResponse ************************************
struct Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics
{
	struct ROS2ParamGetSrv_eventGetResponse_Parms
	{
		FROSParamGetRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamGetSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSParamGetRes, METADATA_PARAMS(0, nullptr) }; // 3237213828
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamGetSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::ROS2ParamGetSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::ROS2ParamGetSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamGetSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSParamGetRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamGetSrv Function GetResponse **************************************

// ********** Begin Class UROS2ParamGetSrv Function Init *******************************************
struct Z_Construct_UFunction_UROS2ParamGetSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamGetSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamGetSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamGetSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ParamGetSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamGetSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamGetSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2ParamGetSrv Function Init *********************************************

// ********** Begin Class UROS2ParamGetSrv Function SetRequest *************************************
struct Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics
{
	struct ROS2ParamGetSrv_eventSetRequest_Parms
	{
		FROSParamGetReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamGetSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSParamGetReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3087218184
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamGetSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::ROS2ParamGetSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::ROS2ParamGetSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamGetSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSParamGetReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamGetSrv Function SetRequest ***************************************

// ********** Begin Class UROS2ParamGetSrv Function SetResponse ************************************
struct Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics
{
	struct ROS2ParamGetSrv_eventSetResponse_Parms
	{
		FROSParamGetRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamGetSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSParamGetRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3237213828
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamGetSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::ROS2ParamGetSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::ROS2ParamGetSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamGetSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSParamGetRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamGetSrv Function SetResponse **************************************

// ********** Begin Class UROS2ParamGetSrv *********************************************************
void UROS2ParamGetSrv::StaticRegisterNativesUROS2ParamGetSrv()
{
	UClass* Class = UROS2ParamGetSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2ParamGetSrv::execFini },
		{ "GetRequest", &UROS2ParamGetSrv::execGetRequest },
		{ "GetResponse", &UROS2ParamGetSrv::execGetResponse },
		{ "Init", &UROS2ParamGetSrv::execInit },
		{ "SetRequest", &UROS2ParamGetSrv::execSetRequest },
		{ "SetResponse", &UROS2ParamGetSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ParamGetSrv;
UClass* UROS2ParamGetSrv::GetPrivateStaticClass()
{
	using TClass = UROS2ParamGetSrv;
	if (!Z_Registration_Info_UClass_UROS2ParamGetSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ParamGetSrv"),
			Z_Registration_Info_UClass_UROS2ParamGetSrv.InnerSingleton,
			StaticRegisterNativesUROS2ParamGetSrv,
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
	return Z_Registration_Info_UClass_UROS2ParamGetSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ParamGetSrv_NoRegister()
{
	return UROS2ParamGetSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ParamGetSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2ParamGet.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamGet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ParamGetSrv_Fini, "Fini" }, // 270109416
		{ &Z_Construct_UFunction_UROS2ParamGetSrv_GetRequest, "GetRequest" }, // 3274817013
		{ &Z_Construct_UFunction_UROS2ParamGetSrv_GetResponse, "GetResponse" }, // 4028465118
		{ &Z_Construct_UFunction_UROS2ParamGetSrv_Init, "Init" }, // 2595908766
		{ &Z_Construct_UFunction_UROS2ParamGetSrv_SetRequest, "SetRequest" }, // 323657713
		{ &Z_Construct_UFunction_UROS2ParamGetSrv_SetResponse, "SetResponse" }, // 2218636528
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ParamGetSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ParamGetSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ParamGetSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ParamGetSrv_Statics::ClassParams = {
	&UROS2ParamGetSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ParamGetSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ParamGetSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ParamGetSrv()
{
	if (!Z_Registration_Info_UClass_UROS2ParamGetSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ParamGetSrv.OuterSingleton, Z_Construct_UClass_UROS2ParamGetSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ParamGetSrv.OuterSingleton;
}
UROS2ParamGetSrv::UROS2ParamGetSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ParamGetSrv);
UROS2ParamGetSrv::~UROS2ParamGetSrv() {}
// ********** End Class UROS2ParamGetSrv ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSParamGetReq::StaticStruct, Z_Construct_UScriptStruct_FROSParamGetReq_Statics::NewStructOps, TEXT("ROSParamGetReq"), &Z_Registration_Info_UScriptStruct_FROSParamGetReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSParamGetReq), 3087218184U) },
		{ FROSParamGetRes::StaticStruct, Z_Construct_UScriptStruct_FROSParamGetRes_Statics::NewStructOps, TEXT("ROSParamGetRes"), &Z_Registration_Info_UScriptStruct_FROSParamGetRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSParamGetRes), 3237213828U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ParamGetSrv, UROS2ParamGetSrv::StaticClass, TEXT("UROS2ParamGetSrv"), &Z_Registration_Info_UClass_UROS2ParamGetSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ParamGetSrv), 2456075482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h__Script_UnrealRosFlight_1345001285(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamGet_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
