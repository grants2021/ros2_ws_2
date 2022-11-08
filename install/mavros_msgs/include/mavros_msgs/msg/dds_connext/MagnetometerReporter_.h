

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MagnetometerReporter_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MagnetometerReporter__46927027_h
#define MagnetometerReporter__46927027_h

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

            extern const char *MagnetometerReporter_TYPENAME;

            struct MagnetometerReporter_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MagnetometerReporter_TypeSupport;
            class MagnetometerReporter_DataWriter;
            class MagnetometerReporter_DataReader;
            #endif

            class MagnetometerReporter_ 
            {
              public:
                typedef struct MagnetometerReporter_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MagnetometerReporter_TypeSupport TypeSupport;
                typedef MagnetometerReporter_DataWriter DataWriter;
                typedef MagnetometerReporter_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   report_ ;
                DDS_Float   confidence_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MagnetometerReporter__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MagnetometerReporter_Seq, MagnetometerReporter_);

            NDDSUSERDllExport
            RTIBool MagnetometerReporter__initialize(
                MagnetometerReporter_* self);

            NDDSUSERDllExport
            RTIBool MagnetometerReporter__initialize_ex(
                MagnetometerReporter_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MagnetometerReporter__initialize_w_params(
                MagnetometerReporter_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MagnetometerReporter__finalize(
                MagnetometerReporter_* self);

            NDDSUSERDllExport
            void MagnetometerReporter__finalize_ex(
                MagnetometerReporter_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MagnetometerReporter__finalize_w_params(
                MagnetometerReporter_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MagnetometerReporter__finalize_optional_members(
                MagnetometerReporter_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MagnetometerReporter__copy(
                MagnetometerReporter_* dst,
                const MagnetometerReporter_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* MagnetometerReporter_ */

