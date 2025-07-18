// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from pcl_msgs/msg/ModelCoefficients.msg - do not modify

#include "Msgs/ROS2ModelCoefficients.h"

#include "Kismet/GameplayStatics.h"

void UROS2ModelCoefficientsMsg::Init()
{
    pcl_msgs__msg__ModelCoefficients__init(&model_coefficients_msg);
}

void UROS2ModelCoefficientsMsg::Fini()
{
    pcl_msgs__msg__ModelCoefficients__fini(&model_coefficients_msg);
}

const rosidl_message_type_support_t* UROS2ModelCoefficientsMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(pcl_msgs, msg, ModelCoefficients);
}

void UROS2ModelCoefficientsMsg::SetMsg(const FROSModelCoefficients& Inputs)
{
    Inputs.SetROS2(model_coefficients_msg);
}

void UROS2ModelCoefficientsMsg::GetMsg(FROSModelCoefficients& Outputs) const
{
    Outputs.SetFromROS2(model_coefficients_msg);
}

void* UROS2ModelCoefficientsMsg::Get()
{
    return &model_coefficients_msg;
}

FString UROS2ModelCoefficientsMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
