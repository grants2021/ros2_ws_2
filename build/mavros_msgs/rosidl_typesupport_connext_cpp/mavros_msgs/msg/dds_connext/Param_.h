

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Param_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Param__1850390112_h
#define Param__1850390112_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mavros_msgs/msg/dds_connext/ParamValue_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Param_TYPENAME;

            struct Param_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Param_TypeSupport;
            class Param_DataWriter;
            class Param_DataReader;
            #endif

            class Param_ 
            {
              public:
                typedef struct Param_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Param_TypeSupport TypeSupport;
                typedef Param_DataWriter DataWriter;
                typedef Param_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   param_id_ ;
                mavros_msgs::msg::dds_::ParamValue_   value_ ;
                DDS_UnsignedShort   param_index_ ;
                DDS_UnsignedShort   param_count_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Param__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Param_Seq, Param_);

            NDDSUSERDllExport
            RTIBool Param__initialize(
                Param_* self);

            NDDSUSERDllExport
            RTIBool Param__initialize_ex(
                Param_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Param__initialize_w_params(
                Param_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Param__finalize(
                Param_* self);

            NDDSUSERDllExport
            void Param__finalize_ex(
                Param_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Param__finalize_w_params(
                Param_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Param__finalize_optional_members(
                Param_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Param__copy(
                Param_* dst,
                const Param_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* Param_ */

