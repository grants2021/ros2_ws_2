

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandTriggerInterval_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandTriggerInterval__1991978775_h
#define CommandTriggerInterval__1991978775_h

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

            extern const char *CommandTriggerInterval_Request_TYPENAME;

            struct CommandTriggerInterval_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandTriggerInterval_Request_TypeSupport;
            class CommandTriggerInterval_Request_DataWriter;
            class CommandTriggerInterval_Request_DataReader;
            #endif

            class CommandTriggerInterval_Request_ 
            {
              public:
                typedef struct CommandTriggerInterval_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandTriggerInterval_Request_TypeSupport TypeSupport;
                typedef CommandTriggerInterval_Request_DataWriter DataWriter;
                typedef CommandTriggerInterval_Request_DataReader DataReader;
                #endif

                DDS_Float   cycle_time_ ;
                DDS_Float   integration_time_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandTriggerInterval_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandTriggerInterval_Request_Seq, CommandTriggerInterval_Request_);

            NDDSUSERDllExport
            RTIBool CommandTriggerInterval_Request__initialize(
                CommandTriggerInterval_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandTriggerInterval_Request__initialize_ex(
                CommandTriggerInterval_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandTriggerInterval_Request__initialize_w_params(
                CommandTriggerInterval_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandTriggerInterval_Request__finalize(
                CommandTriggerInterval_Request_* self);

            NDDSUSERDllExport
            void CommandTriggerInterval_Request__finalize_ex(
                CommandTriggerInterval_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandTriggerInterval_Request__finalize_w_params(
                CommandTriggerInterval_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandTriggerInterval_Request__finalize_optional_members(
                CommandTriggerInterval_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandTriggerInterval_Request__copy(
                CommandTriggerInterval_Request_* dst,
                const CommandTriggerInterval_Request_* src);

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

            extern const char *CommandTriggerInterval_Response_TYPENAME;

            struct CommandTriggerInterval_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandTriggerInterval_Response_TypeSupport;
            class CommandTriggerInterval_Response_DataWriter;
            class CommandTriggerInterval_Response_DataReader;
            #endif

            class CommandTriggerInterval_Response_ 
            {
              public:
                typedef struct CommandTriggerInterval_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandTriggerInterval_Response_TypeSupport TypeSupport;
                typedef CommandTriggerInterval_Response_DataWriter DataWriter;
                typedef CommandTriggerInterval_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Octet   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandTriggerInterval_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandTriggerInterval_Response_Seq, CommandTriggerInterval_Response_);

            NDDSUSERDllExport
            RTIBool CommandTriggerInterval_Response__initialize(
                CommandTriggerInterval_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandTriggerInterval_Response__initialize_ex(
                CommandTriggerInterval_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandTriggerInterval_Response__initialize_w_params(
                CommandTriggerInterval_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandTriggerInterval_Response__finalize(
                CommandTriggerInterval_Response_* self);

            NDDSUSERDllExport
            void CommandTriggerInterval_Response__finalize_ex(
                CommandTriggerInterval_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandTriggerInterval_Response__finalize_w_params(
                CommandTriggerInterval_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandTriggerInterval_Response__finalize_optional_members(
                CommandTriggerInterval_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandTriggerInterval_Response__copy(
                CommandTriggerInterval_Response_* dst,
                const CommandTriggerInterval_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandTriggerInterval_ */

