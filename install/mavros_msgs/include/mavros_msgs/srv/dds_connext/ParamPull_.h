

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParamPull_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParamPull__1375286047_h
#define ParamPull__1375286047_h

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

            extern const char *ParamPull_Request_TYPENAME;

            struct ParamPull_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamPull_Request_TypeSupport;
            class ParamPull_Request_DataWriter;
            class ParamPull_Request_DataReader;
            #endif

            class ParamPull_Request_ 
            {
              public:
                typedef struct ParamPull_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamPull_Request_TypeSupport TypeSupport;
                typedef ParamPull_Request_DataWriter DataWriter;
                typedef ParamPull_Request_DataReader DataReader;
                #endif

                DDS_Boolean   force_pull_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamPull_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamPull_Request_Seq, ParamPull_Request_);

            NDDSUSERDllExport
            RTIBool ParamPull_Request__initialize(
                ParamPull_Request_* self);

            NDDSUSERDllExport
            RTIBool ParamPull_Request__initialize_ex(
                ParamPull_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamPull_Request__initialize_w_params(
                ParamPull_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamPull_Request__finalize(
                ParamPull_Request_* self);

            NDDSUSERDllExport
            void ParamPull_Request__finalize_ex(
                ParamPull_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamPull_Request__finalize_w_params(
                ParamPull_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamPull_Request__finalize_optional_members(
                ParamPull_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamPull_Request__copy(
                ParamPull_Request_* dst,
                const ParamPull_Request_* src);

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

            extern const char *ParamPull_Response_TYPENAME;

            struct ParamPull_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamPull_Response_TypeSupport;
            class ParamPull_Response_DataWriter;
            class ParamPull_Response_DataReader;
            #endif

            class ParamPull_Response_ 
            {
              public:
                typedef struct ParamPull_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamPull_Response_TypeSupport TypeSupport;
                typedef ParamPull_Response_DataWriter DataWriter;
                typedef ParamPull_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_UnsignedLong   param_received_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamPull_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamPull_Response_Seq, ParamPull_Response_);

            NDDSUSERDllExport
            RTIBool ParamPull_Response__initialize(
                ParamPull_Response_* self);

            NDDSUSERDllExport
            RTIBool ParamPull_Response__initialize_ex(
                ParamPull_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamPull_Response__initialize_w_params(
                ParamPull_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamPull_Response__finalize(
                ParamPull_Response_* self);

            NDDSUSERDllExport
            void ParamPull_Response__finalize_ex(
                ParamPull_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamPull_Response__finalize_w_params(
                ParamPull_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamPull_Response__finalize_optional_members(
                ParamPull_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamPull_Response__copy(
                ParamPull_Response_* dst,
                const ParamPull_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* ParamPull_ */

