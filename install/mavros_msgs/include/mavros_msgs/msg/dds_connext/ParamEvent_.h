

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParamEvent_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParamEvent__519998538_h
#define ParamEvent__519998538_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/ParameterValue_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ParamEvent_TYPENAME;

            struct ParamEvent_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParamEvent_TypeSupport;
            class ParamEvent_DataWriter;
            class ParamEvent_DataReader;
            #endif

            class ParamEvent_ 
            {
              public:
                typedef struct ParamEvent_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParamEvent_TypeSupport TypeSupport;
                typedef ParamEvent_DataWriter DataWriter;
                typedef ParamEvent_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   param_id_ ;
                rcl_interfaces::msg::dds_::ParameterValue_   value_ ;
                DDS_UnsignedShort   param_index_ ;
                DDS_UnsignedShort   param_count_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParamEvent__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParamEvent_Seq, ParamEvent_);

            NDDSUSERDllExport
            RTIBool ParamEvent__initialize(
                ParamEvent_* self);

            NDDSUSERDllExport
            RTIBool ParamEvent__initialize_ex(
                ParamEvent_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParamEvent__initialize_w_params(
                ParamEvent_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParamEvent__finalize(
                ParamEvent_* self);

            NDDSUSERDllExport
            void ParamEvent__finalize_ex(
                ParamEvent_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParamEvent__finalize_w_params(
                ParamEvent_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParamEvent__finalize_optional_members(
                ParamEvent_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParamEvent__copy(
                ParamEvent_* dst,
                const ParamEvent_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* ParamEvent_ */

