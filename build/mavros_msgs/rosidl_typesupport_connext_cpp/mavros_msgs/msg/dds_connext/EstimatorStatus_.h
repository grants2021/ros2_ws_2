

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EstimatorStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EstimatorStatus__1875115611_h
#define EstimatorStatus__1875115611_h

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

            extern const char *EstimatorStatus_TYPENAME;

            struct EstimatorStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class EstimatorStatus_TypeSupport;
            class EstimatorStatus_DataWriter;
            class EstimatorStatus_DataReader;
            #endif

            class EstimatorStatus_ 
            {
              public:
                typedef struct EstimatorStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef EstimatorStatus_TypeSupport TypeSupport;
                typedef EstimatorStatus_DataWriter DataWriter;
                typedef EstimatorStatus_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Boolean   attitude_status_flag_ ;
                DDS_Boolean   velocity_horiz_status_flag_ ;
                DDS_Boolean   velocity_vert_status_flag_ ;
                DDS_Boolean   pos_horiz_rel_status_flag_ ;
                DDS_Boolean   pos_horiz_abs_status_flag_ ;
                DDS_Boolean   pos_vert_abs_status_flag_ ;
                DDS_Boolean   pos_vert_agl_status_flag_ ;
                DDS_Boolean   const_pos_mode_status_flag_ ;
                DDS_Boolean   pred_pos_horiz_rel_status_flag_ ;
                DDS_Boolean   pred_pos_horiz_abs_status_flag_ ;
                DDS_Boolean   gps_glitch_status_flag_ ;
                DDS_Boolean   accel_error_status_flag_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* EstimatorStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(EstimatorStatus_Seq, EstimatorStatus_);

            NDDSUSERDllExport
            RTIBool EstimatorStatus__initialize(
                EstimatorStatus_* self);

            NDDSUSERDllExport
            RTIBool EstimatorStatus__initialize_ex(
                EstimatorStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool EstimatorStatus__initialize_w_params(
                EstimatorStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void EstimatorStatus__finalize(
                EstimatorStatus_* self);

            NDDSUSERDllExport
            void EstimatorStatus__finalize_ex(
                EstimatorStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void EstimatorStatus__finalize_w_params(
                EstimatorStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void EstimatorStatus__finalize_optional_members(
                EstimatorStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool EstimatorStatus__copy(
                EstimatorStatus_* dst,
                const EstimatorStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* EstimatorStatus_ */

