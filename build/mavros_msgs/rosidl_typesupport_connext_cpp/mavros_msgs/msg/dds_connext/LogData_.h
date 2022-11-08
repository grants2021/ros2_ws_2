

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LogData_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LogData__2095268322_h
#define LogData__2095268322_h

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

            extern const char *LogData_TYPENAME;

            struct LogData_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LogData_TypeSupport;
            class LogData_DataWriter;
            class LogData_DataReader;
            #endif

            class LogData_ 
            {
              public:
                typedef struct LogData_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LogData_TypeSupport TypeSupport;
                typedef LogData_DataWriter DataWriter;
                typedef LogData_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedShort   id_ ;
                DDS_UnsignedLong   offset_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LogData__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LogData_Seq, LogData_);

            NDDSUSERDllExport
            RTIBool LogData__initialize(
                LogData_* self);

            NDDSUSERDllExport
            RTIBool LogData__initialize_ex(
                LogData_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LogData__initialize_w_params(
                LogData_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LogData__finalize(
                LogData_* self);

            NDDSUSERDllExport
            void LogData__finalize_ex(
                LogData_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LogData__finalize_w_params(
                LogData_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LogData__finalize_optional_members(
                LogData_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LogData__copy(
                LogData_* dst,
                const LogData_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* LogData_ */

