// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:srv/ParamSet.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#ifdef Connext_GLIBCXX_USE_CXX11_ABI_ZERO
#define _GLIBCXX_USE_CXX11_ABI 0
#endif

#ifndef _WIN32
# pragma GCC diagnostic push
# if __GNUC__ >= 9
#  pragma GCC diagnostic ignored "-Wclass-memaccess"
# endif
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include <ndds/connext_cpp/connext_cpp_requester_details.h>
#include <ndds/ndds_cpp.h>
#include <ndds/ndds_requestreply_cpp.h>

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "mavros_msgs/srv/param_set__rosidl_typesupport_connext_cpp.hpp"
#include "rmw/error_handling.h"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/service_type_support.h"
#include "rosidl_typesupport_connext_cpp/service_type_support_decl.hpp"
#include "mavros_msgs/srv/detail/param_set__struct.hpp"
#include "mavros_msgs/srv/dds_connext/ParamSet_Support.h"
#include "mavros_msgs/srv/dds_connext/ParamSet_Plugin.h"

// already included above
// #include "mavros_msgs/srv/param_set__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace mavros_msgs
{
namespace msg
{
namespace dds_
{
class ParamValue_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const mavros_msgs::msg::ParamValue &,
  mavros_msgs::msg::dds_::ParamValue_ &);
bool convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::ParamValue_ &,
  mavros_msgs::msg::ParamValue &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__ParamSet_Request()
{
  return mavros_msgs::srv::dds_::ParamSet_Request_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::srv::ParamSet_Request & ros_message,
  mavros_msgs::srv::dds_::ParamSet_Request_ & dds_message)
{
  // member.name param_id
  DDS_String_free(dds_message.param_id_);
  dds_message.param_id_ =
    DDS_String_dup(ros_message.param_id.c_str());

  // member.name value
  if (
    !mavros_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.value,
      dds_message.value_))
  {
    return false;
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::srv::dds_::ParamSet_Request_ & dds_message,
  mavros_msgs::srv::ParamSet_Request & ros_message)
{
  // member.name param_id
  ros_message.param_id = dds_message.param_id_;

  // member.name value
  if (
    !mavros_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.value_,
      ros_message.value))
  {
    return false;
  }

  return true;
}

bool
to_cdr_stream__ParamSet_Request(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const mavros_msgs::srv::ParamSet_Request & ros_message =
    *(const mavros_msgs::srv::ParamSet_Request *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::srv::dds_::ParamSet_Request_ * dds_message = mavros_msgs::srv::dds_::ParamSet_Request_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::srv::dds_::ParamSet_Request_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::srv::dds_::ParamSet_Request_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (mavros_msgs::srv::dds_::ParamSet_Request_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::srv::dds_::ParamSet_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__ParamSet_Request(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::srv::dds_::ParamSet_Request_ * dds_message =
    mavros_msgs::srv::dds_::ParamSet_Request_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::srv::dds_::ParamSet_Request_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mavros_msgs::srv::ParamSet_Request & ros_message =
    *(mavros_msgs::srv::ParamSet_Request *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::srv::dds_::ParamSet_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _ParamSet_Request__callbacks = {
  "mavros_msgs::srv",
  "ParamSet_Request",
  &get_type_code__ParamSet_Request,
  nullptr,
  nullptr,
  &to_cdr_stream__ParamSet_Request,
  &to_message__ParamSet_Request
};

static rosidl_message_type_support_t _ParamSet_Request__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_ParamSet_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace mavros_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mavros_msgs::srv::ParamSet_Request>()
{
  return &mavros_msgs::srv::typesupport_connext_cpp::_ParamSet_Request__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mavros_msgs, srv,
  ParamSet_Request)()
{
  return &mavros_msgs::srv::typesupport_connext_cpp::_ParamSet_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "mavros_msgs/srv/param_set__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace mavros_msgs
{
namespace msg
{
namespace dds_
{
class ParamValue_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const mavros_msgs::msg::ParamValue &,
  mavros_msgs::msg::dds_::ParamValue_ &);
bool convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::ParamValue_ &,
  mavros_msgs::msg::ParamValue &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace mavros_msgs


namespace mavros_msgs
{

namespace srv
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__ParamSet_Response()
{
  return mavros_msgs::srv::dds_::ParamSet_Response_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::srv::ParamSet_Response & ros_message,
  mavros_msgs::srv::dds_::ParamSet_Response_ & dds_message)
{
  // member.name success
  dds_message.success_ =
    ros_message.success;

  // member.name value
  if (
    !mavros_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.value,
      dds_message.value_))
  {
    return false;
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::srv::dds_::ParamSet_Response_ & dds_message,
  mavros_msgs::srv::ParamSet_Response & ros_message)
{
  // member.name success
  ros_message.success =
    dds_message.success_ == DDS_BOOLEAN_TRUE;

  // member.name value
  if (
    !mavros_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.value_,
      ros_message.value))
  {
    return false;
  }

  return true;
}

bool
to_cdr_stream__ParamSet_Response(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const mavros_msgs::srv::ParamSet_Response & ros_message =
    *(const mavros_msgs::srv::ParamSet_Response *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::srv::dds_::ParamSet_Response_ * dds_message = mavros_msgs::srv::dds_::ParamSet_Response_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::srv::dds_::ParamSet_Response_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::srv::dds_::ParamSet_Response_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (mavros_msgs::srv::dds_::ParamSet_Response_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::srv::dds_::ParamSet_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__ParamSet_Response(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::srv::dds_::ParamSet_Response_ * dds_message =
    mavros_msgs::srv::dds_::ParamSet_Response_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::srv::dds_::ParamSet_Response_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mavros_msgs::srv::ParamSet_Response & ros_message =
    *(mavros_msgs::srv::ParamSet_Response *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::srv::dds_::ParamSet_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _ParamSet_Response__callbacks = {
  "mavros_msgs::srv",
  "ParamSet_Response",
  &get_type_code__ParamSet_Response,
  nullptr,
  nullptr,
  &to_cdr_stream__ParamSet_Response,
  &to_message__ParamSet_Response
};

static rosidl_message_type_support_t _ParamSet_Response__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_ParamSet_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace mavros_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mavros_msgs::srv::ParamSet_Response>()
{
  return &mavros_msgs::srv::typesupport_connext_cpp::_ParamSet_Response__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mavros_msgs, srv,
  ParamSet_Response)()
{
  return &mavros_msgs::srv::typesupport_connext_cpp::_ParamSet_Response__handle;
}

#ifdef __cplusplus
}
#endif

class DDSDomainParticipant;
class DDSDataReader;
struct DDS_SampleIdentity_t;


namespace mavros_msgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

void * create_requester__ParamSet(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  using RequesterType = connext::Requester<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  if (!untyped_participant || !request_topic_str || !response_topic_str || !untyped_reader) {
    return NULL;
  }
  auto _allocator = allocator ? allocator : &malloc;

  DDSDomainParticipant * participant = static_cast<DDSDomainParticipant *>(untyped_participant);
  const DDS_DataReaderQos * datareader_qos = static_cast<const DDS_DataReaderQos *>(untyped_datareader_qos);
  const DDS_DataWriterQos * datawriter_qos = static_cast<const DDS_DataWriterQos *>(untyped_datawriter_qos);
  connext::RequesterParams requester_params(participant);

  // we create separate publishers and subscribers
  // because the default publisher is a singleton within
  // the replier/requester context in connext.
  // if we use the implicit one, every service/client will
  // overwrite the QoS of all previous instances.
  DDS::Publisher * publisher = participant->create_publisher(
    DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (publisher == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of publisher for requester");
    return NULL;
  }
  DDS::Subscriber * subscriber = participant->create_subscriber(
    DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (subscriber == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of subscriber for requester");
    return NULL;
  }
  requester_params.publisher(publisher);
  requester_params.subscriber(subscriber);
  requester_params.request_topic_name(request_topic_str);
  requester_params.reply_topic_name(response_topic_str);
  requester_params.datareader_qos(*datareader_qos);
  requester_params.datawriter_qos(*datawriter_qos);

  RequesterType * requester = static_cast<RequesterType *>(_allocator(sizeof(RequesterType)));
  if (NULL == requester) {
    fprintf(stderr, "failed to allocate memory for requester\n");
    return NULL;
  }
  try {
    new (requester) RequesterType(requester_params);
  } catch (...) {
    RMW_SET_ERROR_MSG("C++ exception during construction of Requester");
    return NULL;
  }

  *untyped_reader = requester->get_reply_datareader();
  *untyped_writer = requester->get_request_datawriter();
  return requester;
}

const char * destroy_requester__ParamSet(
  void * untyped_requester,
  void (* deallocator)(void *))
{
  using RequesterType = connext::Requester<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  auto requester = static_cast<RequesterType *>(untyped_requester);

  requester->~RequesterType();
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(requester);
  return nullptr;
}

int64_t send_request__ParamSet(
  void * untyped_requester,
  const void * untyped_ros_request)
{
  using ROSRequestType = mavros_msgs::srv::ParamSet_Request;
  using RequesterType = connext::Requester<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  connext::WriteSample<
    mavros_msgs::srv::dds_::ParamSet_Request_> request;
  const ROSRequestType & ros_request = *(
    static_cast<const ROSRequestType *>(untyped_ros_request));
  mavros_msgs::srv::typesupport_connext_cpp::convert_ros_message_to_dds(
    ros_request, request.data());

  RequesterType * requester = static_cast<RequesterType *>(untyped_requester);

  requester->send_request(request);
  int64_t sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 |
    request.identity().sequence_number.low;
  return sequence_number;
}

void * create_replier__ParamSet(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  using ReplierType = connext::Replier<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  if (!untyped_participant || !request_topic_str || !response_topic_str || !untyped_reader) {
    return NULL;
  }
  auto _allocator = allocator ? allocator : &malloc;

  DDSDomainParticipant * participant = static_cast<DDSDomainParticipant *>(untyped_participant);
  const DDS_DataReaderQos * datareader_qos = static_cast<const DDS_DataReaderQos *>(untyped_datareader_qos);
  const DDS_DataWriterQos * datawriter_qos = static_cast<const DDS_DataWriterQos *>(untyped_datawriter_qos);
  connext::ReplierParams<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  > replier_params(participant);

  // we create separate publishers and subscribers
  // because the default publisher is a singleton within
  // the replier/requester context in connext.
  // if we use the implicit one, every service/client will
  // overwrite the QoS of all previous instances.
  DDS::Publisher * publisher = participant->create_publisher(
    DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (publisher == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of publisher for replier");
    return NULL;
  }
  DDS::Subscriber * subscriber = participant->create_subscriber(
    DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (subscriber == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of subscriber for replier");
    return NULL;
  }
  replier_params.publisher(publisher);
  replier_params.subscriber(subscriber);
  replier_params.request_topic_name(request_topic_str);
  replier_params.reply_topic_name(response_topic_str);
  replier_params.datareader_qos(*datareader_qos);
  replier_params.datawriter_qos(*datawriter_qos);

  ReplierType * replier = static_cast<ReplierType *>(_allocator(sizeof(ReplierType)));
  if (NULL == replier) {
    fprintf(stderr, "failed to allocate memory for replier\n");
    return NULL;
  }
  try {
    new (replier) ReplierType(replier_params);
  } catch (...) {
    RMW_SET_ERROR_MSG("C++ exception during construction of Requester");
    return NULL;
  }

  *untyped_reader = replier->get_request_datareader();
  *untyped_writer = replier->get_reply_datawriter();
  return replier;
}

const char * destroy_replier__ParamSet(
  void * untyped_replier,
  void (* deallocator)(void *))
{
  using ReplierType = connext::Replier<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  auto replier = static_cast<ReplierType *>(untyped_replier);

  replier->~ReplierType();
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(replier);
  return nullptr;
}

bool take_request__ParamSet(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request)
{
  using ReplierType = connext::Replier<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  using ROSRequestType = mavros_msgs::srv::ParamSet_Request;
  if (!untyped_replier || !request_header || !untyped_ros_request) {
    return false;
  }

  ReplierType * replier = static_cast<ReplierType *>(untyped_replier);

  ROSRequestType & ros_request = *static_cast<ROSRequestType *>(untyped_ros_request);

  connext::Sample<mavros_msgs::srv::dds_::ParamSet_Request_> request;
  bool taken = replier->take_request(request);
  if (!taken) {
    return false;
  }
  if (!request.info().valid_data) {
    return false;
  }

  bool converted =
    mavros_msgs::srv::typesupport_connext_cpp::convert_dds_message_to_ros(request.data(), ros_request);
  if (!converted) {
    return false;
  }

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(&(request_header->request_id.writer_guid[0]), request.identity().writer_guid.value, SAMPLE_IDENTITY_SIZE);

  request_header->request_id.sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 | request.identity().sequence_number.low;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;
  return true;
}

bool take_response__ParamSet(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response)
{
  using RequesterType = connext::Requester<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  using ROSResponseType = mavros_msgs::srv::ParamSet_Response;
  if (!untyped_requester || !request_header || !untyped_ros_response) {
    return false;
  }

  RequesterType * requester = static_cast<RequesterType *>(untyped_requester);

  ROSResponseType & ros_response = *static_cast<ROSResponseType *>(untyped_ros_response);

  connext::Sample<mavros_msgs::srv::dds_::ParamSet_Response_> response;
  bool received = requester->take_reply(response);
  if (!received) {
    return false;
  }
  if (!response.info().valid_data) {
    return false;
  }

  int64_t sequence_number =
    (((int64_t)response.related_identity().sequence_number.high) << 32) |
    response.related_identity().sequence_number.low;
  request_header->request_id.sequence_number = sequence_number;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;

  bool converted =
    mavros_msgs::srv::typesupport_connext_cpp::convert_dds_message_to_ros(response.data(), ros_response);
  return converted;
}

bool send_response__ParamSet(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ROSResponseType = const mavros_msgs::srv::ParamSet_Response;
  using ReplierType = connext::Replier<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_response) {
    return false;
  }

  connext::WriteSample<mavros_msgs::srv::dds_::ParamSet_Response_> response;
  ROSResponseType & ros_response = *(reinterpret_cast<ROSResponseType *>(untyped_ros_response));
  bool converted =
    mavros_msgs::srv::typesupport_connext_cpp::convert_ros_message_to_dds(ros_response, response.data());
  if (!converted) {
    return false;
  }

  DDS_SampleIdentity_t request_identity;

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(request_identity.writer_guid.value, &request_header->writer_guid[0], SAMPLE_IDENTITY_SIZE);

  request_identity.sequence_number.high = (int32_t)((request_header->sequence_number & 0xFFFFFFFF00000000) >> 32);
  request_identity.sequence_number.low = (uint32_t)(request_header->sequence_number & 0xFFFFFFFF);

  ReplierType * replier = static_cast<ReplierType *>(untyped_replier);

  replier->send_reply(response, request_identity);
  return true;
}

void *
get_request_datawriter__ParamSet(void * untyped_requester)
{
  if (!untyped_requester) {
    return NULL;
  }
  using RequesterType = connext::Requester<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);
  return requester->get_request_datawriter();
}

void *
get_reply_datareader__ParamSet(void * untyped_requester)
{
  if (!untyped_requester) {
    return NULL;
  }
  using RequesterType = connext::Requester<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);
  return requester->get_reply_datareader();
}

void *
get_request_datareader__ParamSet(void * untyped_replier)
{
  if (!untyped_replier) {
    return NULL;
  }
  using ReplierType = connext::Replier<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);
  return replier->get_request_datareader();
}

void *
get_reply_datawriter__ParamSet(void * untyped_replier)
{
  if (!untyped_replier) {
    return NULL;
  }
  using ReplierType = connext::Replier<
    mavros_msgs::srv::dds_::ParamSet_Request_,
    mavros_msgs::srv::dds_::ParamSet_Response_
  >;
  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);
  return replier->get_reply_datawriter();
}

static service_type_support_callbacks_t _ParamSet__callbacks = {
  "mavros_msgs::srv",
  "ParamSet",
  &create_requester__ParamSet,
  &destroy_requester__ParamSet,
  &create_replier__ParamSet,
  &destroy_replier__ParamSet,
  &send_request__ParamSet,
  &take_request__ParamSet,
  &send_response__ParamSet,
  &take_response__ParamSet,
  &get_request_datawriter__ParamSet,
  &get_reply_datareader__ParamSet,
  &get_request_datareader__ParamSet,
  &get_reply_datawriter__ParamSet,
};

static rosidl_service_type_support_t _ParamSet__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_ParamSet__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace mavros_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_mavros_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<mavros_msgs::srv::ParamSet>()
{
  return &mavros_msgs::srv::typesupport_connext_cpp::_ParamSet__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mavros_msgs, srv,
  ParamSet)()
{
  return &mavros_msgs::srv::typesupport_connext_cpp::_ParamSet__handle;
}

#ifdef __cplusplus
}
#endif
