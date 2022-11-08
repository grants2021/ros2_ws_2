

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HomePosition_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HomePosition__1274974748_h
#define HomePosition__1274974748_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *HomePosition_TYPENAME;

            struct HomePosition_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class HomePosition_TypeSupport;
            class HomePosition_DataWriter;
            class HomePosition_DataReader;
            #endif

            class HomePosition_ 
            {
              public:
                typedef struct HomePosition_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef HomePosition_TypeSupport TypeSupport;
                typedef HomePosition_DataWriter DataWriter;
                typedef HomePosition_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geographic_msgs::msg::dds_::GeoPoint_   geo_ ;
                geometry_msgs::msg::dds_::Point_   position_ ;
                geometry_msgs::msg::dds_::Quaternion_   orientation_ ;
                geometry_msgs::msg::dds_::Vector3_   approach_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* HomePosition__get_typecode(void); /* Type code */

            DDS_SEQUENCE(HomePosition_Seq, HomePosition_);

            NDDSUSERDllExport
            RTIBool HomePosition__initialize(
                HomePosition_* self);

            NDDSUSERDllExport
            RTIBool HomePosition__initialize_ex(
                HomePosition_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool HomePosition__initialize_w_params(
                HomePosition_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void HomePosition__finalize(
                HomePosition_* self);

            NDDSUSERDllExport
            void HomePosition__finalize_ex(
                HomePosition_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void HomePosition__finalize_w_params(
                HomePosition_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void HomePosition__finalize_optional_members(
                HomePosition_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool HomePosition__copy(
                HomePosition_* dst,
                const HomePosition_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* HomePosition_ */

