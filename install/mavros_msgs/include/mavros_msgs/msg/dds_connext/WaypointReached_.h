

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointReached_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WaypointReached__2140210434_h
#define WaypointReached__2140210434_h

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

            extern const char *WaypointReached_TYPENAME;

            struct WaypointReached_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointReached_TypeSupport;
            class WaypointReached_DataWriter;
            class WaypointReached_DataReader;
            #endif

            class WaypointReached_ 
            {
              public:
                typedef struct WaypointReached_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointReached_TypeSupport TypeSupport;
                typedef WaypointReached_DataWriter DataWriter;
                typedef WaypointReached_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedShort   wp_seq_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointReached__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointReached_Seq, WaypointReached_);

            NDDSUSERDllExport
            RTIBool WaypointReached__initialize(
                WaypointReached_* self);

            NDDSUSERDllExport
            RTIBool WaypointReached__initialize_ex(
                WaypointReached_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointReached__initialize_w_params(
                WaypointReached_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointReached__finalize(
                WaypointReached_* self);

            NDDSUSERDllExport
            void WaypointReached__finalize_ex(
                WaypointReached_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointReached__finalize_w_params(
                WaypointReached_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointReached__finalize_optional_members(
                WaypointReached_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointReached__copy(
                WaypointReached_* dst,
                const WaypointReached_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* WaypointReached_ */

