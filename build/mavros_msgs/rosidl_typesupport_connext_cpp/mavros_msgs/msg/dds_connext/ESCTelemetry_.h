

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ESCTelemetry_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ESCTelemetry__1899766128_h
#define ESCTelemetry__1899766128_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/ESCTelemetryItem_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ESCTelemetry_TYPENAME;

            struct ESCTelemetry_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ESCTelemetry_TypeSupport;
            class ESCTelemetry_DataWriter;
            class ESCTelemetry_DataReader;
            #endif

            class ESCTelemetry_ 
            {
              public:
                typedef struct ESCTelemetry_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ESCTelemetry_TypeSupport TypeSupport;
                typedef ESCTelemetry_DataWriter DataWriter;
                typedef ESCTelemetry_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                mavros_msgs::msg::dds_::ESCTelemetryItem_Seq  esc_telemetry_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ESCTelemetry__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ESCTelemetry_Seq, ESCTelemetry_);

            NDDSUSERDllExport
            RTIBool ESCTelemetry__initialize(
                ESCTelemetry_* self);

            NDDSUSERDllExport
            RTIBool ESCTelemetry__initialize_ex(
                ESCTelemetry_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ESCTelemetry__initialize_w_params(
                ESCTelemetry_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ESCTelemetry__finalize(
                ESCTelemetry_* self);

            NDDSUSERDllExport
            void ESCTelemetry__finalize_ex(
                ESCTelemetry_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ESCTelemetry__finalize_w_params(
                ESCTelemetry_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ESCTelemetry__finalize_optional_members(
                ESCTelemetry_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ESCTelemetry__copy(
                ESCTelemetry_* dst,
                const ESCTelemetry_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ESCTelemetry_ */

