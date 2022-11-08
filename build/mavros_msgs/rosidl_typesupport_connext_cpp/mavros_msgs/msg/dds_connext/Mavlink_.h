

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Mavlink_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Mavlink__201322997_h
#define Mavlink__201322997_h

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
            namespace Mavlink_Constants {
                static const DDS_Octet FRAMING_OK_= 1;
                static const DDS_Octet FRAMING_BAD_CRC_= 2;
                static const DDS_Octet FRAMING_BAD_SIGNATURE_= 3;
                static const DDS_Octet MAVLINK_V10_= 254;
                static const DDS_Octet MAVLINK_V20_= 253;
            } /* namespace Mavlink_Constants  */

            extern const char *Mavlink_TYPENAME;

            struct Mavlink_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Mavlink_TypeSupport;
            class Mavlink_DataWriter;
            class Mavlink_DataReader;
            #endif

            class Mavlink_ 
            {
              public:
                typedef struct Mavlink_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Mavlink_TypeSupport TypeSupport;
                typedef Mavlink_DataWriter DataWriter;
                typedef Mavlink_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   framing_status_ ;
                DDS_Octet   magic_ ;
                DDS_Octet   len_ ;
                DDS_Octet   incompat_flags_ ;
                DDS_Octet   compat_flags_ ;
                DDS_Octet   seq_ ;
                DDS_Octet   sysid_ ;
                DDS_Octet   compid_ ;
                DDS_UnsignedLong   msgid_ ;
                DDS_UnsignedShort   checksum_ ;
                DDS_UnsignedLongLongSeq  payload64_ ;
                DDS_OctetSeq  signature_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Mavlink__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Mavlink_Seq, Mavlink_);

            NDDSUSERDllExport
            RTIBool Mavlink__initialize(
                Mavlink_* self);

            NDDSUSERDllExport
            RTIBool Mavlink__initialize_ex(
                Mavlink_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Mavlink__initialize_w_params(
                Mavlink_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Mavlink__finalize(
                Mavlink_* self);

            NDDSUSERDllExport
            void Mavlink__finalize_ex(
                Mavlink_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Mavlink__finalize_w_params(
                Mavlink_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Mavlink__finalize_optional_members(
                Mavlink_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Mavlink__copy(
                Mavlink_* dst,
                const Mavlink_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mavros_msgs  */

#endif /* Mavlink_ */

