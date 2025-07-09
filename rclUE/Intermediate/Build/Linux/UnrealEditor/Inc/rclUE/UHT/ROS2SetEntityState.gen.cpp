// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SetEntityState.h"
#include "rclUE/Public/Msgs/ROS2EntityState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SetEntityState() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetEntityStateSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SetEntityStateSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSEntityState();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetEntityStateReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSetEntityStateRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSetEntityStateReq *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetEntityStateReq;
class UScriptStruct* FROSSetEntityStateReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetEntityStateReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetEntityStateReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetEntityStateReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetEntityStateReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetEntityStateReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROSSetEntityStateReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetEntityStateReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSetEntityStateReq, State), Z_Construct_UScriptStruct_FROSEntityState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2945648753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetEntityStateReq",
	Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::PropPointers),
	sizeof(FROSSetEntityStateReq),
	alignof(FROSSetEntityStateReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetEntityStateReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetEntityStateReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetEntityStateReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetEntityStateReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSetEntityStateReq ***********************************************

// ********** Begin ScriptStruct FROSSetEntityStateRes *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSetEntityStateRes;
class UScriptStruct* FROSSetEntityStateRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetEntityStateRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSetEntityStateRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSetEntityStateRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSetEntityStateRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSetEntityStateRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSetEntityStateRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSetEntityStateRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSetEntityStateRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSetEntityStateRes), &Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSetEntityStateRes",
	Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::PropPointers),
	sizeof(FROSSetEntityStateRes),
	alignof(FROSSetEntityStateRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSetEntityStateRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSetEntityStateRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSetEntityStateRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSetEntityStateRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSetEntityStateRes ***********************************************

// ********** Begin Class UROS2SetEntityStateSrv Function Fini *************************************
struct Z_Construct_UFunction_UROS2SetEntityStateSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetEntityStateSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetEntityStateSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetEntityStateSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetEntityStateSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetEntityStateSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetEntityStateSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SetEntityStateSrv Function Fini ***************************************

// ********** Begin Class UROS2SetEntityStateSrv Function GetRequest *******************************
struct Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics
{
	struct ROS2SetEntityStateSrv_eventGetRequest_Parms
	{
		FROSSetEntityStateReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetEntityStateSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetEntityStateReq, METADATA_PARAMS(0, nullptr) }; // 919157028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetEntityStateSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::ROS2SetEntityStateSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::ROS2SetEntityStateSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetEntityStateSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSetEntityStateReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetEntityStateSrv Function GetRequest *********************************

// ********** Begin Class UROS2SetEntityStateSrv Function GetResponse ******************************
struct Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics
{
	struct ROS2SetEntityStateSrv_eventGetResponse_Parms
	{
		FROSSetEntityStateRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetEntityStateSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetEntityStateRes, METADATA_PARAMS(0, nullptr) }; // 646311664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetEntityStateSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::ROS2SetEntityStateSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::ROS2SetEntityStateSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetEntityStateSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSetEntityStateRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetEntityStateSrv Function GetResponse ********************************

// ********** Begin Class UROS2SetEntityStateSrv Function Init *************************************
struct Z_Construct_UFunction_UROS2SetEntityStateSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetEntityStateSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetEntityStateSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetEntityStateSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SetEntityStateSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetEntityStateSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetEntityStateSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SetEntityStateSrv Function Init ***************************************

// ********** Begin Class UROS2SetEntityStateSrv Function SetRequest *******************************
struct Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics
{
	struct ROS2SetEntityStateSrv_eventSetRequest_Parms
	{
		FROSSetEntityStateReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetEntityStateSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSetEntityStateReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 919157028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetEntityStateSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::ROS2SetEntityStateSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::ROS2SetEntityStateSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetEntityStateSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSetEntityStateReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SetEntityStateSrv Function SetRequest *********************************

// ********** Begin Class UROS2SetEntityStateSrv Function SetResponse ******************************
struct Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics
{
	struct ROS2SetEntityStateSrv_eventSetResponse_Parms
	{
		FROSSetEntityStateRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SetEntityStateSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSetEntityStateRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 646311664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SetEntityStateSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::ROS2SetEntityStateSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::ROS2SetEntityStateSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SetEntityStateSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSetEntityStateRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SetEntityStateSrv Function SetResponse ********************************

// ********** Begin Class UROS2SetEntityStateSrv ***************************************************
void UROS2SetEntityStateSrv::StaticRegisterNativesUROS2SetEntityStateSrv()
{
	UClass* Class = UROS2SetEntityStateSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SetEntityStateSrv::execFini },
		{ "GetRequest", &UROS2SetEntityStateSrv::execGetRequest },
		{ "GetResponse", &UROS2SetEntityStateSrv::execGetResponse },
		{ "Init", &UROS2SetEntityStateSrv::execInit },
		{ "SetRequest", &UROS2SetEntityStateSrv::execSetRequest },
		{ "SetResponse", &UROS2SetEntityStateSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SetEntityStateSrv;
UClass* UROS2SetEntityStateSrv::GetPrivateStaticClass()
{
	using TClass = UROS2SetEntityStateSrv;
	if (!Z_Registration_Info_UClass_UROS2SetEntityStateSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SetEntityStateSrv"),
			Z_Registration_Info_UClass_UROS2SetEntityStateSrv.InnerSingleton,
			StaticRegisterNativesUROS2SetEntityStateSrv,
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
	return Z_Registration_Info_UClass_UROS2SetEntityStateSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SetEntityStateSrv_NoRegister()
{
	return UROS2SetEntityStateSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SetEntityStateSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SetEntityState.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SetEntityState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SetEntityStateSrv_Fini, "Fini" }, // 1428056801
		{ &Z_Construct_UFunction_UROS2SetEntityStateSrv_GetRequest, "GetRequest" }, // 2532620295
		{ &Z_Construct_UFunction_UROS2SetEntityStateSrv_GetResponse, "GetResponse" }, // 3696011343
		{ &Z_Construct_UFunction_UROS2SetEntityStateSrv_Init, "Init" }, // 1365987291
		{ &Z_Construct_UFunction_UROS2SetEntityStateSrv_SetRequest, "SetRequest" }, // 3196502117
		{ &Z_Construct_UFunction_UROS2SetEntityStateSrv_SetResponse, "SetResponse" }, // 3463423524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SetEntityStateSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SetEntityStateSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetEntityStateSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SetEntityStateSrv_Statics::ClassParams = {
	&UROS2SetEntityStateSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SetEntityStateSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SetEntityStateSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SetEntityStateSrv()
{
	if (!Z_Registration_Info_UClass_UROS2SetEntityStateSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SetEntityStateSrv.OuterSingleton, Z_Construct_UClass_UROS2SetEntityStateSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SetEntityStateSrv.OuterSingleton;
}
UROS2SetEntityStateSrv::UROS2SetEntityStateSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SetEntityStateSrv);
UROS2SetEntityStateSrv::~UROS2SetEntityStateSrv() {}
// ********** End Class UROS2SetEntityStateSrv *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSetEntityStateReq::StaticStruct, Z_Construct_UScriptStruct_FROSSetEntityStateReq_Statics::NewStructOps, TEXT("ROSSetEntityStateReq"), &Z_Registration_Info_UScriptStruct_FROSSetEntityStateReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetEntityStateReq), 919157028U) },
		{ FROSSetEntityStateRes::StaticStruct, Z_Construct_UScriptStruct_FROSSetEntityStateRes_Statics::NewStructOps, TEXT("ROSSetEntityStateRes"), &Z_Registration_Info_UScriptStruct_FROSSetEntityStateRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSetEntityStateRes), 646311664U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SetEntityStateSrv, UROS2SetEntityStateSrv::StaticClass, TEXT("UROS2SetEntityStateSrv"), &Z_Registration_Info_UClass_UROS2SetEntityStateSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SetEntityStateSrv), 3613295444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h__Script_rclUE_1043005976(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SetEntityState_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
