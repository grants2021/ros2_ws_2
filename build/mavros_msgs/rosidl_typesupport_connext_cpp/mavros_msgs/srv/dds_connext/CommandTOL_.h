

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandTOL_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandTOL__2065259686_h
#define CommandTOL__2065259686_h

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

            extern const char *CommandTOL_Request_TYPENAME;

            struct CommandTOL_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandTOL_Request_TypeSupport;
            class CommandTOL_Request_DataWriter;
            class CommandTOL_Request_DataReader;
            #endif

            class CommandTOL_Request_ 
            {
              public:
                typedef struct CommandTOL_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandTOL_Request_TypeSupport TypeSupport;
                typedef CommandTOL_Request_DataWriter DataWriter;
                typedef CommandTOL_Request_DataReader DataReader;
                #endif

                DDS_Float   min_pitch_ ;
                DDS_Float   yaw_ ;
                DDS_Float   latitude_ ;
                DDS_Float   longitude_ ;
                DDS_Float   altitude_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandTOL_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandTOL_Request_Seq, CommandTOL_Request_);

            NDDSUSERDllExport
            RTIBool CommandTOL_Request__initialize(
                CommandTOL_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandTOL_Request__initialize_ex(
                CommandTOL_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandTOL_Request__initialize_w_params(
                CommandTOL_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandTOL_Request__finalize(
                CommandTOL_Request_* self);

            NDDSUSERDllExport
            void CommandTOL_Request__finalize_ex(
                CommandTOL_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandTOL_Request__finalize_w_params(
                CommandTOL_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandTOL_Request__finalize_optional_members(
                CommandTOL_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandTOL_Request__copy(
                CommandTOL_Request_* dst,
                const CommandTOL_Request_* src);

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

            extern const char *CommandTOL_Response_TYPENAME;

            struct CommandTOL_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandTOL_Response_TypeSupport;
            class CommandTOL_Response_DataWriter;
            class CommandTOL_Response_DataReader;
            #endif

            class CommandTOL_Response_ 
            {
              public:
                typedef struct CommandTOL_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandTOL_Response_TypeSupport TypeSupport;
                typedef CommandTOL_Response_DataWriter DataWriter;
                typedef CommandTOL_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* CommandTOL_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandTOL_Response_Seq, CommandTOL_Response_);

            NDDSUSERDllExport
            RTIBool CommandTOL_Response__initialize(
                CommandTOL_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandTOL_Response__initialize_ex(
                CommandTOL_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandTOL_Response__initialize_w_params(
                CommandTOL_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandTOL_Response__finalize(
                CommandTOL_Response_* self);

            NDDSUSERDllExport
            void CommandTOL_Response__finalize_ex(
                CommandTOL_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandTOL_Response__finalize_w_params(
                CommandTOL_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandTOL_Response__finalize_optional_members(
                CommandTOL_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandTOL_Response__copy(
                CommandTOL_Response_* dst,
                const CommandTOL_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandTOL_ */

