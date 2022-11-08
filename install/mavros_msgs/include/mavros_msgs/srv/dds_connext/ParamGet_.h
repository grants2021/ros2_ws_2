

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParamGet_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParamGet__342058065_h
#define ParamGet__342058065_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/ParamValue_.h"
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ParamGet_Request_TYPENAME;

            struct ParamGet_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamGet_Request_TypeSupport;
            class ParamGet_Request_DataWriter;
            class ParamGet_Request_DataReader;
            #endif

            class ParamGet_Request_ 
            {
              public:
                typedef struct ParamGet_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamGet_Request_TypeSupport TypeSupport;
                typedef ParamGet_Request_DataWriter DataWriter;
                typedef ParamGet_Request_DataReader DataReader;
                #endif

                DDS_Char *   param_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamGet_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamGet_Request_Seq, ParamGet_Request_);

            NDDSUSERDllExport
            RTIBool ParamGet_Request__initialize(
                ParamGet_Request_* self);

            NDDSUSERDllExport
            RTIBool ParamGet_Request__initialize_ex(
                ParamGet_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamGet_Request__initialize_w_params(
                ParamGet_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamGet_Request__finalize(
                ParamGet_Request_* self);

            NDDSUSERDllExport
            void ParamGet_Request__finalize_ex(
                ParamGet_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamGet_Request__finalize_w_params(
                ParamGet_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamGet_Request__finalize_optional_members(
                ParamGet_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamGet_Request__copy(
                ParamGet_Request_* dst,
                const ParamGet_Request_* src);

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

            extern const char *ParamGet_Response_TYPENAME;

            struct ParamGet_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamGet_Response_TypeSupport;
            class ParamGet_Response_DataWriter;
            class ParamGet_Response_DataReader;
            #endif

            class ParamGet_Response_ 
            {
              public:
                typedef struct ParamGet_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamGet_Response_TypeSupport TypeSupport;
                typedef ParamGet_Response_DataWriter DataWriter;
                typedef ParamGet_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                mavros_msgs::msg::dds_::ParamValue_   value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamGet_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamGet_Response_Seq, ParamGet_Response_);

            NDDSUSERDllExport
            RTIBool ParamGet_Response__initialize(
                ParamGet_Response_* self);

            NDDSUSERDllExport
            RTIBool ParamGet_Response__initialize_ex(
                ParamGet_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamGet_Response__initialize_w_params(
                ParamGet_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamGet_Response__finalize(
                ParamGet_Response_* self);

            NDDSUSERDllExport
            void ParamGet_Response__finalize_ex(
                ParamGet_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamGet_Response__finalize_w_params(
                ParamGet_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamGet_Response__finalize_optional_members(
                ParamGet_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamGet_Response__copy(
                ParamGet_Response_* dst,
                const ParamGet_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* ParamGet_ */

