

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ESCTelemetryItem_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ESCTelemetryItem__1071134403_h
#define ESCTelemetryItem__1071134403_h

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

            extern const char *ESCTelemetryItem_TYPENAME;

            struct ESCTelemetryItem_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ESCTelemetryItem_TypeSupport;
            class ESCTelemetryItem_DataWriter;
            class ESCTelemetryItem_DataReader;
            #endif

            class ESCTelemetryItem_ 
            {
              public:
                typedef struct ESCTelemetryItem_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ESCTelemetryItem_TypeSupport TypeSupport;
                typedef ESCTelemetryItem_DataWriter DataWriter;
                typedef ESCTelemetryItem_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   temperature_ ;
                DDS_Float   voltage_ ;
                DDS_Float   current_ ;
                DDS_Float   totalcurrent_ ;
                DDS_Long   rpm_ ;
                DDS_UnsignedShort   count_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ESCTelemetryItem__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ESCTelemetryItem_Seq, ESCTelemetryItem_);

            NDDSUSERDllExport
            RTIBool ESCTelemetryItem__initialize(
                ESCTelemetryItem_* self);

            NDDSUSERDllExport
            RTIBool ESCTelemetryItem__initialize_ex(
                ESCTelemetryItem_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ESCTelemetryItem__initialize_w_params(
                ESCTelemetryItem_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ESCTelemetryItem__finalize(
                ESCTelemetryItem_* self);

            NDDSUSERDllExport
            void ESCTelemetryItem__finalize_ex(
                ESCTelemetryItem_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ESCTelemetryItem__finalize_w_params(
                ESCTelemetryItem_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ESCTelemetryItem__finalize_optional_members(
                ESCTelemetryItem_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ESCTelemetryItem__copy(
                ESCTelemetryItem_* dst,
                const ESCTelemetryItem_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ESCTelemetryItem_ */

