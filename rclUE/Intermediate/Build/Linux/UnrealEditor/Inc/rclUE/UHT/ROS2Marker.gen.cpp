// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rclUE/Public/Msgs/ROS2Marker.h"
#include "rclUE/Public/Msgs/ROS2ColorRGBA.h"
#include "rclUE/Public/Msgs/ROS2CompImg.h"
#include "rclUE/Public/Msgs/ROS2Duration.h"
#include "rclUE/Public/Msgs/ROS2Header.h"
#include "rclUE/Public/Msgs/ROS2MeshFile.h"
#include "rclUE/Public/Msgs/ROS2Pose.h"
#include "rclUE/Public/Msgs/ROS2UVCoordinate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeROS2Marker() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RCLUE_API UClass* Z_Construct_UClass_UROS2GenericMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MarkerMsg();
RCLUE_API UClass* Z_Construct_UClass_UROS2MarkerMsg_NoRegister();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSColorRGBA();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSCompImg();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSDuration();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSHeader();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMarker();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSMeshFile();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSPose();
RCLUE_API UScriptStruct* Z_Construct_UScriptStruct_FROSUVCoordinate();
UPackage* Z_Construct_UPackage__Script_rclUE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FROSMarker ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FROSMarker;
class UScriptStruct* FROSMarker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMarker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FROSMarker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROSMarker, (UObject*)Z_Construct_UPackage__Script_rclUE(), TEXT("ROSMarker"));
	}
	return Z_Registration_Info_UScriptStruct_FROSMarker.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FROSMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ns_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrameLocked_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureResource_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UvCoordinates_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshResource_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshFile_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshUseEmbeddedMaterials_MetaData[] = {
		{ "Category", "ROSMarker" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lifetime;
	static void NewProp_bFrameLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrameLocked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextureResource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UvCoordinates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UvCoordinates;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshResource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshFile;
	static void NewProp_bMeshUseEmbeddedMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshUseEmbeddedMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROSMarker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Header), Z_Construct_UScriptStruct_FROSHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 3543120155
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Ns = { "Ns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Ns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ns_MetaData), NewProp_Ns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Action), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Pose), Z_Construct_UScriptStruct_FROSPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3353158120
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Color), Z_Construct_UScriptStruct_FROSColorRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 3909327250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Lifetime), Z_Construct_UScriptStruct_FROSDuration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) }; // 3152230835
void Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_bFrameLocked_SetBit(void* Obj)
{
	((FROSMarker*)Obj)->bFrameLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_bFrameLocked = { "bFrameLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSMarker), &Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_bFrameLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrameLocked_MetaData), NewProp_bFrameLocked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSColorRGBA, METADATA_PARAMS(0, nullptr) }; // 3909327250
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) }; // 3909327250
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_TextureResource = { "TextureResource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, TextureResource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureResource_MetaData), NewProp_TextureResource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Texture), Z_Construct_UScriptStruct_FROSCompImg, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) }; // 1678591415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_UvCoordinates_Inner = { "UvCoordinates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FROSUVCoordinate, METADATA_PARAMS(0, nullptr) }; // 1480199750
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_UvCoordinates = { "UvCoordinates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, UvCoordinates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UvCoordinates_MetaData), NewProp_UvCoordinates_MetaData) }; // 1480199750
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_MeshResource = { "MeshResource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, MeshResource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshResource_MetaData), NewProp_MeshResource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_MeshFile = { "MeshFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FROSMarker, MeshFile), Z_Construct_UScriptStruct_FROSMeshFile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshFile_MetaData), NewProp_MeshFile_MetaData) }; // 1545143047
void Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_bMeshUseEmbeddedMaterials_SetBit(void* Obj)
{
	((FROSMarker*)Obj)->bMeshUseEmbeddedMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_bMeshUseEmbeddedMaterials = { "bMeshUseEmbeddedMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FROSMarker), &Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_bMeshUseEmbeddedMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshUseEmbeddedMaterials_MetaData), NewProp_bMeshUseEmbeddedMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROSMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Ns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_bFrameLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_TextureResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_UvCoordinates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_UvCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_MeshResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_MeshFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROSMarker_Statics::NewProp_bMeshUseEmbeddedMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROSMarker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
	nullptr,
	&NewStructOps,
	"ROSMarker",
	Z_Construct_UScriptStruct_FROSMarker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMarker_Statics::PropPointers),
	sizeof(FROSMarker),
	alignof(FROSMarker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROSMarker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FROSMarker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FROSMarker()
{
	if (!Z_Registration_Info_UScriptStruct_FROSMarker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FROSMarker.InnerSingleton, Z_Construct_UScriptStruct_FROSMarker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FROSMarker.InnerSingleton;
}
// ********** End ScriptStruct FROSMarker **********************************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_ADD ****************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics
{
	struct ROS2MarkerMsg_eventCONST_ADD_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_ADD_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_ADD", Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::ROS2MarkerMsg_eventCONST_ADD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::ROS2MarkerMsg_eventCONST_ADD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_ADD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_ADD();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_ADD ******************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_ARROW **************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics
{
	struct ROS2MarkerMsg_eventCONST_ARROW_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_ARROW_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_ARROW", Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::ROS2MarkerMsg_eventCONST_ARROW_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::ROS2MarkerMsg_eventCONST_ARROW_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_ARROW)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_ARROW();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_ARROW ****************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_CUBE ***************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics
{
	struct ROS2MarkerMsg_eventCONST_CUBE_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_CUBE_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_CUBE", Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::ROS2MarkerMsg_eventCONST_CUBE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::ROS2MarkerMsg_eventCONST_CUBE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_CUBE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_CUBE();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_CUBE *****************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_CUBE_LIST **********************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics
{
	struct ROS2MarkerMsg_eventCONST_CUBE_LIST_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_CUBE_LIST_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_CUBE_LIST", Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::ROS2MarkerMsg_eventCONST_CUBE_LIST_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::ROS2MarkerMsg_eventCONST_CUBE_LIST_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_CUBE_LIST)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_CUBE_LIST();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_CUBE_LIST ************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_CYLINDER ***********************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics
{
	struct ROS2MarkerMsg_eventCONST_CYLINDER_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_CYLINDER_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_CYLINDER", Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::ROS2MarkerMsg_eventCONST_CYLINDER_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::ROS2MarkerMsg_eventCONST_CYLINDER_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_CYLINDER)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_CYLINDER();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_CYLINDER *************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_DELETE *************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics
{
	struct ROS2MarkerMsg_eventCONST_DELETE_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_DELETE_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_DELETE", Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::ROS2MarkerMsg_eventCONST_DELETE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::ROS2MarkerMsg_eventCONST_DELETE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_DELETE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_DELETE();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_DELETE ***************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_DELETEALL **********************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics
{
	struct ROS2MarkerMsg_eventCONST_DELETEALL_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_DELETEALL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_DELETEALL", Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::ROS2MarkerMsg_eventCONST_DELETEALL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::ROS2MarkerMsg_eventCONST_DELETEALL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_DELETEALL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_DELETEALL();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_DELETEALL ************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_LINE_LIST **********************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics
{
	struct ROS2MarkerMsg_eventCONST_LINE_LIST_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_LINE_LIST_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_LINE_LIST", Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::ROS2MarkerMsg_eventCONST_LINE_LIST_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::ROS2MarkerMsg_eventCONST_LINE_LIST_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_LINE_LIST)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_LINE_LIST();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_LINE_LIST ************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_LINE_STRIP *********************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics
{
	struct ROS2MarkerMsg_eventCONST_LINE_STRIP_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_LINE_STRIP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_LINE_STRIP", Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::ROS2MarkerMsg_eventCONST_LINE_STRIP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::ROS2MarkerMsg_eventCONST_LINE_STRIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_LINE_STRIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_LINE_STRIP();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_LINE_STRIP ***********************************

// ********** Begin Class UROS2MarkerMsg Function CONST_MESH_RESOURCE ******************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics
{
	struct ROS2MarkerMsg_eventCONST_MESH_RESOURCE_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_MESH_RESOURCE_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_MESH_RESOURCE", Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::ROS2MarkerMsg_eventCONST_MESH_RESOURCE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::ROS2MarkerMsg_eventCONST_MESH_RESOURCE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_MESH_RESOURCE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_MESH_RESOURCE();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_MESH_RESOURCE ********************************

// ********** Begin Class UROS2MarkerMsg Function CONST_MODIFY *************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics
{
	struct ROS2MarkerMsg_eventCONST_MODIFY_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_MODIFY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_MODIFY", Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::ROS2MarkerMsg_eventCONST_MODIFY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::ROS2MarkerMsg_eventCONST_MODIFY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_MODIFY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_MODIFY();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_MODIFY ***************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_POINTS *************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics
{
	struct ROS2MarkerMsg_eventCONST_POINTS_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_POINTS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_POINTS", Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::ROS2MarkerMsg_eventCONST_POINTS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::ROS2MarkerMsg_eventCONST_POINTS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_POINTS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_POINTS();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_POINTS ***************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_SPHERE *************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics
{
	struct ROS2MarkerMsg_eventCONST_SPHERE_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_SPHERE_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_SPHERE", Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::ROS2MarkerMsg_eventCONST_SPHERE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::ROS2MarkerMsg_eventCONST_SPHERE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_SPHERE)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_SPHERE();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_SPHERE ***************************************

// ********** Begin Class UROS2MarkerMsg Function CONST_SPHERE_LIST ********************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics
{
	struct ROS2MarkerMsg_eventCONST_SPHERE_LIST_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_SPHERE_LIST_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_SPHERE_LIST", Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::ROS2MarkerMsg_eventCONST_SPHERE_LIST_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::ROS2MarkerMsg_eventCONST_SPHERE_LIST_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_SPHERE_LIST)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_SPHERE_LIST();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_SPHERE_LIST **********************************

// ********** Begin Class UROS2MarkerMsg Function CONST_TEXT_VIEW_FACING ***************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics
{
	struct ROS2MarkerMsg_eventCONST_TEXT_VIEW_FACING_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_TEXT_VIEW_FACING_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_TEXT_VIEW_FACING", Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::ROS2MarkerMsg_eventCONST_TEXT_VIEW_FACING_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::ROS2MarkerMsg_eventCONST_TEXT_VIEW_FACING_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_TEXT_VIEW_FACING)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_TEXT_VIEW_FACING();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_TEXT_VIEW_FACING *****************************

// ********** Begin Class UROS2MarkerMsg Function CONST_TRIANGLE_LIST ******************************
struct Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics
{
	struct ROS2MarkerMsg_eventCONST_TRIANGLE_LIST_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventCONST_TRIANGLE_LIST_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "CONST_TRIANGLE_LIST", Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::ROS2MarkerMsg_eventCONST_TRIANGLE_LIST_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::ROS2MarkerMsg_eventCONST_TRIANGLE_LIST_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execCONST_TRIANGLE_LIST)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UROS2MarkerMsg::CONST_TRIANGLE_LIST();
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function CONST_TRIANGLE_LIST ********************************

// ********** Begin Class UROS2MarkerMsg Function GetMsg *******************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics
{
	struct ROS2MarkerMsg_eventGetMsg_Parms
	{
		FROSMarker Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventGetMsg_Parms, Output), Z_Construct_UScriptStruct_FROSMarker, METADATA_PARAMS(0, nullptr) }; // 158721406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "GetMsg", Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::ROS2MarkerMsg_eventGetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::ROS2MarkerMsg_eventGetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_GetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_GetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execGetMsg)
{
	P_GET_STRUCT_REF(FROSMarker,Z_Param_Out_Output);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMsg(Z_Param_Out_Output);
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function GetMsg *********************************************

// ********** Begin Class UROS2MarkerMsg Function SetMsg *******************************************
struct Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics
{
	struct ROS2MarkerMsg_eventSetMsg_Parms
	{
		FROSMarker Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ROS2MarkerMsg_eventSetMsg_Parms, Input), Z_Construct_UScriptStruct_FROSMarker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 158721406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UROS2MarkerMsg, nullptr, "SetMsg", Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::ROS2MarkerMsg_eventSetMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::ROS2MarkerMsg_eventSetMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UROS2MarkerMsg_SetMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UROS2MarkerMsg_SetMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UROS2MarkerMsg::execSetMsg)
{
	P_GET_STRUCT_REF(FROSMarker,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMsg(Z_Param_Out_Input);
	P_NATIVE_END;
}
// ********** End Class UROS2MarkerMsg Function SetMsg *********************************************

// ********** Begin Class UROS2MarkerMsg ***********************************************************
void UROS2MarkerMsg::StaticRegisterNativesUROS2MarkerMsg()
{
	UClass* Class = UROS2MarkerMsg::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CONST_ADD", &UROS2MarkerMsg::execCONST_ADD },
		{ "CONST_ARROW", &UROS2MarkerMsg::execCONST_ARROW },
		{ "CONST_CUBE", &UROS2MarkerMsg::execCONST_CUBE },
		{ "CONST_CUBE_LIST", &UROS2MarkerMsg::execCONST_CUBE_LIST },
		{ "CONST_CYLINDER", &UROS2MarkerMsg::execCONST_CYLINDER },
		{ "CONST_DELETE", &UROS2MarkerMsg::execCONST_DELETE },
		{ "CONST_DELETEALL", &UROS2MarkerMsg::execCONST_DELETEALL },
		{ "CONST_LINE_LIST", &UROS2MarkerMsg::execCONST_LINE_LIST },
		{ "CONST_LINE_STRIP", &UROS2MarkerMsg::execCONST_LINE_STRIP },
		{ "CONST_MESH_RESOURCE", &UROS2MarkerMsg::execCONST_MESH_RESOURCE },
		{ "CONST_MODIFY", &UROS2MarkerMsg::execCONST_MODIFY },
		{ "CONST_POINTS", &UROS2MarkerMsg::execCONST_POINTS },
		{ "CONST_SPHERE", &UROS2MarkerMsg::execCONST_SPHERE },
		{ "CONST_SPHERE_LIST", &UROS2MarkerMsg::execCONST_SPHERE_LIST },
		{ "CONST_TEXT_VIEW_FACING", &UROS2MarkerMsg::execCONST_TEXT_VIEW_FACING },
		{ "CONST_TRIANGLE_LIST", &UROS2MarkerMsg::execCONST_TRIANGLE_LIST },
		{ "GetMsg", &UROS2MarkerMsg::execGetMsg },
		{ "SetMsg", &UROS2MarkerMsg::execSetMsg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UROS2MarkerMsg;
UClass* UROS2MarkerMsg::GetPrivateStaticClass()
{
	using TClass = UROS2MarkerMsg;
	if (!Z_Registration_Info_UClass_UROS2MarkerMsg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ROS2MarkerMsg"),
			Z_Registration_Info_UClass_UROS2MarkerMsg.InnerSingleton,
			StaticRegisterNativesUROS2MarkerMsg,
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
	return Z_Registration_Info_UClass_UROS2MarkerMsg.InnerSingleton;
}
UClass* Z_Construct_UClass_UROS2MarkerMsg_NoRegister()
{
	return UROS2MarkerMsg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UROS2MarkerMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Msgs/ROS2Marker.h" },
		{ "ModuleRelativePath", "Public/Msgs/ROS2Marker.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_ADD, "CONST_ADD" }, // 1288858951
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_ARROW, "CONST_ARROW" }, // 2633297562
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE, "CONST_CUBE" }, // 2907341361
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_CUBE_LIST, "CONST_CUBE_LIST" }, // 838002675
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_CYLINDER, "CONST_CYLINDER" }, // 2012554983
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETE, "CONST_DELETE" }, // 3299803446
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_DELETEALL, "CONST_DELETEALL" }, // 1012823727
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_LIST, "CONST_LINE_LIST" }, // 1578422690
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_LINE_STRIP, "CONST_LINE_STRIP" }, // 2746772536
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_MESH_RESOURCE, "CONST_MESH_RESOURCE" }, // 2591823598
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_MODIFY, "CONST_MODIFY" }, // 4093923776
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_POINTS, "CONST_POINTS" }, // 3663551335
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE, "CONST_SPHERE" }, // 2786759369
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_SPHERE_LIST, "CONST_SPHERE_LIST" }, // 1531394611
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_TEXT_VIEW_FACING, "CONST_TEXT_VIEW_FACING" }, // 838045685
		{ &Z_Construct_UFunction_UROS2MarkerMsg_CONST_TRIANGLE_LIST, "CONST_TRIANGLE_LIST" }, // 2089184425
		{ &Z_Construct_UFunction_UROS2MarkerMsg_GetMsg, "GetMsg" }, // 1015864485
		{ &Z_Construct_UFunction_UROS2MarkerMsg_SetMsg, "SetMsg" }, // 1194695894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UROS2MarkerMsg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UROS2MarkerMsg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UROS2GenericMsg,
	(UObject* (*)())Z_Construct_UPackage__Script_rclUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MarkerMsg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UROS2MarkerMsg_Statics::ClassParams = {
	&UROS2MarkerMsg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UROS2MarkerMsg_Statics::Class_MetaDataParams), Z_Construct_UClass_UROS2MarkerMsg_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UROS2MarkerMsg()
{
	if (!Z_Registration_Info_UClass_UROS2MarkerMsg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UROS2MarkerMsg.OuterSingleton, Z_Construct_UClass_UROS2MarkerMsg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UROS2MarkerMsg.OuterSingleton;
}
UROS2MarkerMsg::UROS2MarkerMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UROS2MarkerMsg);
UROS2MarkerMsg::~UROS2MarkerMsg() {}
// ********** End Class UROS2MarkerMsg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h__Script_rclUE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FROSMarker::StaticStruct, Z_Construct_UScriptStruct_FROSMarker_Statics::NewStructOps, TEXT("ROSMarker"), &Z_Registration_Info_UScriptStruct_FROSMarker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROSMarker), 158721406U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UROS2MarkerMsg, UROS2MarkerMsg::StaticClass, TEXT("UROS2MarkerMsg"), &Z_Registration_Info_UClass_UROS2MarkerMsg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UROS2MarkerMsg), 1722127305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h__Script_rclUE_1713997618(TEXT("/Script/rclUE"),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h__Script_rclUE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h__Script_rclUE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h__Script_rclUE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_Quadcopter_Unreal_QuadSim_Plugins_rclUE_Source_rclUE_Public_Msgs_ROS2Marker_h__Script_rclUE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
