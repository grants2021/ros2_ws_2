

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LogRequestList_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LogRequestList__222921359_h
#define LogRequestList__222921359_h

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

            extern const char *LogRequestList_Request_TYPENAME;

            struct LogRequestList_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LogRequestList_Request_TypeSupport;
            class LogRequestList_Request_DataWriter;
            class LogRequestList_Request_DataReader;
            #endif

            class LogRequestList_Request_ 
            {
              public:
                typedef struct LogRequestList_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LogRequestList_Request_TypeSupport TypeSupport;
                typedef LogRequestList_Request_DataWriter DataWriter;
                typedef LogRequestList_Request_DataReader DataReader;
                #endif

                DDS_UnsignedShort   start_ ;
                DDS_UnsignedShort   end_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LogRequestList_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LogRequestList_Request_Seq, LogRequestList_Request_);

            NDDSUSERDllExport
            RTIBool LogRequestList_Request__initialize(
                LogRequestList_Request_* self);

            NDDSUSERDllExport
            RTIBool LogRequestList_Request__initialize_ex(
                LogRequestList_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LogRequestList_Request__initialize_w_params(
                LogRequestList_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LogRequestList_Request__finalize(
                LogRequestList_Request_* self);

            NDDSUSERDllExport
            void LogRequestList_Request__finalize_ex(
                LogRequestList_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LogRequestList_Request__finalize_w_params(
                LogRequestList_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LogRequestList_Request__finalize_optional_members(
                LogRequestList_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LogRequestList_Request__copy(
                LogRequestList_Request_* dst,
                const LogRequestList_Request_* src);

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

            extern const char *LogRequestList_Response_TYPENAME;

            struct LogRequestList_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LogRequestList_Response_TypeSupport;
            class LogRequestList_Response_DataWriter;
            class LogRequestList_Response_DataReader;
            #endif

            class LogRequestList_Response_ 
            {
              public:
                typedef struct LogRequestList_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LogRequestList_Response_TypeSupport TypeSupport;
                typedef LogRequestList_Response_DataWriter DataWriter;
                typedef LogRequestList_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LogRequestList_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LogRequestList_Response_Seq, LogRequestList_Response_);

            NDDSUSERDllExport
            RTIBool LogRequestList_Response__initialize(
                LogRequestList_Response_* self);

            NDDSUSERDllExport
            RTIBool LogRequestList_Response__initialize_ex(
                LogRequestList_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LogRequestList_Response__initialize_w_params(
                LogRequestList_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LogRequestList_Response__finalize(
                LogRequestList_Response_* self);

            NDDSUSERDllExport
            void LogRequestList_Response__finalize_ex(
                LogRequestList_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LogRequestList_Response__finalize_w_params(
                LogRequestList_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LogRequestList_Response__finalize_optional_members(
                LogRequestList_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LogRequestList_Response__copy(
                LogRequestList_Response_* dst,
                const LogRequestList_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* LogRequestList_ */

