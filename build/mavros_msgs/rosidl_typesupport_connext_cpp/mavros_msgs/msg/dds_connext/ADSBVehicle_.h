

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ADSBVehicle_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ADSBVehicle__1840331892_h
#define ADSBVehicle__1840331892_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace ADSBVehicle_Constants {
                static const DDS_Octet ALT_PRESSURE_QNH_= 0;
                static const DDS_Octet ALT_GEOMETRIC_= 1;
                static const DDS_Octet EMITTER_NO_INFO_= 0;
                static const DDS_Octet EMITTER_LIGHT_= 1;
                static const DDS_Octet EMITTER_SMALL_= 2;
                static const DDS_Octet EMITTER_LARGE_= 3;
                static const DDS_Octet EMITTER_HIGH_VORTEX_LARGE_= 4;
                static const DDS_Octet EMITTER_HEAVY_= 5;
                static const DDS_Octet EMITTER_HIGHLY_MANUV_= 6;
                static const DDS_Octet EMITTER_ROTOCRAFT_= 7;
                static const DDS_Octet EMITTER_UNASSIGNED_= 8;
                static const DDS_Octet EMITTER_GLIDER_= 9;
                static const DDS_Octet EMITTER_LIGHTER_AIR_= 10;
                static const DDS_Octet EMITTER_PARACHUTE_= 11;
                static const DDS_Octet EMITTER_ULTRA_LIGHT_= 12;
                static const DDS_Octet EMITTER_UNASSIGNED2_= 13;
                static const DDS_Octet EMITTER_UAV_= 14;
                static const DDS_Octet EMITTER_SPACE_= 15;
                static const DDS_Octet EMITTER_UNASSGINED3_= 16;
                static const DDS_Octet EMITTER_EMERGENCY_SURFACE_= 17;
                static const DDS_Octet EMITTER_SERVICE_SURFACE_= 18;
                static const DDS_Octet EMITTER_POINT_OBSTACLE_= 19;
                static const DDS_UnsignedShort FLAG_VALID_COORDS_= 1;
                static const DDS_UnsignedShort FLAG_VALID_ALTITUDE_= 2;
                static const DDS_UnsignedShort FLAG_VALID_HEADING_= 4;
                static const DDS_UnsignedShort FLAG_VALID_VELOCITY_= 8;
                static const DDS_UnsignedShort FLAG_VALID_CALLSIGN_= 16;
                static const DDS_UnsignedShort FLAG_VALID_SQUAWK_= 32;
                static const DDS_UnsignedShort FLAG_SIMULATED_= 64;
                static const DDS_UnsignedShort FLAG_VERTICAL_VELOCITY_VALID_= 128;
                static const DDS_UnsignedShort FLAG_BARO_VALID_= 256;
                static const DDS_UnsignedShort FLAG_SOURCE_UAT_= 32768;
            } /* namespace ADSBVehicle_Constants  */

            extern const char *ADSBVehicle_TYPENAME;

            struct ADSBVehicle_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ADSBVehicle_TypeSupport;
            class ADSBVehicle_DataWriter;
            class ADSBVehicle_DataReader;
            #endif

            class ADSBVehicle_ 
            {
              public:
                typedef struct ADSBVehicle_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ADSBVehicle_TypeSupport TypeSupport;
                typedef ADSBVehicle_DataWriter DataWriter;
                typedef ADSBVehicle_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLong   icao_address_ ;
                DDS_Char *   callsign_ ;
                DDS_Double   latitude_ ;
                DDS_Double   longitude_ ;
                DDS_Float   altitude_ ;
                DDS_Float   heading_ ;
                DDS_Float   hor_velocity_ ;
                DDS_Float   ver_velocity_ ;
                DDS_Octet   altitude_type_ ;
                DDS_Octet   emitter_type_ ;
                builtin_interfaces::msg::dds_::Duration_   tslc_ ;
                DDS_UnsignedShort   flags_ ;
                DDS_UnsignedShort   squawk_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ADSBVehicle__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ADSBVehicle_Seq, ADSBVehicle_);

            NDDSUSERDllExport
            RTIBool ADSBVehicle__initialize(
                ADSBVehicle_* self);

            NDDSUSERDllExport
            RTIBool ADSBVehicle__initialize_ex(
                ADSBVehicle_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ADSBVehicle__initialize_w_params(
                ADSBVehicle_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ADSBVehicle__finalize(
                ADSBVehicle_* self);

            NDDSUSERDllExport
            void ADSBVehicle__finalize_ex(
                ADSBVehicle_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ADSBVehicle__finalize_w_params(
                ADSBVehicle_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ADSBVehicle__finalize_optional_members(
                ADSBVehicle_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ADSBVehicle__copy(
                ADSBVehicle_* dst,
                const ADSBVehicle_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ADSBVehicle_ */

