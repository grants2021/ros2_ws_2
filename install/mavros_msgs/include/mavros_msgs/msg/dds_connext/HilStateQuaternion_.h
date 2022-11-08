

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HilStateQuaternion_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HilStateQuaternion__1169754278_h
#define HilStateQuaternion__1169754278_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *HilStateQuaternion_TYPENAME;

            struct HilStateQuaternion_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class HilStateQuaternion_TypeSupport;
            class HilStateQuaternion_DataWriter;
            class HilStateQuaternion_DataReader;
            #endif

            class HilStateQuaternion_ 
            {
              public:
                typedef struct HilStateQuaternion_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef HilStateQuaternion_TypeSupport TypeSupport;
                typedef HilStateQuaternion_DataWriter DataWriter;
                typedef HilStateQuaternion_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Quaternion_   orientation_ ;
                geometry_msgs::msg::dds_::Vector3_   angular_velocity_ ;
                geometry_msgs::msg::dds_::Vector3_   linear_acceleration_ ;
                geometry_msgs::msg::dds_::Vector3_   linear_velocity_ ;
                geographic_msgs::msg::dds_::GeoPoint_   geo_ ;
                DDS_Float   ind_airspeed_ ;
                DDS_Float   true_airspeed_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* HilStateQuaternion__get_typecode(void); /* Type code */

            DDS_SEQUENCE(HilStateQuaternion_Seq, HilStateQuaternion_);

            NDDSUSERDllExport
            RTIBool HilStateQuaternion__initialize(
                HilStateQuaternion_* self);

            NDDSUSERDllExport
            RTIBool HilStateQuaternion__initialize_ex(
                HilStateQuaternion_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool HilStateQuaternion__initialize_w_params(
                HilStateQuaternion_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void HilStateQuaternion__finalize(
                HilStateQuaternion_* self);

            NDDSUSERDllExport
            void HilStateQuaternion__finalize_ex(
                HilStateQuaternion_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void HilStateQuaternion__finalize_w_params(
                HilStateQuaternion_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void HilStateQuaternion__finalize_optional_members(
                HilStateQuaternion_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool HilStateQuaternion__copy(
                HilStateQuaternion_* dst,
                const HilStateQuaternion_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* HilStateQuaternion_ */

