

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HilGPS_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HilGPS__1985353809_h
#define HilGPS__1985353809_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *HilGPS_TYPENAME;

            struct HilGPS_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class HilGPS_TypeSupport;
            class HilGPS_DataWriter;
            class HilGPS_DataReader;
            #endif

            class HilGPS_ 
            {
              public:
                typedef struct HilGPS_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef HilGPS_TypeSupport TypeSupport;
                typedef HilGPS_DataWriter DataWriter;
                typedef HilGPS_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   fix_type_ ;
                geographic_msgs::msg::dds_::GeoPoint_   geo_ ;
                DDS_UnsignedShort   eph_ ;
                DDS_UnsignedShort   epv_ ;
                DDS_UnsignedShort   vel_ ;
                DDS_Short   vn_ ;
                DDS_Short   ve_ ;
                DDS_Short   vd_ ;
                DDS_UnsignedShort   cog_ ;
                DDS_Octet   satellites_visible_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* HilGPS__get_typecode(void); /* Type code */

            DDS_SEQUENCE(HilGPS_Seq, HilGPS_);

            NDDSUSERDllExport
            RTIBool HilGPS__initialize(
                HilGPS_* self);

            NDDSUSERDllExport
            RTIBool HilGPS__initialize_ex(
                HilGPS_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool HilGPS__initialize_w_params(
                HilGPS_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void HilGPS__finalize(
                HilGPS_* self);

            NDDSUSERDllExport
            void HilGPS__finalize_ex(
                HilGPS_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void HilGPS__finalize_w_params(
                HilGPS_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void HilGPS__finalize_optional_members(
                HilGPS_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool HilGPS__copy(
                HilGPS_* dst,
                const HilGPS_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* HilGPS_ */

