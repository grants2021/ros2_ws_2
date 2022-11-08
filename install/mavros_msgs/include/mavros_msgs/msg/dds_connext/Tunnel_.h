

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Tunnel_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Tunnel__1966495215_h
#define Tunnel__1966495215_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace Tunnel_Constants {
                static const DDS_UnsignedShort PAYLOAD_TYPE_UNKNOWN_= 0;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED0_= 200;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED1_= 201;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED2_= 202;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED3_= 203;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED4_= 204;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED5_= 205;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED6_= 206;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED7_= 207;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED8_= 208;
                static const DDS_UnsignedShort PAYLOAD_TYPE_STORM32_RESERVED9_= 209;
            } /* namespace Tunnel_Constants  */

            extern const char *Tunnel_TYPENAME;

            struct Tunnel_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Tunnel_TypeSupport;
            class Tunnel_DataWriter;
            class Tunnel_DataReader;
            #endif

            class Tunnel_ 
            {
              public:
                typedef struct Tunnel_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Tunnel_TypeSupport TypeSupport;
                typedef Tunnel_DataWriter DataWriter;
                typedef Tunnel_DataReader DataReader;
                #endif

                DDS_Octet   target_system_ ;
                DDS_Octet   target_component_ ;
                DDS_UnsignedShort   payload_type_ ;
                DDS_Octet   payload_length_ ;
                DDS_Octet   payload_ [128];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Tunnel__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Tunnel_Seq, Tunnel_);

            NDDSUSERDllExport
            RTIBool Tunnel__initialize(
                Tunnel_* self);

            NDDSUSERDllExport
            RTIBool Tunnel__initialize_ex(
                Tunnel_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Tunnel__initialize_w_params(
                Tunnel_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Tunnel__finalize(
                Tunnel_* self);

            NDDSUSERDllExport
            void Tunnel__finalize_ex(
                Tunnel_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Tunnel__finalize_w_params(
                Tunnel_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Tunnel__finalize_optional_members(
                Tunnel_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Tunnel__copy(
                Tunnel_* dst,
                const Tunnel_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* Tunnel_ */

