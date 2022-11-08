

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HilControls_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HilControls__792654027_h
#define HilControls__792654027_h

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

            extern const char *HilControls_TYPENAME;

            struct HilControls_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class HilControls_TypeSupport;
            class HilControls_DataWriter;
            class HilControls_DataReader;
            #endif

            class HilControls_ 
            {
              public:
                typedef struct HilControls_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef HilControls_TypeSupport TypeSupport;
                typedef HilControls_DataWriter DataWriter;
                typedef HilControls_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   roll_ailerons_ ;
                DDS_Float   pitch_elevator_ ;
                DDS_Float   yaw_rudder_ ;
                DDS_Float   throttle_ ;
                DDS_Float   aux1_ ;
                DDS_Float   aux2_ ;
                DDS_Float   aux3_ ;
                DDS_Float   aux4_ ;
                DDS_Octet   mode_ ;
                DDS_Octet   nav_mode_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* HilControls__get_typecode(void); /* Type code */

            DDS_SEQUENCE(HilControls_Seq, HilControls_);

            NDDSUSERDllExport
            RTIBool HilControls__initialize(
                HilControls_* self);

            NDDSUSERDllExport
            RTIBool HilControls__initialize_ex(
                HilControls_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool HilControls__initialize_w_params(
                HilControls_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void HilControls__finalize(
                HilControls_* self);

            NDDSUSERDllExport
            void HilControls__finalize_ex(
                HilControls_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void HilControls__finalize_w_params(
                HilControls_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void HilControls__finalize_optional_members(
                HilControls_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool HilControls__copy(
                HilControls_* dst,
                const HilControls_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* HilControls_ */

