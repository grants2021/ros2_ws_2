

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Contact_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Contact__1440153300_h
#define Contact__1440153300_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace vrx_gazebo {
    namespace msg {
        namespace dds_ {

            extern const char *Contact_TYPENAME;

            struct Contact_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Contact_TypeSupport;
            class Contact_DataWriter;
            class Contact_DataReader;
            #endif

            class Contact_ 
            {
              public:
                typedef struct Contact_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Contact_TypeSupport TypeSupport;
                typedef Contact_DataWriter DataWriter;
                typedef Contact_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   collision1_ ;
                DDS_Char *   collision2_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Contact__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Contact_Seq, Contact_);

            NDDSUSERDllExport
            RTIBool Contact__initialize(
                Contact_* self);

            NDDSUSERDllExport
            RTIBool Contact__initialize_ex(
                Contact_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Contact__initialize_w_params(
                Contact_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Contact__finalize(
                Contact_* self);

            NDDSUSERDllExport
            void Contact__finalize_ex(
                Contact_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Contact__finalize_w_params(
                Contact_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Contact__finalize_optional_members(
                Contact_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Contact__copy(
                Contact_* dst,
                const Contact_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace vrx_gazebo  */

#endif /* Contact_ */

