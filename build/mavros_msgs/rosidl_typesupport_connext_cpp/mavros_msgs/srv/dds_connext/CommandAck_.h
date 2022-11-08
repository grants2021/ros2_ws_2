

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandAck_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandAck__638791915_h
#define CommandAck__638791915_h

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

            extern const char *CommandAck_Request_TYPENAME;

            struct CommandAck_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandAck_Request_TypeSupport;
            class CommandAck_Request_DataWriter;
            class CommandAck_Request_DataReader;
            #endif

            class CommandAck_Request_ 
            {
              public:
                typedef struct CommandAck_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandAck_Request_TypeSupport TypeSupport;
                typedef CommandAck_Request_DataWriter DataWriter;
                typedef CommandAck_Request_DataReader DataReader;
                #endif

                DDS_UnsignedShort   command_ ;
                DDS_Octet   result_ ;
                DDS_Octet   progress_ ;
                DDS_UnsignedLong   result_param2_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandAck_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandAck_Request_Seq, CommandAck_Request_);

            NDDSUSERDllExport
            RTIBool CommandAck_Request__initialize(
                CommandAck_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandAck_Request__initialize_ex(
                CommandAck_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandAck_Request__initialize_w_params(
                CommandAck_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandAck_Request__finalize(
                CommandAck_Request_* self);

            NDDSUSERDllExport
            void CommandAck_Request__finalize_ex(
                CommandAck_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandAck_Request__finalize_w_params(
                CommandAck_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandAck_Request__finalize_optional_members(
                CommandAck_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandAck_Request__copy(
                CommandAck_Request_* dst,
                const CommandAck_Request_* src);

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

            extern const char *CommandAck_Response_TYPENAME;

            struct CommandAck_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandAck_Response_TypeSupport;
            class CommandAck_Response_DataWriter;
            class CommandAck_Response_DataReader;
            #endif

            class CommandAck_Response_ 
            {
              public:
                typedef struct CommandAck_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandAck_Response_TypeSupport TypeSupport;
                typedef CommandAck_Response_DataWriter DataWriter;
                typedef CommandAck_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* CommandAck_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandAck_Response_Seq, CommandAck_Response_);

            NDDSUSERDllExport
            RTIBool CommandAck_Response__initialize(
                CommandAck_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandAck_Response__initialize_ex(
                CommandAck_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandAck_Response__initialize_w_params(
                CommandAck_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandAck_Response__finalize(
                CommandAck_Response_* self);

            NDDSUSERDllExport
            void CommandAck_Response__finalize_ex(
                CommandAck_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandAck_Response__finalize_w_params(
                CommandAck_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandAck_Response__finalize_optional_members(
                CommandAck_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandAck_Response__copy(
                CommandAck_Response_* dst,
                const CommandAck_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandAck_ */

