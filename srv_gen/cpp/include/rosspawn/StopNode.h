/* Auto-generated by genmsg_cpp for file /homes/timn/ros/local/rosspawn/srv/StopNode.srv */
#ifndef ROSSPAWN_SERVICE_STOPNODE_H
#define ROSSPAWN_SERVICE_STOPNODE_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "ros/service_traits.h"




namespace rosspawn
{
template <class ContainerAllocator>
struct StopNodeRequest_ : public ros::Message
{
  typedef StopNodeRequest_<ContainerAllocator> Type;

  StopNodeRequest_()
  : node_file_name()
  {
  }

  StopNodeRequest_(const ContainerAllocator& _alloc)
  : node_file_name(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _node_file_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  node_file_name;


private:
  static const char* __s_getDataType_() { return "rosspawn/StopNodeRequest"; }

  static const char* __s_getMD5Sum_() { return "014964366824ce564884dfdaff1faba6"; }

  static const char* __s_getMessageDefinition_() { return "string node_file_name\n\
\n\
"; }

public:
  ROSCPP_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }
  ROSCPP_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }
  ROSCPP_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }
  ROSCPP_DEPRECATED virtual const std::string __getDataType() const { return __s_getDataType_(); }
  ROSCPP_DEPRECATED virtual const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }
  ROSCPP_DEPRECATED virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }
  ROSCPP_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, node_file_name);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, node_file_name);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(node_file_name);
    return size;
  }

  typedef boost::shared_ptr<rosspawn::StopNodeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr<rosspawn::StopNodeRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct StopNodeRequest
typedef rosspawn::StopNodeRequest_<std::allocator<void> > StopNodeRequest;

typedef boost::shared_ptr<rosspawn::StopNodeRequest> StopNodeRequestPtr;
typedef boost::shared_ptr<rosspawn::StopNodeRequest const> StopNodeRequestConstPtr;


template <class ContainerAllocator>
struct StopNodeResponse_ : public ros::Message
{
  typedef StopNodeResponse_<ContainerAllocator> Type;

  StopNodeResponse_()
  {
  }

  StopNodeResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "rosspawn/StopNodeResponse"; }

  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char* __s_getMessageDefinition_() { return "\n\
\n\
"; }

public:
  ROSCPP_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }
  ROSCPP_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }
  ROSCPP_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }
  ROSCPP_DEPRECATED virtual const std::string __getDataType() const { return __s_getDataType_(); }
  ROSCPP_DEPRECATED virtual const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }
  ROSCPP_DEPRECATED virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }
  ROSCPP_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr<rosspawn::StopNodeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr<rosspawn::StopNodeResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct StopNodeResponse
typedef rosspawn::StopNodeResponse_<std::allocator<void> > StopNodeResponse;

typedef boost::shared_ptr<rosspawn::StopNodeResponse> StopNodeResponsePtr;
typedef boost::shared_ptr<rosspawn::StopNodeResponse const> StopNodeResponseConstPtr;

struct StopNode
{

typedef StopNodeRequest Request;
typedef StopNodeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct StopNode
} // namespace rosspawn

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum<rosspawn::StopNodeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "014964366824ce564884dfdaff1faba6";
  }

  static const char* value(const rosspawn::StopNodeRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x014964366824ce56ULL;
  static const uint64_t static_value2 = 0x4884dfdaff1faba6ULL;
};

template<class ContainerAllocator>
struct DataType<rosspawn::StopNodeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rosspawn/StopNodeRequest";
  }

  static const char* value(const rosspawn::StopNodeRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition<rosspawn::StopNodeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string node_file_name\n\
\n\
";
  }

  static const char* value(const rosspawn::StopNodeRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum<rosspawn::StopNodeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const rosspawn::StopNodeResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType<rosspawn::StopNodeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rosspawn/StopNodeResponse";
  }

  static const char* value(const rosspawn::StopNodeResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition<rosspawn::StopNodeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const rosspawn::StopNodeResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize<rosspawn::StopNodeResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer<rosspawn::StopNodeRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.node_file_name);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StopNodeRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer<rosspawn::StopNodeResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StopNodeResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rosspawn::StopNode> {
  static const char* value() 
  {
    return "014964366824ce564884dfdaff1faba6";
  }

  static const char* value(const rosspawn::StopNode&) { return value(); } 
};

template<>
struct DataType<rosspawn::StopNode> {
  static const char* value() 
  {
    return "rosspawn/StopNode";
  }

  static const char* value(const rosspawn::StopNode&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rosspawn::StopNodeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "014964366824ce564884dfdaff1faba6";
  }

  static const char* value(const rosspawn::StopNodeRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rosspawn::StopNodeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rosspawn/StopNode";
  }

  static const char* value(const rosspawn::StopNodeRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rosspawn::StopNodeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "014964366824ce564884dfdaff1faba6";
  }

  static const char* value(const rosspawn::StopNodeResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rosspawn::StopNodeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rosspawn/StopNode";
  }

  static const char* value(const rosspawn::StopNodeResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROSSPAWN_SERVICE_STOPNODE_H

