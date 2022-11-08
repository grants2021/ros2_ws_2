

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CommandHome_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CommandHome__10420916_h
#define CommandHome__10420916_h

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

            extern const char *CommandHome_Request_TYPENAME;

            struct CommandHome_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandHome_Request_TypeSupport;
            class CommandHome_Request_DataWriter;
            class CommandHome_Request_DataReader;
            #endif

            class CommandHome_Request_ 
            {
              public:
                typedef struct CommandHome_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandHome_Request_TypeSupport TypeSupport;
                typedef CommandHome_Request_DataWriter DataWriter;
                typedef CommandHome_Request_DataReader DataReader;
                #endif

                DDS_Boolean   current_gps_ ;
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

            NDDSUSERDllExport DDS_TypeCode* CommandHome_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandHome_Request_Seq, CommandHome_Request_);

            NDDSUSERDllExport
            RTIBool CommandHome_Request__initialize(
                CommandHome_Request_* self);

            NDDSUSERDllExport
            RTIBool CommandHome_Request__initialize_ex(
                CommandHome_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandHome_Request__initialize_w_params(
                CommandHome_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandHome_Request__finalize(
                CommandHome_Request_* self);

            NDDSUSERDllExport
            void CommandHome_Request__finalize_ex(
                CommandHome_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandHome_Request__finalize_w_params(
                CommandHome_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandHome_Request__finalize_optional_members(
                CommandHome_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandHome_Request__copy(
                CommandHome_Request_* dst,
                const CommandHome_Request_* src);

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

            extern const char *CommandHome_Response_TYPENAME;

            struct CommandHome_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CommandHome_Response_TypeSupport;
            class CommandHome_Response_DataWriter;
            class CommandHome_Response_DataReader;
            #endif

            class CommandHome_Response_ 
            {
              public:
                typedef struct CommandHome_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CommandHome_Response_TypeSupport TypeSupport;
                typedef CommandHome_Response_DataWriter DataWriter;
                typedef CommandHome_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* CommandHome_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CommandHome_Response_Seq, CommandHome_Response_);

            NDDSUSERDllExport
            RTIBool CommandHome_Response__initialize(
                CommandHome_Response_* self);

            NDDSUSERDllExport
            RTIBool CommandHome_Response__initialize_ex(
                CommandHome_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CommandHome_Response__initialize_w_params(
                CommandHome_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CommandHome_Response__finalize(
                CommandHome_Response_* self);

            NDDSUSERDllExport
            void CommandHome_Response__finalize_ex(
                CommandHome_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CommandHome_Response__finalize_w_params(
                CommandHome_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CommandHome_Response__finalize_optional_members(
                CommandHome_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CommandHome_Response__copy(
                CommandHome_Response_* dst,
                const CommandHome_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* CommandHome_ */

