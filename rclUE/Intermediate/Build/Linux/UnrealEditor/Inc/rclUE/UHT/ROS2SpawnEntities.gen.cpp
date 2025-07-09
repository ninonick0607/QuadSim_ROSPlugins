// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SpawnEntities.h"
#include "rclUE/Public/Msgs/ROS2EntityState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SpawnEntities() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnEntitiesSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnEntitiesSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSEntityState();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnEntitiesReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnEntitiesRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSpawnEntitiesReq **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesReq;
class UScriptStruct* FROSSpawnEntitiesReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSpawnEntitiesReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSpawnEntitiesReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ROSSpawnEntitiesReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "ROSSpawnEntitiesReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "ROSSpawnEntitiesReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonParameters_MetaData[] = {
		{ "Category", "ROSSpawnEntitiesReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_State_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_State;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JsonParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSpawnEntitiesReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_Type_Inner = { "Type", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntitiesReq, Type), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_State_Inner = { "State", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSEntityState, METADATA_PARAMS(0, nullptr) }; // 2945648753
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntitiesReq, State), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2945648753
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntitiesReq, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_JsonParameters_Inner = { "JsonParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_JsonParameters = { "JsonParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntitiesReq, JsonParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonParameters_MetaData), NewProp_JsonParameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_Type_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_State_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_JsonParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewProp_JsonParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSpawnEntitiesReq",
	Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::PropPointers),
	sizeof(FROSSpawnEntitiesReq),
	alignof(FROSSpawnEntitiesReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnEntitiesReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSpawnEntitiesReq ************************************************

// ********** Begin ScriptStruct FROSSpawnEntitiesRes **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesRes;
class UScriptStruct* FROSSpawnEntitiesRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSpawnEntitiesRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSpawnEntitiesRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSpawnEntitiesRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusMessage_MetaData[] = {
		{ "Category", "ROSSpawnEntitiesRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatusMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSpawnEntitiesRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSpawnEntitiesRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSpawnEntitiesRes), &Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::NewProp_StatusMessage = { "StatusMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnEntitiesRes, StatusMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusMessage_MetaData), NewProp_StatusMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::NewProp_StatusMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSpawnEntitiesRes",
	Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::PropPointers),
	sizeof(FROSSpawnEntitiesRes),
	alignof(FROSSpawnEntitiesRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnEntitiesRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSpawnEntitiesRes ************************************************

// ********** Begin Class UROS2SpawnEntitiesSrv Function Fini **************************************
struct Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitiesSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitiesSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitiesSrv Function Fini ****************************************

// ********** Begin Class UROS2SpawnEntitiesSrv Function GetRequest ********************************
struct Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics
{
	struct ROS2SpawnEntitiesSrv_eventGetRequest_Parms
	{
		FROSSpawnEntitiesReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnEntitiesSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSpawnEntitiesReq, METADATA_PARAMS(0, nullptr) }; // 3992018652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitiesSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::ROS2SpawnEntitiesSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::ROS2SpawnEntitiesSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitiesSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSpawnEntitiesReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitiesSrv Function GetRequest **********************************

// ********** Begin Class UROS2SpawnEntitiesSrv Function GetResponse *******************************
struct Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics
{
	struct ROS2SpawnEntitiesSrv_eventGetResponse_Parms
	{
		FROSSpawnEntitiesRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnEntitiesSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSpawnEntitiesRes, METADATA_PARAMS(0, nullptr) }; // 575994793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitiesSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::ROS2SpawnEntitiesSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::ROS2SpawnEntitiesSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitiesSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSpawnEntitiesRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitiesSrv Function GetResponse *********************************

// ********** Begin Class UROS2SpawnEntitiesSrv Function Init **************************************
struct Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitiesSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitiesSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitiesSrv Function Init ****************************************

// ********** Begin Class UROS2SpawnEntitiesSrv Function SetRequest ********************************
struct Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics
{
	struct ROS2SpawnEntitiesSrv_eventSetRequest_Parms
	{
		FROSSpawnEntitiesReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnEntitiesSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSpawnEntitiesReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3992018652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitiesSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::ROS2SpawnEntitiesSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::ROS2SpawnEntitiesSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitiesSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSpawnEntitiesReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitiesSrv Function SetRequest **********************************

// ********** Begin Class UROS2SpawnEntitiesSrv Function SetResponse *******************************
struct Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics
{
	struct ROS2SpawnEntitiesSrv_eventSetResponse_Parms
	{
		FROSSpawnEntitiesRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnEntitiesSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSpawnEntitiesRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 575994793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnEntitiesSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::ROS2SpawnEntitiesSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::ROS2SpawnEntitiesSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnEntitiesSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSpawnEntitiesRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnEntitiesSrv Function SetResponse *********************************

// ********** Begin Class UROS2SpawnEntitiesSrv ****************************************************
void UROS2SpawnEntitiesSrv::StaticRegisterNativesUROS2SpawnEntitiesSrv()
{
	UClass* Class = UROS2SpawnEntitiesSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SpawnEntitiesSrv::execFini },
		{ "GetRequest", &UROS2SpawnEntitiesSrv::execGetRequest },
		{ "GetResponse", &UROS2SpawnEntitiesSrv::execGetResponse },
		{ "Init", &UROS2SpawnEntitiesSrv::execInit },
		{ "SetRequest", &UROS2SpawnEntitiesSrv::execSetRequest },
		{ "SetResponse", &UROS2SpawnEntitiesSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SpawnEntitiesSrv;
UClass* UROS2SpawnEntitiesSrv::GetPrivateStaticClass()
{
	using TClass = UROS2SpawnEntitiesSrv;
	if (!Z_Registration_Info_UClass_UROS2SpawnEntitiesSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SpawnEntitiesSrv"),
			Z_Registration_Info_UClass_UROS2SpawnEntitiesSrv.InnerSingleton,
			StaticRegisterNativesUROS2SpawnEntitiesSrv,
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
	return Z_Registration_Info_UClass_UROS2SpawnEntitiesSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SpawnEntitiesSrv_NoRegister()
{
	return UROS2SpawnEntitiesSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SpawnEntitiesSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SpawnEntities.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnEntities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Fini, "Fini" }, // 3858260367
		{ &Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetRequest, "GetRequest" }, // 617570538
		{ &Z_Construct_UFunction_UROS2SpawnEntitiesSrv_GetResponse, "GetResponse" }, // 228358918
		{ &Z_Construct_UFunction_UROS2SpawnEntitiesSrv_Init, "Init" }, // 3046525228
		{ &Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetRequest, "SetRequest" }, // 294198752
		{ &Z_Construct_UFunction_UROS2SpawnEntitiesSrv_SetResponse, "SetResponse" }, // 3474951354
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SpawnEntitiesSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SpawnEntitiesSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SpawnEntitiesSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SpawnEntitiesSrv_Statics::ClassParams = {
	&UROS2SpawnEntitiesSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SpawnEntitiesSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SpawnEntitiesSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SpawnEntitiesSrv()
{
	if (!Z_Registration_Info_UClass_UROS2SpawnEntitiesSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SpawnEntitiesSrv.OuterSingleton, Z_Construct_UClass_UROS2SpawnEntitiesSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SpawnEntitiesSrv.OuterSingleton;
}
UROS2SpawnEntitiesSrv::UROS2SpawnEntitiesSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SpawnEntitiesSrv);
UROS2SpawnEntitiesSrv::~UROS2SpawnEntitiesSrv() {}
// ********** End Class UROS2SpawnEntitiesSrv ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSpawnEntitiesReq::StaticStruct, Z_Construct_UScriptStruct_FROSSpawnEntitiesReq_Statics::NewStructOps, TEXT("ROSSpawnEntitiesReq"), &Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSpawnEntitiesReq), 3992018652U) },
		{ FROSSpawnEntitiesRes::StaticStruct, Z_Construct_UScriptStruct_FROSSpawnEntitiesRes_Statics::NewStructOps, TEXT("ROSSpawnEntitiesRes"), &Z_Registration_Info_UScriptStruct_FROSSpawnEntitiesRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSpawnEntitiesRes), 575994793U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SpawnEntitiesSrv, UROS2SpawnEntitiesSrv::StaticClass, TEXT("UROS2SpawnEntitiesSrv"), &Z_Registration_Info_UClass_UROS2SpawnEntitiesSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SpawnEntitiesSrv), 1234860963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h__Script_rclUE_1793524881(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnEntities_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
