

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionTarget_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PositionTarget__1026871993_h
#define PositionTarget__1026871993_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace PositionTarget_Constants {
                static const DDS_Octet FRAME_LOCAL_NED_= 1;
                static const DDS_Octet FRAME_LOCAL_OFFSET_NED_= 7;
                static const DDS_Octet FRAME_BODY_NED_= 8;
                static const DDS_Octet FRAME_BODY_OFFSET_NED_= 9;
                static const DDS_UnsignedShort IGNORE_PX_= 1;
                static const DDS_UnsignedShort IGNORE_PY_= 2;
                static const DDS_UnsignedShort IGNORE_PZ_= 4;
                static const DDS_UnsignedShort IGNORE_VX_= 8;
                static const DDS_UnsignedShort IGNORE_VY_= 16;
                static const DDS_UnsignedShort IGNORE_VZ_= 32;
                static const DDS_UnsignedShort IGNORE_AFX_= 64;
                static const DDS_UnsignedShort IGNORE_AFY_= 128;
                static const DDS_UnsignedShort IGNORE_AFZ_= 256;
                static const DDS_UnsignedShort FORCE_= 512;
                static const DDS_UnsignedShort IGNORE_YAW_= 1024;
                static const DDS_UnsignedShort IGNORE_YAW_RATE_= 2048;
            } /* namespace PositionTarget_Constants  */

            extern const char *PositionTarget_TYPENAME;

            struct PositionTarget_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PositionTarget_TypeSupport;
            class PositionTarget_DataWriter;
            class PositionTarget_DataReader;
            #endif

            class PositionTarget_ 
            {
              public:
                typedef struct PositionTarget_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PositionTarget_TypeSupport TypeSupport;
                typedef PositionTarget_DataWriter DataWriter;
                typedef PositionTarget_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   coordinate_frame_ ;
                DDS_UnsignedShort   type_mask_ ;
                geometry_msgs::msg::dds_::Point_   position_ ;
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

            NDDSUSERDllExport DDS_TypeCode* PositionTarget__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PositionTarget_Seq, PositionTarget_);

            NDDSUSERDllExport
            RTIBool PositionTarget__initialize(
                PositionTarget_* self);

            NDDSUSERDllExport
            RTIBool PositionTarget__initialize_ex(
                PositionTarget_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PositionTarget__initialize_w_params(
                PositionTarget_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PositionTarget__finalize(
                PositionTarget_* self);

            NDDSUSERDllExport
            void PositionTarget__finalize_ex(
                PositionTarget_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PositionTarget__finalize_w_params(
                PositionTarget_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PositionTarget__finalize_optional_members(
                PositionTarget_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PositionTarget__copy(
                PositionTarget_* dst,
                const PositionTarget_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* PositionTarget_ */

