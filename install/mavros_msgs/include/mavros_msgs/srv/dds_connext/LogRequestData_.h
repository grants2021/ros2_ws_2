

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LogRequestData_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LogRequestData__637782922_h
#define LogRequestData__637782922_h

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

            extern const char *LogRequestData_Request_TYPENAME;

            struct LogRequestData_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LogRequestData_Request_TypeSupport;
            class LogRequestData_Request_DataWriter;
            class LogRequestData_Request_DataReader;
            #endif

            class LogRequestData_Request_ 
            {
              public:
                typedef struct LogRequestData_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LogRequestData_Request_TypeSupport TypeSupport;
                typedef LogRequestData_Request_DataWriter DataWriter;
                typedef LogRequestData_Request_DataReader DataReader;
                #endif

                DDS_UnsignedShort   id_ ;
                DDS_UnsignedLong   offset_ ;
                DDS_UnsignedLong   count_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LogRequestData_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LogRequestData_Request_Seq, LogRequestData_Request_);

            NDDSUSERDllExport
            RTIBool LogRequestData_Request__initialize(
                LogRequestData_Request_* self);

            NDDSUSERDllExport
            RTIBool LogRequestData_Request__initialize_ex(
                LogRequestData_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LogRequestData_Request__initialize_w_params(
                LogRequestData_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LogRequestData_Request__finalize(
                LogRequestData_Request_* self);

            NDDSUSERDllExport
            void LogRequestData_Request__finalize_ex(
                LogRequestData_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LogRequestData_Request__finalize_w_params(
                LogRequestData_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LogRequestData_Request__finalize_optional_members(
                LogRequestData_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LogRequestData_Request__copy(
                LogRequestData_Request_* dst,
                const LogRequestData_Request_* src);

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

            extern const char *LogRequestData_Response_TYPENAME;

            struct LogRequestData_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LogRequestData_Response_TypeSupport;
            class LogRequestData_Response_DataWriter;
            class LogRequestData_Response_DataReader;
            #endif

            class LogRequestData_Response_ 
            {
              public:
                typedef struct LogRequestData_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LogRequestData_Response_TypeSupport TypeSupport;
                typedef LogRequestData_Response_DataWriter DataWriter;
                typedef LogRequestData_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LogRequestData_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LogRequestData_Response_Seq, LogRequestData_Response_);

            NDDSUSERDllExport
            RTIBool LogRequestData_Response__initialize(
                LogRequestData_Response_* self);

            NDDSUSERDllExport
            RTIBool LogRequestData_Response__initialize_ex(
                LogRequestData_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LogRequestData_Response__initialize_w_params(
                LogRequestData_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LogRequestData_Response__finalize(
                LogRequestData_Response_* self);

            NDDSUSERDllExport
            void LogRequestData_Response__finalize_ex(
                LogRequestData_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LogRequestData_Response__finalize_w_params(
                LogRequestData_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LogRequestData_Response__finalize_optional_members(
                LogRequestData_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LogRequestData_Response__copy(
                LogRequestData_Response_* dst,
                const LogRequestData_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* LogRequestData_ */

