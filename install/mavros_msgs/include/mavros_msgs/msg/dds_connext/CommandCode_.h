

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandCode_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandCode__1039326262_h
#define CommandCode__1039326262_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace CommandCode_Constants {
                static const DDS_UnsignedShort AIRFRAME_CONFIGURATION_= 2520;
                static const DDS_UnsignedShort ARM_AUTHORIZATION_REQUEST_= 3001;
                static const DDS_UnsignedShort COMPONENT_ARM_DISARM_= 400;
                static const DDS_UnsignedShort CONDITION_DELAY_= 112;
                static const DDS_UnsignedShort CONDITION_CHANGE_ALT_= 113;
                static const DDS_UnsignedShort CONDITION_DISTANCE_= 114;
                static const DDS_UnsignedShort CONDITION_YAW_= 115;
                static const DDS_UnsignedShort CONDITION_LAST_= 159;
                static const DDS_UnsignedShort CONTROL_HIGH_LATENCY_= 2600;
                static const DDS_UnsignedShort DO_FOLLOW_= 32;
                static const DDS_UnsignedShort DO_FOLLOW_REPOSITION_= 33;
                static const DDS_UnsignedShort DO_SET_MODE_= 176;
                static const DDS_UnsignedShort DO_JUMP_= 177;
                static const DDS_UnsignedShort DO_CHANGE_SPEED_= 178;
                static const DDS_UnsignedShort DO_SET_HOME_= 179;
                static const DDS_UnsignedShort DO_SET_PARAMETER_= 180;
                static const DDS_UnsignedShort DO_SET_RELAY_= 181;
                static const DDS_UnsignedShort DO_REPEAT_RELAY_= 182;
                static const DDS_UnsignedShort DO_SET_SERVO_= 183;
                static const DDS_UnsignedShort DO_REPEAT_SERVO_= 184;
                static const DDS_UnsignedShort DO_FLIGHTTERMINATION_= 185;
                static const DDS_UnsignedShort DO_CHANGE_ALTITUDE_= 186;
                static const DDS_UnsignedShort DO_LAND_START_= 189;
                static const DDS_UnsignedShort DO_RALLY_LAND_= 190;
                static const DDS_UnsignedShort DO_GO_AROUND_= 191;
                static const DDS_UnsignedShort DO_REPOSITION_= 192;
                static const DDS_UnsignedShort DO_PAUSE_CONTINUE_= 193;
                static const DDS_UnsignedShort DO_SET_REVERSE_= 194;
                static const DDS_UnsignedShort DO_SET_ROI_LOCATION_= 195;
                static const DDS_UnsignedShort DO_SET_ROI_WPNEXT_OFFSET_= 196;
                static const DDS_UnsignedShort DO_SET_ROI_NONE_= 197;
                static const DDS_UnsignedShort DO_SET_ROI_SYSID_= 198;
                static const DDS_UnsignedShort DO_CONTROL_VIDEO_= 200;
                static const DDS_UnsignedShort DO_SET_ROI_= 201;
                static const DDS_UnsignedShort DO_DIGICAM_CONFIGURE_= 202;
                static const DDS_UnsignedShort DO_DIGICAM_CONTROL_= 203;
                static const DDS_UnsignedShort DO_MOUNT_CONFIGURE_= 204;
                static const DDS_UnsignedShort DO_MOUNT_CONTROL_= 205;
                static const DDS_UnsignedShort DO_SET_CAM_TRIGG_DIST_= 206;
                static const DDS_UnsignedShort DO_FENCE_ENABLE_= 207;
                static const DDS_UnsignedShort DO_PARACHUTE_= 208;
                static const DDS_UnsignedShort DO_MOTOR_TEST_= 209;
                static const DDS_UnsignedShort DO_INVERTED_FLIGHT_= 210;
                static const DDS_UnsignedShort DO_GRIPPER_= 211;
                static const DDS_UnsignedShort DO_AUTOTUNE_ENABLE_= 212;
                static const DDS_UnsignedShort DO_SET_CAM_TRIGG_INTERVAL_= 214;
                static const DDS_UnsignedShort DO_MOUNT_CONTROL_QUAT_= 220;
                static const DDS_UnsignedShort DO_GUIDED_MASTER_= 221;
                static const DDS_UnsignedShort DO_GUIDED_LIMITS_= 222;
                static const DDS_UnsignedShort DO_ENGINE_CONTROL_= 223;
                static const DDS_UnsignedShort DO_SET_MISSION_CURRENT_= 224;
                static const DDS_UnsignedShort DO_LAST_= 240;
                static const DDS_UnsignedShort DO_JUMP_TAG_= 601;
                static const DDS_UnsignedShort DO_TRIGGER_CONTROL_= 2003;
                static const DDS_UnsignedShort DO_VTOL_TRANSITION_= 3000;
                static const DDS_UnsignedShort DO_ADSB_OUT_IDENT_= 10001;
                static const DDS_UnsignedShort DO_WINCH_= 42600;
                static const DDS_UnsignedShort FIXED_MAG_CAL_YAW_= 42006;
                static const DDS_UnsignedShort GET_HOME_POSITION_= 410;
                static const DDS_UnsignedShort GET_MESSAGE_INTERVAL_= 510;
                static const DDS_UnsignedShort IMAGE_START_CAPTURE_= 2000;
                static const DDS_UnsignedShort IMAGE_STOP_CAPTURE_= 2001;
                static const DDS_UnsignedShort JUMP_TAG_= 600;
                static const DDS_UnsignedShort LOGGING_START_= 2510;
                static const DDS_UnsignedShort LOGGING_STOP_= 2511;
                static const DDS_UnsignedShort MISSION_START_= 300;
                static const DDS_UnsignedShort NAV_WAYPOINT_= 16;
                static const DDS_UnsignedShort NAV_LOITER_UNLIM_= 17;
                static const DDS_UnsignedShort NAV_LOITER_TURNS_= 18;
                static const DDS_UnsignedShort NAV_LOITER_TIME_= 19;
                static const DDS_UnsignedShort NAV_RETURN_TO_LAUNCH_= 20;
                static const DDS_UnsignedShort NAV_LAND_= 21;
                static const DDS_UnsignedShort NAV_TAKEOFF_= 22;
                static const DDS_UnsignedShort NAV_LAND_LOCAL_= 23;
                static const DDS_UnsignedShort NAV_TAKEOFF_LOCAL_= 24;
                static const DDS_UnsignedShort NAV_FOLLOW_= 25;
                static const DDS_UnsignedShort NAV_CONTINUE_AND_CHANGE_ALT_= 30;
                static const DDS_UnsignedShort NAV_LOITER_TO_ALT_= 31;
                static const DDS_UnsignedShort NAV_ROI_= 80;
                static const DDS_UnsignedShort NAV_PATHPLANNING_= 81;
                static const DDS_UnsignedShort NAV_SPLINE_WAYPOINT_= 82;
                static const DDS_UnsignedShort NAV_VTOL_TAKEOFF_= 84;
                static const DDS_UnsignedShort NAV_VTOL_LAND_= 85;
                static const DDS_UnsignedShort NAV_GUIDED_ENABLE_= 92;
                static const DDS_UnsignedShort NAV_DELAY_= 93;
                static const DDS_UnsignedShort NAV_PAYLOAD_PLACE_= 94;
                static const DDS_UnsignedShort NAV_LAST_= 95;
                static const DDS_UnsignedShort NAV_SET_YAW_SPEED_= 213;
                static const DDS_UnsignedShort NAV_FENCE_RETURN_POINT_= 5000;
                static const DDS_UnsignedShort NAV_FENCE_POLYGON_VERTEX_INCLUSION_= 5001;
                static const DDS_UnsignedShort NAV_FENCE_POLYGON_VERTEX_EXCLUSION_= 5002;
                static const DDS_UnsignedShort NAV_FENCE_CIRCLE_INCLUSION_= 5003;
                static const DDS_UnsignedShort NAV_FENCE_CIRCLE_EXCLUSION_= 5004;
                static const DDS_UnsignedShort NAV_RALLY_POINT_= 5100;
                static const DDS_UnsignedShort OBLIQUE_SURVEY_= 260;
                static const DDS_UnsignedShort OVERRIDE_GOTO_= 252;
                static const DDS_UnsignedShort PANORAMA_CREATE_= 2800;
                static const DDS_UnsignedShort PAYLOAD_PREPARE_DEPLOY_= 30001;
                static const DDS_UnsignedShort PAYLOAD_CONTROL_DEPLOY_= 30002;
                static const DDS_UnsignedShort PREFLIGHT_CALIBRATION_= 241;
                static const DDS_UnsignedShort PREFLIGHT_SET_SENSOR_OFFSETS_= 242;
                static const DDS_UnsignedShort PREFLIGHT_UAVCAN_= 243;
                static const DDS_UnsignedShort PREFLIGHT_STORAGE_= 245;
                static const DDS_UnsignedShort PREFLIGHT_REBOOT_SHUTDOWN_= 246;
                static const DDS_UnsignedShort REQUEST_MESSAGE_= 512;
                static const DDS_UnsignedShort REQUEST_PROTOCOL_VERSION_= 519;
                static const DDS_UnsignedShort REQUEST_AUTOPILOT_CAPABILITIES_= 520;
                static const DDS_UnsignedShort REQUEST_CAMERA_INFORMATION_= 521;
                static const DDS_UnsignedShort REQUEST_CAMERA_SETTINGS_= 522;
                static const DDS_UnsignedShort REQUEST_STORAGE_INFORMATION_= 525;
                static const DDS_UnsignedShort REQUEST_CAMERA_CAPTURE_STATUS_= 527;
                static const DDS_UnsignedShort REQUEST_FLIGHT_INFORMATION_= 528;
                static const DDS_UnsignedShort REQUEST_VIDEO_STREAM_INFORMATION_= 2504;
                static const DDS_UnsignedShort REQUEST_VIDEO_STREAM_STATUS_= 2505;
                static const DDS_UnsignedShort RESET_CAMERA_SETTINGS_= 529;
                static const DDS_UnsignedShort RUN_PREARM_CHECKS_= 401;
                static const DDS_UnsignedShort SET_MESSAGE_INTERVAL_= 511;
                static const DDS_UnsignedShort SET_CAMERA_MODE_= 530;
                static const DDS_UnsignedShort SET_GUIDED_SUBMODE_STANDARD_= 4000;
                static const DDS_UnsignedShort SET_GUIDED_SUBMODE_CIRCLE_= 4001;
                static const DDS_UnsignedShort SPATIAL_USER_1_= 31005;
                static const DDS_UnsignedShort SPATIAL_USER_2_= 31006;
                static const DDS_UnsignedShort SPATIAL_USER_3_= 31007;
                static const DDS_UnsignedShort SPATIAL_USER_4_= 31008;
                static const DDS_UnsignedShort SPATIAL_USER_5_= 31009;
                static const DDS_UnsignedShort START_RX_PAIR_= 500;
                static const DDS_UnsignedShort STORAGE_FORMAT_= 526;
                static const DDS_UnsignedShort UAVCAN_GET_NODE_INFO_= 5200;
                static const DDS_UnsignedShort USER_1_= 31010;
                static const DDS_UnsignedShort USER_2_= 31011;
                static const DDS_UnsignedShort USER_3_= 31012;
                static const DDS_UnsignedShort USER_4_= 31013;
                static const DDS_UnsignedShort USER_5_= 31014;
                static const DDS_UnsignedShort VIDEO_START_CAPTURE_= 2500;
                static const DDS_UnsignedShort VIDEO_STOP_CAPTURE_= 2501;
                static const DDS_UnsignedShort VIDEO_START_STREAMING_= 2502;
                static const DDS_UnsignedShort VIDEO_STOP_STREAMING_= 2503;
                static const DDS_UnsignedShort WAYPOINT_USER_1_= 31000;
                static const DDS_UnsignedShort WAYPOINT_USER_2_= 31001;
                static const DDS_UnsignedShort WAYPOINT_USER_3_= 31002;
                static const DDS_UnsignedShort WAYPOINT_USER_4_= 31003;
                static const DDS_UnsignedShort WAYPOINT_USER_5_= 31004;
            } /* namespace CommandCode_Constants  */

            extern const char *CommandCode_TYPENAME;

            struct CommandCode_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandCode_TypeSupport;
            class CommandCode_DataWriter;
            class CommandCode_DataReader;
            #endif

            class CommandCode_ 
            {
              public:
                typedef struct CommandCode_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandCode_TypeSupport TypeSupport;
                typedef CommandCode_DataWriter DataWriter;
                typedef CommandCode_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandCode__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandCode_Seq, CommandCode_);

            NDDSUSERDllExport
            RTIBool CommandCode__initialize(
                CommandCode_* self);

            NDDSUSERDllExport
            RTIBool CommandCode__initialize_ex(
                CommandCode_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandCode__initialize_w_params(
                CommandCode_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandCode__finalize(
                CommandCode_* self);

            NDDSUSERDllExport
            void CommandCode__finalize_ex(
                CommandCode_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandCode__finalize_w_params(
                CommandCode_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandCode__finalize_optional_members(
                CommandCode_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandCode__copy(
                CommandCode_* dst,
                const CommandCode_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* CommandCode_ */

