

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMode_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetMode__320074195_h
#define SetMode__320074195_h

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
            namespace SetMode_Request_Constants {
                static const DDS_Octet MAV_MODE_PREFLIGHT_= 0;
                static const DDS_Octet MAV_MODE_STABILIZE_DISARMED_= 80;
                static const DDS_Octet MAV_MODE_STABILIZE_ARMED_= 208;
                static const DDS_Octet MAV_MODE_MANUAL_DISARMED_= 64;
                static const DDS_Octet MAV_MODE_MANUAL_ARMED_= 192;
                static const DDS_Octet MAV_MODE_GUIDED_DISARMED_= 88;
                static const DDS_Octet MAV_MODE_GUIDED_ARMED_= 216;
                static const DDS_Octet MAV_MODE_AUTO_DISARMED_= 92;
                static const DDS_Octet MAV_MODE_AUTO_ARMED_= 220;
                static const DDS_Octet MAV_MODE_TEST_DISARMED_= 66;
                static const DDS_Octet MAV_MODE_TEST_ARMED_= 194;
            } /* namespace SetMode_Request_Constants  */

            extern const char *SetMode_Request_TYPENAME;

            struct SetMode_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMode_Request_TypeSupport;
            class SetMode_Request_DataWriter;
            class SetMode_Request_DataReader;
            #endif

            class SetMode_Request_ 
            {
              public:
                typedef struct SetMode_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMode_Request_TypeSupport TypeSupport;
                typedef SetMode_Request_DataWriter DataWriter;
                typedef SetMode_Request_DataReader DataReader;
                #endif

                DDS_Octet   base_mode_ ;
                DDS_Char *   custom_mode_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMode_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMode_Request_Seq, SetMode_Request_);

            NDDSUSERDllExport
            RTIBool SetMode_Request__initialize(
                SetMode_Request_* self);

            NDDSUSERDllExport
            RTIBool SetMode_Request__initialize_ex(
                SetMode_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMode_Request__initialize_w_params(
                SetMode_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMode_Request__finalize(
                SetMode_Request_* self);

            NDDSUSERDllExport
            void SetMode_Request__finalize_ex(
                SetMode_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMode_Request__finalize_w_params(
                SetMode_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMode_Request__finalize_optional_members(
                SetMode_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMode_Request__copy(
                SetMode_Request_* dst,
                const SetMode_Request_* src);

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

            extern const char *SetMode_Response_TYPENAME;

            struct SetMode_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMode_Response_TypeSupport;
            class SetMode_Response_DataWriter;
            class SetMode_Response_DataReader;
            #endif

            class SetMode_Response_ 
            {
              public:
                typedef struct SetMode_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMode_Response_TypeSupport TypeSupport;
                typedef SetMode_Response_DataWriter DataWriter;
                typedef SetMode_Response_DataReader DataReader;
                #endif

                DDS_Boolean   mode_sent_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMode_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMode_Response_Seq, SetMode_Response_);

            NDDSUSERDllExport
            RTIBool SetMode_Response__initialize(
                SetMode_Response_* self);

            NDDSUSERDllExport
            RTIBool SetMode_Response__initialize_ex(
                SetMode_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMode_Response__initialize_w_params(
                SetMode_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMode_Response__finalize(
                SetMode_Response_* self);

            NDDSUSERDllExport
            void SetMode_Response__finalize_ex(
                SetMode_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMode_Response__finalize_w_params(
                SetMode_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMode_Response__finalize_optional_members(
                SetMode_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMode_Response__copy(
                SetMode_Response_* dst,
                const SetMode_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* SetMode_ */

