

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileRead_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileRead__971362389_h
#define FileRead__971362389_h

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

            extern const char *FileRead_Request_TYPENAME;

            struct FileRead_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileRead_Request_TypeSupport;
            class FileRead_Request_DataWriter;
            class FileRead_Request_DataReader;
            #endif

            class FileRead_Request_ 
            {
              public:
                typedef struct FileRead_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileRead_Request_TypeSupport TypeSupport;
                typedef FileRead_Request_DataWriter DataWriter;
                typedef FileRead_Request_DataReader DataReader;
                #endif

                DDS_Char *   file_path_ ;
                DDS_UnsignedLongLong   offset_ ;
                DDS_UnsignedLongLong   size_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileRead_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileRead_Request_Seq, FileRead_Request_);

            NDDSUSERDllExport
            RTIBool FileRead_Request__initialize(
                FileRead_Request_* self);

            NDDSUSERDllExport
            RTIBool FileRead_Request__initialize_ex(
                FileRead_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileRead_Request__initialize_w_params(
                FileRead_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileRead_Request__finalize(
                FileRead_Request_* self);

            NDDSUSERDllExport
            void FileRead_Request__finalize_ex(
                FileRead_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileRead_Request__finalize_w_params(
                FileRead_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileRead_Request__finalize_optional_members(
                FileRead_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileRead_Request__copy(
                FileRead_Request_* dst,
                const FileRead_Request_* src);

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

            extern const char *FileRead_Response_TYPENAME;

            struct FileRead_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileRead_Response_TypeSupport;
            class FileRead_Response_DataWriter;
            class FileRead_Response_DataReader;
            #endif

            class FileRead_Response_ 
            {
              public:
                typedef struct FileRead_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileRead_Response_TypeSupport TypeSupport;
                typedef FileRead_Response_DataWriter DataWriter;
                typedef FileRead_Response_DataReader DataReader;
                #endif

                DDS_OctetSeq  data_ ;
                DDS_Boolean   success_ ;
                DDS_Long   r_errno_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileRead_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileRead_Response_Seq, FileRead_Response_);

            NDDSUSERDllExport
            RTIBool FileRead_Response__initialize(
                FileRead_Response_* self);

            NDDSUSERDllExport
            RTIBool FileRead_Response__initialize_ex(
                FileRead_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileRead_Response__initialize_w_params(
                FileRead_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileRead_Response__finalize(
                FileRead_Response_* self);

            NDDSUSERDllExport
            void FileRead_Response__finalize_ex(
                FileRead_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileRead_Response__finalize_w_params(
                FileRead_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileRead_Response__finalize_optional_members(
                FileRead_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileRead_Response__copy(
                FileRead_Response_* dst,
                const FileRead_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileRead_ */

