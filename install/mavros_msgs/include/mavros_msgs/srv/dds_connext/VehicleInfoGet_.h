

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VehicleInfoGet_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VehicleInfoGet__1445353137_h
#define VehicleInfoGet__1445353137_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/VehicleInfo_.h"
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {
            namespace VehicleInfoGet_Request_Constants {
                static const DDS_Octet GET_MY_SYSID_= 0;
                static const DDS_Octet GET_MY_COMPID_= 0;
            } /* namespace VehicleInfoGet_Request_Constants  */

            extern const char *VehicleInfoGet_Request_TYPENAME;

            struct VehicleInfoGet_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class VehicleInfoGet_Request_TypeSupport;
            class VehicleInfoGet_Request_DataWriter;
            class VehicleInfoGet_Request_DataReader;
            #endif

            class VehicleInfoGet_Request_ 
            {
              public:
                typedef struct VehicleInfoGet_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef VehicleInfoGet_Request_TypeSupport TypeSupport;
                typedef VehicleInfoGet_Request_DataWriter DataWriter;
                typedef VehicleInfoGet_Request_DataReader DataReader;
                #endif

                DDS_Octet   sysid_ ;
                DDS_Octet   compid_ ;
                DDS_Boolean   get_all_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* VehicleInfoGet_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(VehicleInfoGet_Request_Seq, VehicleInfoGet_Request_);

            NDDSUSERDllExport
            RTIBool VehicleInfoGet_Request__initialize(
                VehicleInfoGet_Request_* self);

            NDDSUSERDllExport
            RTIBool VehicleInfoGet_Request__initialize_ex(
                VehicleInfoGet_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool VehicleInfoGet_Request__initialize_w_params(
                VehicleInfoGet_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void VehicleInfoGet_Request__finalize(
                VehicleInfoGet_Request_* self);

            NDDSUSERDllExport
            void VehicleInfoGet_Request__finalize_ex(
                VehicleInfoGet_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void VehicleInfoGet_Request__finalize_w_params(
                VehicleInfoGet_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void VehicleInfoGet_Request__finalize_optional_members(
                VehicleInfoGet_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool VehicleInfoGet_Request__copy(
                VehicleInfoGet_Request_* dst,
                const VehicleInfoGet_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *VehicleInfoGet_Response_TYPENAME;

            struct VehicleInfoGet_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class VehicleInfoGet_Response_TypeSupport;
            class VehicleInfoGet_Response_DataWriter;
            class VehicleInfoGet_Response_DataReader;
            #endif

            class VehicleInfoGet_Response_ 
            {
              public:
                typedef struct VehicleInfoGet_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef VehicleInfoGet_Response_TypeSupport TypeSupport;
                typedef VehicleInfoGet_Response_DataWriter DataWriter;
                typedef VehicleInfoGet_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                mavros_msgs::msg::dds_::VehicleInfo_Seq  vehicles_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* VehicleInfoGet_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(VehicleInfoGet_Response_Seq, VehicleInfoGet_Response_);

            NDDSUSERDllExport
            RTIBool VehicleInfoGet_Response__initialize(
                VehicleInfoGet_Response_* self);

            NDDSUSERDllExport
            RTIBool VehicleInfoGet_Response__initialize_ex(
                VehicleInfoGet_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool VehicleInfoGet_Response__initialize_w_params(
                VehicleInfoGet_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void VehicleInfoGet_Response__finalize(
                VehicleInfoGet_Response_* self);

            NDDSUSERDllExport
            void VehicleInfoGet_Response__finalize_ex(
                VehicleInfoGet_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void VehicleInfoGet_Response__finalize_w_params(
                VehicleInfoGet_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void VehicleInfoGet_Response__finalize_optional_members(
                VehicleInfoGet_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool VehicleInfoGet_Response__copy(
                VehicleInfoGet_Response_* dst,
                const VehicleInfoGet_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* VehicleInfoGet_ */

