

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RangeBearing_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RangeBearing__1083521467_h
#define RangeBearing__1083521467_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace usv_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *RangeBearing_TYPENAME;

            struct RangeBearing_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RangeBearing_TypeSupport;
            class RangeBearing_DataWriter;
            class RangeBearing_DataReader;
            #endif

            class RangeBearing_ 
            {
              public:
                typedef struct RangeBearing_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RangeBearing_TypeSupport TypeSupport;
                typedef RangeBearing_DataWriter DataWriter;
                typedef RangeBearing_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   range_ ;
                DDS_Float   bearing_ ;
                DDS_Float   elevation_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RangeBearing__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RangeBearing_Seq, RangeBearing_);

            NDDSUSERDllExport
            RTIBool RangeBearing__initialize(
                RangeBearing_* self);

            NDDSUSERDllExport
            RTIBool RangeBearing__initialize_ex(
                RangeBearing_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RangeBearing__initialize_w_params(
                RangeBearing_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RangeBearing__finalize(
                RangeBearing_* self);

            NDDSUSERDllExport
            void RangeBearing__finalize_ex(
                RangeBearing_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RangeBearing__finalize_w_params(
                RangeBearing_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RangeBearing__finalize_optional_members(
                RangeBearing_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RangeBearing__copy(
                RangeBearing_* dst,
                const RangeBearing_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace usv_msgs  */

#endif /* RangeBearing_ */

