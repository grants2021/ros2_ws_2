

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointPush_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WaypointPush__1284001935_h
#define WaypointPush__1284001935_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/Waypoint_.h"
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *WaypointPush_Request_TYPENAME;

            struct WaypointPush_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointPush_Request_TypeSupport;
            class WaypointPush_Request_DataWriter;
            class WaypointPush_Request_DataReader;
            #endif

            class WaypointPush_Request_ 
            {
              public:
                typedef struct WaypointPush_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointPush_Request_TypeSupport TypeSupport;
                typedef WaypointPush_Request_DataWriter DataWriter;
                typedef WaypointPush_Request_DataReader DataReader;
                #endif

                DDS_UnsignedShort   start_index_ ;
                mavros_msgs::msg::dds_::Waypoint_Seq  waypoints_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointPush_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointPush_Request_Seq, WaypointPush_Request_);

            NDDSUSERDllExport
            RTIBool WaypointPush_Request__initialize(
                WaypointPush_Request_* self);

            NDDSUSERDllExport
            RTIBool WaypointPush_Request__initialize_ex(
                WaypointPush_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointPush_Request__initialize_w_params(
                WaypointPush_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointPush_Request__finalize(
                WaypointPush_Request_* self);

            NDDSUSERDllExport
            void WaypointPush_Request__finalize_ex(
                WaypointPush_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointPush_Request__finalize_w_params(
                WaypointPush_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointPush_Request__finalize_optional_members(
                WaypointPush_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointPush_Request__copy(
                WaypointPush_Request_* dst,
                const WaypointPush_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *WaypointPush_Response_TYPENAME;

            struct WaypointPush_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointPush_Response_TypeSupport;
            class WaypointPush_Response_DataWriter;
            class WaypointPush_Response_DataReader;
            #endif

            class WaypointPush_Response_ 
            {
              public:
                typedef struct WaypointPush_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointPush_Response_TypeSupport TypeSupport;
                typedef WaypointPush_Response_DataWriter DataWriter;
                typedef WaypointPush_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_UnsignedLong   wp_transfered_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointPush_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointPush_Response_Seq, WaypointPush_Response_);

            NDDSUSERDllExport
            RTIBool WaypointPush_Response__initialize(
                WaypointPush_Response_* self);

            NDDSUSERDllExport
            RTIBool WaypointPush_Response__initialize_ex(
                WaypointPush_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointPush_Response__initialize_w_params(
                WaypointPush_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointPush_Response__finalize(
                WaypointPush_Response_* self);

            NDDSUSERDllExport
            void WaypointPush_Response__finalize_ex(
                WaypointPush_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointPush_Response__finalize_w_params(
                WaypointPush_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointPush_Response__finalize_optional_members(
                WaypointPush_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointPush_Response__copy(
                WaypointPush_Response_* dst,
                const WaypointPush_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* WaypointPush_ */

