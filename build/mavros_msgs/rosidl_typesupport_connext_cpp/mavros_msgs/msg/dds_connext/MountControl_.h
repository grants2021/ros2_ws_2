

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MountControl_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MountControl__331803544_h
#define MountControl__331803544_h

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
            namespace MountControl_Constants {
                static const DDS_Octet MAV_MOUNT_MODE_RETRACT_= 0;
                static const DDS_Octet MAV_MOUNT_MODE_NEUTRAL_= 1;
                static const DDS_Octet MAV_MOUNT_MODE_MAVLINK_TARGETING_= 2;
                static const DDS_Octet MAV_MOUNT_MODE_RC_TARGETING_= 3;
                static const DDS_Octet MAV_MOUNT_MODE_GPS_POINT_= 4;
            } /* namespace MountControl_Constants  */

            extern const char *MountControl_TYPENAME;

            struct MountControl_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MountControl_TypeSupport;
            class MountControl_DataWriter;
            class MountControl_DataReader;
            #endif

            class MountControl_ 
            {
              public:
                typedef struct MountControl_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MountControl_TypeSupport TypeSupport;
                typedef MountControl_DataWriter DataWriter;
                typedef MountControl_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   mode_ ;
                DDS_Float   pitch_ ;
                DDS_Float   roll_ ;
                DDS_Float   yaw_ ;
                DDS_Float   altitude_ ;
                DDS_Float   latitude_ ;
                DDS_Float   longitude_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MountControl__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MountControl_Seq, MountControl_);

            NDDSUSERDllExport
            RTIBool MountControl__initialize(
                MountControl_* self);

            NDDSUSERDllExport
            RTIBool MountControl__initialize_ex(
                MountControl_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MountControl__initialize_w_params(
                MountControl_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MountControl__finalize(
                MountControl_* self);

            NDDSUSERDllExport
            void MountControl__finalize_ex(
                MountControl_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MountControl__finalize_w_params(
                MountControl_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MountControl__finalize_optional_members(
                MountControl_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MountControl__copy(
                MountControl_* dst,
                const MountControl_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* MountControl_ */

