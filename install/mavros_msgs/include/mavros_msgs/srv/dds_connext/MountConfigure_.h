

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MountConfigure_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MountConfigure__1448012473_h
#define MountConfigure__1448012473_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {
            namespace MountConfigure_Request_Constants {
                static const DDS_Octet MODE_RETRACT_= 0;
                static const DDS_Octet MODE_NEUTRAL_= 1;
                static const DDS_Octet MODE_MAVLINK_TARGETING_= 2;
                static const DDS_Octet MODE_RC_TARGETING_= 3;
                static const DDS_Octet MODE_GPS_POINT_= 4;
                static const DDS_Octet INPUT_ANGLE_BODY_FRAME_= 0;
                static const DDS_Octet INPUT_ANGULAR_RATE_= 1;
                static const DDS_Octet INPUT_ANGLE_ABSOLUTE_FRAME_= 2;
            } /* namespace MountConfigure_Request_Constants  */

            extern const char *MountConfigure_Request_TYPENAME;

            struct MountConfigure_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MountConfigure_Request_TypeSupport;
            class MountConfigure_Request_DataWriter;
            class MountConfigure_Request_DataReader;
            #endif

            class MountConfigure_Request_ 
            {
              public:
                typedef struct MountConfigure_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MountConfigure_Request_TypeSupport TypeSupport;
                typedef MountConfigure_Request_DataWriter DataWriter;
                typedef MountConfigure_Request_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   mode_ ;
                DDS_Boolean   stabilize_roll_ ;
                DDS_Boolean   stabilize_pitch_ ;
                DDS_Boolean   stabilize_yaw_ ;
                DDS_Octet   roll_input_ ;
                DDS_Octet   pitch_input_ ;
                DDS_Octet   yaw_input_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MountConfigure_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MountConfigure_Request_Seq, MountConfigure_Request_);

            NDDSUSERDllExport
            RTIBool MountConfigure_Request__initialize(
                MountConfigure_Request_* self);

            NDDSUSERDllExport
            RTIBool MountConfigure_Request__initialize_ex(
                MountConfigure_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MountConfigure_Request__initialize_w_params(
                MountConfigure_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MountConfigure_Request__finalize(
                MountConfigure_Request_* self);

            NDDSUSERDllExport
            void MountConfigure_Request__finalize_ex(
                MountConfigure_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MountConfigure_Request__finalize_w_params(
                MountConfigure_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MountConfigure_Request__finalize_optional_members(
                MountConfigure_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MountConfigure_Request__copy(
                MountConfigure_Request_* dst,
                const MountConfigure_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *MountConfigure_Response_TYPENAME;

            struct MountConfigure_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MountConfigure_Response_TypeSupport;
            class MountConfigure_Response_DataWriter;
            class MountConfigure_Response_DataReader;
            #endif

            class MountConfigure_Response_ 
            {
              public:
                typedef struct MountConfigure_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MountConfigure_Response_TypeSupport TypeSupport;
                typedef MountConfigure_Response_DataWriter DataWriter;
                typedef MountConfigure_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Octet   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MountConfigure_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MountConfigure_Response_Seq, MountConfigure_Response_);

            NDDSUSERDllExport
            RTIBool MountConfigure_Response__initialize(
                MountConfigure_Response_* self);

            NDDSUSERDllExport
            RTIBool MountConfigure_Response__initialize_ex(
                MountConfigure_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MountConfigure_Response__initialize_w_params(
                MountConfigure_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MountConfigure_Response__finalize(
                MountConfigure_Response_* self);

            NDDSUSERDllExport
            void MountConfigure_Response__finalize_ex(
                MountConfigure_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MountConfigure_Response__finalize_w_params(
                MountConfigure_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MountConfigure_Response__finalize_optional_members(
                MountConfigure_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MountConfigure_Response__copy(
                MountConfigure_Response_* dst,
                const MountConfigure_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* MountConfigure_ */

