

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParamValue_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParamValue__538970124_h
#define ParamValue__538970124_h

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

            extern const char *ParamValue_TYPENAME;

            struct ParamValue_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamValue_TypeSupport;
            class ParamValue_DataWriter;
            class ParamValue_DataReader;
            #endif

            class ParamValue_ 
            {
              public:
                typedef struct ParamValue_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamValue_TypeSupport TypeSupport;
                typedef ParamValue_DataWriter DataWriter;
                typedef ParamValue_DataReader DataReader;
                #endif

                DDS_LongLong   integer_ ;
                DDS_Double   real_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamValue__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamValue_Seq, ParamValue_);

            NDDSUSERDllExport
            RTIBool ParamValue__initialize(
                ParamValue_* self);

            NDDSUSERDllExport
            RTIBool ParamValue__initialize_ex(
                ParamValue_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamValue__initialize_w_params(
                ParamValue_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamValue__finalize(
                ParamValue_* self);

            NDDSUSERDllExport
            void ParamValue__finalize_ex(
                ParamValue_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamValue__finalize_w_params(
                ParamValue_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamValue__finalize_optional_members(
                ParamValue_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamValue__copy(
                ParamValue_* dst,
                const ParamValue_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ParamValue_ */

