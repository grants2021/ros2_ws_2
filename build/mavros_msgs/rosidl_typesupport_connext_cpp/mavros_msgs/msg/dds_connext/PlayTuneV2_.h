

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PlayTuneV2_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PlayTuneV2__1298918829_h
#define PlayTuneV2__1298918829_h

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
            namespace PlayTuneV2_Constants {
                static const DDS_Octet QBASIC1_1_= 1;
                static const DDS_Octet MML_MODERN_= 2;
            } /* namespace PlayTuneV2_Constants  */

            extern const char *PlayTuneV2_TYPENAME;

            struct PlayTuneV2_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PlayTuneV2_TypeSupport;
            class PlayTuneV2_DataWriter;
            class PlayTuneV2_DataReader;
            #endif

            class PlayTuneV2_ 
            {
              public:
                typedef struct PlayTuneV2_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PlayTuneV2_TypeSupport TypeSupport;
                typedef PlayTuneV2_DataWriter DataWriter;
                typedef PlayTuneV2_DataReader DataReader;
                #endif

                DDS_Octet   format_ ;
                DDS_Char *   tune_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PlayTuneV2__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PlayTuneV2_Seq, PlayTuneV2_);

            NDDSUSERDllExport
            RTIBool PlayTuneV2__initialize(
                PlayTuneV2_* self);

            NDDSUSERDllExport
            RTIBool PlayTuneV2__initialize_ex(
                PlayTuneV2_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PlayTuneV2__initialize_w_params(
                PlayTuneV2_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PlayTuneV2__finalize(
                PlayTuneV2_* self);

            NDDSUSERDllExport
            void PlayTuneV2__finalize_ex(
                PlayTuneV2_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PlayTuneV2__finalize_w_params(
                PlayTuneV2_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PlayTuneV2__finalize_optional_members(
                PlayTuneV2_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PlayTuneV2__copy(
                PlayTuneV2_* dst,
                const PlayTuneV2_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* PlayTuneV2_ */

