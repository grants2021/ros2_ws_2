

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileClose_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileClose__1889516087_h
#define FileClose__1889516087_h

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

            extern const char *FileClose_Request_TYPENAME;

            struct FileClose_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileClose_Request_TypeSupport;
            class FileClose_Request_DataWriter;
            class FileClose_Request_DataReader;
            #endif

            class FileClose_Request_ 
            {
              public:
                typedef struct FileClose_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileClose_Request_TypeSupport TypeSupport;
                typedef FileClose_Request_DataWriter DataWriter;
                typedef FileClose_Request_DataReader DataReader;
                #endif

                DDS_Char *   file_path_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileClose_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileClose_Request_Seq, FileClose_Request_);

            NDDSUSERDllExport
            RTIBool FileClose_Request__initialize(
                FileClose_Request_* self);

            NDDSUSERDllExport
            RTIBool FileClose_Request__initialize_ex(
                FileClose_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileClose_Request__initialize_w_params(
                FileClose_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileClose_Request__finalize(
                FileClose_Request_* self);

            NDDSUSERDllExport
            void FileClose_Request__finalize_ex(
                FileClose_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileClose_Request__finalize_w_params(
                FileClose_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileClose_Request__finalize_optional_members(
                FileClose_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileClose_Request__copy(
                FileClose_Request_* dst,
                const FileClose_Request_* src);

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

            extern const char *FileClose_Response_TYPENAME;

            struct FileClose_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileClose_Response_TypeSupport;
            class FileClose_Response_DataWriter;
            class FileClose_Response_DataReader;
            #endif

            class FileClose_Response_ 
            {
              public:
                typedef struct FileClose_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileClose_Response_TypeSupport TypeSupport;
                typedef FileClose_Response_DataWriter DataWriter;
                typedef FileClose_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* FileClose_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileClose_Response_Seq, FileClose_Response_);

            NDDSUSERDllExport
            RTIBool FileClose_Response__initialize(
                FileClose_Response_* self);

            NDDSUSERDllExport
            RTIBool FileClose_Response__initialize_ex(
                FileClose_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileClose_Response__initialize_w_params(
                FileClose_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileClose_Response__finalize(
                FileClose_Response_* self);

            NDDSUSERDllExport
            void FileClose_Response__finalize_ex(
                FileClose_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileClose_Response__finalize_w_params(
                FileClose_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileClose_Response__finalize_optional_members(
                FileClose_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileClose_Response__copy(
                FileClose_Response_* dst,
                const FileClose_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileClose_ */

