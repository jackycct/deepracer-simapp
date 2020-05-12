// Generated by gencpp from file deepracer_msgs/SetVisualMeshes.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETVISUALMESHES_H
#define DEEPRACER_MSGS_MESSAGE_SETVISUALMESHES_H

#include <ros/service_traits.h>


#include <deepracer_msgs/SetVisualMeshesRequest.h>
#include <deepracer_msgs/SetVisualMeshesResponse.h>


namespace deepracer_msgs
{

struct SetVisualMeshes
{

typedef SetVisualMeshesRequest Request;
typedef SetVisualMeshesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetVisualMeshes
} // namespace deepracer_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_msgs::SetVisualMeshes > {
  static const char* value()
  {
    return "a09fb2814d823a8b3a634fc955be2d1a";
  }

  static const char* value(const ::deepracer_msgs::SetVisualMeshes&) { return value(); }
};

template<>
struct DataType< ::deepracer_msgs::SetVisualMeshes > {
  static const char* value()
  {
    return "deepracer_msgs/SetVisualMeshes";
  }

  static const char* value(const ::deepracer_msgs::SetVisualMeshes&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_msgs::SetVisualMeshesRequest> should match 
// service_traits::MD5Sum< ::deepracer_msgs::SetVisualMeshes > 
template<>
struct MD5Sum< ::deepracer_msgs::SetVisualMeshesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetVisualMeshes >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualMeshesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetVisualMeshesRequest> should match 
// service_traits::DataType< ::deepracer_msgs::SetVisualMeshes > 
template<>
struct DataType< ::deepracer_msgs::SetVisualMeshesRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetVisualMeshes >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualMeshesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_msgs::SetVisualMeshesResponse> should match 
// service_traits::MD5Sum< ::deepracer_msgs::SetVisualMeshes > 
template<>
struct MD5Sum< ::deepracer_msgs::SetVisualMeshesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetVisualMeshes >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualMeshesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetVisualMeshesResponse> should match 
// service_traits::DataType< ::deepracer_msgs::SetVisualMeshes > 
template<>
struct DataType< ::deepracer_msgs::SetVisualMeshesResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetVisualMeshes >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualMeshesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETVISUALMESHES_H
