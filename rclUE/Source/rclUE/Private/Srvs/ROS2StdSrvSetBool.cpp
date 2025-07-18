// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from std_srvs/srv/SetBool.srv - do not modify

#include "Srvs/ROS2StdSrvSetBool.h"

const rosidl_service_type_support_t* UROS2StdSrvSetBoolSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(std_srvs, srv, SetBool);
}

void UROS2StdSrvSetBoolSrv::Init()
{
    std_srvs__srv__SetBool_Request__init(&SetBool_req);
    std_srvs__srv__SetBool_Response__init(&SetBool_res);
}

void UROS2StdSrvSetBoolSrv::Fini()
{
    std_srvs__srv__SetBool_Request__fini(&SetBool_req);
    std_srvs__srv__SetBool_Response__fini(&SetBool_res);
}

void UROS2StdSrvSetBoolSrv::SetRequest(const FROSStdSrvSetBoolReq& Request)
{
    Request.SetROS2(SetBool_req);
}

void UROS2StdSrvSetBoolSrv::GetRequest(FROSStdSrvSetBoolReq& Request) const
{
    Request.SetFromROS2(SetBool_req);
}

void UROS2StdSrvSetBoolSrv::SetResponse(const FROSStdSrvSetBoolRes& Response)
{
    Response.SetROS2(SetBool_res);
}

void UROS2StdSrvSetBoolSrv::GetResponse(FROSStdSrvSetBoolRes& Response) const
{
    Response.SetFromROS2(SetBool_res);
}

void* UROS2StdSrvSetBoolSrv::GetRequest()
{
    return &SetBool_req;
}

void* UROS2StdSrvSetBoolSrv::GetResponse()
{
    return &SetBool_res;
}

FString UROS2StdSrvSetBoolSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

FString UROS2StdSrvSetBoolSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
