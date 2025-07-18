// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Polygon.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/polygon.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Point32.h"
#include "geometry_msgs/msg/detail/point32__functions.h"

// Generated
#include "ROS2Polygon.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPolygon
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSPoint32> Points;

    FROSPolygon()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__Polygon& in_ros_data)
    {
        UROS2Utils::SequenceROSToUEArray<geometry_msgs__msg__Point32, FROSPoint32>(
            in_ros_data.points.data, Points, in_ros_data.points.size);
    }

    void SetROS2(geometry_msgs__msg__Polygon& out_ros_data) const
    {
        if (out_ros_data.points.data)
        {
            geometry_msgs__msg__Point32__Sequence__fini(&out_ros_data.points);
        }
        if (!geometry_msgs__msg__Point32__Sequence__init(&out_ros_data.points, Points.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.points  "));
        }
        UROS2Utils::ArrayUEToROSSequence<geometry_msgs__msg__Point32, FROSPoint32>(Points, out_ros_data.points.data, Points.Num());
    }
};

UCLASS()
class RCLUE_API UROS2PolygonMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPolygon& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPolygon& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__Polygon polygon_msg;
};
