

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParamSet_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParamSet__903170569_h
#define ParamSet__903170569_h

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

            extern const char *ParamSet_Request_TYPENAME;

            struct ParamSet_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamSet_Request_TypeSupport;
            class ParamSet_Request_DataWriter;
            class ParamSet_Request_DataReader;
            #endif

            class ParamSet_Request_ 
            {
              public:
                typedef struct ParamSet_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamSet_Request_TypeSupport TypeSupport;
                typedef ParamSet_Request_DataWriter DataWriter;
                typedef ParamSet_Request_DataReader DataReader;
                #endif

                DDS_Char *   param_id_ ;
                mavros_msgs::msg::dds_::ParamValue_   value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamSet_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamSet_Request_Seq, ParamSet_Request_);

            NDDSUSERDllExport
            RTIBool ParamSet_Request__initialize(
                ParamSet_Request_* self);

            NDDSUSERDllExport
            RTIBool ParamSet_Request__initialize_ex(
                ParamSet_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamSet_Request__initialize_w_params(
                ParamSet_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamSet_Request__finalize(
                ParamSet_Request_* self);

            NDDSUSERDllExport
            void ParamSet_Request__finalize_ex(
                ParamSet_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamSet_Request__finalize_w_params(
                ParamSet_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamSet_Request__finalize_optional_members(
                ParamSet_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamSet_Request__copy(
                ParamSet_Request_* dst,
                const ParamSet_Request_* src);

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

            extern const char *ParamSet_Response_TYPENAME;

            struct ParamSet_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamSet_Response_TypeSupport;
            class ParamSet_Response_DataWriter;
            class ParamSet_Response_DataReader;
            #endif

            class ParamSet_Response_ 
            {
              public:
                typedef struct ParamSet_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamSet_Response_TypeSupport TypeSupport;
                typedef ParamSet_Response_DataWriter DataWriter;
                typedef ParamSet_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* ParamSet_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamSet_Response_Seq, ParamSet_Response_);

            NDDSUSERDllExport
            RTIBool ParamSet_Response__initialize(
                ParamSet_Response_* self);

            NDDSUSERDllExport
            RTIBool ParamSet_Response__initialize_ex(
                ParamSet_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamSet_Response__initialize_w_params(
                ParamSet_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamSet_Response__finalize(
                ParamSet_Response_* self);

            NDDSUSERDllExport
            void ParamSet_Response__finalize_ex(
                ParamSet_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamSet_Response__finalize_w_params(
                ParamSet_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamSet_Response__finalize_optional_members(
                ParamSet_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamSet_Response__copy(
                ParamSet_Response_* dst,
                const ParamSet_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* ParamSet_ */

