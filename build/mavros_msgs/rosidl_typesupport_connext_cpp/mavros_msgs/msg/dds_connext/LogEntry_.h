

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LogEntry_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LogEntry__243143829_h
#define LogEntry__243143829_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *LogEntry_TYPENAME;

            struct LogEntry_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LogEntry_TypeSupport;
            class LogEntry_DataWriter;
            class LogEntry_DataReader;
            #endif

            class LogEntry_ 
            {
              public:
                typedef struct LogEntry_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LogEntry_TypeSupport TypeSupport;
                typedef LogEntry_DataWriter DataWriter;
                typedef LogEntry_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedShort   id_ ;
                DDS_UnsignedShort   num_logs_ ;
                DDS_UnsignedShort   last_log_num_ ;
                builtin_interfaces::msg::dds_::Time_   time_utc_ ;
                DDS_UnsignedLong   size_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LogEntry__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LogEntry_Seq, LogEntry_);

            NDDSUSERDllExport
            RTIBool LogEntry__initialize(
                LogEntry_* self);

            NDDSUSERDllExport
            RTIBool LogEntry__initialize_ex(
                LogEntry_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LogEntry__initialize_w_params(
                LogEntry_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LogEntry__finalize(
                LogEntry_* self);

            NDDSUSERDllExport
            void LogEntry__finalize_ex(
                LogEntry_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LogEntry__finalize_w_params(
                LogEntry_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LogEntry__finalize_optional_members(
                LogEntry_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LogEntry__copy(
                LogEntry_* dst,
                const LogEntry_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* LogEntry_ */

