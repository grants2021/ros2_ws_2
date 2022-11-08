

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Task_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Task__2112173363_h
#define Task__2112173363_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace vrx_gazebo {
    namespace msg {
        namespace dds_ {

            extern const char *Task_TYPENAME;

            struct Task_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Task_TypeSupport;
            class Task_DataWriter;
            class Task_DataReader;
            #endif

            class Task_ 
            {
              public:
                typedef struct Task_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Task_TypeSupport TypeSupport;
                typedef Task_DataWriter DataWriter;
                typedef Task_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Char *   state_ ;
                builtin_interfaces::msg::dds_::Time_   ready_time_ ;
                builtin_interfaces::msg::dds_::Time_   running_time_ ;
                builtin_interfaces::msg::dds_::Duration_   elapsed_time_ ;
                builtin_interfaces::msg::dds_::Duration_   remaining_time_ ;
                DDS_Boolean   timed_out_ ;
                DDS_UnsignedLong   num_collisions_ ;
                DDS_Double   score_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Task__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Task_Seq, Task_);

            NDDSUSERDllExport
            RTIBool Task__initialize(
                Task_* self);

            NDDSUSERDllExport
            RTIBool Task__initialize_ex(
                Task_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Task__initialize_w_params(
                Task_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Task__finalize(
                Task_* self);

            NDDSUSERDllExport
            void Task__finalize_ex(
                Task_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Task__finalize_w_params(
                Task_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Task__finalize_optional_members(
                Task_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Task__copy(
                Task_* dst,
                const Task_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace vrx_gazebo  */

#endif /* Task_ */

