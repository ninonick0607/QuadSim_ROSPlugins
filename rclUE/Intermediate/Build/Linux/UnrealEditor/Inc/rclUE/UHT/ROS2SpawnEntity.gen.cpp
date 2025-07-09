// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SpawnEntity.h"
#include "rclUE/Public/Msgs/ROS2EntityState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SpawnEntity() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnEntitySrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnEntitySrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSEntityState();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnEntityReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnEntityRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSpawnEntityReq ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSpawnEntityReq;
class UScriptStruct* FROSSpawnEntityReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnEntityReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSpawnEntityReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSpawnEntityReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSpawnEntityReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnEntityReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Xml_MetaData[] = {
		{ "Category", "ROSSpawnEntityReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RobotNamespace_MetaData[] = {
		{ "Category", "ROSSpawnEntityReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROSSpawnEntityReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "ROSSpawnEntityReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonParameters_MetaData[] = {
		{ "Category", "ROSSpawnEntityReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Xml;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RobotNamespace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSpawnEntityReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_Xml = { "Xml", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntityReq, Xml), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Xml_MetaData), NewProp_Xml_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_RobotNamespace = { "RobotNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntityReq, RobotNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RobotNamespace_MetaData), NewProp_RobotNamespace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntityReq, State), Z_Construct_UScriptStruct_FROSEntityState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2945648753
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntityReq, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_JsonParameters = { "JsonParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntityReq, JsonParameters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonParameters_MetaData), NewProp_JsonParameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_Xml,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_RobotNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewProp_JsonParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSpawnEntityReq",
	Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::PropPointers),
	sizeof(FROSSpawnEntityReq),
	alignof(FROSSpawnEntityReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnEntityReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnEntityReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSpawnEntityReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnEntityReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSpawnEntityReq **************************************************

// ********** Begin ScriptStruct FROSSpawnEntityRes ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSpawnEntityRes;
class UScriptStruct* FROSSpawnEntityRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnEntityRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSpawnEntityRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSpawnEntityRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSpawnEntityRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnEntityRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSpawnEntityRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusMessage_MetaData[] = {
		{ "Category", "ROSSpawnEntityRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatusMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSpawnEntityRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSpawnEntityRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSpawnEntityRes), &Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::NewProp_StatusMessage = { "StatusMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntityRes, StatusMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusMessage_MetaData), NewProp_StatusMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::NewProp_StatusMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSpawnEntityRes",
	Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::PropPointers),
	sizeof(FROSSpawnEntityRes),
	alignof(FROSSpawnEntityRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnEntityRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnEntityRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSpawnEntityRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnEntityRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSpawnEntityRes **************************************************

// ********** Begin Class UROS2SpawnEntitySrv Function Fini ****************************************
struct Z_Construct_UFunction_UROS2SpawnEntitySrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitySrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitySrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitySrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SpawnEntitySrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitySrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitySrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitySrv Function Fini ******************************************

// ********** Begin Class UROS2SpawnEntitySrv Function GetRequest **********************************
struct Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics
{
	struct ROS2SpawnEntitySrv_eventGetRequest_Parms
	{
		FROSSpawnEntityReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnEntitySrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSpawnEntityReq, METADATA_PARAMS(0, nullptr) }; // 1499358869
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitySrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::ROS2SpawnEntitySrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::ROS2SpawnEntitySrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitySrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSpawnEntityReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitySrv Function GetRequest ************************************

// ********** Begin Class UROS2SpawnEntitySrv Function GetResponse *********************************
struct Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics
{
	struct ROS2SpawnEntitySrv_eventGetResponse_Parms
	{
		FROSSpawnEntityRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnEntitySrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSpawnEntityRes, METADATA_PARAMS(0, nullptr) }; // 2002101342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitySrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::ROS2SpawnEntitySrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::ROS2SpawnEntitySrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitySrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSpawnEntityRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitySrv Function GetResponse ***********************************

// ********** Begin Class UROS2SpawnEntitySrv Function Init ****************************************
struct Z_Construct_UFunction_UROS2SpawnEntitySrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitySrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitySrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitySrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SpawnEntitySrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitySrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitySrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitySrv Function Init ******************************************

// ********** Begin Class UROS2SpawnEntitySrv Function SetRequest **********************************
struct Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics
{
	struct ROS2SpawnEntitySrv_eventSetRequest_Parms
	{
		FROSSpawnEntityReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnEntitySrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSpawnEntityReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1499358869
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitySrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::ROS2SpawnEntitySrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::ROS2SpawnEntitySrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitySrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSpawnEntityReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitySrv Function SetRequest ************************************

// ********** Begin Class UROS2SpawnEntitySrv Function SetResponse *********************************
struct Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics
{
	struct ROS2SpawnEntitySrv_eventSetResponse_Parms
	{
		FROSSpawnEntityRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnEntitySrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSpawnEntityRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2002101342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitySrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::ROS2SpawnEntitySrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::ROS2SpawnEntitySrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitySrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSpawnEntityRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitySrv Function SetResponse ***********************************

// ********** Begin Class UROS2SpawnEntitySrv ******************************************************
void UROS2SpawnEntitySrv::StaticRegisterNativesUROS2SpawnEntitySrv()
{
	UClass* Class = UROS2SpawnEntitySrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SpawnEntitySrv::execFini },
		{ "GetRequest", &UROS2SpawnEntitySrv::execGetRequest },
		{ "GetResponse", &UROS2SpawnEntitySrv::execGetResponse },
		{ "Init", &UROS2SpawnEntitySrv::execInit },
		{ "SetRequest", &UROS2SpawnEntitySrv::execSetRequest },
		{ "SetResponse", &UROS2SpawnEntitySrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SpawnEntitySrv;
UClass* UROS2SpawnEntitySrv::GetPrivateStaticClass()
{
	using TClass = UROS2SpawnEntitySrv;
	if (!Z_Registration_Info_UClass_UROS2SpawnEntitySrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SpawnEntitySrv"),
			Z_Registration_Info_UClass_UROS2SpawnEntitySrv.InnerSingleton,
			StaticRegisterNativesUROS2SpawnEntitySrv,
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
	return Z_Registration_Info_UClass_UROS2SpawnEntitySrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SpawnEntitySrv_NoRegister()
{
	return UROS2SpawnEntitySrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SpawnEntitySrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SpawnEntity.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SpawnEntitySrv_Fini, "Fini" }, // 2484172818
		{ &Z_Construct_UFunction_UROS2SpawnEntitySrv_GetRequest, "GetRequest" }, // 2483494599
		{ &Z_Construct_UFunction_UROS2SpawnEntitySrv_GetResponse, "GetResponse" }, // 2896705667
		{ &Z_Construct_UFunction_UROS2SpawnEntitySrv_Init, "Init" }, // 1961149095
		{ &Z_Construct_UFunction_UROS2SpawnEntitySrv_SetRequest, "SetRequest" }, // 3128683619
		{ &Z_Construct_UFunction_UROS2SpawnEntitySrv_SetResponse, "SetResponse" }, // 4125209071
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SpawnEntitySrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SpawnEntitySrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SpawnEntitySrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SpawnEntitySrv_Statics::ClassParams = {
	&UROS2SpawnEntitySrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SpawnEntitySrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SpawnEntitySrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SpawnEntitySrv()
{
	if (!Z_Registration_Info_UClass_UROS2SpawnEntitySrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SpawnEntitySrv.OuterSingleton, Z_Construct_UClass_UROS2SpawnEntitySrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SpawnEntitySrv.OuterSingleton;
}
UROS2SpawnEntitySrv::UROS2SpawnEntitySrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SpawnEntitySrv);
UROS2SpawnEntitySrv::~UROS2SpawnEntitySrv() {}
// ********** End Class UROS2SpawnEntitySrv ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSpawnEntityReq::StaticStruct, Z_Construct_UScriptStruct_FROSSpawnEntityReq_Statics::NewStructOps, TEXT("ROSSpawnEntityReq"), &Z_Registration_Info_UScriptStruct_FROSSpawnEntityReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSpawnEntityReq), 1499358869U) },
		{ FROSSpawnEntityRes::StaticStruct, Z_Construct_UScriptStruct_FROSSpawnEntityRes_Statics::NewStructOps, TEXT("ROSSpawnEntityRes"), &Z_Registration_Info_UScriptStruct_FROSSpawnEntityRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSpawnEntityRes), 2002101342U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SpawnEntitySrv, UROS2SpawnEntitySrv::StaticClass, TEXT("UROS2SpawnEntitySrv"), &Z_Registration_Info_UClass_UROS2SpawnEntitySrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SpawnEntitySrv), 125756386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h__Script_rclUE_3303138907(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntity_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
