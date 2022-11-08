

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VfrHud_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VfrHud__1964251712_h
#define VfrHud__1964251712_h

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

            extern const char *VfrHud_TYPENAME;

            struct VfrHud_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class VfrHud_TypeSupport;
            class VfrHud_DataWriter;
            class VfrHud_DataReader;
            #endif

            class VfrHud_ 
            {
              public:
                typedef struct VfrHud_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef VfrHud_TypeSupport TypeSupport;
                typedef VfrHud_DataWriter DataWriter;
                typedef VfrHud_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   airspeed_ ;
                DDS_Float   groundspeed_ ;
                DDS_Short   heading_ ;
                DDS_Float   throttle_ ;
                DDS_Float   altitude_ ;
                DDS_Float   climb_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* VfrHud__get_typecode(void); /* Type code */

            DDS_SEQUENCE(VfrHud_Seq, VfrHud_);

            NDDSUSERDllExport
            RTIBool VfrHud__initialize(
                VfrHud_* self);

            NDDSUSERDllExport
            RTIBool VfrHud__initialize_ex(
                VfrHud_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool VfrHud__initialize_w_params(
                VfrHud_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void VfrHud__finalize(
                VfrHud_* self);

            NDDSUSERDllExport
            void VfrHud__finalize_ex(
                VfrHud_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void VfrHud__finalize_w_params(
                VfrHud_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void VfrHud__finalize_optional_members(
                VfrHud_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool VfrHud__copy(
                VfrHud_* dst,
                const VfrHud_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* VfrHud_ */

