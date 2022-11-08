

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandInt_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandInt__1168327899_h
#define CommandInt__1168327899_h

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

            extern const char *CommandInt_Request_TYPENAME;

            struct CommandInt_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandInt_Request_TypeSupport;
            class CommandInt_Request_DataWriter;
            class CommandInt_Request_DataReader;
            #endif

            class CommandInt_Request_ 
            {
              public:
                typedef struct CommandInt_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandInt_Request_TypeSupport TypeSupport;
                typedef CommandInt_Request_DataWriter DataWriter;
                typedef CommandInt_Request_DataReader DataReader;
                #endif

                DDS_Boolean   broadcast_ ;
                DDS_Octet   frame_ ;
                DDS_UnsignedShort   command_ ;
                DDS_Octet   current_ ;
                DDS_Octet   autocontinue_ ;
                DDS_Float   param1_ ;
                DDS_Float   param2_ ;
                DDS_Float   param3_ ;
                DDS_Float   param4_ ;
                DDS_Long   x_ ;
                DDS_Long   y_ ;
                DDS_Float   z_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandInt_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandInt_Request_Seq, CommandInt_Request_);

            NDDSUSERDllExport
            RTIBool CommandInt_Request__initialize(
                CommandInt_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandInt_Request__initialize_ex(
                CommandInt_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandInt_Request__initialize_w_params(
                CommandInt_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandInt_Request__finalize(
                CommandInt_Request_* self);

            NDDSUSERDllExport
            void CommandInt_Request__finalize_ex(
                CommandInt_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandInt_Request__finalize_w_params(
                CommandInt_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandInt_Request__finalize_optional_members(
                CommandInt_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandInt_Request__copy(
                CommandInt_Request_* dst,
                const CommandInt_Request_* src);

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

            extern const char *CommandInt_Response_TYPENAME;

            struct CommandInt_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandInt_Response_TypeSupport;
            class CommandInt_Response_DataWriter;
            class CommandInt_Response_DataReader;
            #endif

            class CommandInt_Response_ 
            {
              public:
                typedef struct CommandInt_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandInt_Response_TypeSupport TypeSupport;
                typedef CommandInt_Response_DataWriter DataWriter;
                typedef CommandInt_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CommandInt_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandInt_Response_Seq, CommandInt_Response_);

            NDDSUSERDllExport
            RTIBool CommandInt_Response__initialize(
                CommandInt_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandInt_Response__initialize_ex(
                CommandInt_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandInt_Response__initialize_w_params(
                CommandInt_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandInt_Response__finalize(
                CommandInt_Response_* self);

            NDDSUSERDllExport
            void CommandInt_Response__finalize_ex(
                CommandInt_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandInt_Response__finalize_w_params(
                CommandInt_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandInt_Response__finalize_optional_members(
                CommandInt_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandInt_Response__copy(
                CommandInt_Response_* dst,
                const CommandInt_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandInt_ */

