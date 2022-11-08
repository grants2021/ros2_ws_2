

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AttitudeTarget_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AttitudeTarget__1765915268_h
#define AttitudeTarget__1765915268_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace AttitudeTarget_Constants {
                static const DDS_Octet IGNORE_ROLL_RATE_= 1;
                static const DDS_Octet IGNORE_PITCH_RATE_= 2;
                static const DDS_Octet IGNORE_YAW_RATE_= 4;
                static const DDS_Octet IGNORE_THRUST_= 64;
                static const DDS_Octet IGNORE_ATTITUDE_= 128;
            } /* namespace AttitudeTarget_Constants  */

            extern const char *AttitudeTarget_TYPENAME;

            struct AttitudeTarget_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AttitudeTarget_TypeSupport;
            class AttitudeTarget_DataWriter;
            class AttitudeTarget_DataReader;
            #endif

            class AttitudeTarget_ 
            {
              public:
                typedef struct AttitudeTarget_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AttitudeTarget_TypeSupport TypeSupport;
                typedef AttitudeTarget_DataWriter DataWriter;
                typedef AttitudeTarget_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   type_mask_ ;
                geometry_msgs::msg::dds_::Quaternion_   orientation_ ;
                geometry_msgs::msg::dds_::Vector3_   body_rate_ ;
                DDS_Float   thrust_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AttitudeTarget__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AttitudeTarget_Seq, AttitudeTarget_);

            NDDSUSERDllExport
            RTIBool AttitudeTarget__initialize(
                AttitudeTarget_* self);

            NDDSUSERDllExport
            RTIBool AttitudeTarget__initialize_ex(
                AttitudeTarget_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AttitudeTarget__initialize_w_params(
                AttitudeTarget_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AttitudeTarget__finalize(
                AttitudeTarget_* self);

            NDDSUSERDllExport
            void AttitudeTarget__finalize_ex(
                AttitudeTarget_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AttitudeTarget__finalize_w_params(
                AttitudeTarget_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AttitudeTarget__finalize_optional_members(
                AttitudeTarget_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AttitudeTarget__copy(
                AttitudeTarget_* dst,
                const AttitudeTarget_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* AttitudeTarget_ */

