// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2GetEntityState.h"
#include "rclUE/Public/Msgs/ROS2EntityState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2GetEntityState() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetEntityStateSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2GetEntityStateSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSEntityState();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetEntityStateReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSGetEntityStateRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSGetEntityStateReq *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetEntityStateReq;
class UScriptStruct* FROSGetEntityStateReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetEntityStateReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetEntityStateReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetEntityStateReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetEntityStateReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetEntityStateReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ROSGetEntityStateReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrame_MetaData[] = {
		{ "Category", "ROSGetEntityStateReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferenceFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetEntityStateReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetEntityStateReq, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::NewProp_ReferenceFrame = { "ReferenceFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetEntityStateReq, ReferenceFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceFrame_MetaData), NewProp_ReferenceFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::NewProp_ReferenceFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetEntityStateReq",
	Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::PropPointers),
	sizeof(FROSGetEntityStateReq),
	alignof(FROSGetEntityStateReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetEntityStateReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetEntityStateReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetEntityStateReq.InnerSingleton, Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetEntityStateReq.InnerSingleton;
}
// ********** End ScriptStruct FROSGetEntityStateReq ***********************************************

// ********** Begin ScriptStruct FROSGetEntityStateRes *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSGetEntityStateRes;
class UScriptStruct* FROSGetEntityStateRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetEntityStateRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSGetEntityStateRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSGetEntityStateRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSGetEntityStateRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSGetEntityStateRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROSGetEntityStateRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSGetEntityStateRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSGetEntityStateRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSGetEntityStateRes, State), Z_Construct_UScriptStruct_FROSEntityState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2945648753
void Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSGetEntityStateRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSGetEntityStateRes), &Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSGetEntityStateRes",
	Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::PropPointers),
	sizeof(FROSGetEntityStateRes),
	alignof(FROSGetEntityStateRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSGetEntityStateRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSGetEntityStateRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSGetEntityStateRes.InnerSingleton, Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSGetEntityStateRes.InnerSingleton;
}
// ********** End ScriptStruct FROSGetEntityStateRes ***********************************************

// ********** Begin Class UROS2GetEntityStateSrv Function Fini *************************************
struct Z_Construct_UFunction_UROS2GetEntityStateSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetEntityStateSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetEntityStateSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetEntityStateSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetEntityStateSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetEntityStateSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetEntityStateSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2GetEntityStateSrv Function Fini ***************************************

// ********** Begin Class UROS2GetEntityStateSrv Function GetRequest *******************************
struct Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics
{
	struct ROS2GetEntityStateSrv_eventGetRequest_Parms
	{
		FROSGetEntityStateReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetEntityStateSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetEntityStateReq, METADATA_PARAMS(0, nullptr) }; // 1003711272
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetEntityStateSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::ROS2GetEntityStateSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::ROS2GetEntityStateSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetEntityStateSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSGetEntityStateReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetEntityStateSrv Function GetRequest *********************************

// ********** Begin Class UROS2GetEntityStateSrv Function GetResponse ******************************
struct Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics
{
	struct ROS2GetEntityStateSrv_eventGetResponse_Parms
	{
		FROSGetEntityStateRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetEntityStateSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetEntityStateRes, METADATA_PARAMS(0, nullptr) }; // 4118937168
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetEntityStateSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::ROS2GetEntityStateSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::ROS2GetEntityStateSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetEntityStateSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSGetEntityStateRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetEntityStateSrv Function GetResponse ********************************

// ********** Begin Class UROS2GetEntityStateSrv Function Init *************************************
struct Z_Construct_UFunction_UROS2GetEntityStateSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetEntityStateSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetEntityStateSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetEntityStateSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2GetEntityStateSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetEntityStateSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetEntityStateSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2GetEntityStateSrv Function Init ***************************************

// ********** Begin Class UROS2GetEntityStateSrv Function SetRequest *******************************
struct Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics
{
	struct ROS2GetEntityStateSrv_eventSetRequest_Parms
	{
		FROSGetEntityStateReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetEntityStateSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSGetEntityStateReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1003711272
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetEntityStateSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::ROS2GetEntityStateSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::ROS2GetEntityStateSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetEntityStateSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSGetEntityStateReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2GetEntityStateSrv Function SetRequest *********************************

// ********** Begin Class UROS2GetEntityStateSrv Function SetResponse ******************************
struct Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics
{
	struct ROS2GetEntityStateSrv_eventSetResponse_Parms
	{
		FROSGetEntityStateRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2GetEntityStateSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSGetEntityStateRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 4118937168
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2GetEntityStateSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::ROS2GetEntityStateSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::ROS2GetEntityStateSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2GetEntityStateSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSGetEntityStateRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2GetEntityStateSrv Function SetResponse ********************************

// ********** Begin Class UROS2GetEntityStateSrv ***************************************************
void UROS2GetEntityStateSrv::StaticRegisterNativesUROS2GetEntityStateSrv()
{
	UClass* Class = UROS2GetEntityStateSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2GetEntityStateSrv::execFini },
		{ "GetRequest", &UROS2GetEntityStateSrv::execGetRequest },
		{ "GetResponse", &UROS2GetEntityStateSrv::execGetResponse },
		{ "Init", &UROS2GetEntityStateSrv::execInit },
		{ "SetRequest", &UROS2GetEntityStateSrv::execSetRequest },
		{ "SetResponse", &UROS2GetEntityStateSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2GetEntityStateSrv;
UClass* UROS2GetEntityStateSrv::GetPrivateStaticClass()
{
	using TClass = UROS2GetEntityStateSrv;
	if (!Z_Registration_Info_UClass_UROS2GetEntityStateSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2GetEntityStateSrv"),
			Z_Registration_Info_UClass_UROS2GetEntityStateSrv.InnerSingleton,
			StaticRegisterNativesUROS2GetEntityStateSrv,
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
	return Z_Registration_Info_UClass_UROS2GetEntityStateSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2GetEntityStateSrv_NoRegister()
{
	return UROS2GetEntityStateSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2GetEntityStateSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2GetEntityState.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2GetEntityState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2GetEntityStateSrv_Fini, "Fini" }, // 1756721976
		{ &Z_Construct_UFunction_UROS2GetEntityStateSrv_GetRequest, "GetRequest" }, // 3267831158
		{ &Z_Construct_UFunction_UROS2GetEntityStateSrv_GetResponse, "GetResponse" }, // 580614482
		{ &Z_Construct_UFunction_UROS2GetEntityStateSrv_Init, "Init" }, // 4293114820
		{ &Z_Construct_UFunction_UROS2GetEntityStateSrv_SetRequest, "SetRequest" }, // 4071927929
		{ &Z_Construct_UFunction_UROS2GetEntityStateSrv_SetResponse, "SetResponse" }, // 1780241978
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2GetEntityStateSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2GetEntityStateSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetEntityStateSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2GetEntityStateSrv_Statics::ClassParams = {
	&UROS2GetEntityStateSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2GetEntityStateSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2GetEntityStateSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2GetEntityStateSrv()
{
	if (!Z_Registration_Info_UClass_UROS2GetEntityStateSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2GetEntityStateSrv.OuterSingleton, Z_Construct_UClass_UROS2GetEntityStateSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2GetEntityStateSrv.OuterSingleton;
}
UROS2GetEntityStateSrv::UROS2GetEntityStateSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2GetEntityStateSrv);
UROS2GetEntityStateSrv::~UROS2GetEntityStateSrv() {}
// ********** End Class UROS2GetEntityStateSrv *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSGetEntityStateReq::StaticStruct, Z_Construct_UScriptStruct_FROSGetEntityStateReq_Statics::NewStructOps, TEXT("ROSGetEntityStateReq"), &Z_Registration_Info_UScriptStruct_FROSGetEntityStateReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetEntityStateReq), 1003711272U) },
		{ FROSGetEntityStateRes::StaticStruct, Z_Construct_UScriptStruct_FROSGetEntityStateRes_Statics::NewStructOps, TEXT("ROSGetEntityStateRes"), &Z_Registration_Info_UScriptStruct_FROSGetEntityStateRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSGetEntityStateRes), 4118937168U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2GetEntityStateSrv, UROS2GetEntityStateSrv::StaticClass, TEXT("UROS2GetEntityStateSrv"), &Z_Registration_Info_UClass_UROS2GetEntityStateSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2GetEntityStateSrv), 4036194090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h__Script_rclUE_3299398787(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2GetEntityState_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
