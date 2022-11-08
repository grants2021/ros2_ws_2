

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSRTK_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GPSRTK__611752026_h
#define GPSRTK__611752026_h

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

            extern const char *GPSRTK_TYPENAME;

            struct GPSRTK_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GPSRTK_TypeSupport;
            class GPSRTK_DataWriter;
            class GPSRTK_DataReader;
            #endif

            class GPSRTK_ 
            {
              public:
                typedef struct GPSRTK_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GPSRTK_TypeSupport TypeSupport;
                typedef GPSRTK_DataWriter DataWriter;
                typedef GPSRTK_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   rtk_receiver_id_ ;
                DDS_Short   wn_ ;
                DDS_UnsignedLong   tow_ ;
                DDS_Octet   rtk_health_ ;
                DDS_Octet   rtk_rate_ ;
                DDS_Octet   nsats_ ;
                DDS_Long   baseline_a_ ;
                DDS_Long   baseline_b_ ;
                DDS_Long   baseline_c_ ;
                DDS_UnsignedLong   accuracy_ ;
                DDS_Long   iar_num_hypotheses_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GPSRTK__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GPSRTK_Seq, GPSRTK_);

            NDDSUSERDllExport
            RTIBool GPSRTK__initialize(
                GPSRTK_* self);

            NDDSUSERDllExport
            RTIBool GPSRTK__initialize_ex(
                GPSRTK_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GPSRTK__initialize_w_params(
                GPSRTK_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GPSRTK__finalize(
                GPSRTK_* self);

            NDDSUSERDllExport
            void GPSRTK__finalize_ex(
                GPSRTK_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GPSRTK__finalize_w_params(
                GPSRTK_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GPSRTK__finalize_optional_members(
                GPSRTK_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GPSRTK__copy(
                GPSRTK_* dst,
                const GPSRTK_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* GPSRTK_ */

