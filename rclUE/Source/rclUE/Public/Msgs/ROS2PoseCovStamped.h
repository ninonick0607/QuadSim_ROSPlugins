// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/PoseWithCovarianceStamped.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/pose_with_covariance_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2PoseCov.h"

// Generated
#include "ROS2PoseCovStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPoseCovStamped
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSPoseCov Pose;

    FROSPoseCovStamped()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__PoseWithCovarianceStamped& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Pose.SetFromROS2(in_ros_data.pose);
    }

    void SetROS2(geometry_msgs__msg__PoseWithCovarianceStamped& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        Pose.SetROS2(out_ros_data.pose);
    }
};

UCLASS()
class RCLUE_API UROS2PoseCovStampedMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPoseCovStamped& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPoseCovStamped& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__PoseWithCovarianceStamped pose_with_covariance_stamped_msg;
};
