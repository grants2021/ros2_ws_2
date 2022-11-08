

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileEntry_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileEntry__1793288238_h
#define FileEntry__1793288238_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace FileEntry_Constants {
                static const DDS_Octet TYPE_FILE_= 0;
                static const DDS_Octet TYPE_DIRECTORY_= 1;
            } /* namespace FileEntry_Constants  */

            extern const char *FileEntry_TYPENAME;

            struct FileEntry_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileEntry_TypeSupport;
            class FileEntry_DataWriter;
            class FileEntry_DataReader;
            #endif

            class FileEntry_ 
            {
              public:
                typedef struct FileEntry_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileEntry_TypeSupport TypeSupport;
                typedef FileEntry_DataWriter DataWriter;
                typedef FileEntry_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Octet   type_ ;
                DDS_UnsignedLongLong   size_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileEntry__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileEntry_Seq, FileEntry_);

            NDDSUSERDllExport
            RTIBool FileEntry__initialize(
                FileEntry_* self);

            NDDSUSERDllExport
            RTIBool FileEntry__initialize_ex(
                FileEntry_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileEntry__initialize_w_params(
                FileEntry_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileEntry__finalize(
                FileEntry_* self);

            NDDSUSERDllExport
            void FileEntry__finalize_ex(
                FileEntry_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileEntry__finalize_w_params(
                FileEntry_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileEntry__finalize_optional_members(
                FileEntry_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileEntry__copy(
                FileEntry_* dst,
                const FileEntry_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* FileEntry_ */

