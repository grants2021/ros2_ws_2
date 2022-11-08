

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vibration_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Vibration__14427428_h
#define Vibration__14427428_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mavros_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Vibration_TYPENAME;

            struct Vibration_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Vibration_TypeSupport;
            class Vibration_DataWriter;
            class Vibration_DataReader;
            #endif

            class Vibration_ 
            {
              public:
                typedef struct Vibration_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Vibration_TypeSupport TypeSupport;
                typedef Vibration_DataWriter DataWriter;
                typedef Vibration_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Vector3_   vibration_ ;
                DDS_Float   clipping_ [3];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Vibration__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Vibration_Seq, Vibration_);

            NDDSUSERDllExport
            RTIBool Vibration__initialize(
                Vibration_* self);

            NDDSUSERDllExport
            RTIBool Vibration__initialize_ex(
                Vibration_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Vibration__initialize_w_params(
                Vibration_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Vibration__finalize(
                Vibration_* self);

            NDDSUSERDllExport
            void Vibration__finalize_ex(
                Vibration_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Vibration__finalize_w_params(
                Vibration_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Vibration__finalize_optional_members(
                Vibration_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Vibration__copy(
                Vibration_* dst,
                const Vibration_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* Vibration_ */

