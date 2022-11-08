

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileMakeDir_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileMakeDir__1392793258_h
#define FileMakeDir__1392793258_h

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

            extern const char *FileMakeDir_Request_TYPENAME;

            struct FileMakeDir_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileMakeDir_Request_TypeSupport;
            class FileMakeDir_Request_DataWriter;
            class FileMakeDir_Request_DataReader;
            #endif

            class FileMakeDir_Request_ 
            {
              public:
                typedef struct FileMakeDir_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileMakeDir_Request_TypeSupport TypeSupport;
                typedef FileMakeDir_Request_DataWriter DataWriter;
                typedef FileMakeDir_Request_DataReader DataReader;
                #endif

                DDS_Char *   dir_path_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FileMakeDir_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileMakeDir_Request_Seq, FileMakeDir_Request_);

            NDDSUSERDllExport
            RTIBool FileMakeDir_Request__initialize(
                FileMakeDir_Request_* self);

            NDDSUSERDllExport
            RTIBool FileMakeDir_Request__initialize_ex(
                FileMakeDir_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileMakeDir_Request__initialize_w_params(
                FileMakeDir_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileMakeDir_Request__finalize(
                FileMakeDir_Request_* self);

            NDDSUSERDllExport
            void FileMakeDir_Request__finalize_ex(
                FileMakeDir_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileMakeDir_Request__finalize_w_params(
                FileMakeDir_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileMakeDir_Request__finalize_optional_members(
                FileMakeDir_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileMakeDir_Request__copy(
                FileMakeDir_Request_* dst,
                const FileMakeDir_Request_* src);

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

            extern const char *FileMakeDir_Response_TYPENAME;

            struct FileMakeDir_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FileMakeDir_Response_TypeSupport;
            class FileMakeDir_Response_DataWriter;
            class FileMakeDir_Response_DataReader;
            #endif

            class FileMakeDir_Response_ 
            {
              public:
                typedef struct FileMakeDir_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FileMakeDir_Response_TypeSupport TypeSupport;
                typedef FileMakeDir_Response_DataWriter DataWriter;
                typedef FileMakeDir_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* FileMakeDir_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FileMakeDir_Response_Seq, FileMakeDir_Response_);

            NDDSUSERDllExport
            RTIBool FileMakeDir_Response__initialize(
                FileMakeDir_Response_* self);

            NDDSUSERDllExport
            RTIBool FileMakeDir_Response__initialize_ex(
                FileMakeDir_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FileMakeDir_Response__initialize_w_params(
                FileMakeDir_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FileMakeDir_Response__finalize(
                FileMakeDir_Response_* self);

            NDDSUSERDllExport
            void FileMakeDir_Response__finalize_ex(
                FileMakeDir_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FileMakeDir_Response__finalize_w_params(
                FileMakeDir_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FileMakeDir_Response__finalize_optional_members(
                FileMakeDir_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FileMakeDir_Response__copy(
                FileMakeDir_Response_* dst,
                const FileMakeDir_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mavros_msgs  */

#endif /* FileMakeDir_ */

