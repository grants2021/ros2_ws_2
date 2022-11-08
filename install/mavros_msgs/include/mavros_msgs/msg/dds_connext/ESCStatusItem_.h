

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ESCStatusItem_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ESCStatusItem__1133480423_h
#define ESCStatusItem__1133480423_h

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

            extern const char *ESCStatusItem_TYPENAME;

            struct ESCStatusItem_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ESCStatusItem_TypeSupport;
            class ESCStatusItem_DataWriter;
            class ESCStatusItem_DataReader;
            #endif

            class ESCStatusItem_ 
            {
              public:
                typedef struct ESCStatusItem_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ESCStatusItem_TypeSupport TypeSupport;
                typedef ESCStatusItem_DataWriter DataWriter;
                typedef ESCStatusItem_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Long   rpm_ ;
                DDS_Float   voltage_ ;
                DDS_Float   current_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ESCStatusItem__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ESCStatusItem_Seq, ESCStatusItem_);

            NDDSUSERDllExport
            RTIBool ESCStatusItem__initialize(
                ESCStatusItem_* self);

            NDDSUSERDllExport
            RTIBool ESCStatusItem__initialize_ex(
                ESCStatusItem_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ESCStatusItem__initialize_w_params(
                ESCStatusItem_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ESCStatusItem__finalize(
                ESCStatusItem_* self);

            NDDSUSERDllExport
            void ESCStatusItem__finalize_ex(
                ESCStatusItem_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ESCStatusItem__finalize_w_params(
                ESCStatusItem_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ESCStatusItem__finalize_optional_members(
                ESCStatusItem_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ESCStatusItem__copy(
                ESCStatusItem_* dst,
                const ESCStatusItem_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ESCStatusItem_ */

