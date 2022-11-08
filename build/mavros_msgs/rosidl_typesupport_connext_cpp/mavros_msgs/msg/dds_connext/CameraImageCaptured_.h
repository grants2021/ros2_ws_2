

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraImageCaptured_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CameraImageCaptured__1180658563_h
#define CameraImageCaptured__1180658563_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geographic_msgs/msg/dds_connext/GeoPoint_.h"
#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *CameraImageCaptured_TYPENAME;

            struct CameraImageCaptured_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CameraImageCaptured_TypeSupport;
            class CameraImageCaptured_DataWriter;
            class CameraImageCaptured_DataReader;
            #endif

            class CameraImageCaptured_ 
            {
              public:
                typedef struct CameraImageCaptured_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CameraImageCaptured_TypeSupport TypeSupport;
                typedef CameraImageCaptured_DataWriter DataWriter;
                typedef CameraImageCaptured_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Quaternion_   orientation_ ;
                geographic_msgs::msg::dds_::GeoPoint_   geo_ ;
                DDS_Float   relative_alt_ ;
                DDS_Long   image_index_ ;
                DDS_Octet   capture_result_ ;
                DDS_Char *   file_url_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CameraImageCaptured__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CameraImageCaptured_Seq, CameraImageCaptured_);

            NDDSUSERDllExport
            RTIBool CameraImageCaptured__initialize(
                CameraImageCaptured_* self);

            NDDSUSERDllExport
            RTIBool CameraImageCaptured__initialize_ex(
                CameraImageCaptured_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CameraImageCaptured__initialize_w_params(
                CameraImageCaptured_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CameraImageCaptured__finalize(
                CameraImageCaptured_* self);

            NDDSUSERDllExport
            void CameraImageCaptured__finalize_ex(
                CameraImageCaptured_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CameraImageCaptured__finalize_w_params(
                CameraImageCaptured_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CameraImageCaptured__finalize_optional_members(
                CameraImageCaptured_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CameraImageCaptured__copy(
                CameraImageCaptured_* dst,
                const CameraImageCaptured_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* CameraImageCaptured_ */

