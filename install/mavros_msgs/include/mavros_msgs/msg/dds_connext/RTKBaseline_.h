

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RTKBaseline_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RTKBaseline__693217680_h
#define RTKBaseline__693217680_h

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
            namespace RTKBaseline_Constants {
                static const DDS_Octet RTK_BASELINE_COORDINATE_SYSTEM_ECEF_= 0;
                static const DDS_Octet RTK_BASELINE_COORDINATE_SYSTEM_NED_= 1;
            } /* namespace RTKBaseline_Constants  */

            extern const char *RTKBaseline_TYPENAME;

            struct RTKBaseline_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RTKBaseline_TypeSupport;
            class RTKBaseline_DataWriter;
            class RTKBaseline_DataReader;
            #endif

            class RTKBaseline_ 
            {
              public:
                typedef struct RTKBaseline_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RTKBaseline_TypeSupport TypeSupport;
                typedef RTKBaseline_DataWriter DataWriter;
                typedef RTKBaseline_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLong   time_last_baseline_ms_ ;
                DDS_Octet   rtk_receiver_id_ ;
                DDS_UnsignedShort   wn_ ;
                DDS_UnsignedLong   tow_ ;
                DDS_Octet   rtk_health_ ;
                DDS_Octet   rtk_rate_ ;
                DDS_Octet   nsats_ ;
                DDS_Octet   baseline_coords_type_ ;
                DDS_Long   baseline_a_mm_ ;
                DDS_Long   baseline_b_mm_ ;
                DDS_Long   baseline_c_mm_ ;
                DDS_UnsignedLong   accuracy_ ;
                DDS_Long   iar_num_hypotheses_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RTKBaseline__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RTKBaseline_Seq, RTKBaseline_);

            NDDSUSERDllExport
            RTIBool RTKBaseline__initialize(
                RTKBaseline_* self);

            NDDSUSERDllExport
            RTIBool RTKBaseline__initialize_ex(
                RTKBaseline_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RTKBaseline__initialize_w_params(
                RTKBaseline_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RTKBaseline__finalize(
                RTKBaseline_* self);

            NDDSUSERDllExport
            void RTKBaseline__finalize_ex(
                RTKBaseline_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RTKBaseline__finalize_w_params(
                RTKBaseline_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RTKBaseline__finalize_optional_members(
                RTKBaseline_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RTKBaseline__copy(
                RTKBaseline_* dst,
                const RTKBaseline_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* RTKBaseline_ */

