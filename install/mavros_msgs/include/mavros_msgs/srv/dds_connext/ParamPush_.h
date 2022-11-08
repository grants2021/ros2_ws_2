

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParamPush_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParamPush__427757219_h
#define ParamPush__427757219_h

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

            extern const char *ParamPush_Request_TYPENAME;

            struct ParamPush_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamPush_Request_TypeSupport;
            class ParamPush_Request_DataWriter;
            class ParamPush_Request_DataReader;
            #endif

            class ParamPush_Request_ 
            {
              public:
                typedef struct ParamPush_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamPush_Request_TypeSupport TypeSupport;
                typedef ParamPush_Request_DataWriter DataWriter;
                typedef ParamPush_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamPush_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamPush_Request_Seq, ParamPush_Request_);

            NDDSUSERDllExport
            RTIBool ParamPush_Request__initialize(
                ParamPush_Request_* self);

            NDDSUSERDllExport
            RTIBool ParamPush_Request__initialize_ex(
                ParamPush_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamPush_Request__initialize_w_params(
                ParamPush_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamPush_Request__finalize(
                ParamPush_Request_* self);

            NDDSUSERDllExport
            void ParamPush_Request__finalize_ex(
                ParamPush_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamPush_Request__finalize_w_params(
                ParamPush_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamPush_Request__finalize_optional_members(
                ParamPush_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamPush_Request__copy(
                ParamPush_Request_* dst,
                const ParamPush_Request_* src);

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

            extern const char *ParamPush_Response_TYPENAME;

            struct ParamPush_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamPush_Response_TypeSupport;
            class ParamPush_Response_DataWriter;
            class ParamPush_Response_DataReader;
            #endif

            class ParamPush_Response_ 
            {
              public:
                typedef struct ParamPush_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamPush_Response_TypeSupport TypeSupport;
                typedef ParamPush_Response_DataWriter DataWriter;
                typedef ParamPush_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_UnsignedLong   param_transfered_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamPush_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamPush_Response_Seq, ParamPush_Response_);

            NDDSUSERDllExport
            RTIBool ParamPush_Response__initialize(
                ParamPush_Response_* self);

            NDDSUSERDllExport
            RTIBool ParamPush_Response__initialize_ex(
                ParamPush_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamPush_Response__initialize_w_params(
                ParamPush_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamPush_Response__finalize(
                ParamPush_Response_* self);

            NDDSUSERDllExport
            void ParamPush_Response__finalize_ex(
                ParamPush_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamPush_Response__finalize_w_params(
                ParamPush_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamPush_Response__finalize_optional_members(
                ParamPush_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamPush_Response__copy(
                ParamPush_Response_* dst,
                const ParamPush_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* ParamPush_ */

