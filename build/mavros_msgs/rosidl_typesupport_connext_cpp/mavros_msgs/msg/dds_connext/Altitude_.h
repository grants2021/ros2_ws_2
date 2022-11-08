

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Altitude_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Altitude__2088531356_h
#define Altitude__2088531356_h

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

            extern const char *Altitude_TYPENAME;

            struct Altitude_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Altitude_TypeSupport;
            class Altitude_DataWriter;
            class Altitude_DataReader;
            #endif

            class Altitude_ 
            {
              public:
                typedef struct Altitude_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Altitude_TypeSupport TypeSupport;
                typedef Altitude_DataWriter DataWriter;
                typedef Altitude_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   monotonic_ ;
                DDS_Float   amsl_ ;
                DDS_Float   local_ ;
                DDS_Float   relative_ ;
                DDS_Float   terrain_ ;
                DDS_Float   bottom_clearance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Altitude__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Altitude_Seq, Altitude_);

            NDDSUSERDllExport
            RTIBool Altitude__initialize(
                Altitude_* self);

            NDDSUSERDllExport
            RTIBool Altitude__initialize_ex(
                Altitude_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Altitude__initialize_w_params(
                Altitude_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Altitude__finalize(
                Altitude_* self);

            NDDSUSERDllExport
            void Altitude__finalize_ex(
                Altitude_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Altitude__finalize_w_params(
                Altitude_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Altitude__finalize_optional_members(
                Altitude_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Altitude__copy(
                Altitude_* dst,
                const Altitude_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* Altitude_ */

