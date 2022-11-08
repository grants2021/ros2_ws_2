

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WheelOdomStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WheelOdomStamped__162024622_h
#define WheelOdomStamped__162024622_h

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

            extern const char *WheelOdomStamped_TYPENAME;

            struct WheelOdomStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WheelOdomStamped_TypeSupport;
            class WheelOdomStamped_DataWriter;
            class WheelOdomStamped_DataReader;
            #endif

            class WheelOdomStamped_ 
            {
              public:
                typedef struct WheelOdomStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WheelOdomStamped_TypeSupport TypeSupport;
                typedef WheelOdomStamped_DataWriter DataWriter;
                typedef WheelOdomStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_DoubleSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WheelOdomStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WheelOdomStamped_Seq, WheelOdomStamped_);

            NDDSUSERDllExport
            RTIBool WheelOdomStamped__initialize(
                WheelOdomStamped_* self);

            NDDSUSERDllExport
            RTIBool WheelOdomStamped__initialize_ex(
                WheelOdomStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WheelOdomStamped__initialize_w_params(
                WheelOdomStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WheelOdomStamped__finalize(
                WheelOdomStamped_* self);

            NDDSUSERDllExport
            void WheelOdomStamped__finalize_ex(
                WheelOdomStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WheelOdomStamped__finalize_w_params(
                WheelOdomStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WheelOdomStamped__finalize_optional_members(
                WheelOdomStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WheelOdomStamped__copy(
                WheelOdomStamped_* dst,
                const WheelOdomStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* WheelOdomStamped_ */

