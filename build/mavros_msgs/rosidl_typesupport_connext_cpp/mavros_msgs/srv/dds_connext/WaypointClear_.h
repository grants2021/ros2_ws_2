

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WaypointClear_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WaypointClear__532922421_h
#define WaypointClear__532922421_h

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

            extern const char *WaypointClear_Request_TYPENAME;

            struct WaypointClear_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointClear_Request_TypeSupport;
            class WaypointClear_Request_DataWriter;
            class WaypointClear_Request_DataReader;
            #endif

            class WaypointClear_Request_ 
            {
              public:
                typedef struct WaypointClear_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointClear_Request_TypeSupport TypeSupport;
                typedef WaypointClear_Request_DataWriter DataWriter;
                typedef WaypointClear_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointClear_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointClear_Request_Seq, WaypointClear_Request_);

            NDDSUSERDllExport
            RTIBool WaypointClear_Request__initialize(
                WaypointClear_Request_* self);

            NDDSUSERDllExport
            RTIBool WaypointClear_Request__initialize_ex(
                WaypointClear_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointClear_Request__initialize_w_params(
                WaypointClear_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointClear_Request__finalize(
                WaypointClear_Request_* self);

            NDDSUSERDllExport
            void WaypointClear_Request__finalize_ex(
                WaypointClear_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointClear_Request__finalize_w_params(
                WaypointClear_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointClear_Request__finalize_optional_members(
                WaypointClear_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointClear_Request__copy(
                WaypointClear_Request_* dst,
                const WaypointClear_Request_* src);

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

            extern const char *WaypointClear_Response_TYPENAME;

            struct WaypointClear_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WaypointClear_Response_TypeSupport;
            class WaypointClear_Response_DataWriter;
            class WaypointClear_Response_DataReader;
            #endif

            class WaypointClear_Response_ 
            {
              public:
                typedef struct WaypointClear_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WaypointClear_Response_TypeSupport TypeSupport;
                typedef WaypointClear_Response_DataWriter DataWriter;
                typedef WaypointClear_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WaypointClear_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WaypointClear_Response_Seq, WaypointClear_Response_);

            NDDSUSERDllExport
            RTIBool WaypointClear_Response__initialize(
                WaypointClear_Response_* self);

            NDDSUSERDllExport
            RTIBool WaypointClear_Response__initialize_ex(
                WaypointClear_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WaypointClear_Response__initialize_w_params(
                WaypointClear_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WaypointClear_Response__finalize(
                WaypointClear_Response_* self);

            NDDSUSERDllExport
            void WaypointClear_Response__finalize_ex(
                WaypointClear_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WaypointClear_Response__finalize_w_params(
                WaypointClear_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WaypointClear_Response__finalize_optional_members(
                WaypointClear_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WaypointClear_Response__copy(
                WaypointClear_Response_* dst,
                const WaypointClear_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* WaypointClear_ */

