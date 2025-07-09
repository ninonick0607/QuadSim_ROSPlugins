// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Srvs/ROS2SpawnWorld.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2SpawnWorld() {}

// ********** Begin Cross Module References ********************************************************
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnWorldSrv();
RCLUE_API UClass* Z_Construct_UClass_UROS2SpawnWorldSrv_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnWorldReq();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnWorldRes();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSSpawnWorldReq *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSpawnWorldReq;
class UScriptStruct* FROSSpawnWorldReq::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnWorldReq.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSpawnWorldReq.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSpawnWorldReq, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSpawnWorldReq"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnWorldReq.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// potential problem: if this struct is defined multiple times!\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "potential problem: if this struct is defined multiple times!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldModel_MetaData[] = {
		{ "Category", "ROSSpawnWorldReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldInstanceName_MetaData[] = {
		{ "Category", "ROSSpawnWorldReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSSpawnWorldReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonParameters_MetaData[] = {
		{ "Category", "ROSSpawnWorldReq" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSpawnWorldReq>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewProp_WorldModel = { "WorldModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnWorldReq, WorldModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldModel_MetaData), NewProp_WorldModel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewProp_WorldInstanceName = { "WorldInstanceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnWorldReq, WorldInstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldInstanceName_MetaData), NewProp_WorldInstanceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnWorldReq, Pose), Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3353158120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewProp_JsonParameters = { "JsonParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnWorldReq, JsonParameters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonParameters_MetaData), NewProp_JsonParameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewProp_WorldModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewProp_WorldInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewProp_JsonParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSpawnWorldReq",
	Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::PropPointers),
	sizeof(FROSSpawnWorldReq),
	alignof(FROSSpawnWorldReq),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnWorldReq()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnWorldReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSpawnWorldReq.InnerSingleton, Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnWorldReq.InnerSingleton;
}
// ********** End ScriptStruct FROSSpawnWorldReq ***************************************************

// ********** Begin ScriptStruct FROSSpawnWorldRes *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSSpawnWorldRes;
class UScriptStruct* FROSSpawnWorldRes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnWorldRes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSSpawnWorldRes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSSpawnWorldRes, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSSpawnWorldRes"));
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnWorldRes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "ROSSpawnWorldRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusMessage_MetaData[] = {
		{ "Category", "ROSSpawnWorldRes" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatusMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSSpawnWorldRes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FROSSpawnWorldRes*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSSpawnWorldRes), &Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::NewProp_StatusMessage = { "StatusMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSSpawnWorldRes, StatusMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusMessage_MetaData), NewProp_StatusMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::NewProp_StatusMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSSpawnWorldRes",
	Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::PropPointers),
	sizeof(FROSSpawnWorldRes),
	alignof(FROSSpawnWorldRes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSSpawnWorldRes()
{
	if (!Z_Registration_Info_UScriptStruct_FROSSpawnWorldRes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSSpawnWorldRes.InnerSingleton, Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSSpawnWorldRes.InnerSingleton;
}
// ********** End ScriptStruct FROSSpawnWorldRes ***************************************************

// ********** Begin Class UROS2SpawnWorldSrv Function Fini *****************************************
struct Z_Construct_UFunction_UROS2SpawnWorldSrv_Fini_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnWorldSrv_Fini_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnWorldSrv, nullptr, "Fini", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_Fini_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnWorldSrv_Fini_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SpawnWorldSrv_Fini()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnWorldSrv_Fini_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnWorldSrv::execFini)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fini();
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnWorldSrv Function Fini *******************************************

// ********** Begin Class UROS2SpawnWorldSrv Function GetRequest ***********************************
struct Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics
{
	struct ROS2SpawnWorldSrv_eventGetRequest_Parms
	{
		FROSSpawnWorldReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by service" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnWorldSrv_eventGetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSpawnWorldReq, METADATA_PARAMS(0, nullptr) }; // 830519459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnWorldSrv, nullptr, "GetRequest", Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::ROS2SpawnWorldSrv_eventGetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::ROS2SpawnWorldSrv_eventGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnWorldSrv::execGetRequest)
{
	P_GET_STRUCT_REF(FROSSpawnWorldReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnWorldSrv Function GetRequest *************************************

// ********** Begin Class UROS2SpawnWorldSrv Function GetResponse **********************************
struct Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics
{
	struct ROS2SpawnWorldSrv_eventGetResponse_Parms
	{
		FROSSpawnWorldRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used by client" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnWorldSrv_eventGetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSpawnWorldRes, METADATA_PARAMS(0, nullptr) }; // 1794473470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnWorldSrv, nullptr, "GetResponse", Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::ROS2SpawnWorldSrv_eventGetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::ROS2SpawnWorldSrv_eventGetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnWorldSrv::execGetResponse)
{
	P_GET_STRUCT_REF(FROSSpawnWorldRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnWorldSrv Function GetResponse ************************************

// ********** Begin Class UROS2SpawnWorldSrv Function Init *****************************************
struct Z_Construct_UFunction_UROS2SpawnWorldSrv_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnWorldSrv_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnWorldSrv, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnWorldSrv_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UROS2SpawnWorldSrv_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnWorldSrv_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnWorldSrv::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnWorldSrv Function Init *******************************************

// ********** Begin Class UROS2SpawnWorldSrv Function SetRequest ***********************************
struct Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics
{
	struct ROS2SpawnWorldSrv_eventSetRequest_Parms
	{
		FROSSpawnWorldReq Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by client\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnWorldSrv_eventSetRequest_Parms, Request), Z_Construct_UScriptStruct_FROSSpawnWorldReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 830519459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnWorldSrv, nullptr, "SetRequest", Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::ROS2SpawnWorldSrv_eventSetRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::ROS2SpawnWorldSrv_eventSetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnWorldSrv::execSetRequest)
{
	P_GET_STRUCT_REF(FROSSpawnWorldReq,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequest(Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnWorldSrv Function SetRequest *************************************

// ********** Begin Class UROS2SpawnWorldSrv Function SetResponse **********************************
struct Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics
{
	struct ROS2SpawnWorldSrv_eventSetResponse_Parms
	{
		FROSSpawnWorldRes Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used by service\n" },
#endif
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2SpawnWorldSrv_eventSetResponse_Parms, Response), Z_Construct_UScriptStruct_FROSSpawnWorldRes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1794473470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2SpawnWorldSrv, nullptr, "SetResponse", Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::ROS2SpawnWorldSrv_eventSetResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::ROS2SpawnWorldSrv_eventSetResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2SpawnWorldSrv::execSetResponse)
{
	P_GET_STRUCT_REF(FROSSpawnWorldRes,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponse(Z_Param_Out_Response);
	P_NATIVE_END;
}
// ********** End Class UROS2SpawnWorldSrv Function SetResponse ************************************

// ********** Begin Class UROS2SpawnWorldSrv *******************************************************
void UROS2SpawnWorldSrv::StaticRegisterNativesUROS2SpawnWorldSrv()
{
	UClass* Class = UROS2SpawnWorldSrv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fini", &UROS2SpawnWorldSrv::execFini },
		{ "GetRequest", &UROS2SpawnWorldSrv::execGetRequest },
		{ "GetResponse", &UROS2SpawnWorldSrv::execGetResponse },
		{ "Init", &UROS2SpawnWorldSrv::execInit },
		{ "SetRequest", &UROS2SpawnWorldSrv::execSetRequest },
		{ "SetResponse", &UROS2SpawnWorldSrv::execSetResponse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2SpawnWorldSrv;
UClass* UROS2SpawnWorldSrv::GetPrivateStaticClass()
{
	using TClass = UROS2SpawnWorldSrv;
	if (!Z_Registration_Info_UClass_UROS2SpawnWorldSrv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2SpawnWorldSrv"),
			Z_Registration_Info_UClass_UROS2SpawnWorldSrv.InnerSingleton,
			StaticRegisterNativesUROS2SpawnWorldSrv,
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
	return Z_Registration_Info_UClass_UROS2SpawnWorldSrv.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2SpawnWorldSrv_NoRegister()
{
	return UROS2SpawnWorldSrv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2SpawnWorldSrv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Srvs/ROS2SpawnWorld.h" },
		{ "ModuleRelativePath", "Public/Srvs/ROS2SpawnWorld.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2SpawnWorldSrv_Fini, "Fini" }, // 2930168759
		{ &Z_Construct_UFunction_UROS2SpawnWorldSrv_GetRequest, "GetRequest" }, // 289588582
		{ &Z_Construct_UFunction_UROS2SpawnWorldSrv_GetResponse, "GetResponse" }, // 4074271882
		{ &Z_Construct_UFunction_UROS2SpawnWorldSrv_Init, "Init" }, // 3555689664
		{ &Z_Construct_UFunction_UROS2SpawnWorldSrv_SetRequest, "SetRequest" }, // 3378101971
		{ &Z_Construct_UFunction_UROS2SpawnWorldSrv_SetResponse, "SetResponse" }, // 4154175777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2SpawnWorldSrv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2SpawnWorldSrv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericSrv,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SpawnWorldSrv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2SpawnWorldSrv_Statics::ClassParams = {
	&UROS2SpawnWorldSrv::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2SpawnWorldSrv_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2SpawnWorldSrv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2SpawnWorldSrv()
{
	if (!Z_Registration_Info_UClass_UROS2SpawnWorldSrv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2SpawnWorldSrv.OuterSingleton, Z_Construct_UClass_UROS2SpawnWorldSrv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2SpawnWorldSrv.OuterSingleton;
}
UROS2SpawnWorldSrv::UROS2SpawnWorldSrv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2SpawnWorldSrv);
UROS2SpawnWorldSrv::~UROS2SpawnWorldSrv() {}
// ********** End Class UROS2SpawnWorldSrv *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSSpawnWorldReq::StaticStruct, Z_Construct_UScriptStruct_FROSSpawnWorldReq_Statics::NewStructOps, TEXT("ROSSpawnWorldReq"), &Z_Registration_Info_UScriptStruct_FROSSpawnWorldReq, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSpawnWorldReq), 830519459U) },
		{ FROSSpawnWorldRes::StaticStruct, Z_Construct_UScriptStruct_FROSSpawnWorldRes_Statics::NewStructOps, TEXT("ROSSpawnWorldRes"), &Z_Registration_Info_UScriptStruct_FROSSpawnWorldRes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSSpawnWorldRes), 1794473470U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2SpawnWorldSrv, UROS2SpawnWorldSrv::StaticClass, TEXT("UROS2SpawnWorldSrv"), &Z_Registration_Info_UClass_UROS2SpawnWorldSrv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2SpawnWorldSrv), 2587220661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h__Script_rclUE_2159645026(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Srvs_ROS2SpawnWorld_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
