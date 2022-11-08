

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HilActuatorControls_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HilActuatorControls__930805512_h
#define HilActuatorControls__930805512_h

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

            extern const char *HilActuatorControls_TYPENAME;

            struct HilActuatorControls_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class HilActuatorControls_TypeSupport;
            class HilActuatorControls_DataWriter;
            class HilActuatorControls_DataReader;
            #endif

            class HilActuatorControls_ 
            {
              public:
                typedef struct HilActuatorControls_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef HilActuatorControls_TypeSupport TypeSupport;
                typedef HilActuatorControls_DataWriter DataWriter;
                typedef HilActuatorControls_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   controls_ [16];
                DDS_Octet   mode_ ;
                DDS_UnsignedLongLong   flags_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* HilActuatorControls__get_typecode(void); /* Type code */

            DDS_SEQUENCE(HilActuatorControls_Seq, HilActuatorControls_);

            NDDSUSERDllExport
            RTIBool HilActuatorControls__initialize(
                HilActuatorControls_* self);

            NDDSUSERDllExport
            RTIBool HilActuatorControls__initialize_ex(
                HilActuatorControls_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool HilActuatorControls__initialize_w_params(
                HilActuatorControls_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void HilActuatorControls__finalize(
                HilActuatorControls_* self);

            NDDSUSERDllExport
            void HilActuatorControls__finalize_ex(
                HilActuatorControls_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void HilActuatorControls__finalize_w_params(
                HilActuatorControls_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void HilActuatorControls__finalize_optional_members(
                HilActuatorControls_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool HilActuatorControls__copy(
                HilActuatorControls_* dst,
                const HilActuatorControls_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* HilActuatorControls_ */

