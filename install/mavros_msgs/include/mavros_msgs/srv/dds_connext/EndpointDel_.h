

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EndpointDel_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EndpointDel__1087053543_h
#define EndpointDel__1087053543_h

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
            namespace EndpointDel_Request_Constants {
                static const DDS_Octet TYPE_FCU_= 0;
                static const DDS_Octet TYPE_GCS_= 1;
                static const DDS_Octet TYPE_UAS_= 2;
            } /* namespace EndpointDel_Request_Constants  */

            extern const char *EndpointDel_Request_TYPENAME;

            struct EndpointDel_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class EndpointDel_Request_TypeSupport;
            class EndpointDel_Request_DataWriter;
            class EndpointDel_Request_DataReader;
            #endif

            class EndpointDel_Request_ 
            {
              public:
                typedef struct EndpointDel_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef EndpointDel_Request_TypeSupport TypeSupport;
                typedef EndpointDel_Request_DataWriter DataWriter;
                typedef EndpointDel_Request_DataReader DataReader;
                #endif

                DDS_UnsignedLong   id_ ;
                DDS_Char *   url_ ;
                DDS_Octet   type_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* EndpointDel_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(EndpointDel_Request_Seq, EndpointDel_Request_);

            NDDSUSERDllExport
            RTIBool EndpointDel_Request__initialize(
                EndpointDel_Request_* self);

            NDDSUSERDllExport
            RTIBool EndpointDel_Request__initialize_ex(
                EndpointDel_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool EndpointDel_Request__initialize_w_params(
                EndpointDel_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void EndpointDel_Request__finalize(
                EndpointDel_Request_* self);

            NDDSUSERDllExport
            void EndpointDel_Request__finalize_ex(
                EndpointDel_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void EndpointDel_Request__finalize_w_params(
                EndpointDel_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void EndpointDel_Request__finalize_optional_members(
                EndpointDel_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool EndpointDel_Request__copy(
                EndpointDel_Request_* dst,
                const EndpointDel_Request_* src);

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

            extern const char *EndpointDel_Response_TYPENAME;

            struct EndpointDel_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class EndpointDel_Response_TypeSupport;
            class EndpointDel_Response_DataWriter;
            class EndpointDel_Response_DataReader;
            #endif

            class EndpointDel_Response_ 
            {
              public:
                typedef struct EndpointDel_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef EndpointDel_Response_TypeSupport TypeSupport;
                typedef EndpointDel_Response_DataWriter DataWriter;
                typedef EndpointDel_Response_DataReader DataReader;
                #endif

                DDS_Boolean   successful_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* EndpointDel_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(EndpointDel_Response_Seq, EndpointDel_Response_);

            NDDSUSERDllExport
            RTIBool EndpointDel_Response__initialize(
                EndpointDel_Response_* self);

            NDDSUSERDllExport
            RTIBool EndpointDel_Response__initialize_ex(
                EndpointDel_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool EndpointDel_Response__initialize_w_params(
                EndpointDel_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void EndpointDel_Response__finalize(
                EndpointDel_Response_* self);

            NDDSUSERDllExport
            void EndpointDel_Response__finalize_ex(
                EndpointDel_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void EndpointDel_Response__finalize_w_params(
                EndpointDel_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void EndpointDel_Response__finalize_optional_members(
                EndpointDel_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool EndpointDel_Response__copy(
                EndpointDel_Response_* dst,
                const EndpointDel_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* EndpointDel_ */

