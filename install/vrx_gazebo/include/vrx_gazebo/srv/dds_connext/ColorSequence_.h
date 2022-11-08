

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ColorSequence_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ColorSequence__617580985_h
#define ColorSequence__617580985_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace vrx_gazebo {
    namespace srv {
        namespace dds_ {

            extern const char *ColorSequence_Request_TYPENAME;

            struct ColorSequence_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ColorSequence_Request_TypeSupport;
            class ColorSequence_Request_DataWriter;
            class ColorSequence_Request_DataReader;
            #endif

            class ColorSequence_Request_ 
            {
              public:
                typedef struct ColorSequence_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ColorSequence_Request_TypeSupport TypeSupport;
                typedef ColorSequence_Request_DataWriter DataWriter;
                typedef ColorSequence_Request_DataReader DataReader;
                #endif

                DDS_Char *   color1_ ;
                DDS_Char *   color2_ ;
                DDS_Char *   color3_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ColorSequence_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ColorSequence_Request_Seq, ColorSequence_Request_);

            NDDSUSERDllExport
            RTIBool ColorSequence_Request__initialize(
                ColorSequence_Request_* self);

            NDDSUSERDllExport
            RTIBool ColorSequence_Request__initialize_ex(
                ColorSequence_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ColorSequence_Request__initialize_w_params(
                ColorSequence_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ColorSequence_Request__finalize(
                ColorSequence_Request_* self);

            NDDSUSERDllExport
            void ColorSequence_Request__finalize_ex(
                ColorSequence_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ColorSequence_Request__finalize_w_params(
                ColorSequence_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ColorSequence_Request__finalize_optional_members(
                ColorSequence_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ColorSequence_Request__copy(
                ColorSequence_Request_* dst,
                const ColorSequence_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace vrx_gazebo  */
namespace vrx_gazebo {
    namespace srv {
        namespace dds_ {

            extern const char *ColorSequence_Response_TYPENAME;

            struct ColorSequence_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ColorSequence_Response_TypeSupport;
            class ColorSequence_Response_DataWriter;
            class ColorSequence_Response_DataReader;
            #endif

            class ColorSequence_Response_ 
            {
              public:
                typedef struct ColorSequence_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ColorSequence_Response_TypeSupport TypeSupport;
                typedef ColorSequence_Response_DataWriter DataWriter;
                typedef ColorSequence_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ColorSequence_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ColorSequence_Response_Seq, ColorSequence_Response_);

            NDDSUSERDllExport
            RTIBool ColorSequence_Response__initialize(
                ColorSequence_Response_* self);

            NDDSUSERDllExport
            RTIBool ColorSequence_Response__initialize_ex(
                ColorSequence_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ColorSequence_Response__initialize_w_params(
                ColorSequence_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ColorSequence_Response__finalize(
                ColorSequence_Response_* self);

            NDDSUSERDllExport
            void ColorSequence_Response__finalize_ex(
                ColorSequence_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ColorSequence_Response__finalize_w_params(
                ColorSequence_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ColorSequence_Response__finalize_optional_members(
                ColorSequence_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ColorSequence_Response__copy(
                ColorSequence_Response_* dst,
                const ColorSequence_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace vrx_gazebo  */

#endif /* ColorSequence_ */

