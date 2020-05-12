// Generated by gencpp from file deepracer_msgs/SetVisualColor.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETVISUALCOLOR_H
#define DEEPRACER_MSGS_MESSAGE_SETVISUALCOLOR_H

#include <ros/service_traits.h>


#include <deepracer_msgs/SetVisualColorRequest.h>
#include <deepracer_msgs/SetVisualColorResponse.h>


namespace deepracer_msgs
{

struct SetVisualColor
{

typedef SetVisualColorRequest Request;
typedef SetVisualColorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetVisualColor
} // namespace deepracer_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_msgs::SetVisualColor > {
  static const char* value()
  {
    return "9c987659e93e8e993b90a6ea6fab5b74";
  }

  static const char* value(const ::deepracer_msgs::SetVisualColor&) { return value(); }
};

template<>
struct DataType< ::deepracer_msgs::SetVisualColor > {
  static const char* value()
  {
    return "deepracer_msgs/SetVisualColor";
  }

  static const char* value(const ::deepracer_msgs::SetVisualColor&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_msgs::SetVisualColorRequest> should match 
// service_traits::MD5Sum< ::deepracer_msgs::SetVisualColor > 
template<>
struct MD5Sum< ::deepracer_msgs::SetVisualColorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetVisualColor >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualColorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetVisualColorRequest> should match 
// service_traits::DataType< ::deepracer_msgs::SetVisualColor > 
template<>
struct DataType< ::deepracer_msgs::SetVisualColorRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetVisualColor >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualColorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_msgs::SetVisualColorResponse> should match 
// service_traits::MD5Sum< ::deepracer_msgs::SetVisualColor > 
template<>
struct MD5Sum< ::deepracer_msgs::SetVisualColorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetVisualColor >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualColorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetVisualColorResponse> should match 
// service_traits::DataType< ::deepracer_msgs::SetVisualColor > 
template<>
struct DataType< ::deepracer_msgs::SetVisualColorResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetVisualColor >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualColorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETVISUALCOLOR_H
