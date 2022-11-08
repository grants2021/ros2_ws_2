

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ActuatorControl_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ActuatorControl__1188801873_h
#define ActuatorControl__1188801873_h

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
            namespace ActuatorControl_Constants {
                static const DDS_Octet PX4_MIX_FLIGHT_CONTROL_= 0;
                static const DDS_Octet PX4_MIX_FLIGHT_CONTROL_VTOL_ALT_= 1;
                static const DDS_Octet PX4_MIX_PAYLOAD_= 2;
                static const DDS_Octet PX4_MIX_MANUAL_PASSTHROUGH_= 3;
            } /* namespace ActuatorControl_Constants  */

            extern const char *ActuatorControl_TYPENAME;

            struct ActuatorControl_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ActuatorControl_TypeSupport;
            class ActuatorControl_DataWriter;
            class ActuatorControl_DataReader;
            #endif

            class ActuatorControl_ 
            {
              public:
                typedef struct ActuatorControl_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ActuatorControl_TypeSupport TypeSupport;
                typedef ActuatorControl_DataWriter DataWriter;
                typedef ActuatorControl_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   group_mix_ ;
                DDS_Float   controls_ [8];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ActuatorControl__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ActuatorControl_Seq, ActuatorControl_);

            NDDSUSERDllExport
            RTIBool ActuatorControl__initialize(
                ActuatorControl_* self);

            NDDSUSERDllExport
            RTIBool ActuatorControl__initialize_ex(
                ActuatorControl_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ActuatorControl__initialize_w_params(
                ActuatorControl_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ActuatorControl__finalize(
                ActuatorControl_* self);

            NDDSUSERDllExport
            void ActuatorControl__finalize_ex(
                ActuatorControl_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ActuatorControl__finalize_w_params(
                ActuatorControl_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ActuatorControl__finalize_optional_members(
                ActuatorControl_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ActuatorControl__copy(
                ActuatorControl_* dst,
                const ActuatorControl_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ActuatorControl_ */

