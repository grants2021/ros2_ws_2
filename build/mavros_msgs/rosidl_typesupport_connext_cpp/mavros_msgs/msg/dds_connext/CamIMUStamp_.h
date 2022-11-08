

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CamIMUStamp_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CamIMUStamp__236278868_h
#define CamIMUStamp__236278868_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *CamIMUStamp_TYPENAME;

            struct CamIMUStamp_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CamIMUStamp_TypeSupport;
            class CamIMUStamp_DataWriter;
            class CamIMUStamp_DataReader;
            #endif

            class CamIMUStamp_ 
            {
              public:
                typedef struct CamIMUStamp_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CamIMUStamp_TypeSupport TypeSupport;
                typedef CamIMUStamp_DataWriter DataWriter;
                typedef CamIMUStamp_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   frame_stamp_ ;
                DDS_Long   frame_seq_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CamIMUStamp__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CamIMUStamp_Seq, CamIMUStamp_);

            NDDSUSERDllExport
            RTIBool CamIMUStamp__initialize(
                CamIMUStamp_* self);

            NDDSUSERDllExport
            RTIBool CamIMUStamp__initialize_ex(
                CamIMUStamp_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CamIMUStamp__initialize_w_params(
                CamIMUStamp_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CamIMUStamp__finalize(
                CamIMUStamp_* self);

            NDDSUSERDllExport
            void CamIMUStamp__finalize_ex(
                CamIMUStamp_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CamIMUStamp__finalize_w_params(
                CamIMUStamp_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CamIMUStamp__finalize_optional_members(
                CamIMUStamp_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CamIMUStamp__copy(
                CamIMUStamp_* dst,
                const CamIMUStamp_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* CamIMUStamp_ */

