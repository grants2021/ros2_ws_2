

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GlobalPositionTarget_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GlobalPositionTarget__1613811208_h
#define GlobalPositionTarget__1613811208_h

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
            namespace GlobalPositionTarget_Constants {
                static const DDS_Octet FRAME_GLOBAL_INT_= 5;
                static const DDS_Octet FRAME_GLOBAL_REL_ALT_= 6;
                static const DDS_Octet FRAME_GLOBAL_TERRAIN_ALT_= 11;
                static const DDS_UnsignedShort IGNORE_LATITUDE_= 1;
                static const DDS_UnsignedShort IGNORE_LONGITUDE_= 2;
                static const DDS_UnsignedShort IGNORE_ALTITUDE_= 4;
                static const DDS_UnsignedShort IGNORE_VX_= 8;
                static const DDS_UnsignedShort IGNORE_VY_= 16;
                static const DDS_UnsignedShort IGNORE_VZ_= 32;
                static const DDS_UnsignedShort IGNORE_AFX_= 64;
                static const DDS_UnsignedShort IGNORE_AFY_= 128;
                static const DDS_UnsignedShort IGNORE_AFZ_= 256;
                static const DDS_UnsignedShort FORCE_= 512;
                static const DDS_UnsignedShort IGNORE_YAW_= 1024;
                static const DDS_UnsignedShort IGNORE_YAW_RATE_= 2048;
            } /* namespace GlobalPositionTarget_Constants  */

            extern const char *GlobalPositionTarget_TYPENAME;

            struct GlobalPositionTarget_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GlobalPositionTarget_TypeSupport;
            class GlobalPositionTarget_DataWriter;
            class GlobalPositionTarget_DataReader;
            #endif

            class GlobalPositionTarget_ 
            {
              public:
                typedef struct GlobalPositionTarget_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GlobalPositionTarget_TypeSupport TypeSupport;
                typedef GlobalPositionTarget_DataWriter DataWriter;
                typedef GlobalPositionTarget_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   coordinate_frame_ ;
                DDS_UnsignedShort   type_mask_ ;
                DDS_Double   latitude_ ;
                DDS_Double   longitude_ ;
                DDS_Float   altitude_ ;
                geometry_msgs::msg::dds_::Vector3_   velocity_ ;
                geometry_msgs::msg::dds_::Vector3_   acceleration_or_force_ ;
                DDS_Float   yaw_ ;
                DDS_Float   yaw_rate_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GlobalPositionTarget__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GlobalPositionTarget_Seq, GlobalPositionTarget_);

            NDDSUSERDllExport
            RTIBool GlobalPositionTarget__initialize(
                GlobalPositionTarget_* self);

            NDDSUSERDllExport
            RTIBool GlobalPositionTarget__initialize_ex(
                GlobalPositionTarget_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GlobalPositionTarget__initialize_w_params(
                GlobalPositionTarget_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GlobalPositionTarget__finalize(
                GlobalPositionTarget_* self);

            NDDSUSERDllExport
            void GlobalPositionTarget__finalize_ex(
                GlobalPositionTarget_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GlobalPositionTarget__finalize_w_params(
                GlobalPositionTarget_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GlobalPositionTarget__finalize_optional_members(
                GlobalPositionTarget_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GlobalPositionTarget__copy(
                GlobalPositionTarget_* dst,
                const GlobalPositionTarget_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* GlobalPositionTarget_ */

