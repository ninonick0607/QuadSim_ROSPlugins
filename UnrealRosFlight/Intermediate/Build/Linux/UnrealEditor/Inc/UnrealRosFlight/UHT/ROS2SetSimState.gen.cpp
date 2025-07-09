// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Srvs/ROS2SetSimState.h"
#include "Msgs/ROS2SimState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SetSimState() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2SetSimStateSrv();
UNREALROSFLIGHT_API UClass* Z_Construct_UClass_UROS2SetSimStateSrv_NoRegister();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetSimStateReq();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetSimStateRes();
UNREALROSFLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FROSSimState();
UPackage* Z_Construct_UPackage__Script_UnrealRosFlight();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSetSimStateReq ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetSimStateReq;
class UScriptStruct* FROSSetSimStateReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetSimStateReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetSimStateReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetSimStateReq, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSSetSimStateReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetSimStateReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROSSetSimStateReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetSimStateReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetSimStateReq, State), Z_Construct_UScriptStruct_FROSSimState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2846641338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSSetSimStateReq",
	Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::PropPointers),
	sizeof(FROSSetSimStateReq),
	alignof(FROSSetSimStateReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetSimStateReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetSimStateReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetSimStateReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetSimStateReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSetSimStateReq **************************************************

// ********** Begin ScriptStruct FROSSetSimStateRes ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetSimStateRes;
class UScriptStruct* FROSSetSimStateRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetSimStateRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetSimStateRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetSimStateRes, (UObject*)Z_Construct_UPackage__Script_UnrealRosFlight(), TEXT("ROSSetSimStateRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetSimStateRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSetSimStateRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "ROSSetSimStateRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetSimStateRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSetSimStateRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSetSimStateRes), &Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetSimStateRes, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
	nullptr,
	&NewStructOps,
	"ROSSetSimStateRes",
	Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::PropPointers),
	sizeof(FROSSetSimStateRes),
	alignof(FROSSetSimStateRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetSimStateRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetSimStateRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetSimStateRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetSimStateRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSetSimStateRes **************************************************

// ********** Begin Class UROS2SetSimStateSrv Function Fini ****************************************
struct Z_Construct_UFunction_UROS2SetSimStateSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetSimStateSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetSimStateSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetSimStateSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetSimStateSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetSimStateSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetSimStateSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SetSimStateSrv Function Fini ******************************************

// ********** Begin Class UROS2SetSimStateSrv Function GetRequest **********************************
struct Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics
{
	struct ROS2SetSimStateSrv_eventGetRequest_Parms
	{
		FROSSetSimStateReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetSimStateSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetSimStateReq, METADATA_PARAMS(0, nullptr) }; // 40268803
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetSimStateSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::ROS2SetSimStateSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::ROS2SetSimStateSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetSimStateSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSetSimStateReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetSimStateSrv Function GetRequest ************************************

// ********** Begin Class UROS2SetSimStateSrv Function GetResponse *********************************
struct Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics
{
	struct ROS2SetSimStateSrv_eventGetResponse_Parms
	{
		FROSSetSimStateRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetSimStateSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetSimStateRes, METADATA_PARAMS(0, nullptr) }; // 2802149671
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetSimStateSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::ROS2SetSimStateSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::ROS2SetSimStateSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetSimStateSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSetSimStateRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetSimStateSrv Function GetResponse ***********************************

// ********** Begin Class UROS2SetSimStateSrv Function Init ****************************************
struct Z_Construct_UFunction_UROS2SetSimStateSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetSimStateSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetSimStateSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetSimStateSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetSimStateSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetSimStateSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetSimStateSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SetSimStateSrv Function Init ******************************************

// ********** Begin Class UROS2SetSimStateSrv Function SetRequest **********************************
struct Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics
{
	struct ROS2SetSimStateSrv_eventSetRequest_Parms
	{
		FROSSetSimStateReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetSimStateSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetSimStateReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 40268803
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetSimStateSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::ROS2SetSimStateSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::ROS2SetSimStateSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetSimStateSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSetSimStateReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetSimStateSrv Function SetRequest ************************************

// ********** Begin Class UROS2SetSimStateSrv Function SetResponse *********************************
struct Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics
{
	struct ROS2SetSimStateSrv_eventSetResponse_Parms
	{
		FROSSetSimStateRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetSimStateSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetSimStateRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2802149671
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetSimStateSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::ROS2SetSimStateSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::ROS2SetSimStateSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetSimStateSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSetSimStateRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetSimStateSrv Function SetResponse ***********************************

// ********** Begin Class UROS2SetSimStateSrv ******************************************************
void UROS2SetSimStateSrv::StaticRegisterNativesUROS2SetSimStateSrv()
{
	UClass* Class = UROS2SetSimStateSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SetSimStateSrv::execFini },
		{ "GetRequest", &UROS2SetSimStateSrv::execGetRequest },
		{ "GetResponse", &UROS2SetSimStateSrv::execGetResponse },
		{ "Init", &UROS2SetSimStateSrv::execInit },
		{ "SetRequest", &UROS2SetSimStateSrv::execSetRequest },
		{ "SetResponse", &UROS2SetSimStateSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SetSimStateSrv;
UClass* UROS2SetSimStateSrv::GetPrivateStaticClass()
{
	using TClass = UROS2SetSimStateSrv;
	if (!Z_Registration_Info_UClass_UROS2SetSimStateSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SetSimStateSrv"),
			Z_Registration_Info_UClass_UROS2SetSimStateSrv.InnerSingleton,
			StaticRegisterNativesUROS2SetSimStateSrv,
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
	return Z_Registration_Info_UClass_UROS2SetSimStateSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SetSimStateSrv_NoRegister()
{
	return UROS2SetSimStateSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SetSimStateSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SetSimState.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetSimState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SetSimStateSrv_Fini, "Fini" }, // 3036148188
		{ &Z_Construct_UFunction_UROS2SetSimStateSrv_GetRequest, "GetRequest" }, // 2271656067
		{ &Z_Construct_UFunction_UROS2SetSimStateSrv_GetResponse, "GetResponse" }, // 2768489842
		{ &Z_Construct_UFunction_UROS2SetSimStateSrv_Init, "Init" }, // 604701537
		{ &Z_Construct_UFunction_UROS2SetSimStateSrv_SetRequest, "SetRequest" }, // 3349555886
		{ &Z_Construct_UFunction_UROS2SetSimStateSrv_SetResponse, "SetResponse" }, // 366677667
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SetSimStateSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SetSimStateSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealRosFlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetSimStateSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SetSimStateSrv_Statics::ClassParams = {
	&UROS2SetSimStateSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetSimStateSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SetSimStateSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SetSimStateSrv()
{
	if (!Z_Registration_Info_UClass_UROS2SetSimStateSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SetSimStateSrv.OuterSingleton, Z_Construct_UClass_UROS2SetSimStateSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SetSimStateSrv.OuterSingleton;
}
UROS2SetSimStateSrv::UROS2SetSimStateSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SetSimStateSrv);
UROS2SetSimStateSrv::~UROS2SetSimStateSrv() {}
// ********** End Class UROS2SetSimStateSrv ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h__Script_UnrealRosFlight_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSetSimStateReq::StaticStruct, Z_Construct_UScriptStruct_FROSSetSimStateReq_Statics::NewStructOps, TEXT("ROSSetSimStateReq"), &Z_Registration_Info_UScriptStruct_FROSSetSimStateReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetSimStateReq), 40268803U) },
		{ FROSSetSimStateRes::StaticStruct, Z_Construct_UScriptStruct_FROSSetSimStateRes_Statics::NewStructOps, TEXT("ROSSetSimStateRes"), &Z_Registration_Info_UScriptStruct_FROSSetSimStateRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetSimStateRes), 2802149671U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SetSimStateSrv, UROS2SetSimStateSrv::StaticClass, TEXT("UROS2SetSimStateSrv"), &Z_Registration_Info_UClass_UROS2SetSimStateSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SetSimStateSrv), 4232823768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h__Script_UnrealRosFlight_4140230939(TEXT("/Script/UnrealRosFlight"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h__Script_UnrealRosFlight_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h__Script_UnrealRosFlight_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h__Script_UnrealRosFlight_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_UnrealRosFlight_Source_UnrealRosFlight_Public_Srvs_ROS2SetSimState_h__Script_UnrealRosFlight_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
