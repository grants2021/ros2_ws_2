

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointPull_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WaypointPull__1207925041_h
#define WaypointPull__1207925041_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *WaypointPull_Request_TYPENAME;

            struct WaypointPull_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointPull_Request_TypeSupport;
            class WaypointPull_Request_DataWriter;
            class WaypointPull_Request_DataReader;
            #endif

            class WaypointPull_Request_ 
            {
              public:
                typedef struct WaypointPull_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointPull_Request_TypeSupport TypeSupport;
                typedef WaypointPull_Request_DataWriter DataWriter;
                typedef WaypointPull_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointPull_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointPull_Request_Seq, WaypointPull_Request_);

            NDDSUSERDllExport
            RTIBool WaypointPull_Request__initialize(
                WaypointPull_Request_* self);

            NDDSUSERDllExport
            RTIBool WaypointPull_Request__initialize_ex(
                WaypointPull_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointPull_Request__initialize_w_params(
                WaypointPull_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointPull_Request__finalize(
                WaypointPull_Request_* self);

            NDDSUSERDllExport
            void WaypointPull_Request__finalize_ex(
                WaypointPull_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointPull_Request__finalize_w_params(
                WaypointPull_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointPull_Request__finalize_optional_members(
                WaypointPull_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointPull_Request__copy(
                WaypointPull_Request_* dst,
                const WaypointPull_Request_* src);

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

            extern const char *WaypointPull_Response_TYPENAME;

            struct WaypointPull_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointPull_Response_TypeSupport;
            class WaypointPull_Response_DataWriter;
            class WaypointPull_Response_DataReader;
            #endif

            class WaypointPull_Response_ 
            {
              public:
                typedef struct WaypointPull_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointPull_Response_TypeSupport TypeSupport;
                typedef WaypointPull_Response_DataWriter DataWriter;
                typedef WaypointPull_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_UnsignedLong   wp_received_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointPull_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointPull_Response_Seq, WaypointPull_Response_);

            NDDSUSERDllExport
            RTIBool WaypointPull_Response__initialize(
                WaypointPull_Response_* self);

            NDDSUSERDllExport
            RTIBool WaypointPull_Response__initialize_ex(
                WaypointPull_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointPull_Response__initialize_w_params(
                WaypointPull_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointPull_Response__finalize(
                WaypointPull_Response_* self);

            NDDSUSERDllExport
            void WaypointPull_Response__finalize_ex(
                WaypointPull_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointPull_Response__finalize_w_params(
                WaypointPull_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointPull_Response__finalize_optional_members(
                WaypointPull_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointPull_Response__copy(
                WaypointPull_Response_* dst,
                const WaypointPull_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* WaypointPull_ */

