

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandBool_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandBool__75184537_h
#define CommandBool__75184537_h

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

            extern const char *CommandBool_Request_TYPENAME;

            struct CommandBool_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandBool_Request_TypeSupport;
            class CommandBool_Request_DataWriter;
            class CommandBool_Request_DataReader;
            #endif

            class CommandBool_Request_ 
            {
              public:
                typedef struct CommandBool_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandBool_Request_TypeSupport TypeSupport;
                typedef CommandBool_Request_DataWriter DataWriter;
                typedef CommandBool_Request_DataReader DataReader;
                #endif

                DDS_Boolean   value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandBool_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandBool_Request_Seq, CommandBool_Request_);

            NDDSUSERDllExport
            RTIBool CommandBool_Request__initialize(
                CommandBool_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandBool_Request__initialize_ex(
                CommandBool_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandBool_Request__initialize_w_params(
                CommandBool_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandBool_Request__finalize(
                CommandBool_Request_* self);

            NDDSUSERDllExport
            void CommandBool_Request__finalize_ex(
                CommandBool_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandBool_Request__finalize_w_params(
                CommandBool_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandBool_Request__finalize_optional_members(
                CommandBool_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandBool_Request__copy(
                CommandBool_Request_* dst,
                const CommandBool_Request_* src);

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

            extern const char *CommandBool_Response_TYPENAME;

            struct CommandBool_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandBool_Response_TypeSupport;
            class CommandBool_Response_DataWriter;
            class CommandBool_Response_DataReader;
            #endif

            class CommandBool_Response_ 
            {
              public:
                typedef struct CommandBool_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandBool_Response_TypeSupport TypeSupport;
                typedef CommandBool_Response_DataWriter DataWriter;
                typedef CommandBool_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* CommandBool_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandBool_Response_Seq, CommandBool_Response_);

            NDDSUSERDllExport
            RTIBool CommandBool_Response__initialize(
                CommandBool_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandBool_Response__initialize_ex(
                CommandBool_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandBool_Response__initialize_w_params(
                CommandBool_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandBool_Response__finalize(
                CommandBool_Response_* self);

            NDDSUSERDllExport
            void CommandBool_Response__finalize_ex(
                CommandBool_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandBool_Response__finalize_w_params(
                CommandBool_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandBool_Response__finalize_optional_members(
                CommandBool_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandBool_Response__copy(
                CommandBool_Response_* dst,
                const CommandBool_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandBool_ */

