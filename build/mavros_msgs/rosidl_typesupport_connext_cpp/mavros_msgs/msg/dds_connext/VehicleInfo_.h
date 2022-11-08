

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VehicleInfo__1135824232_h
#define VehicleInfo__1135824232_h

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
            namespace VehicleInfo_Constants {
                static const DDS_Octet HAVE_INFO_HEARTBEAT_= 1;
                static const DDS_Octet HAVE_INFO_AUTOPILOT_VERSION_= 2;
            } /* namespace VehicleInfo_Constants  */

            extern const char *VehicleInfo_TYPENAME;

            struct VehicleInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class VehicleInfo_TypeSupport;
            class VehicleInfo_DataWriter;
            class VehicleInfo_DataReader;
            #endif

            class VehicleInfo_ 
            {
              public:
                typedef struct VehicleInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef VehicleInfo_TypeSupport TypeSupport;
                typedef VehicleInfo_DataWriter DataWriter;
                typedef VehicleInfo_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   available_info_ ;
                DDS_Octet   sysid_ ;
                DDS_Octet   compid_ ;
                DDS_Octet   autopilot_ ;
                DDS_Octet   type_ ;
                DDS_Octet   system_status_ ;
                DDS_Octet   base_mode_ ;
                DDS_UnsignedLong   custom_mode_ ;
                DDS_Char *   mode_ ;
                DDS_UnsignedLong   mode_id_ ;
                DDS_UnsignedLongLong   capabilities_ ;
                DDS_UnsignedLong   flight_sw_version_ ;
                DDS_UnsignedLong   middleware_sw_version_ ;
                DDS_UnsignedLong   os_sw_version_ ;
                DDS_UnsignedLong   board_version_ ;
                DDS_Char *   flight_custom_version_ ;
                DDS_UnsignedShort   vendor_id_ ;
                DDS_UnsignedShort   product_id_ ;
                DDS_UnsignedLongLong   uid_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* VehicleInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(VehicleInfo_Seq, VehicleInfo_);

            NDDSUSERDllExport
            RTIBool VehicleInfo__initialize(
                VehicleInfo_* self);

            NDDSUSERDllExport
            RTIBool VehicleInfo__initialize_ex(
                VehicleInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool VehicleInfo__initialize_w_params(
                VehicleInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void VehicleInfo__finalize(
                VehicleInfo_* self);

            NDDSUSERDllExport
            void VehicleInfo__finalize_ex(
                VehicleInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void VehicleInfo__finalize_w_params(
                VehicleInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void VehicleInfo__finalize_optional_members(
                VehicleInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool VehicleInfo__copy(
                VehicleInfo_* dst,
                const VehicleInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* VehicleInfo_ */

