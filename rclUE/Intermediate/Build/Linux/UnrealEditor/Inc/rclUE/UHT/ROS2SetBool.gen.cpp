// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SetBool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SetBool() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetBoolSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetBoolSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetBoolReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetBoolRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSetBoolReq ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetBoolReq;
class UScriptStruct* FROSSetBoolReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetBoolReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetBoolReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetBoolReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetBoolReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetBoolReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetBoolReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bData_MetaData[] = {
		{ "Category", "ROSSetBoolReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetBoolReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::NewProp_bData_SetBit(void* Obj)
{
	((FROSSetBoolReq*)Obj)->bData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::NewProp_bData = { "bData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSetBoolReq), &Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::NewProp_bData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bData_MetaData), NewProp_bData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::NewProp_bData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetBoolReq",
	Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::PropPointers),
	sizeof(FROSSetBoolReq),
	alignof(FROSSetBoolReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetBoolReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetBoolReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetBoolReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetBoolReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSetBoolReq ******************************************************

// ********** Begin ScriptStruct FROSSetBoolRes ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetBoolRes;
class UScriptStruct* FROSSetBoolRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetBoolRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetBoolRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetBoolRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetBoolRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetBoolRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetBoolRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSetBoolRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "ROSSetBoolRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetBoolRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSetBoolRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSetBoolRes), &Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetBoolRes, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetBoolRes",
	Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::PropPointers),
	sizeof(FROSSetBoolRes),
	alignof(FROSSetBoolRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetBoolRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetBoolRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetBoolRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetBoolRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSetBoolRes ******************************************************

// ********** Begin Class UROS2SetBoolSrv Function Fini ********************************************
struct Z_Construct_UFunction_UROS2SetBoolSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetBoolSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetBoolSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetBoolSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetBoolSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetBoolSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetBoolSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SetBoolSrv Function Fini **********************************************

// ********** Begin Class UROS2SetBoolSrv Function GetRequest **************************************
struct Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics
{
	struct ROS2SetBoolSrv_eventGetRequest_Parms
	{
		FROSSetBoolReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetBoolSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetBoolReq, METADATA_PARAMS(0, nullptr) }; // 2798755838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetBoolSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::ROS2SetBoolSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::ROS2SetBoolSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetBoolSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSetBoolReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetBoolSrv Function GetRequest ****************************************

// ********** Begin Class UROS2SetBoolSrv Function GetResponse *************************************
struct Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics
{
	struct ROS2SetBoolSrv_eventGetResponse_Parms
	{
		FROSSetBoolRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetBoolSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetBoolRes, METADATA_PARAMS(0, nullptr) }; // 2475367287
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetBoolSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::ROS2SetBoolSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::ROS2SetBoolSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetBoolSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSetBoolRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetBoolSrv Function GetResponse ***************************************

// ********** Begin Class UROS2SetBoolSrv Function Init ********************************************
struct Z_Construct_UFunction_UROS2SetBoolSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetBoolSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetBoolSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetBoolSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetBoolSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetBoolSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetBoolSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SetBoolSrv Function Init **********************************************

// ********** Begin Class UROS2SetBoolSrv Function SetRequest **************************************
struct Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics
{
	struct ROS2SetBoolSrv_eventSetRequest_Parms
	{
		FROSSetBoolReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetBoolSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetBoolReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2798755838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetBoolSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::ROS2SetBoolSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::ROS2SetBoolSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetBoolSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSetBoolReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetBoolSrv Function SetRequest ****************************************

// ********** Begin Class UROS2SetBoolSrv Function SetResponse *************************************
struct Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics
{
	struct ROS2SetBoolSrv_eventSetResponse_Parms
	{
		FROSSetBoolRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetBoolSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetBoolRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2475367287
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetBoolSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::ROS2SetBoolSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::ROS2SetBoolSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetBoolSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSetBoolRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetBoolSrv Function SetResponse ***************************************

// ********** Begin Class UROS2SetBoolSrv **********************************************************
void UROS2SetBoolSrv::StaticRegisterNativesUROS2SetBoolSrv()
{
	UClass* Class = UROS2SetBoolSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SetBoolSrv::execFini },
		{ "GetRequest", &UROS2SetBoolSrv::execGetRequest },
		{ "GetResponse", &UROS2SetBoolSrv::execGetResponse },
		{ "Init", &UROS2SetBoolSrv::execInit },
		{ "SetRequest", &UROS2SetBoolSrv::execSetRequest },
		{ "SetResponse", &UROS2SetBoolSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SetBoolSrv;
UClass* UROS2SetBoolSrv::GetPrivateStaticClass()
{
	using TClass = UROS2SetBoolSrv;
	if (!Z_Registration_Info_UClass_UROS2SetBoolSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SetBoolSrv"),
			Z_Registration_Info_UClass_UROS2SetBoolSrv.InnerSingleton,
			StaticRegisterNativesUROS2SetBoolSrv,
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
	return Z_Registration_Info_UClass_UROS2SetBoolSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SetBoolSrv_NoRegister()
{
	return UROS2SetBoolSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SetBoolSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SetBool.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetBool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SetBoolSrv_Fini, "Fini" }, // 419170876
		{ &Z_Construct_UFunction_UROS2SetBoolSrv_GetRequest, "GetRequest" }, // 3440738131
		{ &Z_Construct_UFunction_UROS2SetBoolSrv_GetResponse, "GetResponse" }, // 1563383262
		{ &Z_Construct_UFunction_UROS2SetBoolSrv_Init, "Init" }, // 1147104030
		{ &Z_Construct_UFunction_UROS2SetBoolSrv_SetRequest, "SetRequest" }, // 2025319760
		{ &Z_Construct_UFunction_UROS2SetBoolSrv_SetResponse, "SetResponse" }, // 1047975880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SetBoolSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SetBoolSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetBoolSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SetBoolSrv_Statics::ClassParams = {
	&UROS2SetBoolSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetBoolSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SetBoolSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SetBoolSrv()
{
	if (!Z_Registration_Info_UClass_UROS2SetBoolSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SetBoolSrv.OuterSingleton, Z_Construct_UClass_UROS2SetBoolSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SetBoolSrv.OuterSingleton;
}
UROS2SetBoolSrv::UROS2SetBoolSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SetBoolSrv);
UROS2SetBoolSrv::~UROS2SetBoolSrv() {}
// ********** End Class UROS2SetBoolSrv ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSetBoolReq::StaticStruct, Z_Construct_UScriptStruct_FROSSetBoolReq_Statics::NewStructOps, TEXT("ROSSetBoolReq"), &Z_Registration_Info_UScriptStruct_FROSSetBoolReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetBoolReq), 2798755838U) },
		{ FROSSetBoolRes::StaticStruct, Z_Construct_UScriptStruct_FROSSetBoolRes_Statics::NewStructOps, TEXT("ROSSetBoolRes"), &Z_Registration_Info_UScriptStruct_FROSSetBoolRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetBoolRes), 2475367287U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SetBoolSrv, UROS2SetBoolSrv::StaticClass, TEXT("UROS2SetBoolSrv"), &Z_Registration_Info_UClass_UROS2SetBoolSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SetBoolSrv), 234402131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h__Script_rclUE_3584740747(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetBool_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
