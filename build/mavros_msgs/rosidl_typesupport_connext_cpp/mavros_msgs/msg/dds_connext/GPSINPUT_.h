

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSINPUT_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GPSINPUT__1162053655_h
#define GPSINPUT__1162053655_h

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
            namespace GPSINPUT_Constants {
                static const DDS_Octet GPS_FIX_TYPE_NO_GPS_= 0;
                static const DDS_Octet GPS_FIX_TYPE_NO_FIX_= 1;
                static const DDS_Octet GPS_FIX_TYPE_2D_FIX_= 2;
                static const DDS_Octet GPS_FIX_TYPE_3D_FIX_= 3;
                static const DDS_Octet GPS_FIX_TYPE_DGPS_= 4;
                static const DDS_Octet GPS_FIX_TYPE_RTK_FLOATR_= 5;
                static const DDS_Octet GPS_FIX_TYPE_RTK_FIXEDR_= 6;
                static const DDS_Octet GPS_FIX_TYPE_STATIC_= 7;
                static const DDS_Octet GPS_FIX_TYPE_PPP_= 8;
            } /* namespace GPSINPUT_Constants  */

            extern const char *GPSINPUT_TYPENAME;

            struct GPSINPUT_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GPSINPUT_TypeSupport;
            class GPSINPUT_DataWriter;
            class GPSINPUT_DataReader;
            #endif

            class GPSINPUT_ 
            {
              public:
                typedef struct GPSINPUT_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GPSINPUT_TypeSupport TypeSupport;
                typedef GPSINPUT_DataWriter DataWriter;
                typedef GPSINPUT_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   fix_type_ ;
                DDS_Octet   gps_id_ ;
                DDS_UnsignedShort   ignore_flags_ ;
                DDS_UnsignedLong   time_week_ms_ ;
                DDS_UnsignedShort   time_week_ ;
                DDS_Long   lat_ ;
                DDS_Long   lon_ ;
                DDS_Float   alt_ ;
                DDS_Float   hdop_ ;
                DDS_Float   vdop_ ;
                DDS_Float   vn_ ;
                DDS_Float   ve_ ;
                DDS_Float   vd_ ;
                DDS_Float   speed_accuracy_ ;
                DDS_Float   horiz_accuracy_ ;
                DDS_Float   vert_accuracy_ ;
                DDS_Octet   satellites_visible_ ;
                DDS_UnsignedShort   yaw_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GPSINPUT__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GPSINPUT_Seq, GPSINPUT_);

            NDDSUSERDllExport
            RTIBool GPSINPUT__initialize(
                GPSINPUT_* self);

            NDDSUSERDllExport
            RTIBool GPSINPUT__initialize_ex(
                GPSINPUT_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GPSINPUT__initialize_w_params(
                GPSINPUT_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GPSINPUT__finalize(
                GPSINPUT_* self);

            NDDSUSERDllExport
            void GPSINPUT__finalize_ex(
                GPSINPUT_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GPSINPUT__finalize_w_params(
                GPSINPUT_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GPSINPUT__finalize_optional_members(
                GPSINPUT_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GPSINPUT__copy(
                GPSINPUT_* dst,
                const GPSINPUT_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* GPSINPUT_ */

