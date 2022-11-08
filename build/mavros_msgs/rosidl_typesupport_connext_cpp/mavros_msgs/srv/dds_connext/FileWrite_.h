

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileWrite_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileWrite__464067570_h
#define FileWrite__464067570_h

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

            extern const char *FileWrite_Request_TYPENAME;

            struct FileWrite_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileWrite_Request_TypeSupport;
            class FileWrite_Request_DataWriter;
            class FileWrite_Request_DataReader;
            #endif

            class FileWrite_Request_ 
            {
              public:
                typedef struct FileWrite_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileWrite_Request_TypeSupport TypeSupport;
                typedef FileWrite_Request_DataWriter DataWriter;
                typedef FileWrite_Request_DataReader DataReader;
                #endif

                DDS_Char *   file_path_ ;
                DDS_UnsignedLongLong   offset_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileWrite_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileWrite_Request_Seq, FileWrite_Request_);

            NDDSUSERDllExport
            RTIBool FileWrite_Request__initialize(
                FileWrite_Request_* self);

            NDDSUSERDllExport
            RTIBool FileWrite_Request__initialize_ex(
                FileWrite_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileWrite_Request__initialize_w_params(
                FileWrite_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileWrite_Request__finalize(
                FileWrite_Request_* self);

            NDDSUSERDllExport
            void FileWrite_Request__finalize_ex(
                FileWrite_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileWrite_Request__finalize_w_params(
                FileWrite_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileWrite_Request__finalize_optional_members(
                FileWrite_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileWrite_Request__copy(
                FileWrite_Request_* dst,
                const FileWrite_Request_* src);

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

            extern const char *FileWrite_Response_TYPENAME;

            struct FileWrite_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileWrite_Response_TypeSupport;
            class FileWrite_Response_DataWriter;
            class FileWrite_Response_DataReader;
            #endif

            class FileWrite_Response_ 
            {
              public:
                typedef struct FileWrite_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileWrite_Response_TypeSupport TypeSupport;
                typedef FileWrite_Response_DataWriter DataWriter;
                typedef FileWrite_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* FileWrite_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileWrite_Response_Seq, FileWrite_Response_);

            NDDSUSERDllExport
            RTIBool FileWrite_Response__initialize(
                FileWrite_Response_* self);

            NDDSUSERDllExport
            RTIBool FileWrite_Response__initialize_ex(
                FileWrite_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileWrite_Response__initialize_w_params(
                FileWrite_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileWrite_Response__finalize(
                FileWrite_Response_* self);

            NDDSUSERDllExport
            void FileWrite_Response__finalize_ex(
                FileWrite_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileWrite_Response__finalize_w_params(
                FileWrite_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileWrite_Response__finalize_optional_members(
                FileWrite_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileWrite_Response__copy(
                FileWrite_Response_* dst,
                const FileWrite_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileWrite_ */

