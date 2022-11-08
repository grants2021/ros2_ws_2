

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileChecksum_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileChecksum__356823234_h
#define FileChecksum__356823234_h

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

            extern const char *FileChecksum_Request_TYPENAME;

            struct FileChecksum_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileChecksum_Request_TypeSupport;
            class FileChecksum_Request_DataWriter;
            class FileChecksum_Request_DataReader;
            #endif

            class FileChecksum_Request_ 
            {
              public:
                typedef struct FileChecksum_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileChecksum_Request_TypeSupport TypeSupport;
                typedef FileChecksum_Request_DataWriter DataWriter;
                typedef FileChecksum_Request_DataReader DataReader;
                #endif

                DDS_Char *   file_path_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileChecksum_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileChecksum_Request_Seq, FileChecksum_Request_);

            NDDSUSERDllExport
            RTIBool FileChecksum_Request__initialize(
                FileChecksum_Request_* self);

            NDDSUSERDllExport
            RTIBool FileChecksum_Request__initialize_ex(
                FileChecksum_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileChecksum_Request__initialize_w_params(
                FileChecksum_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileChecksum_Request__finalize(
                FileChecksum_Request_* self);

            NDDSUSERDllExport
            void FileChecksum_Request__finalize_ex(
                FileChecksum_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileChecksum_Request__finalize_w_params(
                FileChecksum_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileChecksum_Request__finalize_optional_members(
                FileChecksum_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileChecksum_Request__copy(
                FileChecksum_Request_* dst,
                const FileChecksum_Request_* src);

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

            extern const char *FileChecksum_Response_TYPENAME;

            struct FileChecksum_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileChecksum_Response_TypeSupport;
            class FileChecksum_Response_DataWriter;
            class FileChecksum_Response_DataReader;
            #endif

            class FileChecksum_Response_ 
            {
              public:
                typedef struct FileChecksum_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileChecksum_Response_TypeSupport TypeSupport;
                typedef FileChecksum_Response_DataWriter DataWriter;
                typedef FileChecksum_Response_DataReader DataReader;
                #endif

                DDS_UnsignedLong   crc32_ ;
                DDS_Boolean   success_ ;
                DDS_Long   r_errno_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileChecksum_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileChecksum_Response_Seq, FileChecksum_Response_);

            NDDSUSERDllExport
            RTIBool FileChecksum_Response__initialize(
                FileChecksum_Response_* self);

            NDDSUSERDllExport
            RTIBool FileChecksum_Response__initialize_ex(
                FileChecksum_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileChecksum_Response__initialize_w_params(
                FileChecksum_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileChecksum_Response__finalize(
                FileChecksum_Response_* self);

            NDDSUSERDllExport
            void FileChecksum_Response__finalize_ex(
                FileChecksum_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileChecksum_Response__finalize_w_params(
                FileChecksum_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileChecksum_Response__finalize_optional_members(
                FileChecksum_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileChecksum_Response__copy(
                FileChecksum_Response_* dst,
                const FileChecksum_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileChecksum_ */

