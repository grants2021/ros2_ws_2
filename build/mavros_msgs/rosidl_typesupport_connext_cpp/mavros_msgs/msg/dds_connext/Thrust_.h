

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Thrust_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Thrust__670272836_h
#define Thrust__670272836_h

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

            extern const char *Thrust_TYPENAME;

            struct Thrust_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Thrust_TypeSupport;
            class Thrust_DataWriter;
            class Thrust_DataReader;
            #endif

            class Thrust_ 
            {
              public:
                typedef struct Thrust_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Thrust_TypeSupport TypeSupport;
                typedef Thrust_DataWriter DataWriter;
                typedef Thrust_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   thrust_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Thrust__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Thrust_Seq, Thrust_);

            NDDSUSERDllExport
            RTIBool Thrust__initialize(
                Thrust_* self);

            NDDSUSERDllExport
            RTIBool Thrust__initialize_ex(
                Thrust_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Thrust__initialize_w_params(
                Thrust_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Thrust__finalize(
                Thrust_* self);

            NDDSUSERDllExport
            void Thrust__finalize_ex(
                Thrust_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Thrust__finalize_w_params(
                Thrust_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Thrust__finalize_optional_members(
                Thrust_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Thrust__copy(
                Thrust_* dst,
                const Thrust_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* Thrust_ */

