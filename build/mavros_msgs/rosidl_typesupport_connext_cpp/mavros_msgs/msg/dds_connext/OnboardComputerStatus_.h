

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OnboardComputerStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef OnboardComputerStatus__1219051142_h
#define OnboardComputerStatus__1219051142_h

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

            extern const char *OnboardComputerStatus_TYPENAME;

            struct OnboardComputerStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class OnboardComputerStatus_TypeSupport;
            class OnboardComputerStatus_DataWriter;
            class OnboardComputerStatus_DataReader;
            #endif

            class OnboardComputerStatus_ 
            {
              public:
                typedef struct OnboardComputerStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef OnboardComputerStatus_TypeSupport TypeSupport;
                typedef OnboardComputerStatus_DataWriter DataWriter;
                typedef OnboardComputerStatus_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   component_ ;
                DDS_UnsignedLong   uptime_ ;
                DDS_Octet   type_ ;
                DDS_Octet   cpu_cores_ [8];
                DDS_Octet   cpu_combined_ [10];
                DDS_Octet   gpu_cores_ [4];
                DDS_Octet   gpu_combined_ [10];
                DDS_Octet   temperature_board_ ;
                DDS_Octet   temperature_core_ [8];
                DDS_Short   fan_speed_ [4];
                DDS_UnsignedLong   ram_usage_ ;
                DDS_UnsignedLong   ram_total_ ;
                DDS_UnsignedLong   storage_type_ [4];
                DDS_UnsignedLong   storage_usage_ [4];
                DDS_UnsignedLong   storage_total_ [4];
                DDS_UnsignedLong   link_type_ [6];
                DDS_UnsignedLong   link_tx_rate_ [6];
                DDS_UnsignedLong   link_rx_rate_ [6];
                DDS_UnsignedLong   link_tx_max_ [6];
                DDS_UnsignedLong   link_rx_max_ [6];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* OnboardComputerStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(OnboardComputerStatus_Seq, OnboardComputerStatus_);

            NDDSUSERDllExport
            RTIBool OnboardComputerStatus__initialize(
                OnboardComputerStatus_* self);

            NDDSUSERDllExport
            RTIBool OnboardComputerStatus__initialize_ex(
                OnboardComputerStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool OnboardComputerStatus__initialize_w_params(
                OnboardComputerStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void OnboardComputerStatus__finalize(
                OnboardComputerStatus_* self);

            NDDSUSERDllExport
            void OnboardComputerStatus__finalize_ex(
                OnboardComputerStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void OnboardComputerStatus__finalize_w_params(
                OnboardComputerStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void OnboardComputerStatus__finalize_optional_members(
                OnboardComputerStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool OnboardComputerStatus__copy(
                OnboardComputerStatus_* dst,
                const OnboardComputerStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* OnboardComputerStatus_ */

