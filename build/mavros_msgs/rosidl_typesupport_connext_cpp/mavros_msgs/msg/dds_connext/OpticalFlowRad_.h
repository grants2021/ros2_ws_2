

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OpticalFlowRad_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef OpticalFlowRad__1097261089_h
#define OpticalFlowRad__1097261089_h

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

            extern const char *OpticalFlowRad_TYPENAME;

            struct OpticalFlowRad_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class OpticalFlowRad_TypeSupport;
            class OpticalFlowRad_DataWriter;
            class OpticalFlowRad_DataReader;
            #endif

            class OpticalFlowRad_ 
            {
              public:
                typedef struct OpticalFlowRad_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef OpticalFlowRad_TypeSupport TypeSupport;
                typedef OpticalFlowRad_DataWriter DataWriter;
                typedef OpticalFlowRad_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLong   integration_time_us_ ;
                DDS_Float   integrated_x_ ;
                DDS_Float   integrated_y_ ;
                DDS_Float   integrated_xgyro_ ;
                DDS_Float   integrated_ygyro_ ;
                DDS_Float   integrated_zgyro_ ;
                DDS_Short   temperature_ ;
                DDS_Octet   quality_ ;
                DDS_UnsignedLong   time_delta_distance_us_ ;
                DDS_Float   distance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* OpticalFlowRad__get_typecode(void); /* Type code */

            DDS_SEQUENCE(OpticalFlowRad_Seq, OpticalFlowRad_);

            NDDSUSERDllExport
            RTIBool OpticalFlowRad__initialize(
                OpticalFlowRad_* self);

            NDDSUSERDllExport
            RTIBool OpticalFlowRad__initialize_ex(
                OpticalFlowRad_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool OpticalFlowRad__initialize_w_params(
                OpticalFlowRad_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void OpticalFlowRad__finalize(
                OpticalFlowRad_* self);

            NDDSUSERDllExport
            void OpticalFlowRad__finalize_ex(
                OpticalFlowRad_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void OpticalFlowRad__finalize_w_params(
                OpticalFlowRad_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void OpticalFlowRad__finalize_optional_members(
                OpticalFlowRad_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool OpticalFlowRad__copy(
                OpticalFlowRad_* dst,
                const OpticalFlowRad_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* OpticalFlowRad_ */

