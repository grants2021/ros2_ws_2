

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RCOut_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RCOut__342399379_h
#define RCOut__342399379_h

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

            extern const char *RCOut_TYPENAME;

            struct RCOut_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RCOut_TypeSupport;
            class RCOut_DataWriter;
            class RCOut_DataReader;
            #endif

            class RCOut_ 
            {
              public:
                typedef struct RCOut_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RCOut_TypeSupport TypeSupport;
                typedef RCOut_DataWriter DataWriter;
                typedef RCOut_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedShortSeq  channels_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RCOut__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RCOut_Seq, RCOut_);

            NDDSUSERDllExport
            RTIBool RCOut__initialize(
                RCOut_* self);

            NDDSUSERDllExport
            RTIBool RCOut__initialize_ex(
                RCOut_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RCOut__initialize_w_params(
                RCOut_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RCOut__finalize(
                RCOut_* self);

            NDDSUSERDllExport
            void RCOut__finalize_ex(
                RCOut_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RCOut__finalize_w_params(
                RCOut_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RCOut__finalize_optional_members(
                RCOut_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RCOut__copy(
                RCOut_* dst,
                const RCOut_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* RCOut_ */

