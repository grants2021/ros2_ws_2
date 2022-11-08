

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LandingTarget_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LandingTarget__299295828_h
#define LandingTarget__299295828_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace LandingTarget_Constants {
                static const DDS_Octet GLOBAL_= 0;
                static const DDS_Octet LOCAL_NED_= 2;
                static const DDS_Octet MISSION_= 3;
                static const DDS_Octet GLOBAL_RELATIVE_ALT_= 4;
                static const DDS_Octet LOCAL_ENU_= 5;
                static const DDS_Octet GLOBAL_INT_= 6;
                static const DDS_Octet GLOBAL_RELATIVE_ALT_INT_= 7;
                static const DDS_Octet LOCAL_OFFSET_NED_= 8;
                static const DDS_Octet BODY_NED_= 9;
                static const DDS_Octet BODY_OFFSET_NED_= 10;
                static const DDS_Octet GLOBAL_TERRAIN_ALT_= 11;
                static const DDS_Octet GLOBAL_TERRAIN_ALT_INT_= 12;
                static const DDS_Octet LIGHT_BEACON_= 0;
                static const DDS_Octet RADIO_BEACON_= 1;
                static const DDS_Octet VISION_FIDUCIAL_= 2;
                static const DDS_Octet VISION_OTHER_= 3;
            } /* namespace LandingTarget_Constants  */

            extern const char *LandingTarget_TYPENAME;

            struct LandingTarget_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LandingTarget_TypeSupport;
            class LandingTarget_DataWriter;
            class LandingTarget_DataReader;
            #endif

            class LandingTarget_ 
            {
              public:
                typedef struct LandingTarget_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LandingTarget_TypeSupport TypeSupport;
                typedef LandingTarget_DataWriter DataWriter;
                typedef LandingTarget_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   target_num_ ;
                DDS_Octet   frame_ ;
                DDS_Float   angle_ [2];
                DDS_Float   distance_ ;
                DDS_Float   size_ [2];
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                DDS_Octet   type_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LandingTarget__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LandingTarget_Seq, LandingTarget_);

            NDDSUSERDllExport
            RTIBool LandingTarget__initialize(
                LandingTarget_* self);

            NDDSUSERDllExport
            RTIBool LandingTarget__initialize_ex(
                LandingTarget_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LandingTarget__initialize_w_params(
                LandingTarget_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LandingTarget__finalize(
                LandingTarget_* self);

            NDDSUSERDllExport
            void LandingTarget__finalize_ex(
                LandingTarget_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LandingTarget__finalize_w_params(
                LandingTarget_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LandingTarget__finalize_optional_members(
                LandingTarget_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LandingTarget__copy(
                LandingTarget_* dst,
                const LandingTarget_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* LandingTarget_ */

