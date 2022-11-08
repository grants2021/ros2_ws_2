

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileList_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileList__1081999993_h
#define FileList__1081999993_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/FileEntry_.h"
namespace mavros_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *FileList_Request_TYPENAME;

            struct FileList_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileList_Request_TypeSupport;
            class FileList_Request_DataWriter;
            class FileList_Request_DataReader;
            #endif

            class FileList_Request_ 
            {
              public:
                typedef struct FileList_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileList_Request_TypeSupport TypeSupport;
                typedef FileList_Request_DataWriter DataWriter;
                typedef FileList_Request_DataReader DataReader;
                #endif

                DDS_Char *   dir_path_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileList_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileList_Request_Seq, FileList_Request_);

            NDDSUSERDllExport
            RTIBool FileList_Request__initialize(
                FileList_Request_* self);

            NDDSUSERDllExport
            RTIBool FileList_Request__initialize_ex(
                FileList_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileList_Request__initialize_w_params(
                FileList_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileList_Request__finalize(
                FileList_Request_* self);

            NDDSUSERDllExport
            void FileList_Request__finalize_ex(
                FileList_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileList_Request__finalize_w_params(
                FileList_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileList_Request__finalize_optional_members(
                FileList_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileList_Request__copy(
                FileList_Request_* dst,
                const FileList_Request_* src);

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

            extern const char *FileList_Response_TYPENAME;

            struct FileList_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileList_Response_TypeSupport;
            class FileList_Response_DataWriter;
            class FileList_Response_DataReader;
            #endif

            class FileList_Response_ 
            {
              public:
                typedef struct FileList_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileList_Response_TypeSupport TypeSupport;
                typedef FileList_Response_DataWriter DataWriter;
                typedef FileList_Response_DataReader DataReader;
                #endif

                mavros_msgs::msg::dds_::FileEntry_Seq  list_ ;
                DDS_Boolean   success_ ;
                DDS_Long   r_errno_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileList_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileList_Response_Seq, FileList_Response_);

            NDDSUSERDllExport
            RTIBool FileList_Response__initialize(
                FileList_Response_* self);

            NDDSUSERDllExport
            RTIBool FileList_Response__initialize_ex(
                FileList_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileList_Response__initialize_w_params(
                FileList_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileList_Response__finalize(
                FileList_Response_* self);

            NDDSUSERDllExport
            void FileList_Response__finalize_ex(
                FileList_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileList_Response__finalize_w_params(
                FileList_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileList_Response__finalize_optional_members(
                FileList_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileList_Response__copy(
                FileList_Response_* dst,
                const FileList_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileList_ */

