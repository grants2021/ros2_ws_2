

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ESCInfoItem_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ESCInfoItem__1814297964_h
#define ESCInfoItem__1814297964_h

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

            extern const char *ESCInfoItem_TYPENAME;

            struct ESCInfoItem_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ESCInfoItem_TypeSupport;
            class ESCInfoItem_DataWriter;
            class ESCInfoItem_DataReader;
            #endif

            class ESCInfoItem_ 
            {
              public:
                typedef struct ESCInfoItem_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ESCInfoItem_TypeSupport TypeSupport;
                typedef ESCInfoItem_DataWriter DataWriter;
                typedef ESCInfoItem_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedShort   failure_flags_ ;
                DDS_UnsignedLong   error_count_ ;
                DDS_Long   temperature_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ESCInfoItem__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ESCInfoItem_Seq, ESCInfoItem_);

            NDDSUSERDllExport
            RTIBool ESCInfoItem__initialize(
                ESCInfoItem_* self);

            NDDSUSERDllExport
            RTIBool ESCInfoItem__initialize_ex(
                ESCInfoItem_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ESCInfoItem__initialize_w_params(
                ESCInfoItem_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ESCInfoItem__finalize(
                ESCInfoItem_* self);

            NDDSUSERDllExport
            void ESCInfoItem__finalize_ex(
                ESCInfoItem_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ESCInfoItem__finalize_w_params(
                ESCInfoItem_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ESCInfoItem__finalize_optional_members(
                ESCInfoItem_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ESCInfoItem__copy(
                ESCInfoItem_* dst,
                const ESCInfoItem_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ESCInfoItem_ */

