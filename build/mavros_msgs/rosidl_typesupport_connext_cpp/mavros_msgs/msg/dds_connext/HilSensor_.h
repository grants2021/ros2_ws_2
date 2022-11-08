

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HilSensor_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HilSensor__1466693631_h
#define HilSensor__1466693631_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *HilSensor_TYPENAME;

            struct HilSensor_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class HilSensor_TypeSupport;
            class HilSensor_DataWriter;
            class HilSensor_DataReader;
            #endif

            class HilSensor_ 
            {
              public:
                typedef struct HilSensor_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef HilSensor_TypeSupport TypeSupport;
                typedef HilSensor_DataWriter DataWriter;
                typedef HilSensor_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Vector3_   acc_ ;
                geometry_msgs::msg::dds_::Vector3_   gyro_ ;
                geometry_msgs::msg::dds_::Vector3_   mag_ ;
                DDS_Float   abs_pressure_ ;
                DDS_Float   diff_pressure_ ;
                DDS_Float   pressure_alt_ ;
                DDS_Float   temperature_ ;
                DDS_UnsignedLong   fields_updated_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* HilSensor__get_typecode(void); /* Type code */

            DDS_SEQUENCE(HilSensor_Seq, HilSensor_);

            NDDSUSERDllExport
            RTIBool HilSensor__initialize(
                HilSensor_* self);

            NDDSUSERDllExport
            RTIBool HilSensor__initialize_ex(
                HilSensor_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool HilSensor__initialize_w_params(
                HilSensor_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void HilSensor__finalize(
                HilSensor_* self);

            NDDSUSERDllExport
            void HilSensor__finalize_ex(
                HilSensor_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void HilSensor__finalize_w_params(
                HilSensor_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void HilSensor__finalize_optional_members(
                HilSensor_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool HilSensor__copy(
                HilSensor_* dst,
                const HilSensor_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* HilSensor_ */

