// Generated by gencpp from file deepracer_msgs/SetLinkStates.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETLINKSTATES_H
#define DEEPRACER_MSGS_MESSAGE_SETLINKSTATES_H

#include <ros/service_traits.h>


#include <deepracer_msgs/SetLinkStatesRequest.h>
#include <deepracer_msgs/SetLinkStatesResponse.h>


namespace deepracer_msgs
{

struct SetLinkStates
{

typedef SetLinkStatesRequest Request;
typedef SetLinkStatesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetLinkStates
} // namespace deepracer_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_msgs::SetLinkStates > {
  static const char* value()
  {
    return "39f6392717f5d15076c1496f93594e13";
  }

  static const char* value(const ::deepracer_msgs::SetLinkStates&) { return value(); }
};

template<>
struct DataType< ::deepracer_msgs::SetLinkStates > {
  static const char* value()
  {
    return "deepracer_msgs/SetLinkStates";
  }

  static const char* value(const ::deepracer_msgs::SetLinkStates&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_msgs::SetLinkStatesRequest> should match 
// service_traits::MD5Sum< ::deepracer_msgs::SetLinkStates > 
template<>
struct MD5Sum< ::deepracer_msgs::SetLinkStatesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetLinkStates >::value();
  }
  static const char* value(const ::deepracer_msgs::SetLinkStatesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetLinkStatesRequest> should match 
// service_traits::DataType< ::deepracer_msgs::SetLinkStates > 
template<>
struct DataType< ::deepracer_msgs::SetLinkStatesRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetLinkStates >::value();
  }
  static const char* value(const ::deepracer_msgs::SetLinkStatesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_msgs::SetLinkStatesResponse> should match 
// service_traits::MD5Sum< ::deepracer_msgs::SetLinkStates > 
template<>
struct MD5Sum< ::deepracer_msgs::SetLinkStatesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetLinkStates >::value();
  }
  static const char* value(const ::deepracer_msgs::SetLinkStatesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetLinkStatesResponse> should match 
// service_traits::DataType< ::deepracer_msgs::SetLinkStates > 
template<>
struct DataType< ::deepracer_msgs::SetLinkStatesResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetLinkStates >::value();
  }
  static const char* value(const ::deepracer_msgs::SetLinkStatesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETLINKSTATES_H
