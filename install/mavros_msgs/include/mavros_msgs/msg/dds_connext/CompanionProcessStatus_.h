

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CompanionProcessStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CompanionProcessStatus__96169594_h
#define CompanionProcessStatus__96169594_h

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
            namespace CompanionProcessStatus_Constants {
                static const DDS_Octet MAV_STATE_UNINIT_= 0;
                static const DDS_Octet MAV_STATE_BOOT_= 1;
                static const DDS_Octet MAV_STATE_CALIBRATING_= 2;
                static const DDS_Octet MAV_STATE_STANDBY_= 3;
                static const DDS_Octet MAV_STATE_ACTIVE_= 4;
                static const DDS_Octet MAV_STATE_CRITICAL_= 5;
                static const DDS_Octet MAV_STATE_EMERGENCY_= 6;
                static const DDS_Octet MAV_STATE_POWEROFF_= 7;
                static const DDS_Octet MAV_STATE_FLIGHT_TERMINATION_= 8;
                static const DDS_Octet MAV_COMP_ID_OBSTACLE_AVOIDANCE_= 196;
                static const DDS_Octet MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY_= 197;
            } /* namespace CompanionProcessStatus_Constants  */

            extern const char *CompanionProcessStatus_TYPENAME;

            struct CompanionProcessStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CompanionProcessStatus_TypeSupport;
            class CompanionProcessStatus_DataWriter;
            class CompanionProcessStatus_DataReader;
            #endif

            class CompanionProcessStatus_ 
            {
              public:
                typedef struct CompanionProcessStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CompanionProcessStatus_TypeSupport TypeSupport;
                typedef CompanionProcessStatus_DataWriter DataWriter;
                typedef CompanionProcessStatus_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   state_ ;
                DDS_Octet   component_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CompanionProcessStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CompanionProcessStatus_Seq, CompanionProcessStatus_);

            NDDSUSERDllExport
            RTIBool CompanionProcessStatus__initialize(
                CompanionProcessStatus_* self);

            NDDSUSERDllExport
            RTIBool CompanionProcessStatus__initialize_ex(
                CompanionProcessStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CompanionProcessStatus__initialize_w_params(
                CompanionProcessStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CompanionProcessStatus__finalize(
                CompanionProcessStatus_* self);

            NDDSUSERDllExport
            void CompanionProcessStatus__finalize_ex(
                CompanionProcessStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CompanionProcessStatus__finalize_w_params(
                CompanionProcessStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CompanionProcessStatus__finalize_optional_members(
                CompanionProcessStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CompanionProcessStatus__copy(
                CompanionProcessStatus_* dst,
                const CompanionProcessStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* CompanionProcessStatus_ */

