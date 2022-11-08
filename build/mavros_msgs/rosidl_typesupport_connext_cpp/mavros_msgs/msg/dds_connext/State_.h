

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from State_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef State__1763807691_h
#define State__1763807691_h

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
            namespace State_Constants {
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_MANUAL_= "MANUAL";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_CIRCLE_= "CIRCLE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_STABILIZE_= "STABILIZE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_TRAINING_= "TRAINING";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_ACRO_= "ACRO";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_FBWA_= "FBWA";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_FBWB_= "FBWB";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_CRUISE_= "CRUISE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_AUTOTUNE_= "AUTOTUNE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_AUTO_= "AUTO";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_RTL_= "RTL";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_LOITER_= "LOITER";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_LAND_= "LAND";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_GUIDED_= "GUIDED";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_INITIALISING_= "INITIALISING";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_QSTABILIZE_= "QSTABILIZE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_QHOVER_= "QHOVER";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_QLOITER_= "QLOITER";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_QLAND_= "QLAND";
                __attribute__((unused)) static const DDS_Char * MODE_APM_PLANE_QRTL_= "QRTL";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_STABILIZE_= "STABILIZE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_ACRO_= "ACRO";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_ALT_HOLD_= "ALT_HOLD";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_AUTO_= "AUTO";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_GUIDED_= "GUIDED";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_LOITER_= "LOITER";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_RTL_= "RTL";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_CIRCLE_= "CIRCLE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_POSITION_= "POSITION";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_LAND_= "LAND";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_OF_LOITER_= "OF_LOITER";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_DRIFT_= "DRIFT";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_SPORT_= "SPORT";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_FLIP_= "FLIP";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_AUTOTUNE_= "AUTOTUNE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_POSHOLD_= "POSHOLD";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_BRAKE_= "BRAKE";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_THROW_= "THROW";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_AVOID_ADSB_= "AVOID_ADSB";
                __attribute__((unused)) static const DDS_Char * MODE_APM_COPTER_GUIDED_NOGPS_= "GUIDED_NOGPS";
                __attribute__((unused)) static const DDS_Char * MODE_APM_ROVER_MANUAL_= "MANUAL";
                __attribute__((unused)) static const DDS_Char * MODE_APM_ROVER_LEARNING_= "LEARNING";
                __attribute__((unused)) static const DDS_Char * MODE_APM_ROVER_STEERING_= "STEERING";
                __attribute__((unused)) static const DDS_Char * MODE_APM_ROVER_HOLD_= "HOLD";
                __attribute__((unused)) static const DDS_Char * MODE_APM_ROVER_AUTO_= "AUTO";
                __attribute__((unused)) static const DDS_Char * MODE_APM_ROVER_RTL_= "RTL";
                __attribute__((unused)) static const DDS_Char * MODE_APM_ROVER_GUIDED_= "GUIDED";
                __attribute__((unused)) static const DDS_Char * MODE_APM_ROVER_INITIALISING_= "INITIALISING";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_MANUAL_= "MANUAL";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_ACRO_= "ACRO";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_ALTITUDE_= "ALTCTL";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_POSITION_= "POSCTL";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_OFFBOARD_= "OFFBOARD";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_STABILIZED_= "STABILIZED";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_RATTITUDE_= "RATTITUDE";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_MISSION_= "AUTO.MISSION";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_LOITER_= "AUTO.LOITER";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_RTL_= "AUTO.RTL";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_LAND_= "AUTO.LAND";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_RTGS_= "AUTO.RTGS";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_READY_= "AUTO.READY";
                __attribute__((unused)) static const DDS_Char * MODE_PX4_TAKEOFF_= "AUTO.TAKEOFF";
            } /* namespace State_Constants  */

            extern const char *State_TYPENAME;

            struct State_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class State_TypeSupport;
            class State_DataWriter;
            class State_DataReader;
            #endif

            class State_ 
            {
              public:
                typedef struct State_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef State_TypeSupport TypeSupport;
                typedef State_DataWriter DataWriter;
                typedef State_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Boolean   connected_ ;
                DDS_Boolean   armed_ ;
                DDS_Boolean   guided_ ;
                DDS_Boolean   manual_input_ ;
                DDS_Char *   mode_ ;
                DDS_Octet   system_status_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* State__get_typecode(void); /* Type code */

            DDS_SEQUENCE(State_Seq, State_);

            NDDSUSERDllExport
            RTIBool State__initialize(
                State_* self);

            NDDSUSERDllExport
            RTIBool State__initialize_ex(
                State_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool State__initialize_w_params(
                State_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void State__finalize(
                State_* self);

            NDDSUSERDllExport
            void State__finalize_ex(
                State_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void State__finalize_w_params(
                State_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void State__finalize_optional_members(
                State_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool State__copy(
                State_* dst,
                const State_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* State_ */

