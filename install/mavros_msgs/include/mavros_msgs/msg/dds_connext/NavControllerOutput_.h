

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavControllerOutput_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NavControllerOutput__1201230129_h
#define NavControllerOutput__1201230129_h

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

            extern const char *NavControllerOutput_TYPENAME;

            struct NavControllerOutput_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NavControllerOutput_TypeSupport;
            class NavControllerOutput_DataWriter;
            class NavControllerOutput_DataReader;
            #endif

            class NavControllerOutput_ 
            {
              public:
                typedef struct NavControllerOutput_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NavControllerOutput_TypeSupport TypeSupport;
                typedef NavControllerOutput_DataWriter DataWriter;
                typedef NavControllerOutput_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   nav_roll_ ;
                DDS_Float   nav_pitch_ ;
                DDS_Short   nav_bearing_ ;
                DDS_Short   target_bearing_ ;
                DDS_UnsignedShort   wp_dist_ ;
                DDS_Float   alt_error_ ;
                DDS_Float   aspd_error_ ;
                DDS_Float   xtrack_error_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NavControllerOutput__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NavControllerOutput_Seq, NavControllerOutput_);

            NDDSUSERDllExport
            RTIBool NavControllerOutput__initialize(
                NavControllerOutput_* self);

            NDDSUSERDllExport
            RTIBool NavControllerOutput__initialize_ex(
                NavControllerOutput_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NavControllerOutput__initialize_w_params(
                NavControllerOutput_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NavControllerOutput__finalize(
                NavControllerOutput_* self);

            NDDSUSERDllExport
            void NavControllerOutput__finalize_ex(
                NavControllerOutput_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NavControllerOutput__finalize_w_params(
                NavControllerOutput_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NavControllerOutput__finalize_optional_members(
                NavControllerOutput_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NavControllerOutput__copy(
                NavControllerOutput_* dst,
                const NavControllerOutput_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* NavControllerOutput_ */

