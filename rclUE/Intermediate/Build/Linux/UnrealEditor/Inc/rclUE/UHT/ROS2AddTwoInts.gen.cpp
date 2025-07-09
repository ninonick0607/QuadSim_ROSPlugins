// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2AddTwoInts.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2AddTwoInts() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2AddTwoIntsSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2AddTwoIntsSrv_NoRegister();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAddTwoIntsReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSAddTwoIntsRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSAddTwoIntsReq *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAddTwoIntsReq;
class UScriptStruct* FROSAddTwoIntsReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAddTwoIntsReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAddTwoIntsReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAddTwoIntsReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAddTwoIntsReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAddTwoIntsReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "ROSAddTwoIntsReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "ROSAddTwoIntsReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_A;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAddTwoIntsReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAddTwoIntsReq, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAddTwoIntsReq, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAddTwoIntsReq",
	Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::PropPointers),
	sizeof(FROSAddTwoIntsReq),
	alignof(FROSAddTwoIntsReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAddTwoIntsReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAddTwoIntsReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAddTwoIntsReq.InnerSingleton, Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAddTwoIntsReq.InnerSingleton;
}
// ********** End ScriptStruct FROSAddTwoIntsReq ***************************************************

// ********** Begin ScriptStruct FROSAddTwoIntsRes *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSAddTwoIntsRes;
class UScriptStruct* FROSAddTwoIntsRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAddTwoIntsRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSAddTwoIntsRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSAddTwoIntsRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSAddTwoIntsRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSAddTwoIntsRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sum_MetaData[] = {
		{ "Category", "ROSAddTwoIntsRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Sum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSAddTwoIntsRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::NewProp_Sum = { "Sum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSAddTwoIntsRes, Sum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sum_MetaData), NewProp_Sum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::NewProp_Sum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSAddTwoIntsRes",
	Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::PropPointers),
	sizeof(FROSAddTwoIntsRes),
	alignof(FROSAddTwoIntsRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSAddTwoIntsRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSAddTwoIntsRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSAddTwoIntsRes.InnerSingleton, Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSAddTwoIntsRes.InnerSingleton;
}
// ********** End ScriptStruct FROSAddTwoIntsRes ***************************************************

// ********** Begin Class UROS2AddTwoIntsSrv Function Fini *****************************************
struct Z_Construct_UFunction_UROS2AddTwoIntsSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddTwoIntsSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddTwoIntsSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2AddTwoIntsSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddTwoIntsSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddTwoIntsSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2AddTwoIntsSrv Function Fini *******************************************

// ********** Begin Class UROS2AddTwoIntsSrv Function GetRequest ***********************************
struct Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics
{
	struct ROS2AddTwoIntsSrv_eventGetRequest_Parms
	{
		FROSAddTwoIntsReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AddTwoIntsSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSAddTwoIntsReq, METADATA_PARAMS(0, nullptr) }; // 1830735724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddTwoIntsSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::ROS2AddTwoIntsSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::ROS2AddTwoIntsSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddTwoIntsSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSAddTwoIntsReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2AddTwoIntsSrv Function GetRequest *************************************

// ********** Begin Class UROS2AddTwoIntsSrv Function GetResponse **********************************
struct Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics
{
	struct ROS2AddTwoIntsSrv_eventGetResponse_Parms
	{
		FROSAddTwoIntsRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AddTwoIntsSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSAddTwoIntsRes, METADATA_PARAMS(0, nullptr) }; // 3435815717
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddTwoIntsSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::ROS2AddTwoIntsSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::ROS2AddTwoIntsSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddTwoIntsSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSAddTwoIntsRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2AddTwoIntsSrv Function GetResponse ************************************

// ********** Begin Class UROS2AddTwoIntsSrv Function Init *****************************************
struct Z_Construct_UFunction_UROS2AddTwoIntsSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddTwoIntsSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddTwoIntsSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2AddTwoIntsSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddTwoIntsSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddTwoIntsSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2AddTwoIntsSrv Function Init *******************************************

// ********** Begin Class UROS2AddTwoIntsSrv Function SetRequest ***********************************
struct Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics
{
	struct ROS2AddTwoIntsSrv_eventSetRequest_Parms
	{
		FROSAddTwoIntsReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AddTwoIntsSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSAddTwoIntsReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1830735724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddTwoIntsSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::ROS2AddTwoIntsSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::ROS2AddTwoIntsSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddTwoIntsSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSAddTwoIntsReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2AddTwoIntsSrv Function SetRequest *************************************

// ********** Begin Class UROS2AddTwoIntsSrv Function SetResponse **********************************
struct Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics
{
	struct ROS2AddTwoIntsSrv_eventSetResponse_Parms
	{
		FROSAddTwoIntsRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2AddTwoIntsSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSAddTwoIntsRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3435815717
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2AddTwoIntsSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::ROS2AddTwoIntsSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::ROS2AddTwoIntsSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2AddTwoIntsSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSAddTwoIntsRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2AddTwoIntsSrv Function SetResponse ************************************

// ********** Begin Class UROS2AddTwoIntsSrv *******************************************************
void UROS2AddTwoIntsSrv::StaticRegisterNativesUROS2AddTwoIntsSrv()
{
	UClass* Class = UROS2AddTwoIntsSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2AddTwoIntsSrv::execFini },
		{ "GetRequest", &UROS2AddTwoIntsSrv::execGetRequest },
		{ "GetResponse", &UROS2AddTwoIntsSrv::execGetResponse },
		{ "Init", &UROS2AddTwoIntsSrv::execInit },
		{ "SetRequest", &UROS2AddTwoIntsSrv::execSetRequest },
		{ "SetResponse", &UROS2AddTwoIntsSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2AddTwoIntsSrv;
UClass* UROS2AddTwoIntsSrv::GetPrivateStaticClass()
{
	using TClass = UROS2AddTwoIntsSrv;
	if (!Z_Registration_Info_UClass_UROS2AddTwoIntsSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2AddTwoIntsSrv"),
			Z_Registration_Info_UClass_UROS2AddTwoIntsSrv.InnerSingleton,
			StaticRegisterNativesUROS2AddTwoIntsSrv,
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
	return Z_Registration_Info_UClass_UROS2AddTwoIntsSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2AddTwoIntsSrv_NoRegister()
{
	return UROS2AddTwoIntsSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2AddTwoIntsSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2AddTwoInts.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2AddTwoInts.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2AddTwoIntsSrv_Fini, "Fini" }, // 21750274
		{ &Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetRequest, "GetRequest" }, // 2216670391
		{ &Z_Construct_UFunction_UROS2AddTwoIntsSrv_GetResponse, "GetResponse" }, // 3705747629
		{ &Z_Construct_UFunction_UROS2AddTwoIntsSrv_Init, "Init" }, // 3803401366
		{ &Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetRequest, "SetRequest" }, // 4235457363
		{ &Z_Construct_UFunction_UROS2AddTwoIntsSrv_SetResponse, "SetResponse" }, // 3422316955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2AddTwoIntsSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2AddTwoIntsSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AddTwoIntsSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2AddTwoIntsSrv_Statics::ClassParams = {
	&UROS2AddTwoIntsSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2AddTwoIntsSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2AddTwoIntsSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2AddTwoIntsSrv()
{
	if (!Z_Registration_Info_UClass_UROS2AddTwoIntsSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2AddTwoIntsSrv.OuterSingleton, Z_Construct_UClass_UROS2AddTwoIntsSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2AddTwoIntsSrv.OuterSingleton;
}
UROS2AddTwoIntsSrv::UROS2AddTwoIntsSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2AddTwoIntsSrv);
UROS2AddTwoIntsSrv::~UROS2AddTwoIntsSrv() {}
// ********** End Class UROS2AddTwoIntsSrv *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSAddTwoIntsReq::StaticStruct, Z_Construct_UScriptStruct_FROSAddTwoIntsReq_Statics::NewStructOps, TEXT("ROSAddTwoIntsReq"), &Z_Registration_Info_UScriptStruct_FROSAddTwoIntsReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAddTwoIntsReq), 1830735724U) },
		{ FROSAddTwoIntsRes::StaticStruct, Z_Construct_UScriptStruct_FROSAddTwoIntsRes_Statics::NewStructOps, TEXT("ROSAddTwoIntsRes"), &Z_Registration_Info_UScriptStruct_FROSAddTwoIntsRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSAddTwoIntsRes), 3435815717U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2AddTwoIntsSrv, UROS2AddTwoIntsSrv::StaticClass, TEXT("UROS2AddTwoIntsSrv"), &Z_Registration_Info_UClass_UROS2AddTwoIntsSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2AddTwoIntsSrv), 2804394523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h__Script_rclUE_41280767(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2AddTwoInts_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
