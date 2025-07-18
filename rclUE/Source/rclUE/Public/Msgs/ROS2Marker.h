// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/Marker.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/marker.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2ColorRGBA.h"
#include "Msgs/ROS2CompImg.h"
#include "Msgs/ROS2Duration.h"
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2MeshFile.h"
#include "Msgs/ROS2Pose.h"
#include "Msgs/ROS2UVCoordinate.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/color_rgba__functions.h"
#include "visualization_msgs/msg/detail/uv_coordinate__functions.h"

// Generated
#include "ROS2Marker.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMarker
{
    GENERATED_BODY()

public:
    static constexpr int ARROW = 0;
    static constexpr int CUBE = 1;
    static constexpr int SPHERE = 2;
    static constexpr int CYLINDER = 3;
    static constexpr int LINE_STRIP = 4;
    static constexpr int LINE_LIST = 5;
    static constexpr int CUBE_LIST = 6;
    static constexpr int SPHERE_LIST = 7;
    static constexpr int POINTS = 8;
    static constexpr int TEXT_VIEW_FACING = 9;
    static constexpr int MESH_RESOURCE = 10;
    static constexpr int TRIANGLE_LIST = 11;
    static constexpr int ADD = 0;
    static constexpr int MODIFY = 0;
    static constexpr int DELETE = 2;
    static constexpr int DELETEALL = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Ns;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Id = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Type = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Action = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSPose Pose;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Scale = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSColorRGBA Color;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSDuration Lifetime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bFrameLocked = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> Points;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSColorRGBA> Colors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TextureResource;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSCompImg Texture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSUVCoordinate> UvCoordinates;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Text;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString MeshResource;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSMeshFile MeshFile;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bMeshUseEmbeddedMaterials = false;

    FROSMarker()
    {
    }

    void SetFromROS2(const visualization_msgs__msg__Marker& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Ns = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.ns);

        Id = in_ros_data.id;

        Type = in_ros_data.type;

        Action = in_ros_data.action;

        Pose.SetFromROS2(in_ros_data.pose);

        Scale = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.scale);

        Color.SetFromROS2(in_ros_data.color);

        Lifetime.SetFromROS2(in_ros_data.lifetime);

        bFrameLocked = in_ros_data.frame_locked;

        UROS2Utils::VectorSequenceROSToUEArray<geometry_msgs__msg__Point>(in_ros_data.points.data, Points, in_ros_data.points.size);

        UROS2Utils::SequenceROSToUEArray<std_msgs__msg__ColorRGBA, FROSColorRGBA>(
            in_ros_data.colors.data, Colors, in_ros_data.colors.size);

        TextureResource = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.texture_resource);

        Texture.SetFromROS2(in_ros_data.texture);

        UROS2Utils::SequenceROSToUEArray<visualization_msgs__msg__UVCoordinate, FROSUVCoordinate>(
            in_ros_data.uv_coordinates.data, UvCoordinates, in_ros_data.uv_coordinates.size);

        Text = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.text);

        MeshResource = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.mesh_resource);

        MeshFile.SetFromROS2(in_ros_data.mesh_file);

        bMeshUseEmbeddedMaterials = in_ros_data.mesh_use_embedded_materials;
    }

    void SetROS2(visualization_msgs__msg__Marker& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        UROS2Utils::StringUEToROS(Ns, out_ros_data.ns);

        out_ros_data.id = Id;

        out_ros_data.type = Type;

        out_ros_data.action = Action;

        Pose.SetROS2(out_ros_data.pose);

        out_ros_data.scale = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(Scale);

        Color.SetROS2(out_ros_data.color);

        Lifetime.SetROS2(out_ros_data.lifetime);

        out_ros_data.frame_locked = bFrameLocked;

        if (out_ros_data.points.data)
        {
            geometry_msgs__msg__Point__Sequence__fini(&out_ros_data.points);
        }
        if (!geometry_msgs__msg__Point__Sequence__init(&out_ros_data.points, Points.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.points  "));
        }
        UROS2Utils::VectorArrayUEToROSSequence<geometry_msgs__msg__Point>(Points, out_ros_data.points.data, Points.Num());

        if (out_ros_data.colors.data)
        {
            std_msgs__msg__ColorRGBA__Sequence__fini(&out_ros_data.colors);
        }
        if (!std_msgs__msg__ColorRGBA__Sequence__init(&out_ros_data.colors, Colors.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.colors  "));
        }
        UROS2Utils::ArrayUEToROSSequence<std_msgs__msg__ColorRGBA, FROSColorRGBA>(Colors, out_ros_data.colors.data, Colors.Num());

        UROS2Utils::StringUEToROS(TextureResource, out_ros_data.texture_resource);

        Texture.SetROS2(out_ros_data.texture);

        if (out_ros_data.uv_coordinates.data)
        {
            visualization_msgs__msg__UVCoordinate__Sequence__fini(&out_ros_data.uv_coordinates);
        }
        if (!visualization_msgs__msg__UVCoordinate__Sequence__init(&out_ros_data.uv_coordinates, UvCoordinates.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.uv_coordinates  "));
        }
        UROS2Utils::ArrayUEToROSSequence<visualization_msgs__msg__UVCoordinate, FROSUVCoordinate>(
            UvCoordinates, out_ros_data.uv_coordinates.data, UvCoordinates.Num());

        UROS2Utils::StringUEToROS(Text, out_ros_data.text);

        UROS2Utils::StringUEToROS(MeshResource, out_ros_data.mesh_resource);

        MeshFile.SetROS2(out_ros_data.mesh_file);

        out_ros_data.mesh_use_embedded_materials = bMeshUseEmbeddedMaterials;
    }
};

UCLASS()
class RCLUE_API UROS2MarkerMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMarker& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMarker& Output) const;

    virtual void* Get() override;

    UFUNCTION(BlueprintCallable)
    static int CONST_ARROW()
    {
        return FROSMarker::ARROW;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_CUBE()
    {
        return FROSMarker::CUBE;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_SPHERE()
    {
        return FROSMarker::SPHERE;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_CYLINDER()
    {
        return FROSMarker::CYLINDER;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_LINE_STRIP()
    {
        return FROSMarker::LINE_STRIP;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_LINE_LIST()
    {
        return FROSMarker::LINE_LIST;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_CUBE_LIST()
    {
        return FROSMarker::CUBE_LIST;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_SPHERE_LIST()
    {
        return FROSMarker::SPHERE_LIST;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_POINTS()
    {
        return FROSMarker::POINTS;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_TEXT_VIEW_FACING()
    {
        return FROSMarker::TEXT_VIEW_FACING;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_MESH_RESOURCE()
    {
        return FROSMarker::MESH_RESOURCE;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_TRIANGLE_LIST()
    {
        return FROSMarker::TRIANGLE_LIST;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_ADD()
    {
        return FROSMarker::ADD;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_MODIFY()
    {
        return FROSMarker::MODIFY;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_DELETE()
    {
        return FROSMarker::DELETE;
    }
    UFUNCTION(BlueprintCallable)
    static int CONST_DELETEALL()
    {
        return FROSMarker::DELETEALL;
    }

private:
    virtual FString MsgToString() const override;

    visualization_msgs__msg__Marker marker_msg;
};
