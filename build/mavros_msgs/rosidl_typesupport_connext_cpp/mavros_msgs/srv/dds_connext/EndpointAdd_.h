

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EndpointAdd_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EndpointAdd__1157914809_h
#define EndpointAdd__1157914809_h

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
            namespace EndpointAdd_Request_Constants {
                static const DDS_Octet TYPE_FCU_= 0;
                static const DDS_Octet TYPE_GCS_= 1;
                static const DDS_Octet TYPE_UAS_= 2;
            } /* namespace EndpointAdd_Request_Constants  */

            extern const char *EndpointAdd_Request_TYPENAME;

            struct EndpointAdd_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class EndpointAdd_Request_TypeSupport;
            class EndpointAdd_Request_DataWriter;
            class EndpointAdd_Request_DataReader;
            #endif

            class EndpointAdd_Request_ 
            {
              public:
                typedef struct EndpointAdd_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef EndpointAdd_Request_TypeSupport TypeSupport;
                typedef EndpointAdd_Request_DataWriter DataWriter;
                typedef EndpointAdd_Request_DataReader DataReader;
                #endif

                DDS_Char *   url_ ;
                DDS_Octet   type_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* EndpointAdd_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(EndpointAdd_Request_Seq, EndpointAdd_Request_);

            NDDSUSERDllExport
            RTIBool EndpointAdd_Request__initialize(
                EndpointAdd_Request_* self);

            NDDSUSERDllExport
            RTIBool EndpointAdd_Request__initialize_ex(
                EndpointAdd_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool EndpointAdd_Request__initialize_w_params(
                EndpointAdd_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void EndpointAdd_Request__finalize(
                EndpointAdd_Request_* self);

            NDDSUSERDllExport
            void EndpointAdd_Request__finalize_ex(
                EndpointAdd_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void EndpointAdd_Request__finalize_w_params(
                EndpointAdd_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void EndpointAdd_Request__finalize_optional_members(
                EndpointAdd_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool EndpointAdd_Request__copy(
                EndpointAdd_Request_* dst,
                const EndpointAdd_Request_* src);

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

            extern const char *EndpointAdd_Response_TYPENAME;

            struct EndpointAdd_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class EndpointAdd_Response_TypeSupport;
            class EndpointAdd_Response_DataWriter;
            class EndpointAdd_Response_DataReader;
            #endif

            class EndpointAdd_Response_ 
            {
              public:
                typedef struct EndpointAdd_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef EndpointAdd_Response_TypeSupport TypeSupport;
                typedef EndpointAdd_Response_DataWriter DataWriter;
                typedef EndpointAdd_Response_DataReader DataReader;
                #endif

                DDS_Boolean   successful_ ;
                DDS_Char *   reason_ ;
                DDS_UnsignedLong   id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* EndpointAdd_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(EndpointAdd_Response_Seq, EndpointAdd_Response_);

            NDDSUSERDllExport
            RTIBool EndpointAdd_Response__initialize(
                EndpointAdd_Response_* self);

            NDDSUSERDllExport
            RTIBool EndpointAdd_Response__initialize_ex(
                EndpointAdd_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool EndpointAdd_Response__initialize_w_params(
                EndpointAdd_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void EndpointAdd_Response__finalize(
                EndpointAdd_Response_* self);

            NDDSUSERDllExport
            void EndpointAdd_Response__finalize_ex(
                EndpointAdd_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void EndpointAdd_Response__finalize_w_params(
                EndpointAdd_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void EndpointAdd_Response__finalize_optional_members(
                EndpointAdd_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool EndpointAdd_Response__copy(
                EndpointAdd_Response_* dst,
                const EndpointAdd_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* EndpointAdd_ */

