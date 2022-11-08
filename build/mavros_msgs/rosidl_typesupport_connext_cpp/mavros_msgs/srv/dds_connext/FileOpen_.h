

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileOpen_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileOpen__1688418708_h
#define FileOpen__1688418708_h

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
            namespace FileOpen_Request_Constants {
                static const DDS_Octet MODE_READ_= 0;
                static const DDS_Octet MODE_WRITE_= 1;
                static const DDS_Octet MODE_CREATE_= 2;
            } /* namespace FileOpen_Request_Constants  */

            extern const char *FileOpen_Request_TYPENAME;

            struct FileOpen_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileOpen_Request_TypeSupport;
            class FileOpen_Request_DataWriter;
            class FileOpen_Request_DataReader;
            #endif

            class FileOpen_Request_ 
            {
              public:
                typedef struct FileOpen_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileOpen_Request_TypeSupport TypeSupport;
                typedef FileOpen_Request_DataWriter DataWriter;
                typedef FileOpen_Request_DataReader DataReader;
                #endif

                DDS_Char *   file_path_ ;
                DDS_Octet   mode_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileOpen_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileOpen_Request_Seq, FileOpen_Request_);

            NDDSUSERDllExport
            RTIBool FileOpen_Request__initialize(
                FileOpen_Request_* self);

            NDDSUSERDllExport
            RTIBool FileOpen_Request__initialize_ex(
                FileOpen_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileOpen_Request__initialize_w_params(
                FileOpen_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileOpen_Request__finalize(
                FileOpen_Request_* self);

            NDDSUSERDllExport
            void FileOpen_Request__finalize_ex(
                FileOpen_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileOpen_Request__finalize_w_params(
                FileOpen_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileOpen_Request__finalize_optional_members(
                FileOpen_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileOpen_Request__copy(
                FileOpen_Request_* dst,
                const FileOpen_Request_* src);

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

            extern const char *FileOpen_Response_TYPENAME;

            struct FileOpen_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileOpen_Response_TypeSupport;
            class FileOpen_Response_DataWriter;
            class FileOpen_Response_DataReader;
            #endif

            class FileOpen_Response_ 
            {
              public:
                typedef struct FileOpen_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileOpen_Response_TypeSupport TypeSupport;
                typedef FileOpen_Response_DataWriter DataWriter;
                typedef FileOpen_Response_DataReader DataReader;
                #endif

                DDS_UnsignedLong   size_ ;
                DDS_Boolean   success_ ;
                DDS_Long   r_errno_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileOpen_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileOpen_Response_Seq, FileOpen_Response_);

            NDDSUSERDllExport
            RTIBool FileOpen_Response__initialize(
                FileOpen_Response_* self);

            NDDSUSERDllExport
            RTIBool FileOpen_Response__initialize_ex(
                FileOpen_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileOpen_Response__initialize_w_params(
                FileOpen_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileOpen_Response__finalize(
                FileOpen_Response_* self);

            NDDSUSERDllExport
            void FileOpen_Response__finalize_ex(
                FileOpen_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileOpen_Response__finalize_w_params(
                FileOpen_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileOpen_Response__finalize_optional_members(
                FileOpen_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileOpen_Response__copy(
                FileOpen_Response_* dst,
                const FileOpen_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileOpen_ */

