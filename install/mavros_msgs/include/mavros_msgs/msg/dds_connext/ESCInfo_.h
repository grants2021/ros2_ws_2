

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ESCInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ESCInfo__150721969_h
#define ESCInfo__150721969_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/ESCInfoItem_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ESCInfo_TYPENAME;

            struct ESCInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ESCInfo_TypeSupport;
            class ESCInfo_DataWriter;
            class ESCInfo_DataReader;
            #endif

            class ESCInfo_ 
            {
              public:
                typedef struct ESCInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ESCInfo_TypeSupport TypeSupport;
                typedef ESCInfo_DataWriter DataWriter;
                typedef ESCInfo_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedShort   counter_ ;
                DDS_Octet   count_ ;
                DDS_Octet   connection_type_ ;
                DDS_Octet   info_ ;
                mavros_msgs::msg::dds_::ESCInfoItem_Seq  esc_info_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ESCInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ESCInfo_Seq, ESCInfo_);

            NDDSUSERDllExport
            RTIBool ESCInfo__initialize(
                ESCInfo_* self);

            NDDSUSERDllExport
            RTIBool ESCInfo__initialize_ex(
                ESCInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ESCInfo__initialize_w_params(
                ESCInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ESCInfo__finalize(
                ESCInfo_* self);

            NDDSUSERDllExport
            void ESCInfo__finalize_ex(
                ESCInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ESCInfo__finalize_w_params(
                ESCInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ESCInfo__finalize_optional_members(
                ESCInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ESCInfo__copy(
                ESCInfo_* dst,
                const ESCInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ESCInfo_ */

