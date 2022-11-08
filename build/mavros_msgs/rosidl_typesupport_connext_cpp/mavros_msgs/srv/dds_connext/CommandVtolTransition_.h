

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandVtolTransition_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandVtolTransition__697296971_h
#define CommandVtolTransition__697296971_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {
            namespace CommandVtolTransition_Request_Constants {
                static const DDS_Octet STATE_MC_= 3;
                static const DDS_Octet STATE_FW_= 4;
            } /* namespace CommandVtolTransition_Request_Constants  */

            extern const char *CommandVtolTransition_Request_TYPENAME;

            struct CommandVtolTransition_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandVtolTransition_Request_TypeSupport;
            class CommandVtolTransition_Request_DataWriter;
            class CommandVtolTransition_Request_DataReader;
            #endif

            class CommandVtolTransition_Request_ 
            {
              public:
                typedef struct CommandVtolTransition_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandVtolTransition_Request_TypeSupport TypeSupport;
                typedef CommandVtolTransition_Request_DataWriter DataWriter;
                typedef CommandVtolTransition_Request_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandVtolTransition_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandVtolTransition_Request_Seq, CommandVtolTransition_Request_);

            NDDSUSERDllExport
            RTIBool CommandVtolTransition_Request__initialize(
                CommandVtolTransition_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandVtolTransition_Request__initialize_ex(
                CommandVtolTransition_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandVtolTransition_Request__initialize_w_params(
                CommandVtolTransition_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandVtolTransition_Request__finalize(
                CommandVtolTransition_Request_* self);

            NDDSUSERDllExport
            void CommandVtolTransition_Request__finalize_ex(
                CommandVtolTransition_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandVtolTransition_Request__finalize_w_params(
                CommandVtolTransition_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandVtolTransition_Request__finalize_optional_members(
                CommandVtolTransition_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandVtolTransition_Request__copy(
                CommandVtolTransition_Request_* dst,
                const CommandVtolTransition_Request_* src);

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

            extern const char *CommandVtolTransition_Response_TYPENAME;

            struct CommandVtolTransition_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandVtolTransition_Response_TypeSupport;
            class CommandVtolTransition_Response_DataWriter;
            class CommandVtolTransition_Response_DataReader;
            #endif

            class CommandVtolTransition_Response_ 
            {
              public:
                typedef struct CommandVtolTransition_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandVtolTransition_Response_TypeSupport TypeSupport;
                typedef CommandVtolTransition_Response_DataWriter DataWriter;
                typedef CommandVtolTransition_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* CommandVtolTransition_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandVtolTransition_Response_Seq, CommandVtolTransition_Response_);

            NDDSUSERDllExport
            RTIBool CommandVtolTransition_Response__initialize(
                CommandVtolTransition_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandVtolTransition_Response__initialize_ex(
                CommandVtolTransition_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandVtolTransition_Response__initialize_w_params(
                CommandVtolTransition_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandVtolTransition_Response__finalize(
                CommandVtolTransition_Response_* self);

            NDDSUSERDllExport
            void CommandVtolTransition_Response__finalize_ex(
                CommandVtolTransition_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandVtolTransition_Response__finalize_w_params(
                CommandVtolTransition_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandVtolTransition_Response__finalize_optional_members(
                CommandVtolTransition_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandVtolTransition_Response__copy(
                CommandVtolTransition_Response_* dst,
                const CommandVtolTransition_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandVtolTransition_ */

