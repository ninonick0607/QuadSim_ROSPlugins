// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/srv/GetInteractiveMarkers.srv - do not modify

#include "Srvs/ROS2GetIMs.h"

const rosidl_service_type_support_t* UROS2GetIMsSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(visualization_msgs, srv, GetInteractiveMarkers);
}

void UROS2GetIMsSrv::Init()
{
    visualization_msgs__srv__GetInteractiveMarkers_Request__init(&GetInteractiveMarkers_req);
    visualization_msgs__srv__GetInteractiveMarkers_Response__init(&GetInteractiveMarkers_res);
}

void UROS2GetIMsSrv::Fini()
{
    visualization_msgs__srv__GetInteractiveMarkers_Request__fini(&GetInteractiveMarkers_req);
    visualization_msgs__srv__GetInteractiveMarkers_Response__fini(&GetInteractiveMarkers_res);
}

void UROS2GetIMsSrv::SetRequest(const FROSGetIMsReq& Request)
{
    Request.SetROS2(GetInteractiveMarkers_req);
}

void UROS2GetIMsSrv::GetRequest(FROSGetIMsReq& Request) const
{
    Request.SetFromROS2(GetInteractiveMarkers_req);
}

void UROS2GetIMsSrv::SetResponse(const FROSGetIMsRes& Response)
{
    Response.SetROS2(GetInteractiveMarkers_res);
}

void UROS2GetIMsSrv::GetResponse(FROSGetIMsRes& Response) const
{
    Response.SetFromROS2(GetInteractiveMarkers_res);
}

void* UROS2GetIMsSrv::GetRequest()
{
    return &GetInteractiveMarkers_req;
}

void* UROS2GetIMsSrv::GetResponse()
{
    return &GetInteractiveMarkers_res;
}

FString UROS2GetIMsSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

FString UROS2GetIMsSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
