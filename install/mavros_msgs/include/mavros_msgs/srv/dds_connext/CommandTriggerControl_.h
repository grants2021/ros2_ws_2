

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandTriggerControl_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandTriggerControl__1920832781_h
#define CommandTriggerControl__1920832781_h

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

            extern const char *CommandTriggerControl_Request_TYPENAME;

            struct CommandTriggerControl_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandTriggerControl_Request_TypeSupport;
            class CommandTriggerControl_Request_DataWriter;
            class CommandTriggerControl_Request_DataReader;
            #endif

            class CommandTriggerControl_Request_ 
            {
              public:
                typedef struct CommandTriggerControl_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandTriggerControl_Request_TypeSupport TypeSupport;
                typedef CommandTriggerControl_Request_DataWriter DataWriter;
                typedef CommandTriggerControl_Request_DataReader DataReader;
                #endif

                DDS_Boolean   trigger_enable_ ;
                DDS_Boolean   sequence_reset_ ;
                DDS_Boolean   trigger_pause_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandTriggerControl_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandTriggerControl_Request_Seq, CommandTriggerControl_Request_);

            NDDSUSERDllExport
            RTIBool CommandTriggerControl_Request__initialize(
                CommandTriggerControl_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandTriggerControl_Request__initialize_ex(
                CommandTriggerControl_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandTriggerControl_Request__initialize_w_params(
                CommandTriggerControl_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandTriggerControl_Request__finalize(
                CommandTriggerControl_Request_* self);

            NDDSUSERDllExport
            void CommandTriggerControl_Request__finalize_ex(
                CommandTriggerControl_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandTriggerControl_Request__finalize_w_params(
                CommandTriggerControl_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandTriggerControl_Request__finalize_optional_members(
                CommandTriggerControl_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandTriggerControl_Request__copy(
                CommandTriggerControl_Request_* dst,
                const CommandTriggerControl_Request_* src);

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

            extern const char *CommandTriggerControl_Response_TYPENAME;

            struct CommandTriggerControl_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandTriggerControl_Response_TypeSupport;
            class CommandTriggerControl_Response_DataWriter;
            class CommandTriggerControl_Response_DataReader;
            #endif

            class CommandTriggerControl_Response_ 
            {
              public:
                typedef struct CommandTriggerControl_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandTriggerControl_Response_TypeSupport TypeSupport;
                typedef CommandTriggerControl_Response_DataWriter DataWriter;
                typedef CommandTriggerControl_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* CommandTriggerControl_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandTriggerControl_Response_Seq, CommandTriggerControl_Response_);

            NDDSUSERDllExport
            RTIBool CommandTriggerControl_Response__initialize(
                CommandTriggerControl_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandTriggerControl_Response__initialize_ex(
                CommandTriggerControl_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandTriggerControl_Response__initialize_w_params(
                CommandTriggerControl_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandTriggerControl_Response__finalize(
                CommandTriggerControl_Response_* self);

            NDDSUSERDllExport
            void CommandTriggerControl_Response__finalize_ex(
                CommandTriggerControl_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandTriggerControl_Response__finalize_w_params(
                CommandTriggerControl_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandTriggerControl_Response__finalize_optional_members(
                CommandTriggerControl_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandTriggerControl_Response__copy(
                CommandTriggerControl_Response_* dst,
                const CommandTriggerControl_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandTriggerControl_ */

