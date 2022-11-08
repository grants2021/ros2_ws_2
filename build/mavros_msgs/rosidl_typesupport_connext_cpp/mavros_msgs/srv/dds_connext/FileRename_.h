

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileRename_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileRename__972701596_h
#define FileRename__972701596_h

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

            extern const char *FileRename_Request_TYPENAME;

            struct FileRename_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileRename_Request_TypeSupport;
            class FileRename_Request_DataWriter;
            class FileRename_Request_DataReader;
            #endif

            class FileRename_Request_ 
            {
              public:
                typedef struct FileRename_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileRename_Request_TypeSupport TypeSupport;
                typedef FileRename_Request_DataWriter DataWriter;
                typedef FileRename_Request_DataReader DataReader;
                #endif

                DDS_Char *   old_path_ ;
                DDS_Char *   new_path_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileRename_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileRename_Request_Seq, FileRename_Request_);

            NDDSUSERDllExport
            RTIBool FileRename_Request__initialize(
                FileRename_Request_* self);

            NDDSUSERDllExport
            RTIBool FileRename_Request__initialize_ex(
                FileRename_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileRename_Request__initialize_w_params(
                FileRename_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileRename_Request__finalize(
                FileRename_Request_* self);

            NDDSUSERDllExport
            void FileRename_Request__finalize_ex(
                FileRename_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileRename_Request__finalize_w_params(
                FileRename_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileRename_Request__finalize_optional_members(
                FileRename_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileRename_Request__copy(
                FileRename_Request_* dst,
                const FileRename_Request_* src);

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

            extern const char *FileRename_Response_TYPENAME;

            struct FileRename_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileRename_Response_TypeSupport;
            class FileRename_Response_DataWriter;
            class FileRename_Response_DataReader;
            #endif

            class FileRename_Response_ 
            {
              public:
                typedef struct FileRename_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileRename_Response_TypeSupport TypeSupport;
                typedef FileRename_Response_DataWriter DataWriter;
                typedef FileRename_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* FileRename_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileRename_Response_Seq, FileRename_Response_);

            NDDSUSERDllExport
            RTIBool FileRename_Response__initialize(
                FileRename_Response_* self);

            NDDSUSERDllExport
            RTIBool FileRename_Response__initialize_ex(
                FileRename_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileRename_Response__initialize_w_params(
                FileRename_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileRename_Response__finalize(
                FileRename_Response_* self);

            NDDSUSERDllExport
            void FileRename_Response__finalize_ex(
                FileRename_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileRename_Response__finalize_w_params(
                FileRename_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileRename_Response__finalize_optional_members(
                FileRename_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileRename_Response__copy(
                FileRename_Response_* dst,
                const FileRename_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileRename_ */

