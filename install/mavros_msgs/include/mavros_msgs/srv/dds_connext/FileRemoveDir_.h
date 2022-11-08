

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileRemoveDir_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileRemoveDir__433762594_h
#define FileRemoveDir__433762594_h

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

            extern const char *FileRemoveDir_Request_TYPENAME;

            struct FileRemoveDir_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileRemoveDir_Request_TypeSupport;
            class FileRemoveDir_Request_DataWriter;
            class FileRemoveDir_Request_DataReader;
            #endif

            class FileRemoveDir_Request_ 
            {
              public:
                typedef struct FileRemoveDir_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileRemoveDir_Request_TypeSupport TypeSupport;
                typedef FileRemoveDir_Request_DataWriter DataWriter;
                typedef FileRemoveDir_Request_DataReader DataReader;
                #endif

                DDS_Char *   dir_path_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileRemoveDir_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileRemoveDir_Request_Seq, FileRemoveDir_Request_);

            NDDSUSERDllExport
            RTIBool FileRemoveDir_Request__initialize(
                FileRemoveDir_Request_* self);

            NDDSUSERDllExport
            RTIBool FileRemoveDir_Request__initialize_ex(
                FileRemoveDir_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileRemoveDir_Request__initialize_w_params(
                FileRemoveDir_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileRemoveDir_Request__finalize(
                FileRemoveDir_Request_* self);

            NDDSUSERDllExport
            void FileRemoveDir_Request__finalize_ex(
                FileRemoveDir_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileRemoveDir_Request__finalize_w_params(
                FileRemoveDir_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileRemoveDir_Request__finalize_optional_members(
                FileRemoveDir_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileRemoveDir_Request__copy(
                FileRemoveDir_Request_* dst,
                const FileRemoveDir_Request_* src);

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

            extern const char *FileRemoveDir_Response_TYPENAME;

            struct FileRemoveDir_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileRemoveDir_Response_TypeSupport;
            class FileRemoveDir_Response_DataWriter;
            class FileRemoveDir_Response_DataReader;
            #endif

            class FileRemoveDir_Response_ 
            {
              public:
                typedef struct FileRemoveDir_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileRemoveDir_Response_TypeSupport TypeSupport;
                typedef FileRemoveDir_Response_DataWriter DataWriter;
                typedef FileRemoveDir_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* FileRemoveDir_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileRemoveDir_Response_Seq, FileRemoveDir_Response_);

            NDDSUSERDllExport
            RTIBool FileRemoveDir_Response__initialize(
                FileRemoveDir_Response_* self);

            NDDSUSERDllExport
            RTIBool FileRemoveDir_Response__initialize_ex(
                FileRemoveDir_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileRemoveDir_Response__initialize_w_params(
                FileRemoveDir_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileRemoveDir_Response__finalize(
                FileRemoveDir_Response_* self);

            NDDSUSERDllExport
            void FileRemoveDir_Response__finalize_ex(
                FileRemoveDir_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileRemoveDir_Response__finalize_w_params(
                FileRemoveDir_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileRemoveDir_Response__finalize_optional_members(
                FileRemoveDir_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileRemoveDir_Response__copy(
                FileRemoveDir_Response_* dst,
                const FileRemoveDir_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileRemoveDir_ */

