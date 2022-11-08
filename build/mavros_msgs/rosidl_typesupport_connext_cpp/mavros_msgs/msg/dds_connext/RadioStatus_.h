

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RadioStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RadioStatus__546395570_h
#define RadioStatus__546395570_h

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

            extern const char *RadioStatus_TYPENAME;

            struct RadioStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RadioStatus_TypeSupport;
            class RadioStatus_DataWriter;
            class RadioStatus_DataReader;
            #endif

            class RadioStatus_ 
            {
              public:
                typedef struct RadioStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RadioStatus_TypeSupport TypeSupport;
                typedef RadioStatus_DataWriter DataWriter;
                typedef RadioStatus_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   rssi_ ;
                DDS_Octet   remrssi_ ;
                DDS_Octet   txbuf_ ;
                DDS_Octet   noise_ ;
                DDS_Octet   remnoise_ ;
                DDS_UnsignedShort   rxerrors_ ;
                DDS_UnsignedShort   fixed_ ;
                DDS_Float   rssi_dbm_ ;
                DDS_Float   remrssi_dbm_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RadioStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RadioStatus_Seq, RadioStatus_);

            NDDSUSERDllExport
            RTIBool RadioStatus__initialize(
                RadioStatus_* self);

            NDDSUSERDllExport
            RTIBool RadioStatus__initialize_ex(
                RadioStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RadioStatus__initialize_w_params(
                RadioStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RadioStatus__finalize(
                RadioStatus_* self);

            NDDSUSERDllExport
            void RadioStatus__finalize_ex(
                RadioStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RadioStatus__finalize_w_params(
                RadioStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RadioStatus__finalize_optional_members(
                RadioStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RadioStatus__copy(
                RadioStatus_* dst,
                const RadioStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* RadioStatus_ */

