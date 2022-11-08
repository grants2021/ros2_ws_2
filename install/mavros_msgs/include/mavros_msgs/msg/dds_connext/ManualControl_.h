

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ManualControl_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ManualControl__1955454471_h
#define ManualControl__1955454471_h

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

            extern const char *ManualControl_TYPENAME;

            struct ManualControl_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ManualControl_TypeSupport;
            class ManualControl_DataWriter;
            class ManualControl_DataReader;
            #endif

            class ManualControl_ 
            {
              public:
                typedef struct ManualControl_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ManualControl_TypeSupport TypeSupport;
                typedef ManualControl_DataWriter DataWriter;
                typedef ManualControl_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   x_ ;
                DDS_Float   y_ ;
                DDS_Float   z_ ;
                DDS_Float   r_ ;
                DDS_UnsignedShort   buttons_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ManualControl__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ManualControl_Seq, ManualControl_);

            NDDSUSERDllExport
            RTIBool ManualControl__initialize(
                ManualControl_* self);

            NDDSUSERDllExport
            RTIBool ManualControl__initialize_ex(
                ManualControl_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ManualControl__initialize_w_params(
                ManualControl_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ManualControl__finalize(
                ManualControl_* self);

            NDDSUSERDllExport
            void ManualControl__finalize_ex(
                ManualControl_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ManualControl__finalize_w_params(
                ManualControl_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ManualControl__finalize_optional_members(
                ManualControl_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ManualControl__copy(
                ManualControl_* dst,
                const ManualControl_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ManualControl_ */

