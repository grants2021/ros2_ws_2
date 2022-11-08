

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ESCStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ESCStatus__1726739953_h
#define ESCStatus__1726739953_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/ESCStatusItem_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ESCStatus_TYPENAME;

            struct ESCStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ESCStatus_TypeSupport;
            class ESCStatus_DataWriter;
            class ESCStatus_DataReader;
            #endif

            class ESCStatus_ 
            {
              public:
                typedef struct ESCStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ESCStatus_TypeSupport TypeSupport;
                typedef ESCStatus_DataWriter DataWriter;
                typedef ESCStatus_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                mavros_msgs::msg::dds_::ESCStatusItem_Seq  esc_status_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ESCStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ESCStatus_Seq, ESCStatus_);

            NDDSUSERDllExport
            RTIBool ESCStatus__initialize(
                ESCStatus_* self);

            NDDSUSERDllExport
            RTIBool ESCStatus__initialize_ex(
                ESCStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ESCStatus__initialize_w_params(
                ESCStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ESCStatus__finalize(
                ESCStatus_* self);

            NDDSUSERDllExport
            void ESCStatus__finalize_ex(
                ESCStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ESCStatus__finalize_w_params(
                ESCStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ESCStatus__finalize_optional_members(
                ESCStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ESCStatus__copy(
                ESCStatus_* dst,
                const ESCStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ESCStatus_ */

