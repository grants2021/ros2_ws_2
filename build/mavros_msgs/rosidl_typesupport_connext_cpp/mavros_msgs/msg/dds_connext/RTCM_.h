

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RTCM_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RTCM__188340259_h
#define RTCM__188340259_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *RTCM_TYPENAME;

            struct RTCM_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RTCM_TypeSupport;
            class RTCM_DataWriter;
            class RTCM_DataReader;
            #endif

            class RTCM_ 
            {
              public:
                typedef struct RTCM_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RTCM_TypeSupport TypeSupport;
                typedef RTCM_DataWriter DataWriter;
                typedef RTCM_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RTCM__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RTCM_Seq, RTCM_);

            NDDSUSERDllExport
            RTIBool RTCM__initialize(
                RTCM_* self);

            NDDSUSERDllExport
            RTIBool RTCM__initialize_ex(
                RTCM_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RTCM__initialize_w_params(
                RTCM_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RTCM__finalize(
                RTCM_* self);

            NDDSUSERDllExport
            void RTCM__finalize_ex(
                RTCM_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RTCM__finalize_w_params(
                RTCM_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RTCM__finalize_optional_members(
                RTCM_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RTCM__copy(
                RTCM_* dst,
                const RTCM_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* RTCM_ */

