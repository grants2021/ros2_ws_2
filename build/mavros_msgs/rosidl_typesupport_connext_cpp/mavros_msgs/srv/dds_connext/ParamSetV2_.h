

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParamSetV2_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParamSetV2__343311487_h
#define ParamSetV2__343311487_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/ParameterValue_.h"
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ParamSetV2_Request_TYPENAME;

            struct ParamSetV2_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamSetV2_Request_TypeSupport;
            class ParamSetV2_Request_DataWriter;
            class ParamSetV2_Request_DataReader;
            #endif

            class ParamSetV2_Request_ 
            {
              public:
                typedef struct ParamSetV2_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamSetV2_Request_TypeSupport TypeSupport;
                typedef ParamSetV2_Request_DataWriter DataWriter;
                typedef ParamSetV2_Request_DataReader DataReader;
                #endif

                DDS_Boolean   force_set_ ;
                DDS_Char *   param_id_ ;
                rcl_interfaces::msg::dds_::ParameterValue_   value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamSetV2_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamSetV2_Request_Seq, ParamSetV2_Request_);

            NDDSUSERDllExport
            RTIBool ParamSetV2_Request__initialize(
                ParamSetV2_Request_* self);

            NDDSUSERDllExport
            RTIBool ParamSetV2_Request__initialize_ex(
                ParamSetV2_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamSetV2_Request__initialize_w_params(
                ParamSetV2_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamSetV2_Request__finalize(
                ParamSetV2_Request_* self);

            NDDSUSERDllExport
            void ParamSetV2_Request__finalize_ex(
                ParamSetV2_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamSetV2_Request__finalize_w_params(
                ParamSetV2_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamSetV2_Request__finalize_optional_members(
                ParamSetV2_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamSetV2_Request__copy(
                ParamSetV2_Request_* dst,
                const ParamSetV2_Request_* src);

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

            extern const char *ParamSetV2_Response_TYPENAME;

            struct ParamSetV2_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamSetV2_Response_TypeSupport;
            class ParamSetV2_Response_DataWriter;
            class ParamSetV2_Response_DataReader;
            #endif

            class ParamSetV2_Response_ 
            {
              public:
                typedef struct ParamSetV2_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamSetV2_Response_TypeSupport TypeSupport;
                typedef ParamSetV2_Response_DataWriter DataWriter;
                typedef ParamSetV2_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                rcl_interfaces::msg::dds_::ParameterValue_   value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamSetV2_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamSetV2_Response_Seq, ParamSetV2_Response_);

            NDDSUSERDllExport
            RTIBool ParamSetV2_Response__initialize(
                ParamSetV2_Response_* self);

            NDDSUSERDllExport
            RTIBool ParamSetV2_Response__initialize_ex(
                ParamSetV2_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamSetV2_Response__initialize_w_params(
                ParamSetV2_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamSetV2_Response__finalize(
                ParamSetV2_Response_* self);

            NDDSUSERDllExport
            void ParamSetV2_Response__finalize_ex(
                ParamSetV2_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamSetV2_Response__finalize_w_params(
                ParamSetV2_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamSetV2_Response__finalize_optional_members(
                ParamSetV2_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamSetV2_Response__copy(
                ParamSetV2_Response_* dst,
                const ParamSetV2_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* ParamSetV2_ */

