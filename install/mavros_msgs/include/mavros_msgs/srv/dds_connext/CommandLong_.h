

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandLong_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandLong__2000509574_h
#define CommandLong__2000509574_h

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

            extern const char *CommandLong_Request_TYPENAME;

            struct CommandLong_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandLong_Request_TypeSupport;
            class CommandLong_Request_DataWriter;
            class CommandLong_Request_DataReader;
            #endif

            class CommandLong_Request_ 
            {
              public:
                typedef struct CommandLong_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandLong_Request_TypeSupport TypeSupport;
                typedef CommandLong_Request_DataWriter DataWriter;
                typedef CommandLong_Request_DataReader DataReader;
                #endif

                DDS_Boolean   broadcast_ ;
                DDS_UnsignedShort   command_ ;
                DDS_Octet   confirmation_ ;
                DDS_Float   param1_ ;
                DDS_Float   param2_ ;
                DDS_Float   param3_ ;
                DDS_Float   param4_ ;
                DDS_Float   param5_ ;
                DDS_Float   param6_ ;
                DDS_Float   param7_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandLong_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandLong_Request_Seq, CommandLong_Request_);

            NDDSUSERDllExport
            RTIBool CommandLong_Request__initialize(
                CommandLong_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandLong_Request__initialize_ex(
                CommandLong_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandLong_Request__initialize_w_params(
                CommandLong_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandLong_Request__finalize(
                CommandLong_Request_* self);

            NDDSUSERDllExport
            void CommandLong_Request__finalize_ex(
                CommandLong_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandLong_Request__finalize_w_params(
                CommandLong_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandLong_Request__finalize_optional_members(
                CommandLong_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandLong_Request__copy(
                CommandLong_Request_* dst,
                const CommandLong_Request_* src);

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

            extern const char *CommandLong_Response_TYPENAME;

            struct CommandLong_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandLong_Response_TypeSupport;
            class CommandLong_Response_DataWriter;
            class CommandLong_Response_DataReader;
            #endif

            class CommandLong_Response_ 
            {
              public:
                typedef struct CommandLong_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandLong_Response_TypeSupport TypeSupport;
                typedef CommandLong_Response_DataWriter DataWriter;
                typedef CommandLong_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* CommandLong_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandLong_Response_Seq, CommandLong_Response_);

            NDDSUSERDllExport
            RTIBool CommandLong_Response__initialize(
                CommandLong_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandLong_Response__initialize_ex(
                CommandLong_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandLong_Response__initialize_w_params(
                CommandLong_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandLong_Response__finalize(
                CommandLong_Response_* self);

            NDDSUSERDllExport
            void CommandLong_Response__finalize_ex(
                CommandLong_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandLong_Response__finalize_w_params(
                CommandLong_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandLong_Response__finalize_optional_members(
                CommandLong_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandLong_Response__copy(
                CommandLong_Response_* dst,
                const CommandLong_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandLong_ */

