

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileRemove_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileRemove__807295493_h
#define FileRemove__807295493_h

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

            extern const char *FileRemove_Request_TYPENAME;

            struct FileRemove_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileRemove_Request_TypeSupport;
            class FileRemove_Request_DataWriter;
            class FileRemove_Request_DataReader;
            #endif

            class FileRemove_Request_ 
            {
              public:
                typedef struct FileRemove_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileRemove_Request_TypeSupport TypeSupport;
                typedef FileRemove_Request_DataWriter DataWriter;
                typedef FileRemove_Request_DataReader DataReader;
                #endif

                DDS_Char *   file_path_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileRemove_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileRemove_Request_Seq, FileRemove_Request_);

            NDDSUSERDllExport
            RTIBool FileRemove_Request__initialize(
                FileRemove_Request_* self);

            NDDSUSERDllExport
            RTIBool FileRemove_Request__initialize_ex(
                FileRemove_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileRemove_Request__initialize_w_params(
                FileRemove_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileRemove_Request__finalize(
                FileRemove_Request_* self);

            NDDSUSERDllExport
            void FileRemove_Request__finalize_ex(
                FileRemove_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileRemove_Request__finalize_w_params(
                FileRemove_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileRemove_Request__finalize_optional_members(
                FileRemove_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileRemove_Request__copy(
                FileRemove_Request_* dst,
                const FileRemove_Request_* src);

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

            extern const char *FileRemove_Response_TYPENAME;

            struct FileRemove_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileRemove_Response_TypeSupport;
            class FileRemove_Response_DataWriter;
            class FileRemove_Response_DataReader;
            #endif

            class FileRemove_Response_ 
            {
              public:
                typedef struct FileRemove_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileRemove_Response_TypeSupport TypeSupport;
                typedef FileRemove_Response_DataWriter DataWriter;
                typedef FileRemove_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* FileRemove_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileRemove_Response_Seq, FileRemove_Response_);

            NDDSUSERDllExport
            RTIBool FileRemove_Response__initialize(
                FileRemove_Response_* self);

            NDDSUSERDllExport
            RTIBool FileRemove_Response__initialize_ex(
                FileRemove_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileRemove_Response__initialize_w_params(
                FileRemove_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileRemove_Response__finalize(
                FileRemove_Response_* self);

            NDDSUSERDllExport
            void FileRemove_Response__finalize_ex(
                FileRemove_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileRemove_Response__finalize_w_params(
                FileRemove_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileRemove_Response__finalize_optional_members(
                FileRemove_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileRemove_Response__copy(
                FileRemove_Response_* dst,
                const FileRemove_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileRemove_ */

