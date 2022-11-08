

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OverrideRCIn_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef OverrideRCIn__1393109809_h
#define OverrideRCIn__1393109809_h

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
            namespace OverrideRCIn_Constants {
                static const DDS_UnsignedShort CHAN_RELEASE_= 0;
                static const DDS_UnsignedShort CHAN_NOCHANGE_= 65535;
            } /* namespace OverrideRCIn_Constants  */

            extern const char *OverrideRCIn_TYPENAME;

            struct OverrideRCIn_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class OverrideRCIn_TypeSupport;
            class OverrideRCIn_DataWriter;
            class OverrideRCIn_DataReader;
            #endif

            class OverrideRCIn_ 
            {
              public:
                typedef struct OverrideRCIn_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef OverrideRCIn_TypeSupport TypeSupport;
                typedef OverrideRCIn_DataWriter DataWriter;
                typedef OverrideRCIn_DataReader DataReader;
                #endif

                DDS_UnsignedShort   channels_ [18];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* OverrideRCIn__get_typecode(void); /* Type code */

            DDS_SEQUENCE(OverrideRCIn_Seq, OverrideRCIn_);

            NDDSUSERDllExport
            RTIBool OverrideRCIn__initialize(
                OverrideRCIn_* self);

            NDDSUSERDllExport
            RTIBool OverrideRCIn__initialize_ex(
                OverrideRCIn_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool OverrideRCIn__initialize_w_params(
                OverrideRCIn_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void OverrideRCIn__finalize(
                OverrideRCIn_* self);

            NDDSUSERDllExport
            void OverrideRCIn__finalize_ex(
                OverrideRCIn_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void OverrideRCIn__finalize_w_params(
                OverrideRCIn_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void OverrideRCIn__finalize_optional_members(
                OverrideRCIn_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool OverrideRCIn__copy(
                OverrideRCIn_* dst,
                const OverrideRCIn_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* OverrideRCIn_ */

