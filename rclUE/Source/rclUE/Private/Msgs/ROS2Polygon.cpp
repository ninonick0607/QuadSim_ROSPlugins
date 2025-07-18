// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Polygon.msg - do not modify

#include "Msgs/ROS2Polygon.h"

#include "Kismet/GameplayStatics.h"

void UROS2PolygonMsg::Init()
{
    geometry_msgs__msg__Polygon__init(&polygon_msg);
}

void UROS2PolygonMsg::Fini()
{
    geometry_msgs__msg__Polygon__fini(&polygon_msg);
}

const rosidl_message_type_support_t* UROS2PolygonMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Polygon);
}

void UROS2PolygonMsg::SetMsg(const FROSPolygon& Inputs)
{
    Inputs.SetROS2(polygon_msg);
}

void UROS2PolygonMsg::GetMsg(FROSPolygon& Outputs) const
{
    Outputs.SetFromROS2(polygon_msg);
}

void* UROS2PolygonMsg::Get()
{
    return &polygon_msg;
}

FString UROS2PolygonMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
