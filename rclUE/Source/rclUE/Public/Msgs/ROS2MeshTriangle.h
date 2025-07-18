// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from shape_msgs/msg/MeshTriangle.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "shape_msgs/msg/mesh_triangle.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2MeshTriangle.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMeshTriangle
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    TArray<unsigned int> VertexIndices;

    FROSMeshTriangle()
    {
        VertexIndices.SetNumZeroed(3);
    }

    void SetFromROS2(const shape_msgs__msg__MeshTriangle& in_ros_data)
    {
        UROS2Utils::SequenceROSToUEArray<unsigned int, unsigned int>(in_ros_data.vertex_indices, VertexIndices, 3);
    }

    void SetROS2(shape_msgs__msg__MeshTriangle& out_ros_data) const
    {
        UROS2Utils::ArrayUEToROSSequence<unsigned int, unsigned int>(VertexIndices, out_ros_data.vertex_indices, 3);
    }
};

UCLASS()
class RCLUE_API UROS2MeshTriangleMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMeshTriangle& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMeshTriangle& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    shape_msgs__msg__MeshTriangle mesh_triangle_msg;
};
