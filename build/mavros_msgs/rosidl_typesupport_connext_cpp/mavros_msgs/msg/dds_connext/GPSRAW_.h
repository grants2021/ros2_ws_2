

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GPSRAW_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GPSRAW__49098992_h
#define GPSRAW__49098992_h

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
            namespace GPSRAW_Constants {
                static const DDS_Octet GPS_FIX_TYPE_NO_GPS_= 0;
                static const DDS_Octet GPS_FIX_TYPE_NO_FIX_= 1;
                static const DDS_Octet GPS_FIX_TYPE_2D_FIX_= 2;
                static const DDS_Octet GPS_FIX_TYPE_3D_FIX_= 3;
                static const DDS_Octet GPS_FIX_TYPE_DGPS_= 4;
                static const DDS_Octet GPS_FIX_TYPE_RTK_FLOATR_= 5;
                static const DDS_Octet GPS_FIX_TYPE_RTK_FIXEDR_= 6;
                static const DDS_Octet GPS_FIX_TYPE_STATIC_= 7;
                static const DDS_Octet GPS_FIX_TYPE_PPP_= 8;
            } /* namespace GPSRAW_Constants  */

            extern const char *GPSRAW_TYPENAME;

            struct GPSRAW_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GPSRAW_TypeSupport;
            class GPSRAW_DataWriter;
            class GPSRAW_DataReader;
            #endif

            class GPSRAW_ 
            {
              public:
                typedef struct GPSRAW_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GPSRAW_TypeSupport TypeSupport;
                typedef GPSRAW_DataWriter DataWriter;
                typedef GPSRAW_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   fix_type_ ;
                DDS_Long   lat_ ;
                DDS_Long   lon_ ;
                DDS_Long   alt_ ;
                DDS_UnsignedShort   eph_ ;
                DDS_UnsignedShort   epv_ ;
                DDS_UnsignedShort   vel_ ;
                DDS_UnsignedShort   cog_ ;
                DDS_Octet   satellites_visible_ ;
                DDS_Long   alt_ellipsoid_ ;
                DDS_UnsignedLong   h_acc_ ;
                DDS_UnsignedLong   v_acc_ ;
                DDS_UnsignedLong   vel_acc_ ;
                DDS_Long   hdg_acc_ ;
                DDS_UnsignedShort   yaw_ ;
                DDS_Octet   dgps_numch_ ;
                DDS_UnsignedLong   dgps_age_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GPSRAW__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GPSRAW_Seq, GPSRAW_);

            NDDSUSERDllExport
            RTIBool GPSRAW__initialize(
                GPSRAW_* self);

            NDDSUSERDllExport
            RTIBool GPSRAW__initialize_ex(
                GPSRAW_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GPSRAW__initialize_w_params(
                GPSRAW_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GPSRAW__finalize(
                GPSRAW_* self);

            NDDSUSERDllExport
            void GPSRAW__finalize_ex(
                GPSRAW_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GPSRAW__finalize_w_params(
                GPSRAW_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GPSRAW__finalize_optional_members(
                GPSRAW_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GPSRAW__copy(
                GPSRAW_* dst,
                const GPSRAW_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* GPSRAW_ */

