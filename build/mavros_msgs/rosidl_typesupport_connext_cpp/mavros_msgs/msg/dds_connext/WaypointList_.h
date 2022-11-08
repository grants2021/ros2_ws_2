

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointList_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WaypointList__1739456190_h
#define WaypointList__1739456190_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/Waypoint_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *WaypointList_TYPENAME;

            struct WaypointList_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointList_TypeSupport;
            class WaypointList_DataWriter;
            class WaypointList_DataReader;
            #endif

            class WaypointList_ 
            {
              public:
                typedef struct WaypointList_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointList_TypeSupport TypeSupport;
                typedef WaypointList_DataWriter DataWriter;
                typedef WaypointList_DataReader DataReader;
                #endif

                DDS_UnsignedShort   current_seq_ ;
                mavros_msgs::msg::dds_::Waypoint_Seq  waypoints_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointList__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointList_Seq, WaypointList_);

            NDDSUSERDllExport
            RTIBool WaypointList__initialize(
                WaypointList_* self);

            NDDSUSERDllExport
            RTIBool WaypointList__initialize_ex(
                WaypointList_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointList__initialize_w_params(
                WaypointList_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointList__finalize(
                WaypointList_* self);

            NDDSUSERDllExport
            void WaypointList__finalize_ex(
                WaypointList_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointList__finalize_w_params(
                WaypointList_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointList__finalize_optional_members(
                WaypointList_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointList__copy(
                WaypointList_* dst,
                const WaypointList_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* WaypointList_ */

