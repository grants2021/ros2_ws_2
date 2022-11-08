

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StatusText_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StatusText__1506083535_h
#define StatusText__1506083535_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace StatusText_Constants {
                static const DDS_Octet EMERGENCY_= 0;
                static const DDS_Octet ALERT_= 1;
                static const DDS_Octet CRITICAL_= 2;
                static const DDS_Octet ERROR_= 3;
                static const DDS_Octet WARNING_= 4;
                static const DDS_Octet NOTICE_= 5;
                static const DDS_Octet INFO_= 6;
                static const DDS_Octet DEBUG_= 7;
            } /* namespace StatusText_Constants  */

            extern const char *StatusText_TYPENAME;

            struct StatusText_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class StatusText_TypeSupport;
            class StatusText_DataWriter;
            class StatusText_DataReader;
            #endif

            class StatusText_ 
            {
              public:
                typedef struct StatusText_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef StatusText_TypeSupport TypeSupport;
                typedef StatusText_DataWriter DataWriter;
                typedef StatusText_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   severity_ ;
                DDS_Char *   text_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* StatusText__get_typecode(void); /* Type code */

            DDS_SEQUENCE(StatusText_Seq, StatusText_);

            NDDSUSERDllExport
            RTIBool StatusText__initialize(
                StatusText_* self);

            NDDSUSERDllExport
            RTIBool StatusText__initialize_ex(
                StatusText_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool StatusText__initialize_w_params(
                StatusText_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void StatusText__finalize(
                StatusText_* self);

            NDDSUSERDllExport
            void StatusText__finalize_ex(
                StatusText_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void StatusText__finalize_w_params(
                StatusText_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void StatusText__finalize_optional_members(
                StatusText_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool StatusText__copy(
                StatusText_* dst,
                const StatusText_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* StatusText_ */

