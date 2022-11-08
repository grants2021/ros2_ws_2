

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ExtendedState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ExtendedState__1218723057_h
#define ExtendedState__1218723057_h

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
            namespace ExtendedState_Constants {
                static const DDS_Octet VTOL_STATE_UNDEFINED_= 0;
                static const DDS_Octet VTOL_STATE_TRANSITION_TO_FW_= 1;
                static const DDS_Octet VTOL_STATE_TRANSITION_TO_MC_= 2;
                static const DDS_Octet VTOL_STATE_MC_= 3;
                static const DDS_Octet VTOL_STATE_FW_= 4;
                static const DDS_Octet LANDED_STATE_UNDEFINED_= 0;
                static const DDS_Octet LANDED_STATE_ON_GROUND_= 1;
                static const DDS_Octet LANDED_STATE_IN_AIR_= 2;
                static const DDS_Octet LANDED_STATE_TAKEOFF_= 3;
                static const DDS_Octet LANDED_STATE_LANDING_= 4;
            } /* namespace ExtendedState_Constants  */

            extern const char *ExtendedState_TYPENAME;

            struct ExtendedState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ExtendedState_TypeSupport;
            class ExtendedState_DataWriter;
            class ExtendedState_DataReader;
            #endif

            class ExtendedState_ 
            {
              public:
                typedef struct ExtendedState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ExtendedState_TypeSupport TypeSupport;
                typedef ExtendedState_DataWriter DataWriter;
                typedef ExtendedState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   vtol_state_ ;
                DDS_Octet   landed_state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ExtendedState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ExtendedState_Seq, ExtendedState_);

            NDDSUSERDllExport
            RTIBool ExtendedState__initialize(
                ExtendedState_* self);

            NDDSUSERDllExport
            RTIBool ExtendedState__initialize_ex(
                ExtendedState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ExtendedState__initialize_w_params(
                ExtendedState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ExtendedState__finalize(
                ExtendedState_* self);

            NDDSUSERDllExport
            void ExtendedState__finalize_ex(
                ExtendedState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ExtendedState__finalize_w_params(
                ExtendedState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ExtendedState__finalize_optional_members(
                ExtendedState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ExtendedState__copy(
                ExtendedState_* dst,
                const ExtendedState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ExtendedState_ */

