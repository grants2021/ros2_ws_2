

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointSetCurrent_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WaypointSetCurrent__643240162_h
#define WaypointSetCurrent__643240162_h

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

            extern const char *WaypointSetCurrent_Request_TYPENAME;

            struct WaypointSetCurrent_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointSetCurrent_Request_TypeSupport;
            class WaypointSetCurrent_Request_DataWriter;
            class WaypointSetCurrent_Request_DataReader;
            #endif

            class WaypointSetCurrent_Request_ 
            {
              public:
                typedef struct WaypointSetCurrent_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointSetCurrent_Request_TypeSupport TypeSupport;
                typedef WaypointSetCurrent_Request_DataWriter DataWriter;
                typedef WaypointSetCurrent_Request_DataReader DataReader;
                #endif

                DDS_UnsignedShort   wp_seq_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointSetCurrent_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointSetCurrent_Request_Seq, WaypointSetCurrent_Request_);

            NDDSUSERDllExport
            RTIBool WaypointSetCurrent_Request__initialize(
                WaypointSetCurrent_Request_* self);

            NDDSUSERDllExport
            RTIBool WaypointSetCurrent_Request__initialize_ex(
                WaypointSetCurrent_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointSetCurrent_Request__initialize_w_params(
                WaypointSetCurrent_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointSetCurrent_Request__finalize(
                WaypointSetCurrent_Request_* self);

            NDDSUSERDllExport
            void WaypointSetCurrent_Request__finalize_ex(
                WaypointSetCurrent_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointSetCurrent_Request__finalize_w_params(
                WaypointSetCurrent_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointSetCurrent_Request__finalize_optional_members(
                WaypointSetCurrent_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointSetCurrent_Request__copy(
                WaypointSetCurrent_Request_* dst,
                const WaypointSetCurrent_Request_* src);

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

            extern const char *WaypointSetCurrent_Response_TYPENAME;

            struct WaypointSetCurrent_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointSetCurrent_Response_TypeSupport;
            class WaypointSetCurrent_Response_DataWriter;
            class WaypointSetCurrent_Response_DataReader;
            #endif

            class WaypointSetCurrent_Response_ 
            {
              public:
                typedef struct WaypointSetCurrent_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointSetCurrent_Response_TypeSupport TypeSupport;
                typedef WaypointSetCurrent_Response_DataWriter DataWriter;
                typedef WaypointSetCurrent_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointSetCurrent_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointSetCurrent_Response_Seq, WaypointSetCurrent_Response_);

            NDDSUSERDllExport
            RTIBool WaypointSetCurrent_Response__initialize(
                WaypointSetCurrent_Response_* self);

            NDDSUSERDllExport
            RTIBool WaypointSetCurrent_Response__initialize_ex(
                WaypointSetCurrent_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointSetCurrent_Response__initialize_w_params(
                WaypointSetCurrent_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointSetCurrent_Response__finalize(
                WaypointSetCurrent_Response_* self);

            NDDSUSERDllExport
            void WaypointSetCurrent_Response__finalize_ex(
                WaypointSetCurrent_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointSetCurrent_Response__finalize_w_params(
                WaypointSetCurrent_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointSetCurrent_Response__finalize_optional_members(
                WaypointSetCurrent_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointSetCurrent_Response__copy(
                WaypointSetCurrent_Response_* dst,
                const WaypointSetCurrent_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* WaypointSetCurrent_ */

