

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RCIn_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RCIn__2071495434_h
#define RCIn__2071495434_h

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

            extern const char *RCIn_TYPENAME;

            struct RCIn_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RCIn_TypeSupport;
            class RCIn_DataWriter;
            class RCIn_DataReader;
            #endif

            class RCIn_ 
            {
              public:
                typedef struct RCIn_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RCIn_TypeSupport TypeSupport;
                typedef RCIn_DataWriter DataWriter;
                typedef RCIn_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   rssi_ ;
                DDS_UnsignedShortSeq  channels_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RCIn__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RCIn_Seq, RCIn_);

            NDDSUSERDllExport
            RTIBool RCIn__initialize(
                RCIn_* self);

            NDDSUSERDllExport
            RTIBool RCIn__initialize_ex(
                RCIn_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RCIn__initialize_w_params(
                RCIn_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RCIn__finalize(
                RCIn_* self);

            NDDSUSERDllExport
            void RCIn__finalize_ex(
                RCIn_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RCIn__finalize_w_params(
                RCIn_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RCIn__finalize_optional_members(
                RCIn_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RCIn__copy(
                RCIn_* dst,
                const RCIn_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* RCIn_ */

