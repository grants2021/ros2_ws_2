

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileTruncate_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileTruncate__1454597131_h
#define FileTruncate__1454597131_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *FileTruncate_Request_TYPENAME;

            struct FileTruncate_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileTruncate_Request_TypeSupport;
            class FileTruncate_Request_DataWriter;
            class FileTruncate_Request_DataReader;
            #endif

            class FileTruncate_Request_ 
            {
              public:
                typedef struct FileTruncate_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileTruncate_Request_TypeSupport TypeSupport;
                typedef FileTruncate_Request_DataWriter DataWriter;
                typedef FileTruncate_Request_DataReader DataReader;
                #endif

                DDS_Char *   file_path_ ;
                DDS_UnsignedLongLong   length_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileTruncate_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileTruncate_Request_Seq, FileTruncate_Request_);

            NDDSUSERDllExport
            RTIBool FileTruncate_Request__initialize(
                FileTruncate_Request_* self);

            NDDSUSERDllExport
            RTIBool FileTruncate_Request__initialize_ex(
                FileTruncate_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileTruncate_Request__initialize_w_params(
                FileTruncate_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileTruncate_Request__finalize(
                FileTruncate_Request_* self);

            NDDSUSERDllExport
            void FileTruncate_Request__finalize_ex(
                FileTruncate_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileTruncate_Request__finalize_w_params(
                FileTruncate_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileTruncate_Request__finalize_optional_members(
                FileTruncate_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileTruncate_Request__copy(
                FileTruncate_Request_* dst,
                const FileTruncate_Request_* src);

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

            extern const char *FileTruncate_Response_TYPENAME;

            struct FileTruncate_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileTruncate_Response_TypeSupport;
            class FileTruncate_Response_DataWriter;
            class FileTruncate_Response_DataReader;
            #endif

            class FileTruncate_Response_ 
            {
              public:
                typedef struct FileTruncate_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileTruncate_Response_TypeSupport TypeSupport;
                typedef FileTruncate_Response_DataWriter DataWriter;
                typedef FileTruncate_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Long   r_errno_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileTruncate_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileTruncate_Response_Seq, FileTruncate_Response_);

            NDDSUSERDllExport
            RTIBool FileTruncate_Response__initialize(
                FileTruncate_Response_* self);

            NDDSUSERDllExport
            RTIBool FileTruncate_Response__initialize_ex(
                FileTruncate_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileTruncate_Response__initialize_w_params(
                FileTruncate_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileTruncate_Response__finalize(
                FileTruncate_Response_* self);

            NDDSUSERDllExport
            void FileTruncate_Response__finalize_ex(
                FileTruncate_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileTruncate_Response__finalize_w_params(
                FileTruncate_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileTruncate_Response__finalize_optional_members(
                FileTruncate_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileTruncate_Response__copy(
                FileTruncate_Response_* dst,
                const FileTruncate_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileTruncate_ */

