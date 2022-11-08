

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DebugValue_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DebugValue__1516076791_h
#define DebugValue__1516076791_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {
            namespace DebugValue_Constants {
                static const DDS_Octet TYPE_DEBUG_= 0;
                static const DDS_Octet TYPE_DEBUG_VECT_= 1;
                static const DDS_Octet TYPE_DEBUG_ARRAY_= 2;
                static const DDS_Octet TYPE_NAMED_VALUE_FLOAT_= 3;
                static const DDS_Octet TYPE_NAMED_VALUE_INT_= 4;
            } /* namespace DebugValue_Constants  */

            extern const char *DebugValue_TYPENAME;

            struct DebugValue_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DebugValue_TypeSupport;
            class DebugValue_DataWriter;
            class DebugValue_DataReader;
            #endif

            class DebugValue_ 
            {
              public:
                typedef struct DebugValue_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DebugValue_TypeSupport TypeSupport;
                typedef DebugValue_DataWriter DataWriter;
                typedef DebugValue_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Long   index_ ;
                DDS_Char *   name_ ;
                DDS_Float   value_float_ ;
                DDS_Long   value_int_ ;
                DDS_FloatSeq  data_ ;
                DDS_Octet   type_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DebugValue__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DebugValue_Seq, DebugValue_);

            NDDSUSERDllExport
            RTIBool DebugValue__initialize(
                DebugValue_* self);

            NDDSUSERDllExport
            RTIBool DebugValue__initialize_ex(
                DebugValue_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DebugValue__initialize_w_params(
                DebugValue_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DebugValue__finalize(
                DebugValue_* self);

            NDDSUSERDllExport
            void DebugValue__finalize_ex(
                DebugValue_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DebugValue__finalize_w_params(
                DebugValue_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DebugValue__finalize_optional_members(
                DebugValue_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DebugValue__copy(
                DebugValue_* dst,
                const DebugValue_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* DebugValue_ */

