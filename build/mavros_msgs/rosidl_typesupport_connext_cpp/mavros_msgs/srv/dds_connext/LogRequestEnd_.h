

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LogRequestEnd_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LogRequestEnd__599476784_h
#define LogRequestEnd__599476784_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *LogRequestEnd_Request_TYPENAME;

            struct LogRequestEnd_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LogRequestEnd_Request_TypeSupport;
            class LogRequestEnd_Request_DataWriter;
            class LogRequestEnd_Request_DataReader;
            #endif

            class LogRequestEnd_Request_ 
            {
              public:
                typedef struct LogRequestEnd_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LogRequestEnd_Request_TypeSupport TypeSupport;
                typedef LogRequestEnd_Request_DataWriter DataWriter;
                typedef LogRequestEnd_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LogRequestEnd_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LogRequestEnd_Request_Seq, LogRequestEnd_Request_);

            NDDSUSERDllExport
            RTIBool LogRequestEnd_Request__initialize(
                LogRequestEnd_Request_* self);

            NDDSUSERDllExport
            RTIBool LogRequestEnd_Request__initialize_ex(
                LogRequestEnd_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LogRequestEnd_Request__initialize_w_params(
                LogRequestEnd_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LogRequestEnd_Request__finalize(
                LogRequestEnd_Request_* self);

            NDDSUSERDllExport
            void LogRequestEnd_Request__finalize_ex(
                LogRequestEnd_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LogRequestEnd_Request__finalize_w_params(
                LogRequestEnd_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LogRequestEnd_Request__finalize_optional_members(
                LogRequestEnd_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LogRequestEnd_Request__copy(
                LogRequestEnd_Request_* dst,
                const LogRequestEnd_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *LogRequestEnd_Response_TYPENAME;

            struct LogRequestEnd_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LogRequestEnd_Response_TypeSupport;
            class LogRequestEnd_Response_DataWriter;
            class LogRequestEnd_Response_DataReader;
            #endif

            class LogRequestEnd_Response_ 
            {
              public:
                typedef struct LogRequestEnd_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LogRequestEnd_Response_TypeSupport TypeSupport;
                typedef LogRequestEnd_Response_DataWriter DataWriter;
                typedef LogRequestEnd_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LogRequestEnd_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LogRequestEnd_Response_Seq, LogRequestEnd_Response_);

            NDDSUSERDllExport
            RTIBool LogRequestEnd_Response__initialize(
                LogRequestEnd_Response_* self);

            NDDSUSERDllExport
            RTIBool LogRequestEnd_Response__initialize_ex(
                LogRequestEnd_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LogRequestEnd_Response__initialize_w_params(
                LogRequestEnd_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LogRequestEnd_Response__finalize(
                LogRequestEnd_Response_* self);

            NDDSUSERDllExport
            void LogRequestEnd_Response__finalize_ex(
                LogRequestEnd_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LogRequestEnd_Response__finalize_w_params(
                LogRequestEnd_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LogRequestEnd_Response__finalize_optional_members(
                LogRequestEnd_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LogRequestEnd_Response__copy(
                LogRequestEnd_Response_* dst,
                const LogRequestEnd_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* LogRequestEnd_ */

