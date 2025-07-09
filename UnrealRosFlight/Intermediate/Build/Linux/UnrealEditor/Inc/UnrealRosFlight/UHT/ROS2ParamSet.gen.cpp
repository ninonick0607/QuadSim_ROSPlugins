// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Srvs/ROS2ParamSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2ParamSet() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamSetSrv();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2ParamSetSrv_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSParamSetReq();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSParamSetRes();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSParamSetReq ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSParamSetReq;
class UScriptStruct* FROSParamSetReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamSetReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSParamSetReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSParamSetReq, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSParamSetReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSParamSetReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSParamSetReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSParamSetReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "ROSParamSetReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSParamSetReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSParamSetReq_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSParamSetReq, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FROSParamSetReq_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSParamSetReq, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSParamSetReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSParamSetReq_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSParamSetReq_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamSetReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSParamSetReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSParamSetReq",
	Z_Construct_UScriptStruct_FROSParamSetReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamSetReq_Statics::PropPointers),
	sizeof(FROSParamSetReq),
	alignof(FROSParamSetReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamSetReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSParamSetReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSParamSetReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamSetReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSParamSetReq.InnerSingleton, Z_Construct_UScriptStruct_FROSParamSetReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSParamSetReq.InnerSingleton;
}
// ********** End ScriptStruct FROSParamSetReq *****************************************************

// ********** Begin ScriptStruct FROSParamSetRes ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSParamSetRes;
class UScriptStruct* FROSParamSetRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamSetRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSParamSetRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSParamSetRes, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSParamSetRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSParamSetRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSParamSetRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExists_MetaData[] = {
		{ "Category", "ROSParamSetRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExists;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSParamSetRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSParamSetRes_Statics::NewProp_bExists_SetBit(void* Obj)
{
	((FROSParamSetRes*)Obj)->bExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSParamSetRes_Statics::NewProp_bExists = { "bExists", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSParamSetRes), &Z_Construct_UScriptStruct_FROSParamSetRes_Statics::NewProp_bExists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExists_MetaData), NewProp_bExists_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSParamSetRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSParamSetRes_Statics::NewProp_bExists,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamSetRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSParamSetRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSParamSetRes",
	Z_Construct_UScriptStruct_FROSParamSetRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamSetRes_Statics::PropPointers),
	sizeof(FROSParamSetRes),
	alignof(FROSParamSetRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSParamSetRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSParamSetRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSParamSetRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSParamSetRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSParamSetRes.InnerSingleton, Z_Construct_UScriptStruct_FROSParamSetRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSParamSetRes.InnerSingleton;
}
// ********** End ScriptStruct FROSParamSetRes *****************************************************

// ********** Begin Class UROS2ParamSetSrv Function Fini *******************************************
struct Z_Construct_UFunction_UROS2ParamSetSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamSetSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamSetSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamSetSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ParamSetSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamSetSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamSetSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2ParamSetSrv Function Fini *********************************************

// ********** Begin Class UROS2ParamSetSrv Function GetRequest *************************************
struct Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics
{
	struct ROS2ParamSetSrv_eventGetRequest_Parms
	{
		FROSParamSetReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamSetSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSParamSetReq, METADATA_PARAMS(0, nullptr) }; // 579075273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamSetSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::ROS2ParamSetSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::ROS2ParamSetSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamSetSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSParamSetReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamSetSrv Function GetRequest ***************************************

// ********** Begin Class UROS2ParamSetSrv Function GetResponse ************************************
struct Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics
{
	struct ROS2ParamSetSrv_eventGetResponse_Parms
	{
		FROSParamSetRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamSetSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSParamSetRes, METADATA_PARAMS(0, nullptr) }; // 1367344214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamSetSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::ROS2ParamSetSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::ROS2ParamSetSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamSetSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSParamSetRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamSetSrv Function GetResponse **************************************

// ********** Begin Class UROS2ParamSetSrv Function Init *******************************************
struct Z_Construct_UFunction_UROS2ParamSetSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamSetSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamSetSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamSetSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2ParamSetSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamSetSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamSetSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2ParamSetSrv Function Init *********************************************

// ********** Begin Class UROS2ParamSetSrv Function SetRequest *************************************
struct Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics
{
	struct ROS2ParamSetSrv_eventSetRequest_Parms
	{
		FROSParamSetReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamSetSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSParamSetReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 579075273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamSetSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::ROS2ParamSetSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::ROS2ParamSetSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamSetSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSParamSetReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamSetSrv Function SetRequest ***************************************

// ********** Begin Class UROS2ParamSetSrv Function SetResponse ************************************
struct Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics
{
	struct ROS2ParamSetSrv_eventSetResponse_Parms
	{
		FROSParamSetRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2ParamSetSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSParamSetRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1367344214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2ParamSetSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::ROS2ParamSetSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::ROS2ParamSetSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2ParamSetSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSParamSetRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2ParamSetSrv Function SetResponse **************************************

// ********** Begin Class UROS2ParamSetSrv *********************************************************
void UROS2ParamSetSrv::StaticRegisterNativesUROS2ParamSetSrv()
{
	UClass* Class = UROS2ParamSetSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2ParamSetSrv::execFini },
		{ "GetRequest", &UROS2ParamSetSrv::execGetRequest },
		{ "GetResponse", &UROS2ParamSetSrv::execGetResponse },
		{ "Init", &UROS2ParamSetSrv::execInit },
		{ "SetRequest", &UROS2ParamSetSrv::execSetRequest },
		{ "SetResponse", &UROS2ParamSetSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2ParamSetSrv;
UClass* UROS2ParamSetSrv::GetPrivateStaticClass()
{
	using TClass = UROS2ParamSetSrv;
	if (!Z_Registration_Info_UClass_UROS2ParamSetSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2ParamSetSrv"),
			Z_Registration_Info_UClass_UROS2ParamSetSrv.InnerSingleton,
			StaticRegisterNativesUROS2ParamSetSrv,
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
	return Z_Registration_Info_UClass_UROS2ParamSetSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2ParamSetSrv_NoRegister()
{
	return UROS2ParamSetSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2ParamSetSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2ParamSet.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2ParamSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2ParamSetSrv_Fini, "Fini" }, // 1036291366
		{ &Z_Construct_UFunction_UROS2ParamSetSrv_GetRequest, "GetRequest" }, // 3763825002
		{ &Z_Construct_UFunction_UROS2ParamSetSrv_GetResponse, "GetResponse" }, // 3739261302
		{ &Z_Construct_UFunction_UROS2ParamSetSrv_Init, "Init" }, // 3603105815
		{ &Z_Construct_UFunction_UROS2ParamSetSrv_SetRequest, "SetRequest" }, // 913684182
		{ &Z_Construct_UFunction_UROS2ParamSetSrv_SetResponse, "SetResponse" }, // 1293632075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2ParamSetSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2ParamSetSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ParamSetSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2ParamSetSrv_Statics::ClassParams = {
	&UROS2ParamSetSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2ParamSetSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2ParamSetSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2ParamSetSrv()
{
	if (!Z_Registration_Info_UClass_UROS2ParamSetSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2ParamSetSrv.OuterSingleton, Z_Construct_UClass_UROS2ParamSetSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2ParamSetSrv.OuterSingleton;
}
UROS2ParamSetSrv::UROS2ParamSetSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2ParamSetSrv);
UROS2ParamSetSrv::~UROS2ParamSetSrv() {}
// ********** End Class UROS2ParamSetSrv ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSParamSetReq::StaticStruct, Z_Construct_UScriptStruct_FROSParamSetReq_Statics::NewStructOps, TEXT("ROSParamSetReq"), &Z_Registration_Info_UScriptStruct_FROSParamSetReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSParamSetReq), 579075273U) },
		{ FROSParamSetRes::StaticStruct, Z_Construct_UScriptStruct_FROSParamSetRes_Statics::NewStructOps, TEXT("ROSParamSetRes"), &Z_Registration_Info_UScriptStruct_FROSParamSetRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSParamSetRes), 1367344214U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2ParamSetSrv, UROS2ParamSetSrv::StaticClass, TEXT("UROS2ParamSetSrv"), &Z_Registration_Info_UClass_UROS2ParamSetSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2ParamSetSrv), 422131413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h__Script_UnrealRosFlight_3776432550(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2ParamSet_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
