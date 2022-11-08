

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimesyncStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TimesyncStatus__908976769_h
#define TimesyncStatus__908976769_h

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

            extern const char *TimesyncStatus_TYPENAME;

            struct TimesyncStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TimesyncStatus_TypeSupport;
            class TimesyncStatus_DataWriter;
            class TimesyncStatus_DataReader;
            #endif

            class TimesyncStatus_ 
            {
              public:
                typedef struct TimesyncStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TimesyncStatus_TypeSupport TypeSupport;
                typedef TimesyncStatus_DataWriter DataWriter;
                typedef TimesyncStatus_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLongLong   remote_timestamp_ns_ ;
                DDS_LongLong   observed_offset_ns_ ;
                DDS_LongLong   estimated_offset_ns_ ;
                DDS_Float   round_trip_time_ms_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TimesyncStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TimesyncStatus_Seq, TimesyncStatus_);

            NDDSUSERDllExport
            RTIBool TimesyncStatus__initialize(
                TimesyncStatus_* self);

            NDDSUSERDllExport
            RTIBool TimesyncStatus__initialize_ex(
                TimesyncStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TimesyncStatus__initialize_w_params(
                TimesyncStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TimesyncStatus__finalize(
                TimesyncStatus_* self);

            NDDSUSERDllExport
            void TimesyncStatus__finalize_ex(
                TimesyncStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TimesyncStatus__finalize_w_params(
                TimesyncStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TimesyncStatus__finalize_optional_members(
                TimesyncStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TimesyncStatus__copy(
                TimesyncStatus_* dst,
                const TimesyncStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* TimesyncStatus_ */

