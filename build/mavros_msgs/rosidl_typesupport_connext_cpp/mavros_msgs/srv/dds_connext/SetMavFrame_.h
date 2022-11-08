

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMavFrame_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetMavFrame__1643087053_h
#define SetMavFrame__1643087053_h

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
            namespace SetMavFrame_Request_Constants {
                static const DDS_Octet FRAME_GLOBAL_= 0;
                static const DDS_Octet FRAME_LOCAL_NED_= 1;
                static const DDS_Octet FRAME_MISSION_= 2;
                static const DDS_Octet FRAME_GLOBAL_RELATIVE_ALT_= 3;
                static const DDS_Octet FRAME_LOCAL_ENU_= 4;
                static const DDS_Octet FRAME_GLOBAL_INT_= 5;
                static const DDS_Octet FRAME_GLOBAL_RELATIVE_ALT_INT_= 6;
                static const DDS_Octet FRAME_LOCAL_OFFSET_NED_= 7;
                static const DDS_Octet FRAME_BODY_NED_= 8;
                static const DDS_Octet FRAME_BODY_OFFSET_NED_= 9;
                static const DDS_Octet FRAME_GLOBAL_TERRAIN_ALT_= 10;
                static const DDS_Octet FRAME_GLOBAL_TERRAIN_ALT_INT_= 11;
                static const DDS_Octet FRAME_BODY_FRD_= 12;
                static const DDS_Octet FRAME_RESERVED_13_= 13;
                static const DDS_Octet FRAME_RESERVED_14_= 14;
                static const DDS_Octet FRAME_RESERVED_15_= 15;
                static const DDS_Octet FRAME_RESERVED_16_= 16;
                static const DDS_Octet FRAME_RESERVED_17_= 17;
                static const DDS_Octet FRAME_RESERVED_18_= 18;
                static const DDS_Octet FRAME_RESERVED_19_= 19;
                static const DDS_Octet FRAME_LOCAL_FRD_= 20;
                static const DDS_Octet FRAME_LOCAL_FLU_= 21;
            } /* namespace SetMavFrame_Request_Constants  */

            extern const char *SetMavFrame_Request_TYPENAME;

            struct SetMavFrame_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMavFrame_Request_TypeSupport;
            class SetMavFrame_Request_DataWriter;
            class SetMavFrame_Request_DataReader;
            #endif

            class SetMavFrame_Request_ 
            {
              public:
                typedef struct SetMavFrame_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMavFrame_Request_TypeSupport TypeSupport;
                typedef SetMavFrame_Request_DataWriter DataWriter;
                typedef SetMavFrame_Request_DataReader DataReader;
                #endif

                DDS_Octet   mav_frame_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMavFrame_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMavFrame_Request_Seq, SetMavFrame_Request_);

            NDDSUSERDllExport
            RTIBool SetMavFrame_Request__initialize(
                SetMavFrame_Request_* self);

            NDDSUSERDllExport
            RTIBool SetMavFrame_Request__initialize_ex(
                SetMavFrame_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMavFrame_Request__initialize_w_params(
                SetMavFrame_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMavFrame_Request__finalize(
                SetMavFrame_Request_* self);

            NDDSUSERDllExport
            void SetMavFrame_Request__finalize_ex(
                SetMavFrame_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMavFrame_Request__finalize_w_params(
                SetMavFrame_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMavFrame_Request__finalize_optional_members(
                SetMavFrame_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMavFrame_Request__copy(
                SetMavFrame_Request_* dst,
                const SetMavFrame_Request_* src);

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

            extern const char *SetMavFrame_Response_TYPENAME;

            struct SetMavFrame_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMavFrame_Response_TypeSupport;
            class SetMavFrame_Response_DataWriter;
            class SetMavFrame_Response_DataReader;
            #endif

            class SetMavFrame_Response_ 
            {
              public:
                typedef struct SetMavFrame_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMavFrame_Response_TypeSupport TypeSupport;
                typedef SetMavFrame_Response_DataWriter DataWriter;
                typedef SetMavFrame_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMavFrame_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMavFrame_Response_Seq, SetMavFrame_Response_);

            NDDSUSERDllExport
            RTIBool SetMavFrame_Response__initialize(
                SetMavFrame_Response_* self);

            NDDSUSERDllExport
            RTIBool SetMavFrame_Response__initialize_ex(
                SetMavFrame_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMavFrame_Response__initialize_w_params(
                SetMavFrame_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMavFrame_Response__finalize(
                SetMavFrame_Response_* self);

            NDDSUSERDllExport
            void SetMavFrame_Response__finalize_ex(
                SetMavFrame_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMavFrame_Response__finalize_w_params(
                SetMavFrame_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMavFrame_Response__finalize_optional_members(
                SetMavFrame_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMavFrame_Response__copy(
                SetMavFrame_Response_* dst,
                const SetMavFrame_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* SetMavFrame_ */

