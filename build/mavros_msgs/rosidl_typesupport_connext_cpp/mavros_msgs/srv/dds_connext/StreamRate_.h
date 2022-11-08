

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StreamRate_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StreamRate__1405490241_h
#define StreamRate__1405490241_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {
            namespace StreamRate_Request_Constants {
                static const DDS_Octet STREAM_ALL_= 0;
                static const DDS_Octet STREAM_RAW_SENSORS_= 1;
                static const DDS_Octet STREAM_EXTENDED_STATUS_= 2;
                static const DDS_Octet STREAM_RC_CHANNELS_= 3;
                static const DDS_Octet STREAM_RAW_CONTROLLER_= 4;
                static const DDS_Octet STREAM_POSITION_= 6;
                static const DDS_Octet STREAM_EXTRA1_= 10;
                static const DDS_Octet STREAM_EXTRA2_= 11;
                static const DDS_Octet STREAM_EXTRA3_= 12;
            } /* namespace StreamRate_Request_Constants  */

            extern const char *StreamRate_Request_TYPENAME;

            struct StreamRate_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class StreamRate_Request_TypeSupport;
            class StreamRate_Request_DataWriter;
            class StreamRate_Request_DataReader;
            #endif

            class StreamRate_Request_ 
            {
              public:
                typedef struct StreamRate_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef StreamRate_Request_TypeSupport TypeSupport;
                typedef StreamRate_Request_DataWriter DataWriter;
                typedef StreamRate_Request_DataReader DataReader;
                #endif

                DDS_Octet   stream_id_ ;
                DDS_UnsignedShort   message_rate_ ;
                DDS_Boolean   on_off_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* StreamRate_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(StreamRate_Request_Seq, StreamRate_Request_);

            NDDSUSERDllExport
            RTIBool StreamRate_Request__initialize(
                StreamRate_Request_* self);

            NDDSUSERDllExport
            RTIBool StreamRate_Request__initialize_ex(
                StreamRate_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool StreamRate_Request__initialize_w_params(
                StreamRate_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void StreamRate_Request__finalize(
                StreamRate_Request_* self);

            NDDSUSERDllExport
            void StreamRate_Request__finalize_ex(
                StreamRate_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void StreamRate_Request__finalize_w_params(
                StreamRate_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void StreamRate_Request__finalize_optional_members(
                StreamRate_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool StreamRate_Request__copy(
                StreamRate_Request_* dst,
                const StreamRate_Request_* src);

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

            extern const char *StreamRate_Response_TYPENAME;

            struct StreamRate_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class StreamRate_Response_TypeSupport;
            class StreamRate_Response_DataWriter;
            class StreamRate_Response_DataReader;
            #endif

            class StreamRate_Response_ 
            {
              public:
                typedef struct StreamRate_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef StreamRate_Response_TypeSupport TypeSupport;
                typedef StreamRate_Response_DataWriter DataWriter;
                typedef StreamRate_Response_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* StreamRate_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(StreamRate_Response_Seq, StreamRate_Response_);

            NDDSUSERDllExport
            RTIBool StreamRate_Response__initialize(
                StreamRate_Response_* self);

            NDDSUSERDllExport
            RTIBool StreamRate_Response__initialize_ex(
                StreamRate_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool StreamRate_Response__initialize_w_params(
                StreamRate_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void StreamRate_Response__finalize(
                StreamRate_Response_* self);

            NDDSUSERDllExport
            void StreamRate_Response__finalize_ex(
                StreamRate_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void StreamRate_Response__finalize_w_params(
                StreamRate_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void StreamRate_Response__finalize_optional_members(
                StreamRate_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool StreamRate_Response__copy(
                StreamRate_Response_* dst,
                const StreamRate_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* StreamRate_ */

